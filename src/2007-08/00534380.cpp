// from server: 52% by colin
// roc 2007-08 00534380  unit: RBX::ScriptContext  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00534380
//
// 00534380  83ec28               sub esp, 0x28
// 00534383  8d0c24               lea ecx, [esp]
// 00534386  e855faffff           call 0x533de0
// 0053438b  6868768500           push 0x857668
// 00534390  8d442404             lea eax, [esp + 4]
// 00534394  50                   push eax
// 00534395  e804c80f00           call 0x630b9e

struct Context
{
    int identity;
    static Context& current();
    void requirePermission(int permission, const char* operation) const;
};

struct S
{
    void f();
};

void S::f()
{
    Context ctx;
    Context::current();
    ctx.requirePermission(4, (const char*)0x857668);
}
