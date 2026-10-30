// roc 2009-12 00571220  unit: CSHA1  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00571220
//
// 00571220  a12427b800           mov eax, dword ptr [0xb82724]
// 00571225  83f801               cmp eax, 1
// 00571228  7e21                 jle 0x57124b
// 0057122a  56                   push esi
// 0057122b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0057122f  57                   push edi
// 00571230  83c610               add esi, 0x10
// 00571233  8d78ff               lea edi, [eax - 1]
// 00571236  6a04                 push 4
// 00571238  56                   push esi
// 00571239  e8e2fdffff           call 0x571020
// 0057123e  83c408               add esp, 8
// 00571241  83c610               add esi, 0x10
// 00571244  83ef01               sub edi, 1
// 00571247  75ed                 jne 0x571236
// 00571249  5f                   pop edi
// 0057124a  5e                   pop esi
// 0057124b  33c0                 xor eax, eax
// 0057124d  c3                   ret 
// copied from an identical function in another client (function ?f@S@@QAAHPBX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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