// roc 2007-03 005af820  unit: seg_005a0000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005af820
//
// 005af820  8b442404             mov eax, dword ptr [esp + 4]
// 005af824  85c0                 test eax, eax
// 005af826  56                   push esi
// 005af827  8bf1                 mov esi, ecx
// 005af829  7505                 jne 0x5af830
// 005af82b  e8204cf8ff           call 0x534450
// 005af830  3986ac000000         cmp dword ptr [esi + 0xac], eax
// 005af836  7406                 je 0x5af83e
// 005af838  8986ac000000         mov dword ptr [esi + 0xac], eax
// 005af83e  5e                   pop esi
// 005af83f  c20400               ret 4
// copied from an identical function in another client (function ?setSomething@Primitive@ns_ROCX000000@@QAEXH@Z)

namespace ns_ROCX000000 {
struct Primitive {
    char pad[0xac];
    int field0xac;
    void setSomething(int value);
};

int getDefaultValue();

void Primitive::setSomething(int value)
{
    if (value == 0)
        value = getDefaultValue();
    if (field0xac != value)
        field0xac = value;
}
}
