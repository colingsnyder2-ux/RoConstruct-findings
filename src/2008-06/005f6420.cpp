// from server: 100% by atomic.potato
// roc 2008-06 005f6420  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f6420
//
// 005f6420  56                   push esi
// 005f6421  57                   push edi
// 005f6422  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005f6426  57                   push edi
// 005f6427  8bf1                 mov esi, ecx
// 005f6429  e8623ae1ff           call 0x409e90
// 005f642e  c7060c0b8400         mov dword ptr [esi], 0x840b0c
// 005f6434  8b4728               mov eax, dword ptr [edi + 0x28]
// 005f6437  894628               mov dword ptr [esi + 0x28], eax
// 005f643a  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 005f643d  5f                   pop edi
// 005f643e  894e2c               mov dword ptr [esi + 0x2c], ecx
// 005f6441  8bc6                 mov eax, esi
// 005f6443  5e                   pop esi
// 005f6444  c20400               ret 4

struct S
{
    int f(S *p);
};

extern "C" void __stdcall callee(S *p);

int S::f(S *p)
{
    callee(p);
    *(int *)this = 0x840b0c;
    *(int *)((char *)this + 0x28) = *(int *)((char *)p + 0x28);
    *(int *)((char *)this + 0x2c) = *(int *)((char *)p + 0x2c);
    return (int)this;
}
