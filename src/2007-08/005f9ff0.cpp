// from server: 95% by colin
// roc 2007-08 005f9ff0  unit: RBX::VSeat::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005f9ff0
//
// 005f9ff0  56                   push esi
// 005f9ff1  8bf1                 mov esi, ecx
// 005f9ff3  e878feffff           call 0x5f9e70
// 005f9ff8  f644240801           test byte ptr [esp + 8], 1
// 005f9ffd  8b8698020000         mov eax, dword ptr [esi + 0x298]
// 005fa003  c78694020000ac4c7a00 mov dword ptr [esi + 0x294], 0x7a4cac
// 005fa00d  8b4804               mov ecx, dword ptr [eax + 4]
// 005fa010  c7843198020000a44c7a00 mov dword ptr [ecx + esi + 0x298], 0x7a4ca4
// 005fa01b  740a                 je 0x5fa027
// 005fa01d  56                   push esi
// 005fa01e  ff15c4e67700         call dword ptr [0x77e6c4]
// 005fa024  83c404               add esp, 4
// 005fa027  8bc6                 mov eax, esi
// 005fa029  5e                   pop esi
// 005fa02a  c20400               ret 4

struct S {
    char pad[0x294];
    int m_294;
    int m_298;
    S* f(int);
};

extern "C" void __stdcall sub_005f9e70();
extern "C" void __cdecl free(void*);

S* S::f(int a)
{
    sub_005f9e70();
    m_294 = 0x7a4cac;
    int* p = (int*)m_298;
    int v = p[1];
    *(int*)(v + (int)this + 0x298) = 0x7a4ca4;
    if (a & 1) {
        free(this);
    }
    return this;
}
