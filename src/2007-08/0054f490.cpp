// from server: 39% by colin
// roc 2007-08 0054f490  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054f490
//
// 0054f490  8d4424d8             lea eax, [esp - 0x28]
// 0054f494  83ec28               sub esp, 0x28
// 0054f497  50                   push eax
// 0054f498  e8f3bdffff           call 0x54b290
// 0054f49d  83c404               add esp, 4
// 0054f4a0  68c49a8500           push 0x859ac4
// 0054f4a5  8d4c2404             lea ecx, [esp + 4]
// 0054f4a9  51                   push ecx
// 0054f4aa  e8ef160e00           call 0x630b9e

struct S
{
    void f();
};

extern "C" void __cdecl helper_54b290(void *);
extern "C" void __cdecl helper_630b9e(void *, void *);

void S::f()
{
    char buf[0x28];
    helper_54b290(buf);
    helper_630b9e(buf, (void *)0x859ac4);
}
