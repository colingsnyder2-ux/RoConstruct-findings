// roc 2009-12 00726e70  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00726e70
//
// 00726e70  51                   push ecx
// 00726e71  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00726e75  6a01                 push 1
// 00726e77  8d442407             lea eax, [esp + 7]
// 00726e7b  50                   push eax
// 00726e7c  e83ff7ffff           call 0x7265c0
// 00726e81  83f801               cmp eax, 1
// 00726e84  7507                 jne 0x726e8d
// 00726e86  0fb6442403           movzx eax, byte ptr [esp + 3]
// 00726e8b  59                   pop ecx
// 00726e8c  c3                   ret 
// 00726e8d  33c9                 xor ecx, ecx
// 00726e8f  83f8ff               cmp eax, -1
// 00726e92  0f94c1               sete cl
// 00726e95  83c1fe               add ecx, -2
// 00726e98  8bc1                 mov eax, ecx
// 00726e9a  59                   pop ecx
// 00726e9b  c3                   ret 
// copied from an identical function in another client (function ?decompressByte@ns_ROCX00000a@@YAHPAUStreamBuffer@1@@Z)

namespace ns_ROCX00000a {
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
