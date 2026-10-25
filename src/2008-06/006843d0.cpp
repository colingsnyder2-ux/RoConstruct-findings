// from server: 100% by king_originala
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

extern "C" void __cdecl sub_6832B0();

struct OgreTwoDManager {
    char pad[8];
    char byte8;
    char byte9;
    void method(int, int, int);
};

void OgreTwoDManager::method(int a, int b, int c)
{
    if (byte9 == 0)
        return;
    if ((char)a != byte8)
        return;
    sub_6832B0();
}
