// from server: 100% by colin
// roc 2007-08 0054b710  unit: UString_sink::?$stream_buffer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b710
//
// 0054b710  8a442404             mov al, byte ptr [esp + 4]
// 0054b714  8b5158               mov edx, dword ptr [ecx + 0x58]
// 0054b717  f6d8                 neg al
// 0054b719  1bc0                 sbb eax, eax
// 0054b71b  83e010               and eax, 0x10
// 0054b71e  83e2ef               and edx, 0xffffffef
// 0054b721  0bc2                 or eax, edx
// 0054b723  894158               mov dword ptr [ecx + 0x58], eax
// 0054b726  c20400               ret 4

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
