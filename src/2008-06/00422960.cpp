// from server: 70% by colin
// roc 2008-06 00422960  unit: CSelectionTreeCtrl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00422960
//
// 00422960  53                   push ebx
// 00422961  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 00422965  55                   push ebp
// 00422966  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0042296a  56                   push esi
// 0042296b  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0042296f  57                   push edi
// 00422970  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00422974  56                   push esi
// 00422975  57                   push edi
// 00422976  53                   push ebx
// 00422977  55                   push ebp
// 00422978  e81fe52700           call 0x6a0e9c
// 0042297d  85c0                 test eax, eax
// 0042297f  740c                 je 0x42298d
// 00422981  5f                   pop edi
// 00422982  5e                   pop esi
// 00422983  5d                   pop ebp
// 00422984  b801000000           mov eax, 1
// 00422989  5b                   pop ebx
// 0042298a  c21000               ret 0x10
// 0042298d  8b0d38c29600         mov ecx, dword ptr [0x96c238]
// 00422993  85c9                 test ecx, ecx
// 00422995  7509                 jne 0x4229a0
// 00422997  5f                   pop edi
// 00422998  5e                   pop esi
// 00422999  5d                   pop ebp
// 0042299a  33c0                 xor eax, eax
// 0042299c  5b                   pop ebx
// 0042299d  c21000               ret 0x10
// 004229a0  8b01                 mov eax, dword ptr [ecx]
// 004229a2  8b5014               mov edx, dword ptr [eax + 0x14]
// 004229a5  56                   push esi
// 004229a6  57                   push edi
// 004229a7  53                   push ebx
// 004229a8  55                   push ebp
// 004229a9  ffd2                 call edx
// 004229ab  5f                   pop edi
// 004229ac  5e                   pop esi
// 004229ad  5d                   pop ebp
// 004229ae  5b                   pop ebx
// 004229af  c21000               ret 0x10

extern "C" int __cdecl sub_006a0e9c(int, int, int, int);

extern void* g_96c238;

int __stdcall sub_00422960(int a, int b, int c, int d)
{
    if (sub_006a0e9c(a, b, c, d))
        return 1;

    void* p = g_96c238;
    if (!p)
        return 0;

    int (*fn)(int, int, int, int) = *(int (**)(int, int, int, int))((char*)p + 0x14);
    return fn(a, b, c, d);
}
