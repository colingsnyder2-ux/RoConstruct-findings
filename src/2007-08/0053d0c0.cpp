// from server: 100% by colin
// roc 2007-08 0053d0c0  unit: RBX::ScriptContext  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053d0c0
//
// 0053d0c0  80b94401000000       cmp byte ptr [ecx + 0x144], 0
// 0053d0c7  7405                 je 0x53d0ce
// 0053d0c9  e8d2feffff           call 0x53cfa0
// 0053d0ce  c20400               ret 4

struct RBX_ScriptContext {
    char pad[0x144];
    bool flag;
    void helper();
    void func(int);
};

void RBX_ScriptContext::func(int)
{
    if (flag)
        helper();
}
