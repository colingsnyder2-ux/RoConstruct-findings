// from server: 53% by colin
// roc 2007-08 0070d240  unit: CXTColorLum  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0070d240
//
// 0070d240  8b442404             mov eax, dword ptr [esp + 4]
// 0070d244  83ec10               sub esp, 0x10
// 0070d247  53                   push ebx
// 0070d248  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0070d24c  56                   push esi
// 0070d24d  53                   push ebx
// 0070d24e  50                   push eax
// 0070d24f  8bf1                 mov esi, ecx
// 0070d251  e87af7ffff           call 0x70c9d0
// 0070d256  84db                 test bl, bl
// 0070d258  743a                 je 0x70d294
// 0070d25a  57                   push edi
// 0070d25b  8d4c240c             lea ecx, [esp + 0xc]
// 0070d25f  51                   push ecx
// 0070d260  8bce                 mov ecx, esi
// 0070d262  e8a9ffffff           call 0x70d210
// 0070d267  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 0070d26b  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 0070d26f  8bd7                 mov edx, edi
// 0070d271  2bd3                 sub edx, ebx
// 0070d273  89542424             mov dword ptr [esp + 0x24], edx
// 0070d277  db442424             fild dword ptr [esp + 0x24]
// 0070d27b  dc4e68               fmul qword ptr [esi + 0x68]
// 0070d27e  e8dd3af2ff           call 0x630d60
// 0070d283  2bf8                 sub edi, eax
// 0070d285  2bfb                 sub edi, ebx
// 0070d287  89be88000000         mov dword ptr [esi + 0x88], edi
// 0070d28d  89be84000000         mov dword ptr [esi + 0x84], edi
// 0070d293  5f                   pop edi
// 0070d294  5e                   pop esi
// 0070d295  5b                   pop ebx
// 0070d296  83c410               add esp, 0x10
// 0070d299  c20800               ret 8

extern "C" void __stdcall func_0070c9d0(int, int);
extern "C" void __stdcall func_0070d210();
extern "C" int __cdecl func_00630d60();

struct CXTColorLum
{
    void func_0070d240(int, char);
    void func_0070d210_helper();
    char pad[0x68];
    double field_68;
    char pad2[0x14];
    int field_84;
    int field_88;
};

void CXTColorLum::func_0070d240(int a, char b)
{
    func_0070c9d0(a, b);
    if (b)
    {
        int local[2];
        func_0070d210();
        int lo = local[0];
        int hi = local[1];
        int diff = hi - lo;
        double d = (double)diff * field_68;
        int rounded = func_00630d60();
        int result = hi - rounded - lo;
        field_88 = result;
        field_84 = result;
    }
}
