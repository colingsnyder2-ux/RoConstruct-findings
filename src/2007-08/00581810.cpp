// from server: 68% by colin
struct S {
    char pad[0xc0];
    void* field_c0;
    int f();
};

extern "C" void __stdcall invalid_parameter_noinfo();
extern "C" int __cdecl sub_630D36(int, int, int, int, int);

int S::f() {
    void* ebx = field_c0;
    if (ebx != 0) {
        return 0;
    }
    int ebp = *(int*)((char*)ebx + 8);
    if (*(unsigned int*)((char*)ebx + 4) > (unsigned int)ebp) {
        invalid_parameter_noinfo();
    }
    void* edi = field_c0;
    int esi = *(int*)((char*)edi + 4);
    if ((unsigned int)esi > *(unsigned int*)((char*)edi + 8)) {
        invalid_parameter_noinfo();
    }
    if (edi != ebx) {
        invalid_parameter_noinfo();
    }
    if (esi == ebp) {
        return 0;
    }
    while (1) {
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8)) {
            invalid_parameter_noinfo();
        }
        int eax = *(int*)esi;
        int r = sub_630D36(eax, 0, 0x88c5e8, 0x881f4c, 0);
        if (r != 0) {
            return r;
        }
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8)) {
            invalid_parameter_noinfo();
        }
        esi += 8;
        if (esi == ebp) {
            return 0;
        }
    }
}
