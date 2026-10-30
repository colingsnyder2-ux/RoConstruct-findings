// roc 2009-06 006d46f0  unit: RBX::Body  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006d46f0
//
// 006d46f0  53                   push ebx
// 006d46f1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006d46f5  56                   push esi
// 006d46f6  57                   push edi
// 006d46f7  8bf9                 mov edi, ecx
// 006d46f9  33f6                 xor esi, esi
// 006d46fb  397710               cmp dword ptr [edi + 0x10], esi
// 006d46fe  895f2c               mov dword ptr [edi + 0x2c], ebx
// 006d4701  7e12                 jle 0x6d4715
// 006d4703  8b470c               mov eax, dword ptr [edi + 0xc]
// 006d4706  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 006d4709  53                   push ebx
// 006d470a  e8e1ffffff           call 0x6d46f0
// 006d470f  46                   inc esi
// 006d4710  3b7710               cmp esi, dword ptr [edi + 0x10]
// 006d4713  7cee                 jl 0x6d4703
// 006d4715  5f                   pop edi
// 006d4716  5e                   pop esi
// 006d4717  5b                   pop ebx
// 006d4718  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
struct Item {
    void f(int);
};

struct S {
    char pad0[12];
    Item** items;
    int count;
    char pad1[24];
    int value;
    void f(int);
};

void S::f(int value)
{
    int i = 0;
    count = count;
    this->value = value;
    while (i < count) {
        items[i]->f(value);
        ++i;
    }
}
}
