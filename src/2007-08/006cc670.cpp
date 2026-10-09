// from server: 67% by colin
// roc 2007-08 006cc670  unit: CXTPReportPaintManager  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006cc670
//
// 006cc670  8bc1                 mov eax, ecx
// 006cc672  83b8ec01000000       cmp dword ptr [eax + 0x1ec], 0
// 006cc679  7434                 je 0x6cc6af
// 006cc67b  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006cc67f  85c9                 test ecx, ecx
// 006cc681  742c                 je 0x6cc6af
// 006cc683  8b9014010000         mov edx, dword ptr [eax + 0x114]
// 006cc689  83faff               cmp edx, -1
// 006cc68c  7514                 jne 0x6cc6a2
// 006cc68e  8b8010010000         mov eax, dword ptr [eax + 0x110]
// 006cc694  50                   push eax
// 006cc695  8d44240c             lea eax, [esp + 0xc]
// 006cc699  50                   push eax
// 006cc69a  e81142f6ff           call 0x6308b0
// 006cc69f  c21400               ret 0x14
// 006cc6a2  8bc2                 mov eax, edx
// 006cc6a4  50                   push eax
// 006cc6a5  8d44240c             lea eax, [esp + 0xc]
// 006cc6a9  50                   push eax
// 006cc6aa  e80142f6ff           call 0x6308b0
// 006cc6af  c21400               ret 0x14

struct S_func_006cc670 {
    char pad0[0x110];
    int m_field110;
    int m_field114;
    char pad1[0x1ec - 0x118];
    int m_field1ec;
    void f(int a1, int a2, int a3, int a4, int a5);
};

extern "C" void __stdcall sub_006308b0(int* out, int value);

void S_func_006cc670::f(int a1, int a2, int a3, int a4, int a5)
{
    if (m_field1ec != 0 && a1 != 0)
    {
        int v;
        if (m_field114 == -1)
        {
            sub_006308b0(&v, m_field110);
        }
        else
        {
            sub_006308b0(&v, m_field114);
        }
    }
}
