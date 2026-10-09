// roc 2008-06 005f6760  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f6760
//
// 005f6760  51                   push ecx
// 005f6761  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005f6765  6a01                 push 1
// 005f6767  8d442407             lea eax, [esp + 7]
// 005f676b  50                   push eax
// 005f676c  e8bff8ffff           call 0x5f6030
// 005f6771  83f801               cmp eax, 1
// 005f6774  7507                 jne 0x5f677d
// 005f6776  0fb6442403           movzx eax, byte ptr [esp + 3]
// 005f677b  59                   pop ecx
// 005f677c  c3                   ret 
// 005f677d  33c9                 xor ecx, ecx
// 005f677f  83f8ff               cmp eax, -1
// 005f6782  0f94c1               sete cl
// 005f6785  83c1fe               add ecx, -2
// 005f6788  8bc1                 mov eax, ecx
// 005f678a  59                   pop ecx
// 005f678b  c3                   ret 
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
