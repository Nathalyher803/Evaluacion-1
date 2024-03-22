#ifndef PAGO_H_INCLUDED
#define PAGO_H_INCLUDED
#include "Fecha.h"
class Pago{
    private:
        Fecha *fechaPago;
        float montoPago;
    public:
        Pago(Fecha*, float);
        Fecha *getFechaPago();
        float getMontoPago();
};


#endif // PAGO_H_INCLUDED
