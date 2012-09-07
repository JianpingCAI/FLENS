#include <flens/blas/interface/blas/config.h>


using namespace flens;

extern "C" {

float
BLAS(sdot)(const INTEGER   *N,
            const float    *X,
            const INTEGER  *INCX,
            const float    *Y,
            const INTEGER  *INCY)
{
    using std::abs;

    SDenseVectorConstView x(SConstArrayView(*N, X, abs(*INCX)), *INCX<0);
    SDenseVectorConstView y(SConstArrayView(*N, Y, abs(*INCY)), *INCY<0);

    return x*y;
}

double
BLAS(ddot)(const INTEGER   *N,
            const double   *X,
            const INTEGER  *INCX,
            const double   *Y,
            const INTEGER  *INCY)
{
    using std::abs;

    DDenseVectorConstView  x(DConstArrayView(*N, X, abs(*INCX)), *INCX<0);
    DDenseVectorConstView  y(DConstArrayView(*N, Y, abs(*INCY)), *INCY<0);

    return x*y;
}

cfloat
BLAS(cdotc)(const INTEGER  *N,
            const cfloat   *X,
            const INTEGER  *INCX,
            const cfloat   *Y,
            const INTEGER  *INCY)
{
    using std::abs;

    CDenseVectorConstView x(CConstArrayView(*N, X, abs(*INCX)), *INCX<0);
    CDenseVectorConstView y(CConstArrayView(*N, Y, abs(*INCY)), *INCY<0);

    return conjugate(x)*y;
}

cfloat
BLAS(cdotu)(const INTEGER  *N,
            const cfloat   *X,
            const INTEGER  *INCX,
            const cfloat   *Y,
            const INTEGER  *INCY)
{
    using std::abs;

    CDenseVectorConstView x(CConstArrayView(*N, X, abs(*INCX)), *INCX<0);
    CDenseVectorConstView y(CConstArrayView(*N, Y, abs(*INCY)), *INCY<0);

    return x*y;
}

cdouble
BLAS(zdotc)(const INTEGER  *N,
            const cdouble  *X,
            const INTEGER  *INCX,
            const cdouble  *Y,
            const INTEGER  *INCY)
{
    using std::abs;

    ZDenseVectorConstView  x(ZConstArrayView(*N, X, abs(*INCX)), *INCX<0);
    ZDenseVectorConstView  y(ZConstArrayView(*N, Y, abs(*INCY)), *INCY<0);

    return conjugate(x)*y;
}

cdouble
BLAS(zdotu)(const INTEGER  *N,
            const cdouble  *X,
            const INTEGER  *INCX,
            const cdouble  *Y,
            const INTEGER  *INCY)
{
    using std::abs;

    ZDenseVectorConstView  x(ZConstArrayView(*N, X, abs(*INCX)), *INCX<0);
    ZDenseVectorConstView  y(ZConstArrayView(*N, Y, abs(*INCY)), *INCY<0);

    return x*y;
}

} // extern "C"
