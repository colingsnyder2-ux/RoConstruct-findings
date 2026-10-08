// from server: 89% by colin
// roc 2007-08 005b0ff0  unit: RBX::AutoJoint  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b0ff0
//
// 005b0ff0  8b442404             mov eax, dword ptr [esp + 4]
// 005b0ff4  56                   push esi
// 005b0ff5  8bf1                 mov esi, ecx
// 005b0ff7  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005b0ffd  50                   push eax
// 005b0ffe  6a00                 push 0
// 005b1000  e89b900500           call 0x60a0a0
// 005b1005  683c5e8c00           push 0x8c5e3c
// 005b100a  8bce                 mov ecx, esi
// 005b100c  e8ff36e9ff           call 0x444710
// 005b1011  5e                   pop esi
// 005b1012  c20400               ret 4

struct AutoJoint {
    char pad[0xf8];
    void* field_f8;
    void destroy(void*);
};

extern "C" void __stdcall sub_60A0A0(void*, int, void*);
extern "C" void __stdcall sub_444710(void*, const void*);

void AutoJoint::destroy(void* arg) {
    sub_60A0A0(field_f8, 0, arg);
    sub_444710(this, (const void*)0x8c5e3c);
}
