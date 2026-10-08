// from server: 59% by colin
// roc 2007-08 004a8c90  unit: RBX::Network::VClient::?$FactoryProduct  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a8c90
//
// 004a8c90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004a8c94  83ec0c               sub esp, 0xc
// 004a8c97  8d0424               lea eax, [esp]
// 004a8c9a  50                   push eax
// 004a8c9b  e8e0f2ffff           call 0x4a7f80
// 004a8ca0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 004a8ca4  50                   push eax
// 004a8ca5  51                   push ecx
// 004a8ca6  e8257bffff           call 0x4a07d0
// 004a8cab  83c414               add esp, 0x14
// 004a8cae  c3                   ret 

struct S {
    int f(int);
};

extern "C" int __cdecl sub_4A7F80(int*);
extern "C" int __cdecl sub_4A07D0(int, int);

int S::f(int a) {
    int buf[3];
    int r = sub_4A7F80(buf);
    return sub_4A07D0(a, r);
}
