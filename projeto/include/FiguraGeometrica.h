#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H

#include "sculptor.h"
class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual ~FiguraGeometrica();
        virtual void draw(Sculptor &d)=0;

    protected:

    private:
};

#endif // FIGURAGEOMETRICA_H
