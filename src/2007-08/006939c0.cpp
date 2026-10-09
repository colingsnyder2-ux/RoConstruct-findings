// from server: 60% by colin
// roc 2007-08 006939c0  unit: CXTPStatusBar  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006939c0
//
// 006939c0  56                   push esi
// 006939c1  57                   push edi
// 006939c2  8bf9                 mov edi, ecx
// 006939c4  33f6                 xor esi, esi
// 006939c6  39b79c000000         cmp dword ptr [edi + 0x9c], esi
// 006939cc  7e27                 jle 0x6939f5
// 006939ce  8bff                 mov edi, edi
// 006939d0  85f6                 test esi, esi
// 006939d2  7c3e                 jl 0x693a12
// 006939d4  3bb79c000000         cmp esi, dword ptr [edi + 0x9c]
// 006939da  7d36                 jge 0x693a12
// 006939dc  8b8798000000         mov eax, dword ptr [edi + 0x98]
// 006939e2  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006939e5  e8fac7f9ff           call 0x6301e4
// 006939ea  83c601               add esi, 1
// 006939ed  3bb79c000000         cmp esi, dword ptr [edi + 0x9c]
// 006939f3  7cdb                 jl 0x6939d0
// 006939f5  6aff                 push -1
// 006939f7  6a00                 push 0
// 006939f9  8d8f94000000         lea ecx, [edi + 0x94]
// 006939ff  e8acc00600           call 0x6ffab0
// 00693a04  6a01                 push 1
// 00693a06  6a01                 push 1
// 00693a08  8bcf                 mov ecx, edi
// 00693a0a  e8c1f9ffff           call 0x6933d0
// 00693a0f  5f                   pop edi
// 00693a10  5e                   pop esi
// 00693a11  c3                   ret 
// 00693a12  e909c5f9ff           jmp 0x62ff20

struct CXTPStatusBar {
    char pad[0x94];
    void* m_pArray;
    int m_nCount;
    void RecalcLayout();
    void OnUpdate();
};

extern "C" void __stdcall sub_6301E4(void*);
extern "C" void __stdcall sub_6FFAB0(void*, int, int);
extern "C" void __stdcall sub_62FF20();

void CXTPStatusBar::OnUpdate()
{
    int i = 0;
    if (m_nCount > 0)
    {
        do
        {
            if (i < 0 || i >= m_nCount)
                sub_62FF20();
            sub_6301E4(((void**)m_pArray)[i]);
            i++;
        } while (i < m_nCount);
    }
    sub_6FFAB0((char*)this + 0x94, 0, -1);
    RecalcLayout();
}
