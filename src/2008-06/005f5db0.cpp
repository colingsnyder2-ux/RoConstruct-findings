// from server: 61% by colin
// roc 2008-06 005f5db0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5db0
//
// 005f5db0  8b81a4000000         mov eax, dword ptr [ecx + 0xa4]
// 005f5db6  8b5110               mov edx, dword ptr [ecx + 0x10]
// 005f5db9  8902                 mov dword ptr [edx], eax
// 005f5dbb  8b5120               mov edx, dword ptr [ecx + 0x20]
// 005f5dbe  8902                 mov dword ptr [edx], eax
// 005f5dc0  8bd0                 mov edx, eax
// 005f5dc2  2bd0                 sub edx, eax
// 005f5dc4  8b4130               mov eax, dword ptr [ecx + 0x30]
// 005f5dc7  8910                 mov dword ptr [eax], edx
// 005f5dc9  c3                   ret 

struct S
{
    int f();
};

int S::f()
{
    int v = *(int *)((char *)this + 0xa4);
    **(int **)((char *)this + 0x10) = v;
    **(int **)((char *)this + 0x20) = v;
    **(int **)((char *)this + 0x30) = v - v;
    return v;
}
