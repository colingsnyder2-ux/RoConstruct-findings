// from server: 100% by colin
// roc 2007-08 0054bd70  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054bd70
//
// 0054bd70  8a442404             mov al, byte ptr [esp + 4]
// 0054bd74  8b5154               mov edx, dword ptr [ecx + 0x54]
// 0054bd77  f6d8                 neg al
// 0054bd79  1bc0                 sbb eax, eax
// 0054bd7b  83e010               and eax, 0x10
// 0054bd7e  83e2ef               and edx, 0xffffffef
// 0054bd81  0bc2                 or eax, edx
// 0054bd83  894154               mov dword ptr [ecx + 0x54], eax
// 0054bd86  c20400               ret 4

struct S {
    char pad[0x54];
    int m54;
    void setFlag(bool b);
};

void S::setFlag(bool b)
{
    m54 = (m54 & ~0x10) | (b ? 0x10 : 0);
}
