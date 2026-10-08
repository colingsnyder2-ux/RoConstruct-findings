// from server: 100% by colin
// roc 2007-08 004a3590  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a3590
//
// 004a3590  8b442404             mov eax, dword ptr [esp + 4]
// 004a3594  56                   push esi
// 004a3595  50                   push eax
// 004a3596  8bf1                 mov esi, ecx
// 004a3598  ff1530ef7700         call dword ptr [0x77ef30]
// 004a359e  8906                 mov dword ptr [esi], eax
// 004a35a0  5e                   pop esi
// 004a35a1  c20400               ret 4

extern "C" unsigned long (__stdcall *inet_addr)(const char* cp);

struct S_func_004a3590 {
    unsigned int field;
    void f(const char* a1);
};

void S_func_004a3590::f(const char* a1)
{
    field = inet_addr(a1);
}
