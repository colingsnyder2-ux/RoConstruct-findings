// from DeepSeek/server: 100% by colin
// roc 2007-08 0041faa0  unit: CSelectionTreeCtrl  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0041faa0
//
// 0041faa0  53                   push ebx
// 0041faa1  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0041faa5  55                   push ebp
// 0041faa6  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 0041faaa  56                   push esi
// 0041faab  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 0041faaf  57                   push edi
// 0041fab0  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0041fab4  56                   push esi
// 0041fab5  57                   push edi
// 0041fab6  53                   push ebx
// 0041fab7  55                   push ebp
// 0041fab8  e873092100           call 0x630430
// 0041fabd  85c0                 test eax, eax
// 0041fabf  740c                 je 0x41facd
// 0041fac1  5f                   pop edi
// 0041fac2  5e                   pop esi
// 0041fac3  5d                   pop ebp
// 0041fac4  b801000000           mov eax, 1
// 0041fac9  5b                   pop ebx
// 0041faca  c21000               ret 0x10
// 0041facd  8b0d2cae8b00         mov ecx, dword ptr [0x8bae2c]
// 0041fad3  85c9                 test ecx, ecx
// 0041fad5  7509                 jne 0x41fae0
// 0041fad7  5f                   pop edi
// 0041fad8  5e                   pop esi
// 0041fad9  5d                   pop ebp
// 0041fada  33c0                 xor eax, eax
// 0041fadc  5b                   pop ebx
// 0041fadd  c21000               ret 0x10
// 0041fae0  8b01                 mov eax, dword ptr [ecx]
// 0041fae2  8b5014               mov edx, dword ptr [eax + 0x14]
// 0041fae5  56                   push esi
// 0041fae6  57                   push edi
// 0041fae7  53                   push ebx
// 0041fae8  55                   push ebp
// 0041fae9  ffd2                 call edx
// 0041faeb  5f                   pop edi
// 0041faec  5e                   pop esi
// 0041faed  5d                   pop ebp
// 0041faee  5b                   pop ebx
// 0041faef  c21000               ret 0x10

struct CSelectionTreeCtrl;

extern "C" int __stdcall func_00630430(int, int, int, int);

extern CSelectionTreeCtrl* G1_008bae2c;

struct CSelectionTreeCtrl
{
    int m(int, int, int, int);
};

int CSelectionTreeCtrl::m(int a, int b, int c, int d)
{
    if (func_00630430(a, b, c, d))
        return 1;
    CSelectionTreeCtrl* p = G1_008bae2c;
    if (!p)
        return 0;
    return ((int (__thiscall*)(CSelectionTreeCtrl*, int, int, int, int))(*(void***)p)[5])(p, a, b, c, d);
}
