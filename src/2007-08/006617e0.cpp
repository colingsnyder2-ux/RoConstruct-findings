// from server: 76% by colin
// roc 2007-08 006617e0  unit: PAVCXTPReportRecord::?$CArray  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006617e0
//
// 006617e0  56                   push esi
// 006617e1  57                   push edi
// 006617e2  8bf9                 mov edi, ecx
// 006617e4  837f3c00             cmp dword ptr [edi + 0x3c], 0
// 006617e8  7521                 jne 0x66180b
// 006617ea  8b7728               mov esi, dword ptr [edi + 0x28]
// 006617ed  83ee01               sub esi, 1
// 006617f0  7819                 js 0x66180b
// 006617f2  85f6                 test esi, esi
// 006617f4  7c24                 jl 0x66181a
// 006617f6  3b7728               cmp esi, dword ptr [edi + 0x28]
// 006617f9  7d1f                 jge 0x66181a
// 006617fb  8b4724               mov eax, dword ptr [edi + 0x24]
// 006617fe  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00661801  e8dee9fcff           call 0x6301e4
// 00661806  83ee01               sub esi, 1
// 00661809  79e7                 jns 0x6617f2
// 0066180b  6aff                 push -1
// 0066180d  6a00                 push 0
// 0066180f  8d4f20               lea ecx, [edi + 0x20]
// 00661812  e899e20900           call 0x6ffab0
// 00661817  5f                   pop edi
// 00661818  5e                   pop esi
// 00661819  c3                   ret 
// 0066181a  e901e7fcff           jmp 0x62ff20

struct S_func_006617e0 {
    char pad0[0x20];
    int m_field20;
    int m_field24;
    int m_count;
    char pad1[0x3c - 0x2c];
    int m_flag;
    void f();
};

extern "C" void __stdcall sub_006301e4(int);
extern "C" void __stdcall sub_006ffab0(void*, int, int);
extern "C" void __stdcall sub_0062ff20();

void S_func_006617e0::f()
{
    if (m_flag == 0)
    {
        int i = m_count - 1;
        if (i >= 0)
        {
            do
            {
                if (i < 0 || i >= m_count)
                {
                    sub_0062ff20();
                    return;
                }
                sub_006301e4(*(int*)(m_field24 + i * 4));
                i--;
            } while (i >= 0);
        }
    }
    sub_006ffab0(&m_field20, 0, -1);
}
