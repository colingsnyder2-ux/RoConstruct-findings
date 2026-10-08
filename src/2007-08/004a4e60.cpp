// from server: 89% by colin
// roc 2007-08 004a4e60  unit: FilePacketLogger  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a4e60
//
// 004a4e60  8b442404             mov eax, dword ptr [esp + 4]
// 004a4e64  6a00                 push 0
// 004a4e66  684cf88800           push 0x88f84c
// 004a4e6b  684c1f8800           push 0x881f4c
// 004a4e70  6a00                 push 0
// 004a4e72  50                   push eax
// 004a4e73  e8bebe1800           call 0x630d36
// 004a4e78  83c414               add esp, 0x14
// 004a4e7b  85c0                 test eax, eax
// 004a4e7d  7412                 je 0x4a4e91
// 004a4e7f  80b8101e000000       cmp byte ptr [eax + 0x1e10], 0
// 004a4e86  7409                 je 0x4a4e91
// 004a4e88  6a00                 push 0
// 004a4e8a  8bc8                 mov ecx, eax
// 004a4e8c  e89fc70900           call 0x541630
// 004a4e91  c3                   ret 

struct Instance {
    char pad[0x1e10];
    char flag;
};

struct Replicator {
    void method();
};

extern "C" Instance* __cdecl sub_630d36(Instance* inst, int a, int b, int c, int d);

void __cdecl sub_4a4e60(Instance* inst)
{
    Instance* result = sub_630d36(inst, 0, 0x881f4c, 0x88f84c, 0);
    if (result != 0 && result->flag != 0) {
        ((Replicator*)result)->method();
    }
}
