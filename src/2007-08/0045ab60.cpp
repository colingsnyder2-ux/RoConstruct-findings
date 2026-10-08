// from server: 100% by colin
// roc 2007-08 0045ab60  unit: RBX::Stats::StatsService  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045ab60
//
// 0045ab60  8b442404             mov eax, dword ptr [esp + 4]
// 0045ab64  6a00                 push 0
// 0045ab66  68d49a8800           push 0x889ad4
// 0045ab6b  684c1f8800           push 0x881f4c
// 0045ab70  6a00                 push 0
// 0045ab72  50                   push eax
// 0045ab73  e8be611d00           call 0x630d36
// 0045ab78  83c414               add esp, 0x14
// 0045ab7b  f7d8                 neg eax
// 0045ab7d  1bc0                 sbb eax, eax
// 0045ab7f  f7d8                 neg eax
// 0045ab81  c20400               ret 4

struct StatsService {
    bool construct(const char* name);
};

extern "C" int __cdecl sub_630D36(int, int, int, int, int);

bool StatsService::construct(const char* name) {
    int r = sub_630D36((int)name, 0, 0x881f4c, 0x889ad4, 0);
    return r != 0;
}
