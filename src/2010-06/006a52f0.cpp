// roc 2010-06 006a52f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006a52f0
//
// 006a52f0  51                   push ecx
// 006a52f1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006a52f5  6a01                 push 1
// 006a52f7  8d442407             lea eax, [esp + 7]
// 006a52fb  50                   push eax
// 006a52fc  e83ff7ffff           call 0x6a4a40
// 006a5301  83f801               cmp eax, 1
// 006a5304  7507                 jne 0x6a530d
// 006a5306  0fb6442403           movzx eax, byte ptr [esp + 3]
// 006a530b  59                   pop ecx
// 006a530c  c3                   ret 
// 006a530d  33c9                 xor ecx, ecx
// 006a530f  83f8ff               cmp eax, -1
// 006a5312  0f94c1               sete cl
// 006a5315  83c1fe               add ecx, -2
// 006a5318  8bc1                 mov eax, ecx
// 006a531a  59                   pop ecx
// 006a531b  c3                   ret 
// copied from an identical function in another client (function ?decompressByte@ns_ROCX000006@@YAHPAUStreamBuffer@1@@Z)

namespace ns_ROCX000006 {
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
