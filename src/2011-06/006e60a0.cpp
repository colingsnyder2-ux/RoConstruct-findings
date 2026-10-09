// roc 2011-06 006e60a0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006e60a0
//
// 006e60a0  51                   push ecx
// 006e60a1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006e60a5  6a01                 push 1
// 006e60a7  8d442407             lea eax, [esp + 7]
// 006e60ab  50                   push eax
// 006e60ac  e83ff7ffff           call 0x6e57f0
// 006e60b1  83f801               cmp eax, 1
// 006e60b4  7507                 jne 0x6e60bd
// 006e60b6  0fb6442403           movzx eax, byte ptr [esp + 3]
// 006e60bb  59                   pop ecx
// 006e60bc  c3                   ret 
// 006e60bd  33c9                 xor ecx, ecx
// 006e60bf  83f8ff               cmp eax, -1
// 006e60c2  0f94c1               sete cl
// 006e60c5  83c1fe               add ecx, -2
// 006e60c8  8bc1                 mov eax, ecx
// 006e60ca  59                   pop ecx
// 006e60cb  c3                   ret 
// copied from an identical function in another client (function ?decompressByte@ns_ROCX00000f@@YAHPAUStreamBuffer@1@@Z)

namespace ns_ROCX00000f {
struct StreamBuffer {
    int read(char* buf, int count);
};

int decompressByte(StreamBuffer* sb)
{
    char c;
    int r = sb->read(&c, 1);
    if (r == 1)
        return (unsigned char)c;
    return (r == -1) ? -1 : -2;
}
}
