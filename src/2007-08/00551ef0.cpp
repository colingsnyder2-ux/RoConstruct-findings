// from server: 26% by colin
// roc 2007-08 00551ef0  unit: std::D::V?$allocator::U?$basic_zlib_decompressor::?$stream_buffer  size: 58 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551ef0
//
// 00551ef0  55                   push ebp
// 00551ef1  8bec                 mov ebp, esp
// 00551ef3  6aff                 push -1
// 00551ef5  68b02b7500           push 0x752bb0
// 00551efa  64a100000000         mov eax, dword ptr fs:[0]
// 00551f00  50                   push eax
// 00551f01  64892500000000       mov dword ptr fs:[0], esp
// 00551f08  51                   push ecx
// 00551f09  53                   push ebx
// 00551f0a  56                   push esi
// 00551f0b  57                   push edi
// 00551f0c  8965f0               mov dword ptr [ebp - 0x10], esp
// 00551f0f  8bf1                 mov esi, ecx
// 00551f11  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00551f18  e803fbffff           call 0x551a20
// 00551f1d  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 00551f20  85c9                 test ecx, ecx
// 00551f22  7406                 je 0x551f2a
// 00551f24  ff1504e67700         call dword ptr [0x77e604]

struct StreamBuffer {
    int pubsync();
};

struct ZlibDecompressor {
    char pad[0x4c];
    StreamBuffer* buf;
    void sub_551a20();
    int f();
};

int ZlibDecompressor::f()
{
    sub_551a20();
    if (buf)
        return buf->pubsync();
    return 0;
}
