// from server: 59% by colin
// roc 2007-08 004a8c70  unit: RBX::Network::VClient::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8c70
//
// 004a8c70  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a8c74  83ec0c               sub esp, 0xc
// 004a8c77  8d0424               lea eax, [esp]
// 004a8c7a  50                   push eax
// 004a8c7b  e8a0f2ffff           call 0x4a7f20
// 004a8c80  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8c84  50                   push eax
// 004a8c85  51                   push ecx
// 004a8c86  e8457bffff           call 0x4a07d0
// 004a8c8b  83c414               add esp, 0x14
// 004a8c8e  c3                   ret 

struct S {
    int f(int);
};

extern "C" int __cdecl sub_4A7F20(int*);
extern "C" int __cdecl sub_4A07D0(int, int);

int S::f(int a) {
    int buf[3];
    int r = sub_4A7F20(buf);
    return sub_4A07D0(a, r);
}
