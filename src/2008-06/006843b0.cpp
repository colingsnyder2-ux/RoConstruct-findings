// from server: 100% by colin
// roc 2008-06 006843b0  unit: Ogre::TwoDManager  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006843b0
//
// 006843b0  80790900             cmp byte ptr [ecx + 9], 0
// 006843b4  750e                 jne 0x6843c4
// 006843b6  8a442404             mov al, byte ptr [esp + 4]
// 006843ba  3a4108               cmp al, byte ptr [ecx + 8]
// 006843bd  7505                 jne 0x6843c4
// 006843bf  e8eceeffff           call 0x6832b0
// 006843c4  c20c00               ret 0xc

extern "C" void __cdecl sub_6832B0();

struct OgreTwoDManager {
    char pad[8];
    char byte8;
    char byte9;
    void method(int, int, int);
};

void OgreTwoDManager::method(int a, int b, int c)
{
    if (byte9 != 0)
        return;
    if ((char)a != byte8)
        return;
    sub_6832B0();
}
