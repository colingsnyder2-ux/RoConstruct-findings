// from server: 91% by colin
// roc 2007-08 00643ac0  unit: CXTPCommandBar  size: 55 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00643ac0
//
// 00643ac0  56                   push esi
// 00643ac1  8bf1                 mov esi, ecx
// 00643ac3  8b8668010000         mov eax, dword ptr [esi + 0x168]
// 00643ac9  85c0                 test eax, eax
// 00643acb  7528                 jne 0x643af5
// 00643acd  e8aefeffff           call 0x643980
// 00643ad2  85c0                 test eax, eax
// 00643ad4  7408                 je 0x643ade
// 00643ad6  8bc8                 mov ecx, eax
// 00643ad8  5e                   pop esi
// 00643ad9  e912e7feff           jmp 0x6321f0
// 00643ade  8bce                 mov ecx, esi
// 00643ae0  e86bfeffff           call 0x643950
// 00643ae5  8b8068010000         mov eax, dword ptr [eax + 0x168]
// 00643aeb  85c0                 test eax, eax
// 00643aed  7506                 jne 0x643af5
// 00643aef  5e                   pop esi
// 00643af0  e9dba40000           jmp 0x64dfd0
// 00643af5  5e                   pop esi
// 00643af6  c3                   ret 

struct CXTPCommandBar
{
    char pad[0x168];
    void* field_168;
    void* func_00643980();
    void* func_00643950();
    void* func_006321f0();
    void* func_0064dfd0();
    void* func_00643ac0();
};

void* CXTPCommandBar::func_00643ac0()
{
    void* result = field_168;
    if (result == 0)
    {
        void* p = func_00643980();
        if (p != 0)
        {
            return ((CXTPCommandBar*)p)->func_006321f0();
        }
        void* q = func_00643950();
        result = ((CXTPCommandBar*)q)->field_168;
        if (result == 0)
        {
            return func_0064dfd0();
        }
    }
    return result;
}
