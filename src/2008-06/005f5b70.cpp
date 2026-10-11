// from server: 73% by colin
// roc 2008-06 005f5b70  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f5b70
//
// 005f5b70  8d4424d8             lea eax, [esp - 0x28]
// 005f5b74  83ec28               sub esp, 0x28
// 005f5b77  50                   push eax
// 005f5b78  e843d0ffff           call 0x5f2bc0
// 005f5b7d  83c404               add esp, 4
// 005f5b80  68a05f8f00           push 0x8f5fa0
// 005f5b85  8d4c2404             lea ecx, [esp + 4]
// 005f5b89  51                   push ecx
// 005f5b8a  e8fdb90a00           call 0x6a158c

struct S {
    void f();
};

extern "C" void __cdecl func_005f2bc0(void*);
extern "C" void __cdecl func_006a158c(void*, const void*);
extern char G_008f5fa0;

void S::f()
{
    char buf[0x28];
    func_005f2bc0(buf);
    func_006a158c(buf, &G_008f5fa0);
}
