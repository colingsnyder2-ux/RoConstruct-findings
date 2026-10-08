// from server: 68% by colin
// roc 2007-08 005b1020  unit: RBX::AutoJoint  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005b1020
//
// 005b1020  8b442404             mov eax, dword ptr [esp + 4]
// 005b1024  56                   push esi
// 005b1025  8bf1                 mov esi, ecx
// 005b1027  8b8ef8000000         mov ecx, dword ptr [esi + 0xf8]
// 005b102d  50                   push eax
// 005b102e  6a01                 push 1
// 005b1030  e86b900500           call 0x60a0a0
// 005b1035  68905e8c00           push 0x8c5e90
// 005b103a  8bce                 mov ecx, esi
// 005b103c  e8cf36e9ff           call 0x444710
// 005b1041  5e                   pop esi
// 005b1042  c20400               ret 4

struct AutoJoint {
    char pad[0xf8];
    int field_f8;
    void sub_5B1020(int);
};

extern "C" void __stdcall sub_60A0A0(int, int, int);
extern "C" void __stdcall sub_444710();

void AutoJoint::sub_5B1020(int arg) {
    int* self = (int*)this;
    sub_60A0A0(self[0xf8 / 4], 1, arg);
    sub_444710();
}
