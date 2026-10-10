// from server: 44% by colin
extern "C" void __stdcall _invalid_parameter_noinfo();

struct ClearBackpack {
    char pad[0xf4];
    int f4;
    int f8;
    int fc;
    int method(int);
};

int ClearBackpack::method(int arg) {
    int* p = &f4;
    int ebx = fc;
    if (f8 > ebx) {
        _invalid_parameter_noinfo();
    }
    int edi = p[1];
    if (edi > p[2]) {
        _invalid_parameter_noinfo();
    }
    int result = ((int (__cdecl*)(int, int, int))0x55e780)(arg, ebx, edi);
    int edi2 = p[2];
    if (p[1] > edi2) {
        _invalid_parameter_noinfo();
    }
    if (p != 0) {
        if (p != p) {
            _invalid_parameter_noinfo();
        }
    } else {
        _invalid_parameter_noinfo();
    }
    if (result == edi2) {
        return 0;
    }
    if (p == 0) {
        _invalid_parameter_noinfo();
    }
    if (result >= p[2]) {
        _invalid_parameter_noinfo();
    }
    return *(int*)result;
}
