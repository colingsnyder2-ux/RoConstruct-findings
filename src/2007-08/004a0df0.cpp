// from server: 64% by colin
// roc 2007-08 004a0df0  unit: RBX::Network::VServer::?$BoundFuncDesc  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a0df0
//
// 004a0df0  8b442408             mov eax, dword ptr [esp + 8]
// 004a0df4  8b09                 mov ecx, dword ptr [ecx]
// 004a0df6  50                   push eax
// 004a0df7  e8a4330000           call 0x4a41a0
// 004a0dfc  6a01                 push 1
// 004a0dfe  6a20                 push 0x20
// 004a0e00  8d4c2410             lea ecx, [esp + 0x10]
// 004a0e04  51                   push ecx
// 004a0e05  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004a0e09  89442414             mov dword ptr [esp + 0x14], eax
// 004a0e0d  e87eefffff           call 0x49fd90
// 004a0e12  c20800               ret 8

struct BoundFuncDesc {
    void construct(int a, int b);
};

extern "C" int __cdecl sub_4A41A0(int);
extern "C" void __cdecl sub_49FD90(int*, int, int);

void BoundFuncDesc::construct(int a, int b)
{
    int r = sub_4A41A0(b);
    sub_49FD90(&r, 0x20, 1);
}
