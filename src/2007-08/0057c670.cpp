// from server: 77% by colin
// roc 2007-08 0057c670  unit: RBX::Workspace  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0057c670
//
// 0057c670  83ec0c               sub esp, 0xc
// 0057c673  56                   push esi
// 0057c674  8bf1                 mov esi, ecx
// 0057c676  8d8630fdffff         lea eax, [esi - 0x2d0]
// 0057c67c  6a01                 push 1
// 0057c67e  50                   push eax
// 0057c67f  e86c4ff1ff           call 0x4915f0
// 0057c684  83c408               add esp, 8
// 0057c687  84c0                 test al, al
// 0057c689  741f                 je 0x57c6aa
// 0057c68b  807e6800             cmp byte ptr [esi + 0x68], 0
// 0057c68f  7519                 jne 0x57c6aa
// 0057c691  8d4c2414             lea ecx, [esp + 0x14]
// 0057c695  51                   push ecx
// 0057c696  8d542408             lea edx, [esp + 8]
// 0057c69a  52                   push edx
// 0057c69b  8d4e6c               lea ecx, [esi + 0x6c]
// 0057c69e  e80d630600           call 0x5e29b0
// 0057c6a3  5e                   pop esi
// 0057c6a4  83c40c               add esp, 0xc
// 0057c6a7  c20800               ret 8
// 0057c6aa  8b442414             mov eax, dword ptr [esp + 0x14]
// 0057c6ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0057c6b2  50                   push eax
// 0057c6b3  e8280afcff           call 0x53d0e0
// 0057c6b8  5e                   pop esi
// 0057c6b9  83c40c               add esp, 0xc
// 0057c6bc  c20800               ret 8

struct Workspace {
    char pad0[0x68];
    bool flag68;
    char pad1[0x3];
    char field6c[0x8];

    void method(int a, int b);
};

extern bool __stdcall func4915f0(void*, int);
extern void __stdcall func5e29b0(void*, int*, char*);
extern void __stdcall func53d0e0(int, int);

void Workspace::method(int a, int b) {
    char local1;
    int local2;
    if (func4915f0((char*)this - 0x2d0, 1)) {
        if (!flag68) {
            func5e29b0(field6c, &local2, &local1);
            return;
        }
    }
    func53d0e0(a, b);
}
