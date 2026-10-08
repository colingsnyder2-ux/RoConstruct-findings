// from server: 100% by colin
// roc 2007-08 0054ea00  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ea00
//
// 0054ea00  56                   push esi
// 0054ea01  57                   push edi
// 0054ea02  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0054ea06  57                   push edi
// 0054ea07  8bf1                 mov esi, ecx
// 0054ea09  e8a24cecff           call 0x4136b0
// 0054ea0e  c706f47a7a00         mov dword ptr [esi], 0x7a7af4
// 0054ea14  8b4728               mov eax, dword ptr [edi + 0x28]
// 0054ea17  894628               mov dword ptr [esi + 0x28], eax
// 0054ea1a  8b4f2c               mov ecx, dword ptr [edi + 0x2c]
// 0054ea1d  5f                   pop edi
// 0054ea1e  894e2c               mov dword ptr [esi + 0x2c], ecx
// 0054ea21  8bc6                 mov eax, esi
// 0054ea23  5e                   pop esi
// 0054ea24  c20400               ret 4

struct S {
    char pad[0x28];
    int f0;
    int f4;
    S* init(int*);
};

extern "C" void __stdcall sub_4136b0(int*);

S* S::init(int* p) {
    sub_4136b0(p);
    *(int*)this = 0x7a7af4;
    f0 = *(int*)((char*)p + 0x28);
    f4 = *(int*)((char*)p + 0x2c);
    return this;
}
