// from server: 75% by colin
struct CXTPRibbonTheme {
    int sub_63D2A0(int);
    int method_006AD460(int);
};

extern "C" int __stdcall sub_63A580(int);
extern "C" int __stdcall sub_639CC0(int);

int CXTPRibbonTheme::method_006AD460(int arg) {
    int* p = (int*)arg;
    int v = *(int*)(p[0xfc / 4] + 0xf4);
    if (v == 3 && p[0x154 / 4] == 0) {
        int (*fn1)(void*) = (int (*)(void*))((int*)p[0])[0x6c / 4];
        if (fn1(p) == 0) {
            int eax = p[0x9c / 4];
            if (eax == -1) {
                int ecx = p[0x158 / 4];
                if (ecx != 0) {
                    eax = sub_63A580(ecx);
                }
            }
            if (eax != 0) {
                int (*fn2)(void*) = (int (*)(void*))((int*)p[0])[0x78 / 4];
                if (fn2(p) == 0) {
                    if (sub_639CC0((int)p) == 0) {
                        int (*fn3)(void*) = (int (*)(void*))((int*)p[0])[0xb4 / 4];
                        if (fn3(p) == 0) {
                            return *(int*)((char*)this + 0x650);
                        }
                    }
                }
            }
        }
    }
    return this->sub_63D2A0((int)p);
}
