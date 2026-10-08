// from server: 100% by colin
// roc 2007-08 005d4620  unit: RBX::Mouse  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005d4620
//
// 005d4620  8b442404             mov eax, dword ptr [esp + 4]
// 005d4624  56                   push esi
// 005d4625  8bf1                 mov esi, ecx
// 005d4627  3b866c010000         cmp eax, dword ptr [esi + 0x16c]
// 005d462d  7412                 je 0x5d4641
// 005d462f  50                   push eax
// 005d4630  e86bfeffff           call 0x5d44a0
// 005d4635  68f0698c00           push 0x8c69f0
// 005d463a  8bce                 mov ecx, esi
// 005d463c  e8cf00e7ff           call 0x444710
// 005d4641  5e                   pop esi
// 005d4642  c20400               ret 4

struct Mouse {
    char pad[0x16c];
    int field_16c;
    void sub_5d44a0(int);
    void sub_444710(const char*);
    void setCommand(int value);
};

void Mouse::setCommand(int value) {
    if (value != this->field_16c) {
        this->sub_5d44a0(value);
        this->sub_444710((const char*)0x8c69f0);
    }
}
