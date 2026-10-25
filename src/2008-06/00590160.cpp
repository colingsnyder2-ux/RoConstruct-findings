// from server: 100% by tester
// roc 2008-06 00590160  unit: RBX::RootInstance  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590160
//
// 00590160  8b442404             mov eax, dword ptr [esp + 4]
// 00590164  56                   push esi
// 00590165  50                   push eax
// 00590166  8bf1                 mov esi, ecx
// 00590168  e8b344ffff           call 0x584620
// 0059016d  c686b002000001       mov byte ptr [esi + 0x2b0], 1
// 00590174  5e                   pop esi
// 00590175  c20400               ret 4

struct RootInstance {
    char pad[0x2b0];
    bool flag;
    void setInsertPoint(int value);
};

extern "C" void __stdcall sub_531040(int value);

void RootInstance::setInsertPoint(int value) {
    sub_531040(value);
    flag = true;
}
