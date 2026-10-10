// from server: 99% by colin
// roc 2007-08 005c8710  unit: lua_exception  size: 150 bytes

extern "C" void* __cdecl sub_6139F0(void* a, int b, int c, unsigned int d);
extern "C" void __cdecl sub_60FF50(void* a, void* b, int c);
extern "C" void __cdecl sub_5C8580();

struct lua_exception {
};

void* __cdecl sub_5C8710(void* src)
{
    char* s = (char*)src;
    char* p = (char*)sub_6139F0(src, 0, 0, 0x84);
    p += 0xc;
    sub_60FF50(src, p, 8);
    *(int*)(p + 0x10) = *(int*)(s + 0x10);
    *(int*)(p + 0x20) = 0;
    *(int*)(p + 0x2c) = 0;
    *(int*)(p + 0x70) = 0;
    *(int*)(p + 0x40) = 0;
    *(char*)(p + 0x36) = 0;
    *(int*)(p + 0x38) = 0;
    *(char*)(p + 0x37) = 1;
    *(int*)(p + 0x3c) = 0;
    *(int*)(p + 0x68) = 0;
    *(int*)(p + 0x30) = 0;
    *(short*)(p + 0x34) = 0;
    *(char*)(p + 6) = 0;
    *(int*)(p + 0x14) = 0;
    *(int*)(p + 0x28) = 0;
    *(int*)(p + 0x18) = 0;
    *(int*)(p + 0x74) = 0;
    *(int*)(p + 0x50) = 0;
    sub_5C8580();
    *(int*)(p + 0x48) = *(int*)(s + 0x48);
    *(int*)(p + 0x4c) = *(int*)(s + 0x4c);
    *(int*)(p + 0x50) = *(int*)(s + 0x50);
    *(char*)(p + 0x36) = *(char*)(s + 0x36);
    *(int*)(p + 0x38) = *(int*)(s + 0x38);
    *(int*)(p + 0x40) = *(int*)(s + 0x40);
    *(int*)(p + 0x3c) = *(int*)(s + 0x38);
    return p;
}
