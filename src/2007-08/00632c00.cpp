// from server: 100% by colin
// roc 2007-08 00632c00  unit: MyXTPCommandBars  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00632c00
//
// 00632c00  53                   push ebx
// 00632c01  55                   push ebp
// 00632c02  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00632c06  56                   push esi
// 00632c07  57                   push edi
// 00632c08  55                   push ebp
// 00632c09  8bf9                 mov edi, ecx
// 00632c0b  e880f0ffff           call 0x631c90
// 00632c10  8bc8                 mov ecx, eax
// 00632c12  e8a9160700           call 0x6a42c0
// 00632c17  8b9f84000000         mov ebx, dword ptr [edi + 0x84]
// 00632c1d  33f6                 xor esi, esi
// 00632c1f  85db                 test ebx, ebx
// 00632c21  7e17                 jle 0x632c3a
// 00632c23  56                   push esi
// 00632c24  8bcf                 mov ecx, edi
// 00632c26  e8e5fcffff           call 0x632910
// 00632c2b  55                   push ebp
// 00632c2c  8bc8                 mov ecx, eax
// 00632c2e  e81de90100           call 0x651550
// 00632c33  83c601               add esi, 1
// 00632c36  3bf3                 cmp esi, ebx
// 00632c38  7ce9                 jl 0x632c23
// 00632c3a  5f                   pop edi
// 00632c3b  5e                   pop esi
// 00632c3c  5d                   pop ebp
// 00632c3d  5b                   pop ebx
// 00632c3e  c20400               ret 4

struct MyXTPCommandBars
{
    char pad[0x84];
    int count;

    void* func_00631c90(int);
    void func_006a42c0();
    void* func_00632910(int);
    void func_00651550(int);
    void func_00632c00(int);
};

void MyXTPCommandBars::func_00632c00(int arg)
{
    void* p = func_00631c90(arg);
    ((MyXTPCommandBars*)p)->func_006a42c0();
    int n = count;
    for (int i = 0; i < n; ++i)
    {
        void* q = func_00632910(i);
        ((MyXTPCommandBars*)q)->func_00651550(arg);
    }
}
