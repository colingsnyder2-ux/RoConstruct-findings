// roc 2007-03 007025e0  unit: seg_00700000  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 007025e0
//
// 007025e0  56                   push esi
// 007025e1  8bf1                 mov esi, ecx
// 007025e3  e878fdffff           call 0x702360
// 007025e8  84c0                 test al, al
// 007025ea  753d                 jne 0x702629
// 007025ec  8bce                 mov ecx, esi
// 007025ee  e8dfc0f1ff           call 0x61e6d2
// 007025f3  8b4678               mov eax, dword ptr [esi + 0x78]
// 007025f6  39467c               cmp dword ptr [esi + 0x7c], eax
// 007025f9  7512                 jne 0x70260d
// 007025fb  83f8ff               cmp eax, -1
// 007025fe  740d                 je 0x70260d
// 00702600  8b16                 mov edx, dword ptr [esi]
// 00702602  50                   push eax
// 00702603  8b823c010000         mov eax, dword ptr [edx + 0x13c]
// 00702609  8bce                 mov ecx, esi
// 0070260b  ffd0                 call eax
// 0070260d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00702610  6a00                 push 0
// 00702612  6a00                 push 0
// 00702614  51                   push ecx
// 00702615  c7467cffffffff       mov dword ptr [esi + 0x7c], 0xffffffff
// 0070261c  c74678ffffffff       mov dword ptr [esi + 0x78], 0xffffffff
// 00702623  ff1554ee7700         call dword ptr [0x77ee54]
// 00702629  5e                   pop esi
// 0070262a  c20c00               ret 0xc
// copied from an identical function in another client (function ?sub_711280@CXTColorSelectorCtrl@ns_ROCX00000c@@QAEXHHH@Z)

namespace ns_ROCX00000c {
struct CXTColorSelectorCtrl {
    char pad[0x20];
    void* hwnd;
    char pad2[0x54];
    int field_78;
    int field_7c;
    bool sub_710fd0();
    void sub_63023e();
    void sub_711280(int, int, int);
};

extern "C" int (__stdcall *g_InvalidateRect)(void*, const void*, int);

void CXTColorSelectorCtrl::sub_711280(int a, int b, int c)
{
    if (sub_710fd0())
        return;
    sub_63023e();
    int v = field_78;
    if (field_7c == v && v != -1)
    {
        void** vt = *(void***)this;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[0x13c / 4];
        fn(this, v);
    }
    void* h = hwnd;
    field_7c = -1;
    field_78 = -1;
    g_InvalidateRect(h, 0, 0);
}
}
