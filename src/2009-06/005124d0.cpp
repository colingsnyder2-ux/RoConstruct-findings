// from server: 100% by tester
// roc 2009-06 005124d0  unit: CSHA1  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005124d0
//
// 005124d0  a11413a400           mov eax, dword ptr [0xa41314]
// 005124d5  83f801               cmp eax, 1
// 005124d8  7e21                 jle 0x5124fb
// 005124da  56                   push esi
// 005124db  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005124df  57                   push edi
// 005124e0  83c610               add esi, 0x10
// 005124e3  8d78ff               lea edi, [eax - 1]
// 005124e6  6a04                 push 4
// 005124e8  56                   push esi
// 005124e9  e8e2fdffff           call 0x5122d0
// 005124ee  83c408               add esp, 8
// 005124f1  83c610               add esi, 0x10
// 005124f4  83ef01               sub edi, 1
// 005124f7  75ed                 jne 0x5124e6
// 005124f9  5f                   pop edi
// 005124fa  5e                   pop esi
// 005124fb  33c0                 xor eax, eax
// 005124fd  c3                   ret 

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
