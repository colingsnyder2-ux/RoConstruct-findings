// from server: 100% by colin
// roc 2007-08 0066fa40  unit: CXTPDockingPaneManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0066fa40
//
// 0066fa40  837c240400           cmp dword ptr [esp + 4], 0
// 0066fa45  56                   push esi
// 0066fa46  8bf1                 mov esi, ecx
// 0066fa48  7423                 je 0x66fa6d
// 0066fa4a  8b06                 mov eax, dword ptr [esi]
// 0066fa4c  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 0066fa52  ffd2                 call edx
// 0066fa54  50                   push eax
// 0066fa55  8bce                 mov ecx, esi
// 0066fa57  898628010000         mov dword ptr [esi + 0x128], eax
// 0066fa5d  e89ee6ffff           call 0x66e100
// 0066fa62  8bce                 mov ecx, esi
// 0066fa64  e897f1ffff           call 0x66ec00
// 0066fa69  5e                   pop esi
// 0066fa6a  c20400               ret 4
// 0066fa6d  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0066fa73  50                   push eax
// 0066fa74  e887ffffff           call 0x66fa00
// 0066fa79  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0066fa7f  85c9                 test ecx, ecx
// 0066fa81  740f                 je 0x66fa92
// 0066fa83  e85c07fcff           call 0x6301e4
// 0066fa88  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 0066fa92  5e                   pop esi
// 0066fa93  c20400               ret 4

struct CXTPDockingPaneManager {
    char pad[0x128];
    int field_128;
    void sub_66fa00(int);
    void sub_66e100(int);
    void sub_66ec00();
    void sub_6301e4();
    void func(int);
};

void CXTPDockingPaneManager::func(int arg) {
    if (arg != 0) {
        int v = ((int (__thiscall *)(void *))((*(int **)this)[0x13c / 4]))(this);
        field_128 = v;
        sub_66e100(v);
        sub_66ec00();
    } else {
        sub_66fa00(field_128);
        int v = field_128;
        if (v != 0) {
            ((CXTPDockingPaneManager *)v)->sub_6301e4();
            field_128 = 0;
        }
    }
}
