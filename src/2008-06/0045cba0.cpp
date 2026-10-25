// from server: 100% by king_originala
// roc 2008-06 0045cba0  unit: CRobloxWnd  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045cba0
//
// 0045cba0  8b442404             mov eax, dword ptr [esp + 4]
// 0045cba4  83e800               sub eax, 0
// 0045cba7  56                   push esi
// 0045cba8  8bf1                 mov esi, ecx
// 0045cbaa  7424                 je 0x45cbd0
// 0045cbac  83e801               sub eax, 1
// 0045cbaf  752b                 jne 0x45cbdc
// 0045cbb1  394670               cmp dword ptr [esi + 0x70], eax
// 0045cbb4  7426                 je 0x45cbdc
// 0045cbb6  8b8e84000000         mov ecx, dword ptr [esi + 0x84]
// 0045cbbc  85c9                 test ecx, ecx
// 0045cbbe  741c                 je 0x45cbdc
// 0045cbc0  e85bbf0000           call 0x468b20
// 0045cbc5  8bce                 mov ecx, esi
// 0045cbc7  e89c402400           call 0x6a0c68
// 0045cbcc  5e                   pop esi
// 0045cbcd  c20400               ret 4
// 0045cbd0  e8dbf2ffff           call 0x45beb0
// 0045cbd5  8bce                 mov ecx, esi
// 0045cbd7  e8b4fcffff           call 0x45c890
// 0045cbdc  8bce                 mov ecx, esi
// 0045cbde  e885402400           call 0x6a0c68
// 0045cbe3  5e                   pop esi
// 0045cbe4  c20400               ret 4

struct Interface {
    void update();
};

struct CRobloxWnd {
    char padding0[0x70];
    int active;
    char padding1[0x10];
    Interface* interfacePtr;

    void start();
    void refresh();
    void finish();
    void handle(int state);
};

void CRobloxWnd::handle(int state)
{
    switch (state) {
    case 0:
        start();
        refresh();
        break;
    case 1:
        if (active && interfacePtr)
            interfacePtr->update();
        break;
    }
    finish();
}
