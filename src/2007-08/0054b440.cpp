// from server: 39% by colin
// roc 2007-08 0054b440  unit: UString_sink::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b440
//
// 0054b440  8d4424d8             lea eax, [esp - 0x28]
// 0054b444  83ec28               sub esp, 0x28
// 0054b447  50                   push eax
// 0054b448  e8c3fdffff           call 0x54b210
// 0054b44d  83c404               add esp, 4
// 0054b450  68c49a8500           push 0x859ac4
// 0054b455  8d4c2404             lea ecx, [esp + 4]
// 0054b459  51                   push ecx
// 0054b45a  e83f570e00           call 0x630b9e

struct UString_sink
{
    void construct();
};

extern "C" void __cdecl sub_54B210(void*);
extern "C" void __cdecl sub_630B9E(void*, void*);

extern char g_859ac4;

void UString_sink::construct()
{
    char buf[0x28];
    sub_54B210(buf);
    sub_630B9E(&g_859ac4, buf);
}
