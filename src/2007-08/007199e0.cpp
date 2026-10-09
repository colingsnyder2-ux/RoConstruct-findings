// from server: 63% by colin
// roc 2007-08 007199e0  unit: CXTPRibbonControlSystemButton  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 007199e0
//
// 007199e0  56                   push esi
// 007199e1  8bf1                 mov esi, ecx
// 007199e3  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 007199e9  57                   push edi
// 007199ea  e8f1dff8ff           call 0x6a79e0
// 007199ef  8b8ec0000000         mov ecx, dword ptr [esi + 0xc0]
// 007199f5  8b38                 mov edi, dword ptr [eax]
// 007199f7  83ec10               sub esp, 0x10
// 007199fa  8bd4                 mov edx, esp
// 007199fc  890a                 mov dword ptr [edx], ecx
// 007199fe  8b8ec4000000         mov ecx, dword ptr [esi + 0xc4]
// 00719a04  894a04               mov dword ptr [edx + 4], ecx
// 00719a07  8b8ec8000000         mov ecx, dword ptr [esi + 0xc8]
// 00719a0d  894a08               mov dword ptr [edx + 8], ecx
// 00719a10  8b8ecc000000         mov ecx, dword ptr [esi + 0xcc]
// 00719a16  894a0c               mov dword ptr [edx + 0xc], ecx
// 00719a19  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00719a1d  56                   push esi
// 00719a1e  8bc8                 mov ecx, eax
// 00719a20  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 00719a26  52                   push edx
// 00719a27  ffd0                 call eax
// 00719a29  5f                   pop edi
// 00719a2a  5e                   pop esi
// 00719a2b  c20400               ret 4

struct CXTPRibbonControlSystemButton
{
    char pad[0xc0];
    int m_x0c0;
    int m_x0c4;
    int m_x0c8;
    int m_x0cc;
    char pad2[0xfc - 0xd0];
    int m_x0fc;
    void m_007199e0(int);
};

struct CXTPRibbonControlSystemButtonVtbl
{
    char pad[0x154];
    void (__thiscall *m_007199e0)(void *, int, int, int, int, int);
};

extern "C" void * __stdcall sub_006a79e0(int);

void CXTPRibbonControlSystemButton::m_007199e0(int a1)
{
    void *p = sub_006a79e0(m_x0fc);
    CXTPRibbonControlSystemButtonVtbl *vtbl =
        *(CXTPRibbonControlSystemButtonVtbl **)p;
    int args[4];
    args[0] = m_x0c0;
    args[1] = m_x0c4;
    args[2] = m_x0c8;
    args[3] = m_x0cc;
    vtbl->m_007199e0(p, a1, args[0], args[1], args[2], args[3]);
}
