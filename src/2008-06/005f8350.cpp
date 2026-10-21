// from server: 84% by colin
// roc 2008-06 005f8350  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8350
//
// 005f8350  55                   push ebp
// 005f8351  8bec                 mov ebp, esp
// 005f8353  6aff                 push -1
// 005f8355  6880797d00           push 0x7d7980
// 005f835a  64a100000000         mov eax, dword ptr fs:[0]
// 005f8360  50                   push eax
// 005f8361  64892500000000       mov dword ptr fs:[0], esp
// 005f8368  51                   push ecx
// 005f8369  53                   push ebx
// 005f836a  56                   push esi
// 005f836b  57                   push edi
// 005f836c  8b7d08               mov edi, dword ptr [ebp + 8]
// 005f836f  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f8372  57                   push edi
// 005f8373  8bf1                 mov esi, ecx
// 005f8375  e876d7ffff           call 0x5f5af0
// 005f837a  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005f8380  8bcf                 mov ecx, edi
// 005f8382  83e101               and ecx, 1
// 005f8385  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f838c  80f901               cmp cl, 1
// 005f838f  750f                 jne 0x5f83a0
// 005f8391  8d5508               lea edx, [ebp + 8]
// 005f8394  52                   push edx
// 005f8395  8d4e40               lea ecx, [esi + 0x40]
// 005f8398  894508               mov dword ptr [ebp + 8], eax
// 005f839b  e810e0ffff           call 0x5f63b0
// 005f83a0  8b4df4               mov ecx, dword ptr [ebp - 0xc]
// 005f83a3  5f                   pop edi
// 005f83a4  5e                   pop esi
// 005f83a5  64890d00000000       mov dword ptr fs:[0], ecx
// 005f83ac  5b                   pop ebx
// 005f83ad  8be5                 mov esp, ebp
// 005f83af  5d                   pop ebp
// 005f83b0  c20400               ret 4

// from server: 72% by colin
// from server: 70% by king_originala
// roc 2008-06 005f8350  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8350
//
// 005f8350  55                   push ebp
// 005f8351  8bec                 mov ebp, esp
// 005f8353  6aff                 push -1
// 005f8355  6880797d00           push 0x7d7980
// 005f835a  64a100000000         mov eax, dword ptr fs:[0]
// 005f8360  50                   push eax
// 005f8361  64892500000000       mov dword ptr fs:[0], esp
// 005f8368  51                   push ecx
// 005f8369  53                   push ebx
// 005f836a  56                   push esi
// 005f836b  57                   push edi
// 005f836c  8b7d08               mov edi, dword ptr [ebp + 8]
// 005f836f  8965f0               mov dword ptr [ebp - 0x10], esp
// 005f8372  57                   push edi
// 005f8373  8bf1                 mov esi, ecx
// 005f8375  e876d7ffff           call 0x5f5af0
// 005f837a  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005f8380  8bcf                 mov ecx, edi
// 005f8382  83e101               and ecx, 1
// 005f8385  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005f838c  80f901               cmp cl, 1
// 005f838f  750f                 jne 0x5f83a0
// 005f8391  8d5508               lea edx, [ebp + 8]
// 005f8394  52                   push edx
// 005f8395  8d4e40               lea ecx, [esi + 0x40]
// 005f8398  894508               mov dword ptr [ebp + 8], eax
// 005f839b  e810e0ffff           call 0x5f63b0
#include <intrin.h>

struct Buffer
{
    void reset(int *);
};

struct S
{
    void closeBase(int);
    void close(int);
};

void S::close(int mode)
{
    closeBase(mode);
    int value = *(int *)((char *)this + 0xa0);
    _ReadWriteBarrier();
    try
    {
        if ((unsigned char)(mode & 1) != 1)
        {
            mode = value;
            ((Buffer *)((char *)this + 0x40))->reset(&mode);
        }
    }
    catch (...)
    {
    }
}
