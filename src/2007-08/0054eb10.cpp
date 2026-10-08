// from server: 100% by colin
// roc 2007-08 0054eb10  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054eb10
//
// 0054eb10  56                   push esi
// 0054eb11  8bf1                 mov esi, ecx
// 0054eb13  e818e9ffff           call 0x54d430
// 0054eb18  8b0ddce47700         mov ecx, dword ptr [0x77e4dc]
// 0054eb1e  8d4614               lea eax, [esi + 0x14]
// 0054eb21  8908                 mov dword ptr [eax], ecx
// 0054eb23  8b15e0e47700         mov edx, dword ptr [0x77e4e0]
// 0054eb29  50                   push eax
// 0054eb2a  8910                 mov dword ptr [eax], edx
// 0054eb2c  ff15e4e47700         call dword ptr [0x77e4e4]
// 0054eb32  83c404               add esp, 4
// 0054eb35  5e                   pop esi
// 0054eb36  c3                   ret 

struct S {
    char pad[0x14];
    void* field14;
    void init();
};

extern void* g_77e4dc;
extern void* g_77e4e0;
extern void (__cdecl *g_77e4e4)(void*);

extern "C" void __cdecl sub_54d430();

void S::init()
{
    sub_54d430();
    field14 = g_77e4dc;
    field14 = g_77e4e0;
    g_77e4e4(&field14);
}
