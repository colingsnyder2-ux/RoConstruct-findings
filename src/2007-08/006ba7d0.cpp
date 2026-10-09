// from server: 72% by colin
// roc 2007-08 006ba7d0  unit: CXTPOffice2007Theme  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006ba7d0
//
// 006ba7d0  8b442418             mov eax, dword ptr [esp + 0x18]
// 006ba7d4  85c0                 test eax, eax
// 006ba7d6  8b542414             mov edx, dword ptr [esp + 0x14]
// 006ba7da  53                   push ebx
// 006ba7db  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 006ba7df  56                   push esi
// 006ba7e0  8b742418             mov esi, dword ptr [esp + 0x18]
// 006ba7e4  57                   push edi
// 006ba7e5  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 006ba7e9  7523                 jne 0x6ba80e
// 006ba7eb  837c241000           cmp dword ptr [esp + 0x10], 0
// 006ba7f0  751c                 jne 0x6ba80e
// 006ba7f2  85ff                 test edi, edi
// 006ba7f4  7418                 je 0x6ba80e
// 006ba7f6  85db                 test ebx, ebx
// 006ba7f8  7514                 jne 0x6ba80e
// 006ba7fa  85f6                 test esi, esi
// 006ba7fc  7510                 jne 0x6ba80e
// 006ba7fe  85d2                 test edx, edx
// 006ba800  750c                 jne 0x6ba80e
// 006ba802  8b81d8050000         mov eax, dword ptr [ecx + 0x5d8]
// 006ba808  5f                   pop edi
// 006ba809  5e                   pop esi
// 006ba80a  5b                   pop ebx
// 006ba80b  c21c00               ret 0x1c
// 006ba80e  55                   push ebp
// 006ba80f  8b6c242c             mov ebp, dword ptr [esp + 0x2c]
// 006ba813  55                   push ebp
// 006ba814  50                   push eax
// 006ba815  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006ba819  52                   push edx
// 006ba81a  56                   push esi
// 006ba81b  57                   push edi
// 006ba81c  53                   push ebx
// 006ba81d  50                   push eax
// 006ba81e  e83d940000           call 0x6c3c60
// 006ba823  5d                   pop ebp
// 006ba824  5f                   pop edi
// 006ba825  5e                   pop esi
// 006ba826  5b                   pop ebx
// 006ba827  c21c00               ret 0x1c

extern "C" int __stdcall sub_006c3c60(int, int, int, int, int, int, int);

struct CXTPOffice2007Theme
{
    int func_006ba7d0(int, int, int, int, int, int, int);
};

int CXTPOffice2007Theme::func_006ba7d0(int a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
    if (a7 == 0 && a6 == 0 && a1 != 0 && a2 == 0 && a3 == 0 && a4 == 0 && a5 == 0)
        return *(int*)((char*)this + 0x5d8);
    return sub_006c3c60(a1, a2, a3, a4, a5, a6, a7);
}
