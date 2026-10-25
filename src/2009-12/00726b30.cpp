// from server: 100% by colin
// roc 2009-12 00726b30  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00726b30
//
// 00726b30  56                   push esi
// 00726b31  57                   push edi
// 00726b32  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00726b36  57                   push edi
// 00726b37  8bf1                 mov esi, ecx
// 00726b39  e8e228ceff           call 0x409420
// 00726b3e  c706d4ff9d00         mov dword ptr [esi], 0x9dffd4
// 00726b44  8b4728               mov eax, dword ptr [edi + 0x28]
// 00726b47  894628               mov dword ptr [esi + 0x28], eax
// 00726b4a  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 00726b4d  5f                   pop edi
// 00726b4e  894e2c               mov dword ptr [esi + 0x2c], ecx
// 00726b51  8bc6                 mov eax, esi
// 00726b53  5e                   pop esi
// 00726b54  c20400               ret 4

// from server: 96% by atomic.potato
extern "C" void __stdcall sub_409420(void *);
extern "C" void *__vt__S;  // VTable symbol

struct S
{
    void *vtable;
    char padding[36];
    unsigned int value28;
    unsigned int value2c;
    S(void *);
};

S::S(void *source)
{
    sub_409420(source);
    vtable = (void *)0x009c2ddc;
    value28 = ((S *)source)->value28;
    value2c = ((S *)source)->value2c;
}