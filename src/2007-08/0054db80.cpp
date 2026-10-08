// from server: 100% by colin
// roc 2007-08 0054db80  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054db80
//
// 0054db80  8a442404             mov al, byte ptr [esp + 4]
// 0054db84  8b515c               mov edx, dword ptr [ecx + 0x5c]
// 0054db87  f6d8                 neg al
// 0054db89  1bc0                 sbb eax, eax
// 0054db8b  83e010               and eax, 0x10
// 0054db8e  83e2ef               and edx, 0xffffffef
// 0054db91  0bc2                 or eax, edx
// 0054db93  89415c               mov dword ptr [ecx + 0x5c], eax
// 0054db96  c20400               ret 4

struct S {
    char pad[0x5c];
    int field_5c;
    void setFlag(bool value);
};

void S::setFlag(bool value) {
    field_5c = (field_5c & ~0x10) | (value ? 0x10 : 0);
}
