#ifndef PRESTAMO_H_INCLUDED
#define PRESTAMO_H_INCLUDED
#include "Cliente.h"
#include "Pago.h"
#define DIMP 5
class Prestamo{
    private:
        int numeroPrestamo;
        Cliente *cliente;
        Fecha *fechaAprobacion;
        float montoAprobado;
        Pago *lstPagos[DIMP];
        float saldoPendiente;
        int contadorPagos;
    public:
        Prestamo();
        Prestamo(int,Cliente*,Fecha*,float);
        int getNumeroPrestamo();
        void setNumeroPrestamo(int);
        Cliente *getCliente();
        void setCliente(Cliente*);
        void setFechaAprobacion(Fecha*);
        Fecha *getFechaAprobacion();
        void setMontoAprobado(float);
        float getMontoAprobado();
        bool hacerPago (Pago*);
        Pago** getLstPago();
        float getSaldoPendiente();
        int getContadorPagos();

};



#endif // PRESTAMO_H_INCLUDED
