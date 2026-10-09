// from server: 67% by colin
// roc 2007-08 00493110  unit: RBX::Network::Players  size: 97 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00493110
//
// 00493110  56                   push esi
// 00493111  8bf1                 mov esi, ecx
// 00493113  8b8638010000         mov eax, dword ptr [esi + 0x138]
// 00493119  39442408             cmp dword ptr [esp + 8], eax
// 0049311d  754e                 jne 0x49316d
// 0049311f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00493123  813910de8b00         cmp dword ptr [ecx], 0x8bde10
// 00493129  7542                 jne 0x49316d
// 0049312b  85c0                 test eax, eax
// 0049312d  7429                 je 0x493158
// 0049312f  8b0d28de8b00         mov ecx, dword ptr [0x8bde28]
// 00493135  8b11                 mov edx, dword ptr [ecx]
// 00493137  83c004               add eax, 4
// 0049313a  50                   push eax
// 0049313b  8b4204               mov eax, dword ptr [edx + 4]
// 0049313e  ffd0                 call eax
// 00493140  88442408             mov byte ptr [esp + 8], al
// 00493144  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00493148  51                   push ecx
// 00493149  8d8e00010000         lea ecx, [esi + 0x100]
// 0049314f  e86cf4ffff           call 0x4925c0
// 00493154  5e                   pop esi
// 00493155  c20800               ret 8
// 00493158  c644240800           mov byte ptr [esp + 8], 0
// 0049315d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00493161  51                   push ecx
// 00493162  8d8e00010000         lea ecx, [esi + 0x100]
// 00493168  e853f4ffff           call 0x4925c0
// 0049316d  5e                   pop esi
// 0049316e  c20800               ret 8

struct Players {
    char pad[0x100];
    char field_100[0x38];
    int field_138;
    void method_4925c0(unsigned char);
    void func_493110(int, int*);
};

void Players::func_493110(int a, int* b)
{
    if (a == this->field_138 && *b == 0x8bde10) {
        if (this->field_138 != 0) {
            int* p = *(int**)0x8bde28;
            int (*fn)(int*) = (int (*)(int*))p[1];
            unsigned char r = (unsigned char)fn(&this->field_138 + 1);
            this->method_4925c0(r);
        } else {
            this->method_4925c0(0);
        }
    }
}
