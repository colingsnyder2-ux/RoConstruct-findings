// from server: 100% by colin
// roc 2007-08 0054ffc0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ffc0
//
// 0054ffc0  51                   push ecx
// 0054ffc1  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0054ffc5  6a01                 push 1
// 0054ffc7  8d442407             lea eax, [esp + 7]
// 0054ffcb  50                   push eax
// 0054ffcc  e8dfe5ffff           call 0x54e5b0
// 0054ffd1  83f801               cmp eax, 1
// 0054ffd4  7507                 jne 0x54ffdd
// 0054ffd6  0fb6442403           movzx eax, byte ptr [esp + 3]
// 0054ffdb  59                   pop ecx
// 0054ffdc  c3                   ret 
// 0054ffdd  33c9                 xor ecx, ecx
// 0054ffdf  83f8ff               cmp eax, -1
// 0054ffe2  0f94c1               sete cl
// 0054ffe5  83c1fe               add ecx, -2
// 0054ffe8  8bc1                 mov eax, ecx
// 0054ffea  59                   pop ecx
// 0054ffeb  c3                   ret 

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
