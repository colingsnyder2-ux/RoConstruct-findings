// from server: 68% by colin
// roc 2007-08 00563b70  unit: RBX::RunCommand  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00563b70
//
// 00563b70  56                   push esi
// 00563b71  57                   push edi
// 00563b72  8bf9                 mov edi, ecx
// 00563b74  8b770c               mov esi, dword ptr [edi + 0xc]
// 00563b77  e814a7ffff           call 0x55e290
// 00563b7c  6a01                 push 1
// 00563b7e  8d4f10               lea ecx, [edi + 0x10]
// 00563b81  e8bae6ffff           call 0x562240
// 00563b86  80b8ac01000000       cmp byte ptr [eax + 0x1ac], 0
// 00563b8d  5f                   pop edi
// 00563b8e  5e                   pop esi
// 00563b8f  750f                 jne 0x563ba0
// 00563b91  c744240401000000     mov dword ptr [esp + 4], 1
// 00563b99  8bc8                 mov ecx, eax
// 00563b9b  e9e09bfcff           jmp 0x52d780
// 00563ba0  c20400               ret 4

struct RunCommand {
    char pad[0xc];
    int field_c;
    char pad2[0x4];
    int field_10;
    bool isEnabled() const;
    void doIt(int);
};

struct DataState {
    char pad[0x1ac];
    bool flag_1ac;
};

extern "C" int __stdcall sub_55e290();
extern "C" DataState* __stdcall sub_562240(int*, int);
extern "C" void __stdcall sub_52d780(DataState*);

bool RunCommand::isEnabled() const {
    int* p = (int*)&field_10;
    DataState* ds = sub_562240(p, 1);
    if (ds->flag_1ac) {
        return true;
    }
    return false;
}

void RunCommand::doIt(int) {
    sub_55e290();
    if (!isEnabled()) {
        sub_52d780((DataState*)0);
    }
}
