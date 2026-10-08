// from server: 100% by colin
// roc 2007-08 0054eb40  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054eb40
//
// 0054eb40  56                   push esi
// 0054eb41  8bf1                 mov esi, ecx
// 0054eb43  e878e9ffff           call 0x54d4c0
// 0054eb48  8b0ddce47700         mov ecx, dword ptr [0x77e4dc]
// 0054eb4e  8d4618               lea eax, [esi + 0x18]
// 0054eb51  8908                 mov dword ptr [eax], ecx
// 0054eb53  8b15e0e47700         mov edx, dword ptr [0x77e4e0]
// 0054eb59  50                   push eax
// 0054eb5a  8910                 mov dword ptr [eax], edx
// 0054eb5c  ff15e4e47700         call dword ptr [0x77e4e4]
// 0054eb62  83c404               add esp, 4
// 0054eb65  5e                   pop esi
// 0054eb66  c3                   ret 

struct stream_buffer {
    char pad[0x18];
    void* field_18;
    void func_54d4c0();
};

extern void* g_77e4dc;
extern void* g_77e4e0;
extern void (__cdecl *g_77e4e4)(void*);

void stream_buffer::func_54d4c0()
{
    this->func_54d4c0();
    this->field_18 = g_77e4dc;
    this->field_18 = g_77e4e0;
    g_77e4e4(&this->field_18);
}
