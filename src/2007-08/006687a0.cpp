// from server: 81% by colin
// roc 2007-08 006687a0  unit: CXTTreeBase::PAXPAXUCLRFONT::?$CMap  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006687a0
//
// 006687a0  53                   push ebx
// 006687a1  55                   push ebp
// 006687a2  8b2d58ee7700         mov ebp, dword ptr [0x77ee58]
// 006687a8  56                   push esi
// 006687a9  8bd9                 mov ebx, ecx
// 006687ab  57                   push edi
// 006687ac  c7836801000000000000 mov dword ptr [ebx + 0x168], 0
// 006687b6  be01000000           mov esi, 1
// 006687bb  8dbb6c010000         lea edi, [ebx + 0x16c]
// 006687c1  8b835c040000         mov eax, dword ptr [ebx + 0x45c]
// 006687c7  85c0                 test eax, eax
// 006687c9  56                   push esi
// 006687ca  7404                 je 0x6687d0
// 006687cc  ffd0                 call eax
// 006687ce  eb02                 jmp 0x6687d2
// 006687d0  ffd5                 call ebp
// 006687d2  8907                 mov dword ptr [edi], eax
// 006687d4  83c601               add esi, 1
// 006687d7  83c704               add edi, 4
// 006687da  83fe1e               cmp esi, 0x1e
// 006687dd  7ce2                 jl 0x6687c1
// 006687df  5f                   pop edi
// 006687e0  5e                   pop esi
// 006687e1  5d                   pop ebp
// 006687e2  5b                   pop ebx
// 006687e3  c3                   ret 

extern "C" unsigned long __stdcall GetSysColor(int nIndex);

struct CXTTreeBase {
    char pad0[0x168];
    int m_field168;
    int m_array[0x1e];
    char pad1[0x45c - 0x16c - 0x1e * 4];
    int (__stdcall *m_callback)(int);
    void Init();
};

void CXTTreeBase::Init()
{
    m_field168 = 0;
    int i = 1;
    int *p = m_array;
    do {
        int (__stdcall *cb)(int) = m_callback;
        int v;
        if (cb != 0)
            v = cb(i);
        else
            v = (int)GetSysColor(i);
        *p = v;
        ++i;
        ++p;
    } while (i < 0x1e);
}
