// from server: 48% by colin
// roc 2007-08 0068cfb0  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0068cfb0
//
// 0068cfb0  56                   push esi
// 0068cfb1  8bf1                 mov esi, ecx
// 0068cfb3  83beb400000000       cmp dword ptr [esi + 0xb4], 0
// 0068cfba  743c                 je 0x68cff8
// 0068cfbc  57                   push edi
// 0068cfbd  33ff                 xor edi, edi
// 0068cfbf  e85c7fdeff           call 0x474f20
// 0068cfc4  85c0                 test eax, eax
// 0068cfc6  7e2f                 jle 0x68cff7
// 0068cfc8  53                   push ebx
// 0068cfc9  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 0068cfcd  55                   push ebp
// 0068cfce  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0068cfd2  8b4620               mov eax, dword ptr [esi + 0x20]
// 0068cfd5  53                   push ebx
// 0068cfd6  55                   push ebp
// 0068cfd7  50                   push eax
// 0068cfd8  57                   push edi
// 0068cfd9  8bce                 mov ecx, esi
// 0068cfdb  e800eeffff           call 0x68bde0
// 0068cfe0  8bc8                 mov ecx, eax
// 0068cfe2  e8091c0700           call 0x6febf0
// 0068cfe7  8bce                 mov ecx, esi
// 0068cfe9  83c701               add edi, 1
// 0068cfec  e82f7fdeff           call 0x474f20
// 0068cff1  3bf8                 cmp edi, eax
// 0068cff3  7cdd                 jl 0x68cfd2
// 0068cff5  5d                   pop ebp
// 0068cff6  5b                   pop ebx
// 0068cff7  5f                   pop edi
// 0068cff8  8bce                 mov ecx, esi
// 0068cffa  e83f32faff           call 0x63023e
// 0068cfff  5e                   pop esi
// 0068d000  c20c00               ret 0xc

struct CXTPTabClientWnd {
    int m_nCount;
    char pad[0xb4 - 4];
    int m_bFlag;
    int GetCount();
    int DoSomething(int, int, int);

    void Method(int a, int b, int c);
};

extern "C" int __stdcall sub_474f20();
extern "C" int __stdcall sub_63023e();
extern "C" int __stdcall sub_68bde0();
extern "C" int __stdcall sub_6febf0(int);

int CXTPTabClientWnd::GetCount()
{
    return sub_474f20();
}

int CXTPTabClientWnd::DoSomething(int a, int b, int c)
{
    return sub_68bde0();
}

void CXTPTabClientWnd::Method(int a, int b, int c)
{
    if (m_bFlag != 0)
    {
        int i = 0;
        if (GetCount() > 0)
        {
            do
            {
                int v = DoSomething(i, b, c);
                sub_6febf0(v);
                i++;
            } while (i < GetCount());
        }
    }
    sub_63023e();
}
