// from server: 73% by colin
// roc 2007-08 005d1ff0  unit: RBX::P8Tool::?$GetSetImpl  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d1ff0
//
// 005d1ff0  8b442404             mov eax, dword ptr [esp + 4]
// 005d1ff4  85c0                 test eax, eax
// 005d1ff6  8bd1                 mov edx, ecx
// 005d1ff8  7405                 je 0x5d1fff
// 005d1ffa  83c0fc               add eax, -4
// 005d1ffd  eb02                 jmp 0x5d2001
// 005d1fff  33c0                 xor eax, eax
// 005d2001  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d2005  8b09                 mov ecx, dword ptr [ecx]
// 005d2007  56                   push esi
// 005d2008  8b7220               mov esi, dword ptr [edx + 0x20]
// 005d200b  51                   push ecx
// 005d200c  8b8868010000         mov ecx, dword ptr [eax + 0x168]
// 005d2012  8b0c31               mov ecx, dword ptr [ecx + esi]
// 005d2015  034a1c               add ecx, dword ptr [edx + 0x1c]
// 005d2018  8b5218               mov edx, dword ptr [edx + 0x18]
// 005d201b  8d8c0168010000       lea ecx, [ecx + eax + 0x168]
// 005d2022  ffd2                 call edx
// 005d2024  5e                   pop esi
// 005d2025  c20800               ret 8

struct GetSetImpl {
    char pad[0x18];
    int field18;
    int field1c;
    int field20;
    void invoke(int, int*);
};

void GetSetImpl::invoke(int a, int* b) {
    char* p = (char*)a;
    if (p != 0) {
        p -= 4;
    } else {
        p = 0;
    }
    int idx = *b;
    int off = *(int*)(p + 0x168);
    int val = *(int*)(off + field20);
    val += field1c;
    int (*fn)(void*, int) = (int (*)(void*, int))field18;
    fn((void*)(val + (int)p + 0x168), idx);
}
