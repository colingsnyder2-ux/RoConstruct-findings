// from server: 100% by king_originala
// roc 2008-06 00619d00  unit: RBX::DecalTool  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619d00
//
// 00619d00  8b442404             mov eax, dword ptr [esp + 4]
// 00619d04  8b4008               mov eax, dword ptr [eax + 8]
// 00619d07  56                   push esi
// 00619d08  8bf1                 mov esi, ecx
// 00619d0a  83f87f               cmp eax, 0x7f
// 00619d0d  740b                 je 0x619d1a
// 00619d0f  83f81b               cmp eax, 0x1b
// 00619d12  7406                 je 0x619d1a
// 00619d14  8bc6                 mov eax, esi
// 00619d16  5e                   pop esi
// 00619d17  c20400               ret 4
// 00619d1a  8b16                 mov edx, dword ptr [esi]
// 00619d1c  8b4228               mov eax, dword ptr [edx + 0x28]
// 00619d1f  ffd0                 call eax
// 00619d21  8b4e48               mov ecx, dword ptr [esi + 0x48]
// 00619d24  85c9                 test ecx, ecx
// 00619d26  7407                 je 0x619d2f
// 00619d28  6a00                 push 0
// 00619d2a  e8c10bf4ff           call 0x55a8f0
// 00619d2f  33c0                 xor eax, eax
// 00619d31  5e                   pop esi
// 00619d32  c20400               ret 4

struct Input {
    char padding[8];
    int key;
};

struct Owner {
    void set(int value);
};

struct Tool {
    virtual void v0();
    virtual void v1();
    virtual void v2();
    virtual void v3();
    virtual void v4();
    virtual void v5();
    virtual void v6();
    virtual void v7();
    virtual void v8();
    virtual void v9();
    virtual void cancel();

    char padding[0x44];
    Owner* owner;

    Tool* handle(const Input* input);
};

Tool* Tool::handle(const Input* input)
{
    if (input->key == 0x7f || input->key == 0x1b) {
        cancel();
        if (owner)
            owner->set(0);
        return 0;
    }
    return this;
}
