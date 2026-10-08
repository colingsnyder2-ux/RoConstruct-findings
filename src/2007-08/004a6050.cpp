// from server: 95% by colin
// roc 2007-08 004a6050  unit: RBX::JointsService  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004a6050
//
// 004a6050  8b442404             mov eax, dword ptr [esp + 4]
// 004a6054  6a00                 push 0
// 004a6056  6834158900           push 0x891534
// 004a605b  684c1f8800           push 0x881f4c
// 004a6060  6a00                 push 0
// 004a6062  50                   push eax
// 004a6063  e8ceac1800           call 0x630d36
// 004a6068  83c414               add esp, 0x14
// 004a606b  f7d8                 neg eax
// 004a606d  1bc0                 sbb eax, eax
// 004a606f  f7d8                 neg eax
// 004a6071  c20400               ret 4

extern "C" int __stdcall sub_630d36(int, int, int, int, int);

struct RBX_JointsService {
    int isA(const char* className);
};

int RBX_JointsService::isA(const char* className) {
    int result = sub_630d36((int)className, 0, 0x881f4c, 0x891534, 0);
    return result != 0;
}
