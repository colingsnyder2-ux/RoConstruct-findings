// from server: 81% by colin
// roc 2007-08 006dbd80  unit: CXTPDockingPaneAutoHidePanel::CPanelDropTarget  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dbd80
//
// 006dbd80  56                   push esi
// 006dbd81  8b742408             mov esi, dword ptr [esp + 8]
// 006dbd85  8d4e54               lea ecx, [esi + 0x54]
// 006dbd88  e8c3470000           call 0x6e0550
// 006dbd8d  8b80a0000000         mov eax, dword ptr [eax + 0xa0]
// 006dbd93  83b8b000000000       cmp dword ptr [eax + 0xb0], 0
// 006dbd9a  7437                 je 0x6dbdd3
// 006dbd9c  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 006dbda0  8b542414             mov edx, dword ptr [esp + 0x14]
// 006dbda4  51                   push ecx
// 006dbda5  52                   push edx
// 006dbda6  8bce                 mov ecx, esi
// 006dbda8  e863f0ffff           call 0x6dae10
// 006dbdad  85c0                 test eax, eax
// 006dbdaf  7422                 je 0x6dbdd3
// 006dbdb1  8b8ea8000000         mov ecx, dword ptr [esi + 0xa8]
// 006dbdb7  85c9                 test ecx, ecx
// 006dbdb9  740e                 je 0x6dbdc9
// 006dbdbb  8b89e4000000         mov ecx, dword ptr [ecx + 0xe4]
// 006dbdc1  3981a0010000         cmp dword ptr [ecx + 0x1a0], eax
// 006dbdc7  740a                 je 0x6dbdd3
// 006dbdc9  6a00                 push 0
// 006dbdcb  50                   push eax
// 006dbdcc  8bce                 mov ecx, esi
// 006dbdce  e84dfdffff           call 0x6dbb20
// 006dbdd3  33c0                 xor eax, eax
// 006dbdd5  5e                   pop esi
// 006dbdd6  c21400               ret 0x14

struct PanelDropTarget {
    char pad[0x54];
    int field_54;
    char pad2[0xa8 - 0x58];
    int field_a8;

    int __thiscall func_006dbd80(int a, int b, int c, int d, int e);
};

struct Inner {
    char pad[0xa0];
    int field_a0;
};

struct Inner2 {
    char pad[0xb0];
    int field_b0;
};

struct Inner3 {
    char pad[0xe4];
    int field_e4;
};

struct Inner4 {
    char pad[0x1a0];
    int field_1a0;
};

struct Helper {
    Inner* func_006e0550();
};

extern int __stdcall func_006dae10(PanelDropTarget*, int, int);
extern void __stdcall func_006dbb20(PanelDropTarget*, int, int);

int __thiscall PanelDropTarget::func_006dbd80(int a, int b, int c, int d, int e)
{
    Helper* h = (Helper*)&this->field_54;
    Inner* p = h->func_006e0550();
    Inner2* q = (Inner2*)p->field_a0;
    if (q->field_b0 != 0) {
        int r = func_006dae10(this, c, d);
        if (r != 0) {
            int v = this->field_a8;
            if (v != 0) {
                Inner3* w = (Inner3*)v;
                Inner4* x = (Inner4*)w->field_e4;
                if (x->field_1a0 == r) {
                    return 0;
                }
            }
            func_006dbb20(this, r, 0);
        }
    }
    return 0;
}
