// roc 2012-06 0085e2d0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0085e2d0
//
// 0085e2d0  51                   push ecx
// 0085e2d1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0085e2d5  6a01                 push 1
// 0085e2d7  8d442407             lea eax, [esp + 7]
// 0085e2db  50                   push eax
// 0085e2dc  e83ff7ffff           call 0x85da20
// 0085e2e1  83f801               cmp eax, 1
// 0085e2e4  7507                 jne 0x85e2ed
// 0085e2e6  0fb6442403           movzx eax, byte ptr [esp + 3]
// 0085e2eb  59                   pop ecx
// 0085e2ec  c3                   ret 
// 0085e2ed  33c9                 xor ecx, ecx
// 0085e2ef  83f8ff               cmp eax, -1
// 0085e2f2  0f94c1               sete cl
// 0085e2f5  83c1fe               add ecx, -2
// 0085e2f8  8bc1                 mov eax, ecx
// 0085e2fa  59                   pop ecx
// 0085e2fb  c3                   ret 
// copied from an identical function in another client (function ?decompressByte@ns_ROCX00000d@@YAHPAUStreamBuffer@1@@Z)

namespace ns_ROCX00000d {
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
