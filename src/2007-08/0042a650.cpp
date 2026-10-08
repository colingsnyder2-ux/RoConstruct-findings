// from server: 69% by colin
// roc 2007-08 0042a650  unit: CLuaHtmlView  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a650
//
// 0042a650  56                   push esi
// 0042a651  8bf1                 mov esi, ecx
// 0042a653  833e00               cmp dword ptr [esi], 0
// 0042a656  7410                 je 0x42a668
// 0042a658  8b4604               mov eax, dword ptr [esi + 4]
// 0042a65b  8b0e                 mov ecx, dword ptr [esi]
// 0042a65d  6a01                 push 1
// 0042a65f  50                   push eax
// 0042a660  ffd1                 call ecx
// 0042a662  83c408               add esp, 8
// 0042a665  894604               mov dword ptr [esi + 4], eax
// 0042a668  c7460800000000       mov dword ptr [esi + 8], 0
// 0042a66f  c70600000000         mov dword ptr [esi], 0
// 0042a675  5e                   pop esi
// 0042a676  c3                   ret 

struct CLuaHtmlView {
    int (__stdcall *field0)(int, int);
    int field4;
    int field8;
    void func();
};

void CLuaHtmlView::func() {
    if (field0 == 0) {
        field4 = field0(field4, 1);
    }
    field8 = 0;
    field0 = 0;
}
