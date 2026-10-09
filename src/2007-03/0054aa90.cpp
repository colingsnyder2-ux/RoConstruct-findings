// roc 2007-03 0054aa90  unit: seg_00540000  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054aa90
//
// 0054aa90  8a442404             mov al, byte ptr [esp + 4]
// 0054aa94  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0054aa97  f6d8                 neg al
// 0054aa99  1bc0                 sbb eax, eax
// 0054aa9b  83e010               and eax, 0x10
// 0054aa9e  83e2ef               and edx, 0xffffffef
// 0054aaa1  0bc2                 or eax, edx
// 0054aaa3  894158               mov dword ptr [ecx + 0x58], eax
// 0054aaa6  c20400               ret 4
// copied from an identical function in another client (function ?setFlag@UString_sink@ns_ROCX000002@@QAEX_N@Z)

namespace ns_ROCX000002 {
struct UString_sink
{
    char pad[0x58];
    unsigned int flags;
    void setFlag(bool value);
};

void UString_sink::setFlag(bool value)
{
    unsigned int v = value ? 0x10u : 0u;
    flags = (flags & 0xffffffefu) | v;
}
}
