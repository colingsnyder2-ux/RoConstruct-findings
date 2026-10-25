// from server: 100% by tester
// roc 2008-06 005b06a0  unit: RBX::ScriptContext  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b06a0
//
// 005b06a0  80b9ac01000000       cmp byte ptr [ecx + 0x1ac], 0
// 005b06a7  7405                 je 0x5b06ae
// 005b06a9  e8e2feffff           call 0x5b0590
// 005b06ae  c20400               ret 4

struct RBX_ScriptContext {
    char pad[0x1ac];
    bool flag;
    void helper();
    void func(int);
};

void RBX_ScriptContext::func(int)
{
    if (flag)
        helper();
}
