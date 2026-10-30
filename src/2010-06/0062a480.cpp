// roc 2010-06 0062a480  unit: RBX::DataModel  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0062a480
//
// 0062a480  a1a421bb00           mov eax, dword ptr [0xbb21a4]
// 0062a485  8b542404             mov edx, dword ptr [esp + 4]
// 0062a489  8d04c0               lea eax, [eax + eax*8]
// 0062a48c  0382c8010000         add eax, dword ptr [edx + 0x1c8]
// 0062a492  8b542408             mov edx, dword ptr [esp + 8]
// 0062a496  8d04c0               lea eax, [eax + eax*8]
// 0062a499  0382c8010000         add eax, dword ptr [edx + 0x1c8]
// 0062a49f  8a840838080000       mov al, byte ptr [eax + ecx + 0x838]
// 0062a4a6  c20800               ret 8
// copied from an identical function in another client (function ?f@DataModel@ns_ROCX00000b@@QAEEHH@Z)

namespace ns_ROCX00000b {
extern int g_00b3bf0c;

struct DataModel
{
    unsigned char f(int, int);
};

unsigned char DataModel::f(int a, int b)
{
    int x = g_00b3bf0c * 9 + *(int *)((char *)a + 0x1c8);
    x = x * 9 + *(int *)((char *)b + 0x1c8);
    return *((unsigned char *)((char *)this + x + 0x838));
}
}
