// from server: 66% by colin
// roc 2007-08 006a7640  unit: CXTPMenuBar  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a7640
//
// 006a7640  51                   push ecx
// 006a7641  56                   push esi
// 006a7642  8b74240c             mov esi, dword ptr [esp + 0xc]
// 006a7646  81c198000000         add ecx, 0x98
// 006a764c  51                   push ecx
// 006a764d  8bce                 mov ecx, esi
// 006a764f  c744240800000000     mov dword ptr [esp + 8], 0
// 006a7657  ff1574dd7700         call dword ptr [0x77dd74]
// 006a765d  8bc6                 mov eax, esi
// 006a765f  5e                   pop esi
// 006a7660  59                   pop ecx
// 006a7661  c20400               ret 4

struct CXTPMenuBar {
    char pad[0x98];
    int m_nSomething;
    CXTPMenuBar* SetSomething(int);
};

extern "C" void* __stdcall sub_77DD74(void*);

CXTPMenuBar* CXTPMenuBar::SetSomething(int)
{
    m_nSomething = 0;
    sub_77DD74(&m_nSomething);
    return this;
}
