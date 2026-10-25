// from server: 100% by king_originala
// roc 2008-06 00449ae0  unit: CIDEDocManager  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00449ae0
//
// 00449ae0  8b442414             mov eax, dword ptr [esp + 0x14]
// 00449ae4  85c0                 test eax, eax
// 00449ae6  7503                 jne 0x449aeb
// 00449ae8  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00449aeb  89442414             mov dword ptr [esp + 0x14], eax
// 00449aef  e9c0762500           jmp 0x6a11b4

struct CIDEDocManager {
    unsigned char padding[36];
    int defaultValue;

    int forward(int a, int b, int c, int d, int e);
    int f(int a, int b, int c, int d, int e);
};

int CIDEDocManager::f(int a, int b, int c, int d, int e)
{
    if (!e)
        e = defaultValue;
    return forward(a, b, c, d, e);
}
