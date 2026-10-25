// from server: 100% by tester
// roc 2011-06 0053a2e0  unit: CSHA1  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0053a2e0
//
// 0053a2e0  a16ca0cb00           mov eax, dword ptr [0xcba06c]
// 0053a2e5  83f801               cmp eax, 1
// 0053a2e8  7e21                 jle 0x53a30b
// 0053a2ea  56                   push esi
// 0053a2eb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0053a2ef  57                   push edi
// 0053a2f0  83c610               add esi, 0x10
// 0053a2f3  8d78ff               lea edi, [eax - 1]
// 0053a2f6  6a04                 push 4
// 0053a2f8  56                   push esi
// 0053a2f9  e8e2fdffff           call 0x53a0e0
// 0053a2fe  83c408               add esp, 8
// 0053a301  83c610               add esi, 0x10
// 0053a304  83ef01               sub edi, 1
// 0053a307  75ed                 jne 0x53a2f6
// 0053a309  5f                   pop edi
// 0053a30a  5e                   pop esi
// 0053a30b  33c0                 xor eax, eax
// 0053a30d  c3                   ret 

extern "C" void __cdecl sub_5c94e0(const void *, unsigned char);

struct S
{
    int __cdecl f(const void *);
};

int __cdecl S::f(const void *p)
{
    extern int g_00e273c0;
    int n = g_00e273c0;
    if (n > 1)
    {
        const unsigned char *q = (const unsigned char *)p + 0x10;
        int i = n - 1;
        do
        {
            sub_5c94e0(q, 4);
            q += 0x10;
            --i;
        } while (i != 0);
    }
    return 0;
}
