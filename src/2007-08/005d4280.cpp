// from server: 33% by colin
// roc 2007-08 005d4280  unit: RBX::Mouse  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4280
//
// 005d4280  6aff                 push -1
// 005d4282  68d89d7500           push 0x759dd8
// 005d4287  64a100000000         mov eax, dword ptr fs:[0]
// 005d428d  50                   push eax
// 005d428e  64892500000000       mov dword ptr fs:[0], esp
// 005d4295  51                   push ecx
// 005d4296  56                   push esi
// 005d4297  8bf1                 mov esi, ecx
// 005d4299  89742404             mov dword ptr [esp + 4], esi
// 005d429d  8d8ef8000000         lea ecx, [esi + 0xf8]
// 005d42a3  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005d42ab  ff15ace67700         call dword ptr [0x77e6ac]
// 005d42b1  8bce                 mov ecx, esi
// 005d42b3  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005d42bb  e8f0bff6ff           call 0x5402b0
// 005d42c0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005d42c4  5e                   pop esi
// 005d42c5  64890d00000000       mov dword ptr fs:[0], ecx
// 005d42cc  83c410               add esp, 0x10
// 005d42cf  c3                   ret 

struct Mouse {
    char pad[0xf8];
    void* field_f8;
    void destructor_helper();
    ~Mouse();
};

extern "C" void __stdcall sub_77E6AC(void*);
extern "C" void __stdcall sub_5402B0();

Mouse::~Mouse()
{
    sub_77E6AC(&field_f8);
    destructor_helper();
}
