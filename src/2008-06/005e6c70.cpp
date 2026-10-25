// from server: 100% by king_originala
// roc 2008-06 005e6c70  unit: RBX::Clump  size: 42 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e6c70
//
// 005e6c70  56                   push esi
// 005e6c71  8bf1                 mov esi, ecx
// 005e6c73  807e1400             cmp byte ptr [esi + 0x14], 0
// 005e6c77  7418                 je 0x5e6c91
// 005e6c79  57                   push edi
// 005e6c7a  6a00                 push 0
// 005e6c7c  8d7e08               lea edi, [esi + 8]
// 005e6c7f  6a00                 push 0
// 005e6c81  8bcf                 mov ecx, edi
// 005e6c83  e8b8f8ffff           call 0x5e6540
// 005e6c88  57                   push edi
// 005e6c89  8bce                 mov ecx, esi
// 005e6c8b  e810ffffff           call 0x5e6ba0
// 005e6c90  5f                   pop edi
// 005e6c91  c6461400             mov byte ptr [esi + 0x14], 0
// 005e6c95  8d4608               lea eax, [esi + 8]
// 005e6c98  5e                   pop esi
// 005e6c99  c3                   ret 

struct Value {
    char data[12];
    void set(int, int);
};

struct Clump {
    char padding[8];
    Value value;
    bool dirty;

    void update(Value*);
    Value* getValue();
};

Value* Clump::getValue()
{
    if (dirty) {
        value.set(0, 0);
        update(&value);
    }
    dirty = false;
    return &value;
}
