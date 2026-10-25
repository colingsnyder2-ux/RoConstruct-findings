// from server: 100% by tester
// roc 2008-06 00496c10  unit: RBX::Network::Players::Plugin  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00496c10
//
// 00496c10  8b8998010000         mov ecx, dword ptr [ecx + 0x198]
// 00496c16  8b4110               mov eax, dword ptr [ecx + 0x10]
// 00496c19  2b410c               sub eax, dword ptr [ecx + 0xc]
// 00496c1c  c1f803               sar eax, 3
// 00496c1f  c3                   ret 

struct S_func_004c4b90 {
    char pad[0x198];
    void* field_d4;
    int f();
};

int S_func_004c4b90::f()
{
    char* p = *(char**)((char*)this + 0x198);
    int a = *(int*)(p + 0x10);
    int b = *(int*)(p + 0xc);
    return (a - b) >> 3;
}
