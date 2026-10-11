// from server: 75% by colin
// roc 2007-08 00445090  unit: P8CRenderSettings::?$GetSetImpl  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00445090

struct GetSetImpl {
    char pad0[8];
    int (__stdcall *get)(int);
    char padC[4];
    double getValue(int);
};

double GetSetImpl::getValue(int a) {
    int v;
    if (a) {
        v = get(a - 4);
    } else {
        v = get(0);
    }
    return (double)v;
}
