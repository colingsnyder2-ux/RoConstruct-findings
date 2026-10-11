// from server: 74% by tester
// roc 2008-06 006843d0  unit: Ogre::TwoDManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006843d0
//
// 006843d0  80790900             cmp byte ptr [ecx + 9], 0
// 006843d4  740e                 je 0x6843e4
// 006843d6  8a442404             mov al, byte ptr [esp + 4]
// 006843da  3a4108               cmp al, byte ptr [ecx + 8]
// 006843dd  7505                 jne 0x6843e4
// 006843df  e8cceeffff           call 0x6832b0
// 006843e4  c20c00               ret 0xc

extern "C" void __stdcall sub_6832b0();

struct TwoDManager {
    char pad0[8];
    char field8;
    char field9;
    void method();
};

void TwoDManager::method() {
    if (field9 != 0 && *(char*)((char*)this + 4) == field8) {
        sub_6832b0();
    }
}
