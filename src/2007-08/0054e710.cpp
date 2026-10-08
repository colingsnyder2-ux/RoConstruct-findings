// from server: 48% by colin
// roc 2007-08 0054e710  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054e710
//
// 0054e710  51                   push ecx
// 0054e711  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0054e715  56                   push esi
// 0054e716  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0054e71a  50                   push eax
// 0054e71b  8bce                 mov ecx, esi
// 0054e71d  c744240800000000     mov dword ptr [esp + 8], 0
// 0054e725  e886ebffff           call 0x54d2b0
// 0054e72a  8bc6                 mov eax, esi
// 0054e72c  5e                   pop esi
// 0054e72d  59                   pop ecx
// 0054e72e  c3                   ret 

struct S {
    void* f(void* a, void* b);
};

extern "C" void __stdcall sub_54d2b0(void*);

void* S::f(void* a, void* b)
{
    void* p = 0;
    sub_54d2b0(b);
    return this;
}
