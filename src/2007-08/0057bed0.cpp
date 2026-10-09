// from server: 80% by colin
// roc 2007-08 0057bed0  unit: RBX::ArrowTool  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057bed0
//
// 0057bed0  53                   push ebx
// 0057bed1  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 0057bed5  55                   push ebp
// 0057bed6  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 0057beda  56                   push esi
// 0057bedb  8b742418             mov esi, dword ptr [esp + 0x18]
// 0057bedf  57                   push edi
// 0057bee0  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 0057bee4  3bf7                 cmp esi, edi
// 0057bee6  740e                 je 0x57bef6
// 0057bee8  53                   push ebx
// 0057bee9  56                   push esi
// 0057beea  ffd5                 call ebp
// 0057beec  83c608               add esi, 8
// 0057beef  83c408               add esp, 8
// 0057bef2  3bf7                 cmp esi, edi
// 0057bef4  75f2                 jne 0x57bee8
// 0057bef6  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057befa  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0057befe  5f                   pop edi
// 0057beff  8928                 mov dword ptr [eax], ebp
// 0057bf01  5e                   pop esi
// 0057bf02  894804               mov dword ptr [eax + 4], ecx
// 0057bf05  5d                   pop ebp
// 0057bf06  895808               mov dword ptr [eax + 8], ebx
// 0057bf09  5b                   pop ebx
// 0057bf0a  c3                   ret 

struct S_func_0057bed0 {
    void __cdecl f(int a, int b, int c, int d, int e, int f);
};

void S_func_0057bed0::f(int a, int b, int c, int d, int e, int f)
{
    int* p = (int*)a;
    int* end = (int*)b;
    void (__cdecl *fn)(int, int) = (void (__cdecl *)(int, int))c;
    while (p != end) {
        fn((int)p, d);
        p += 2;
    }
    int* out = (int*)e;
    out[0] = (int)fn;
    out[1] = f;
    out[2] = d;
}
