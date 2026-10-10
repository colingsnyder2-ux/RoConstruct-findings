// from server: 81% by colin
// roc 2007-08 0076ce80  unit: seg_00760000  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0076ce80
//
// 0076ce80  51                   push ecx
// 0076ce81  687cb98b00           push 0x8bb97c
// 0076ce86  6830984300           push 0x439830
// 0076ce8b  e89086fbff           call 0x725520
// 0076ce90  83c408               add esp, 8
// 0076ce93  e888c0ccff           call 0x438f20
// 0076ce98  890424               mov dword ptr [esp], eax
// 0076ce9b  8d0424               lea eax, [esp]
// 0076ce9e  50                   push eax
// 0076ce9f  e86ca5c9ff           call 0x407410
// 0076cea4  8bc8                 mov ecx, eax
// 0076cea6  e8256bccff           call 0x4339d0
// 0076ceab  68207a7700           push 0x777a20
// 0076ceb0  c700a47e8800         mov dword ptr [eax], 0x887ea4
// 0076ceb6  e8683eecff           call 0x630d23
// 0076cebb  83c408               add esp, 8
// 0076cebe  c3                   ret 

extern "C" void __cdecl sub_725520(const char* a, const char* b);
extern "C" void* __cdecl sub_438f20();
extern "C" void* __cdecl sub_407410(void* p);
extern "C" void __cdecl sub_4339d0();
extern "C" void __cdecl sub_630d23(void* p);

struct RBXImage {
    void init();
};

void RBXImage::init()
{
    sub_725520((const char*)0x8bb97c, (const char*)0x439830);
    void* v = sub_438f20();
    void* r = sub_407410(&v);
    sub_4339d0();
    *(void**)r = (void*)0x887ea4;
    sub_630d23((void*)0x777a20);
}
