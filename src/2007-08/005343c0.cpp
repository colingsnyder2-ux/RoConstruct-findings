// from server: 42% by colin
// roc 2007-08 005343c0  unit: RBX::ScriptContext  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005343c0
//
// 005343c0  83ec28               sub esp, 0x28
// 005343c3  8d0c24               lea ecx, [esp]
// 005343c6  e815fbffff           call 0x533ee0
// 005343cb  68e8768500           push 0x8576e8
// 005343d0  8d442404             lea eax, [esp + 4]
// 005343d4  50                   push eax
// 005343d5  e8c4c70f00           call 0x630b9e

struct Context {
    int identity;
    static Context& current();
    void requirePermission(int permission, const char* operation);
};

extern "C" void __cdecl sub_533EE0(void*);
extern "C" void __cdecl sub_630B9E(void*, const char*);

void Context::requirePermission(int permission, const char* operation)
{
    Context ctx;
    sub_533EE0(&ctx);
    sub_630B9E(&ctx, (const char*)0x8576e8);
}
