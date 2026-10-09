// roc 2009-06 00687720  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00687720
//
// 00687720  51                   push ecx
// 00687721  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00687725  6a01                 push 1
// 00687727  8d442407             lea eax, [esp + 7]
// 0068772b  50                   push eax
// 0068772c  e87ff9ffff           call 0x6870b0
// 00687731  83f801               cmp eax, 1
// 00687734  7507                 jne 0x68773d
// 00687736  0fb6442403           movzx eax, byte ptr [esp + 3]
// 0068773b  59                   pop ecx
// 0068773c  c3                   ret 
// 0068773d  33c9                 xor ecx, ecx
// 0068773f  83f8ff               cmp eax, -1
// 00687742  0f94c1               sete cl
// 00687745  83c1fe               add ecx, -2
// 00687748  8bc1                 mov eax, ecx
// 0068774a  59                   pop ecx
// 0068774b  c3                   ret 
// copied from an identical function in another client (function ?decompressByte@ns_ROCX00000c@@YAHPAUStreamBuffer@1@@Z)

namespace ns_ROCX00000c {
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
