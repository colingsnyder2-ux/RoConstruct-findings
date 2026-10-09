// from server: 72% by colin
// roc 2007-08 004d1650  unit: RBX::View::Decal  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004d1650
//
// 004d1650  8b442404             mov eax, dword ptr [esp + 4]
// 004d1654  3da0658c00           cmp eax, 0x8c65a0
// 004d1659  742b                 je 0x4d1686
// 004d165b  3d24278c00           cmp eax, 0x8c2724
// 004d1660  740e                 je 0x4d1670
// 004d1662  3d08278c00           cmp eax, 0x8c2708
// 004d1667  7407                 je 0x4d1670
// 004d1669  3d40278c00           cmp eax, 0x8c2740
// 004d166e  7508                 jne 0x4d1678
// 004d1670  e8dbfbffff           call 0x4d1250
// 004d1675  c20400               ret 4
// 004d1678  3d78278c00           cmp eax, 0x8c2778
// 004d167d  7407                 je 0x4d1686
// 004d167f  3d5c278c00           cmp eax, 0x8c275c
// 004d1684  7505                 jne 0x4d168b
// 004d1686  e8d5faffff           call 0x4d1160
// 004d168b  c20400               ret 4

struct RBX_View_Decal {
    void sub_4D1250();
    void sub_4D1160();
    void func(unsigned int id);
};

void RBX_View_Decal::func(unsigned int id) {
    if (id == 0x8c65a0) {
        sub_4D1160();
        return;
    }
    if (id == 0x8c2724) {
        sub_4D1250();
        return;
    }
    if (id == 0x8c2708) {
        sub_4D1250();
        return;
    }
    if (id == 0x8c2740) {
        sub_4D1250();
        return;
    }
    if (id == 0x8c2778) {
        sub_4D1160();
        return;
    }
    if (id == 0x8c275c) {
        sub_4D1160();
    }
}
