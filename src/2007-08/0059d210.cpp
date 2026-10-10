// from server: 65% by colin
struct ChatEnter {
    char pad[0xc0];
    void* field_c0;
    void* find();
};

extern "C" void __stdcall _invalid_parameter_noinfo();
extern "C" int __cdecl sub_630d36(int, const char*, const char*, int, int);

void* ChatEnter::find() {
    void* ebx = field_c0;
    if (ebx == 0) {
        return 0;
    }
    void* ebp = *(void**)((char*)ebx + 8);
    if (*(unsigned int*)((char*)ebx + 4) > (unsigned int)ebp) {
        _invalid_parameter_noinfo();
    }
    void* edi = field_c0;
    void* esi = *(void**)((char*)edi + 4);
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
        int v = *(int*)esi;
        if (sub_630d36(v, (const char*)0x881f4c, (const char*)0x8a65c4, 0, 0) != 0) {
            return (void*)1;
        }
        if ((unsigned int)esi >= *(unsigned int*)((char*)edi + 8)) {
            _invalid_parameter_noinfo();
        }
        esi = (char*)esi + 8;
    }
    return 0;
}
