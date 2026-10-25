// from server: 56% by atomic.potato
// roc 2010-06 005f4b30  unit: RBX::RootInstance  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005f4b30
//
// 005f4b30  85c9                 test ecx, ecx
// 005f4b32  7448                 je 0x5f4b7c
// 005f4b34  8b414c               mov eax, dword ptr [ecx + 0x4c]
// 005f4b37  85c0                 test eax, eax
// 005f4b39  740e                 je 0x5f4b49
// 005f4b3b  8b484c               mov ecx, dword ptr [eax + 0x4c]
// 005f4b3e  85c9                 test ecx, ecx
// 005f4b40  7409                 je 0x5f4b4b
// 005f4b42  e889c0e7ff           call 0x470bd0
// 005f4b47  eb02                 jmp 0x5f4b4b
// 005f4b49  8bc1                 mov eax, ecx
// 005f4b4b  85c0                 test eax, eax
// 005f4b4d  742d                 je 0x5f4b7c
// 005f4b4f  6a00                 push 0
// 005f4b51  6850ccb700           push 0xb7cc50
// 005f4b56  68408eb700           push 0xb78e40
// 005f4b5b  6a00                 push 0
// 005f4b5d  50                   push eax
// 005f4b5e  e887401b00           call 0x7a8bea
// 005f4b63  83c414               add esp, 0x14
// 005f4b66  85c0                 test eax, eax
// 005f4b68  7412                 je 0x5f4b7c
// 005f4b6a  8bc8                 mov ecx, eax
// 005f4b6c  e89fbbebff           call 0x4b0710
// 005f4b71  85c0                 test eax, eax
// 005f4b73  7407                 je 0x5f4b7c
// 005f4b75  8bc8                 mov ecx, eax
// 005f4b77  e9c42c0100           jmp 0x607840
// 005f4b7c  c20400               ret 4

struct RBX_Instance {
    char pad[0x4c];
    RBX_Instance* field_4c;
    int getSomething();
};

extern "C" int __stdcall sub_7a8bea(void*, void*, void*, void*, void*);
extern "C" int __stdcall sub_470bd0();
extern "C" int __stdcall sub_4b0710();
extern "C" int __stdcall sub_607840();

int RBX_Instance::getSomething() {
    if (this == 0)
        return 0;
    RBX_Instance* p = this->field_4c;
    if (p != 0) {
        RBX_Instance* q = p->field_4c;
        if (q != 0) {
            sub_470bd0();
        } else {
            p = q;
        }
    } else {
        p = this;
    }
    if (p == 0)
        return 0;
    int r = sub_7a8bea(p, 0, (void*)0xb78e40, (void*)0xb7cc50, 0);
    if (r == 0)
        return 0;
    int s = sub_4b0710();
    if (s == 0)
        return 0;
    return sub_607840();
}
