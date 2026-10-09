// from server: 70% by colin
// roc 2007-08 006dbc60  unit: CXTPDockingPaneAutoHidePanel  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006dbc60
//
// 006dbc60  8b442408             mov eax, dword ptr [esp + 8]
// 006dbc64  56                   push esi
// 006dbc65  8bf1                 mov esi, ecx
// 006dbc67  0fbfc8               movsx ecx, ax
// 006dbc6a  c1e810               shr eax, 0x10
// 006dbc6d  0fbfc0               movsx eax, ax
// 006dbc70  57                   push edi
// 006dbc71  50                   push eax
// 006dbc72  51                   push ecx
// 006dbc73  8bce                 mov ecx, esi
// 006dbc75  e896f1ffff           call 0x6dae10
// 006dbc7a  8bf8                 mov edi, eax
// 006dbc7c  85ff                 test edi, edi
// 006dbc7e  7432                 je 0x6dbcb2
// 006dbc80  8b4620               mov eax, dword ptr [esi + 0x20]
// 006dbc83  50                   push eax
// 006dbc84  e8f73bfaff           call 0x67f880
// 006dbc89  83c404               add esp, 4
// 006dbc8c  85c0                 test eax, eax
// 006dbc8e  7422                 je 0x6dbcb2
// 006dbc90  8b86a8000000         mov eax, dword ptr [esi + 0xa8]
// 006dbc96  85c0                 test eax, eax
// 006dbc98  740e                 je 0x6dbca8
// 006dbc9a  8b88e4000000         mov ecx, dword ptr [eax + 0xe4]
// 006dbca0  39b9a0010000         cmp dword ptr [ecx + 0x1a0], edi
// 006dbca6  740a                 je 0x6dbcb2
// 006dbca8  6a00                 push 0
// 006dbcaa  57                   push edi
// 006dbcab  8bce                 mov ecx, esi
// 006dbcad  e86efeffff           call 0x6dbb20
// 006dbcb2  5f                   pop edi
// 006dbcb3  b801000000           mov eax, 1
// 006dbcb8  5e                   pop esi
// 006dbcb9  c20800               ret 8

struct CXTPDockingPaneAutoHidePanel {
    int sub_6DAE10(short, short);
    int sub_6DBB20(int, int);
    char pad[0x20];
    int field_20;
    char pad2[0x84];
    int field_a8;
    int sub_6DBC60(int, int);
};

extern "C" int __stdcall sub_67F880(int);

int CXTPDockingPaneAutoHidePanel::sub_6DBC60(int a, int b) {
    short lo = (short)a;
    short hi = (short)((unsigned int)a >> 16);
    int edi = sub_6DAE10(lo, hi);
    if (edi != 0) {
        if (sub_67F880(field_20) != 0) {
            int v = field_a8;
            if (v != 0) {
                int ecx = *(int*)(v + 0xe4);
                if (*(int*)(ecx + 0x1a0) == edi) {
                    return 1;
                }
            }
            sub_6DBB20(edi, 0);
        }
    }
    return 1;
}
