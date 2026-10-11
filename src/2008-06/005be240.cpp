// from server: 22% by atomic.potato
extern "C" {
    int __stdcall MSVCP90_0x802428();
    int __stdcall MSVCP90_0x802384();
    int __stdcall MSVCP90_0x802514();
    int __stdcall MSVCP90_0x802510();
    int __stdcall MSVCP90_0x80242c();
    int __stdcall MSVCP90_0x802864();
    int __stdcall MSVCP90_0x501890();
}

struct S {
    unsigned int f(unsigned int);
};

unsigned int S::f(unsigned int arg) {
    char buf[0xa0];
    unsigned int v = 0;
    MSVCP90_0x802428();
    MSVCP90_0x802384();
    MSVCP90_0x802514();
    if (MSVCP90_0x802510() == (unsigned int)-1) {
        MSVCP90_0x80242c();
        return arg;
    }
    MSVCP90_0x802864();
    MSVCP90_0x501890();
    return v;
}
