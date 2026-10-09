// from server: 80% by colin
// roc 2007-08 00671ea0  unit: CPropertyGridItemBrickColor  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00671ea0
//
// 00671ea0  56                   push esi
// 00671ea1  57                   push edi
// 00671ea2  8bf9                 mov edi, ecx
// 00671ea4  837f4000             cmp dword ptr [edi + 0x40], 0
// 00671ea8  750d                 jne 0x671eb7
// 00671eaa  6804b77c00           push 0x7cb704
// 00671eaf  8d4f38               lea ecx, [edi + 0x38]
// 00671eb2  e859ffffff           call 0x671e10
// 00671eb7  837f1000             cmp dword ptr [edi + 0x10], 0
// 00671ebb  8d7710               lea esi, [edi + 0x10]
// 00671ebe  7510                 jne 0x671ed0
// 00671ec0  6a00                 push 0
// 00671ec2  68e8b67c00           push 0x7cb6e8
// 00671ec7  56                   push esi
// 00671ec8  8d4f38               lea ecx, [edi + 0x38]
// 00671ecb  e840f4ffff           call 0x671310
// 00671ed0  8b36                 mov esi, dword ptr [esi]
// 00671ed2  85f6                 test esi, esi
// 00671ed4  741b                 je 0x671ef1
// 00671ed6  8b442418             mov eax, dword ptr [esp + 0x18]
// 00671eda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00671ede  8b542410             mov edx, dword ptr [esp + 0x10]
// 00671ee2  50                   push eax
// 00671ee3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00671ee7  51                   push ecx
// 00671ee8  52                   push edx
// 00671ee9  50                   push eax
// 00671eea  ffd6                 call esi
// 00671eec  5f                   pop edi
// 00671eed  5e                   pop esi
// 00671eee  c21000               ret 0x10
// 00671ef1  5f                   pop edi
// 00671ef2  b805400080           mov eax, 0x80004005
// 00671ef7  5e                   pop esi
// 00671ef8  c21000               ret 0x10

struct CPropertyGridItemBrickColor
{
    char pad0[0x10];
    void* field10;
    char pad14[0x24];
    void* field38;
    char pad3c[4];
    void* field40;
    int method(void* a, void* b, void* c, void* d);
};

extern "C" void __stdcall sub_00671E10(void* p, const char* s);
extern "C" void __stdcall sub_00671310(void* p, void* a, const char* s, int b);

int CPropertyGridItemBrickColor::method(void* a, void* b, void* c, void* d)
{
    if (field40 == 0)
    {
        sub_00671E10(&field38, "oleacc.dll");
    }
    if (field10 == 0)
    {
        sub_00671310(&field38, &field10, "AccessibleObjectFromWindow", 0);
    }
    void* fn = field10;
    if (fn != 0)
    {
        typedef int (__stdcall *Fn)(void*, void*, void*, void*);
        return ((Fn)fn)(a, b, c, d);
    }
    return (int)0x80004005;
}
