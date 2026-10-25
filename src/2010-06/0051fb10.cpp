// from server: 100% by tester
// roc 2010-06 0051fb10  unit: CSHA1  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0051fb10
//
// 0051fb10  a1cc87c000           mov eax, dword ptr [0xc087cc]
// 0051fb15  83f801               cmp eax, 1
// 0051fb18  7e21                 jle 0x51fb3b
// 0051fb1a  56                   push esi
// 0051fb1b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0051fb1f  57                   push edi
// 0051fb20  83c610               add esi, 0x10
// 0051fb23  8d78ff               lea edi, [eax - 1]
// 0051fb26  6a04                 push 4
// 0051fb28  56                   push esi
// 0051fb29  e8e2fdffff           call 0x51f910
// 0051fb2e  83c408               add esp, 8
// 0051fb31  83c610               add esi, 0x10
// 0051fb34  83ef01               sub edi, 1
// 0051fb37  75ed                 jne 0x51fb26
// 0051fb39  5f                   pop edi
// 0051fb3a  5e                   pop esi
// 0051fb3b  33c0                 xor eax, eax
// 0051fb3d  c3                   ret 

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
