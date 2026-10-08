// from server: 100% by colin
// roc 2007-08 0054f3e0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f3e0
//
// 0054f3e0  8a442404             mov al, byte ptr [esp + 4]
// 0054f3e4  8b919c000000         mov edx, dword ptr [ecx + 0x9c]
// 0054f3ea  f6d8                 neg al
// 0054f3ec  1bc0                 sbb eax, eax
// 0054f3ee  83e010               and eax, 0x10
// 0054f3f1  83e2ef               and edx, 0xffffffef
// 0054f3f4  0bc2                 or eax, edx
// 0054f3f6  89819c000000         mov dword ptr [ecx + 0x9c], eax
// 0054f3fc  c20400               ret 4

struct S {
    char pad[0x9c];
    unsigned int flags;
    void set_flag(char value);
};

void S::set_flag(char value) {
    unsigned int old = flags;
    unsigned int mask = (value != 0) ? 0x10 : 0;
    flags = (old & 0xffffffef) | mask;
}
