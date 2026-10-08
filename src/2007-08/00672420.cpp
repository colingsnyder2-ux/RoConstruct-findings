// from server: 73% by colin
// roc 2007-08 00672420  unit: CXTPControlButtonColor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00672420
//
// 00672420  56                   push esi
// 00672421  57                   push edi
// 00672422  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00672426  57                   push edi
// 00672427  8bf1                 mov esi, ecx
// 00672429  e8329fffff           call 0x66c360
// 0067242e  837f2815             cmp dword ptr [edi + 0x28], 0x15
// 00672432  7617                 jbe 0x67244b
// 00672434  6aff                 push -1
// 00672436  81c668010000         add esi, 0x168
// 0067243c  56                   push esi
// 0067243d  68e0ac7800           push 0x78ace0
// 00672442  57                   push edi
// 00672443  e8d8320100           call 0x685720
// 00672448  83c410               add esp, 0x10
// 0067244b  5f                   pop edi
// 0067244c  5e                   pop esi
// 0067244d  c20400               ret 4

struct CXTPControlButtonColor
{
    void SetButtonColor(int);
};

extern "C" void __stdcall sub_66C360(int);
extern "C" void __stdcall sub_685720(int, const wchar_t*, int, int);

void CXTPControlButtonColor::SetButtonColor(int a)
{
    sub_66C360(a);
    if (*(unsigned int*)(a + 0x28) > 0x15)
    {
        sub_685720(a, (const wchar_t*)0x78ace0, (int)((char*)this + 0x168), -1);
    }
}
