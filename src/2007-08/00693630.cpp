// from server: 66% by colin
// roc 2007-08 00693630  unit: CXTPStatusBar::CStatusCmdUI  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00693630
//
// 00693630  8bd1                 mov edx, ecx
// 00693632  8b4208               mov eax, dword ptr [edx + 8]
// 00693635  56                   push esi
// 00693636  8b7214               mov esi, dword ptr [edx + 0x14]
// 00693639  50                   push eax
// 0069363a  8bce                 mov ecx, esi
// 0069363c  c7421801000000       mov dword ptr [edx + 0x18], 1
// 00693643  e8d8f7ffff           call 0x692e20
// 00693648  25fffffffb           and eax, 0xfbffffff
// 0069364d  837c240800           cmp dword ptr [esp + 8], 0
// 00693652  7505                 jne 0x693659
// 00693654  0d00000004           or eax, 0x4000000
// 00693659  8b4a08               mov ecx, dword ptr [edx + 8]
// 0069365c  50                   push eax
// 0069365d  51                   push ecx
// 0069365e  8bce                 mov ecx, esi
// 00693660  e83bffffff           call 0x6935a0
// 00693665  5e                   pop esi
// 00693666  c20400               ret 4

struct CStatusCmdUI {
    int field0;
    int field4;
    int field8;
    int fieldC;
    int field10;
    int field14;
    int field18;
    int sub_692E20(int);
    void sub_6935A0(int, int);
    void func(int);
};

void CStatusCmdUI::func(int arg) {
    int v = this->field8;
    int s = this->field14;
    this->field18 = 1;
    int r = sub_692E20(v);
    r = r & 0xFBFFFFFF;
    if (arg == 0) {
        r = r | 0x04000000;
    }
    int v2 = this->field8;
    sub_6935A0(r, v2);
}
