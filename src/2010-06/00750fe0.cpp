// roc 2010-06 00750fe0  unit: RBX::Body  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00750fe0
//
// 00750fe0  53                   push ebx
// 00750fe1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00750fe5  56                   push esi
// 00750fe6  57                   push edi
// 00750fe7  8bf9                 mov edi, ecx
// 00750fe9  33f6                 xor esi, esi
// 00750feb  397710               cmp dword ptr [edi + 0x10], esi
// 00750fee  895f2c               mov dword ptr [edi + 0x2c], ebx
// 00750ff1  7e12                 jle 0x751005
// 00750ff3  8b470c               mov eax, dword ptr [edi + 0xc]
// 00750ff6  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 00750ff9  53                   push ebx
// 00750ffa  e8e1ffffff           call 0x750fe0
// 00750fff  46                   inc esi
// 00751000  3b7710               cmp esi, dword ptr [edi + 0x10]
// 00751003  7cee                 jl 0x750ff3
// 00751005  5f                   pop edi
// 00751006  5e                   pop esi
// 00751007  5b                   pop ebx
// 00751008  c20400               ret 4
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