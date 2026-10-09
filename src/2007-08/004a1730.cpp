// from server: 75% by colin
// roc 2007-08 004a1730  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a1730
//
// 004a1730  83ec0c               sub esp, 0xc
// 004a1733  56                   push esi
// 004a1734  6a00                 push 0
// 004a1736  68587d8800           push 0x887d58
// 004a173b  8bf1                 mov esi, ecx
// 004a173d  8b06                 mov eax, dword ptr [esi]
// 004a173f  6874718800           push 0x887174
// 004a1744  6a00                 push 0
// 004a1746  50                   push eax
// 004a1747  e8eaf51800           call 0x630d36
// 004a174c  83c414               add esp, 0x14
// 004a174f  85c0                 test eax, eax
// 004a1751  751e                 jne 0x4a1771
// 004a1753  68046e7800           push 0x786e04
// 004a1758  8d4c2408             lea ecx, [esp + 8]
// 004a175c  ff1510e77700         call dword ptr [0x77e710]
// 004a1762  680c1e8400           push 0x841e0c
// 004a1767  8d442408             lea eax, [esp + 8]
// 004a176b  50                   push eax
// 004a176c  e82df41800           call 0x630b9e
// 004a1771  8b4818               mov ecx, dword ptr [eax + 0x18]
// 004a1774  8b4604               mov eax, dword ptr [esi + 4]
// 004a1777  8b11                 mov edx, dword ptr [ecx]
// 004a1779  8b742414             mov esi, dword ptr [esp + 0x14]
// 004a177d  8b5204               mov edx, dword ptr [edx + 4]
// 004a1780  50                   push eax
// 004a1781  56                   push esi
// 004a1782  ffd2                 call edx
// 004a1784  8bc6                 mov eax, esi
// 004a1786  5e                   pop esi
// 004a1787  83c40c               add esp, 0xc
// 004a178a  c20400               ret 4

struct BoundFuncDesc
{
    void* m_pFunction;
    void* m_pClass;

    void* __thiscall sub_4a1730(void* arg);
};

extern "C" void* __cdecl sub_630d36(void*, void*, void*, void*, void*);
extern "C" void* __cdecl sub_630b9e(void*, void*);
extern "C" void* __stdcall sub_77e710(void*);
extern "C" void __cdecl sub_841e0c();
extern "C" void __cdecl sub_786e04();

void* __thiscall BoundFuncDesc::sub_4a1730(void* arg)
{
    void* result = sub_630d36(
        *(void**)this,
        (void*)0,
        (void*)0x887174,
        (void*)0x887d58,
        (void*)0);
    if (result == 0)
    {
        void* buf[1];
        sub_77e710((void*)0x786e04);
        sub_630b9e((void*)0x841e0c, buf);
        result = buf[0];
    }
    void* ecx = *(void**)((char*)result + 0x18);
    void* eax = *(void**)((char*)this + 4);
    void** edx = *(void***)ecx;
    void* fn = edx[1];
    typedef void (__thiscall *Fn)(void*, void*, void*);
    ((Fn)fn)(ecx, arg, eax);
    return arg;
}
