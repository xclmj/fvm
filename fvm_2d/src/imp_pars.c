#include "defs.h"
void read_pars(Parameters *params, int arc, char *argv[]) {
    params->nx1 = 200;
    params->nx2 = 200;
    params->gamma = 1.4;
    params->cfl = .2;

    params->x1_min = 0.;
    params->x1_max = .3;

    params->x2_min = 0.;
    params->x2_max = .3;

    params->gamma_1 = params->gamma-1.;
    params->gamma_c = params->gamma * params->gamma_1;

    params->tend = 2.5;
    params->Nout = 50;
    params->dtout = (params->tend)/(float)params->Nout;

    params->one_step = FALSE;

    strcpy(params->outputname ,"out/imp");
    return;

}
