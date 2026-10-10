// from server: 68% by colin
struct PropertyDescriptor {
    char pad[0xc0];
    void* field_c0;
    int find();
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_630d36(int, int, int, int, int);

int PropertyDescriptor::find() {
    void* ebx = field_c0;
    if (ebx != 0) {
        return 0;
    }
    int ebp = *(int*)((char*)ebx + 8);
    if (*(unsigned int*)((char*)ebx + 4) > (unsigned int)ebp) {
        _invalid_parameter_noinfo();
    }
    void* edi = field_c0;
    int esi = *(int*)((char*)edi + 4);
    if ((unsigned int)esi > *(unsigned int*)((char*)edi + 8)) {
        _invalid_parameter_noinfo();
    }
    if (edi != ebx) {
        _invalid_parameter_noinfo();
    }
    while (esi != ebp) {
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8)) {
            _invalid_parameter_noinfo();
        }
        int eax = *(int*)esi;
        int r = sub_630d36(eax, 0, 0x881f4c, 0x8860c0, 0);
        if (r != 0) {
            return r;
        }
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8)) {
            _invalid_parameter_noinfo();
        }
        esi += 8;
    }
    return 0;
}
