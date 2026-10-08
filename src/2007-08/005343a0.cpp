// from server: 58% by colin
// roc 2007-08 005343a0  unit: RBX::ScriptContext  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005343a0
//
// 005343a0  83ec28               sub esp, 0x28
// 005343a3  8d0c24               lea ecx, [esp]
// 005343a6  e8c5faffff           call 0x533e70
// 005343ab  68a8768500           push 0x8576a8
// 005343b0  8d442404             lea eax, [esp + 4]
// 005343b4  50                   push eax
// 005343b5  e8e4c70f00           call 0x630b9e

struct Ctx {
    int pad[10];
};

extern "C" void __cdecl sub_533E70(Ctx* p);
extern "C" void __cdecl sub_630B9E(void* dst, const void* src);

extern const char g_8576A8;

void sub_5343A0()
{
    Ctx c;
    sub_533E70(&c);
    sub_630B9E(&c, &g_8576A8);
}
