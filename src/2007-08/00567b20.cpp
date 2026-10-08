// from server: 100% by colin
// roc 2007-08 00567b20  unit: RBX::RootInstance  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567b20
//
// 00567b20  8b442404             mov eax, dword ptr [esp + 4]
// 00567b24  56                   push esi
// 00567b25  50                   push eax
// 00567b26  8bf1                 mov esi, ecx
// 00567b28  e81395fcff           call 0x531040
// 00567b2d  c6864802000001       mov byte ptr [esi + 0x248], 1
// 00567b34  5e                   pop esi
// 00567b35  c20400               ret 4

struct RootInstance {
    char pad[0x248];
    bool flag;
    void setInsertPoint(int value);
};

extern "C" void __stdcall sub_531040(int value);

void RootInstance::setInsertPoint(int value) {
    sub_531040(value);
    flag = true;
}
