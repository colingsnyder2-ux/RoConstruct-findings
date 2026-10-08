// from server: 39% by colin
// roc 2007-08 0054b740  unit: UString_sink::?$stream_buffer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054b740
//
// 0054b740  8d4424d8             lea eax, [esp - 0x28]
// 0054b744  83ec28               sub esp, 0x28
// 0054b747  50                   push eax
// 0054b748  e873feffff           call 0x54b5c0
// 0054b74d  83c404               add esp, 4
// 0054b750  68c49a8500           push 0x859ac4
// 0054b755  8d4c2404             lea ecx, [esp + 4]
// 0054b759  51                   push ecx
// 0054b75a  e83f540e00           call 0x630b9e

struct UString_sink
{
    void construct();
};

extern "C" void __cdecl func_0054b5c0(void*);
extern "C" void __cdecl func_00630b9e(void*, const void*);

void UString_sink::construct()
{
    char buffer[0x28];
    func_0054b5c0(buffer);
    func_00630b9e(buffer, (const void*)0x859ac4);
}
