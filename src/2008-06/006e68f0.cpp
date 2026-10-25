// from server: 100% by tester
// roc 2008-06 006e68f0  unit: CXTPDockingPaneManager  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006e68f0
//
// 006e68f0  837c240400           cmp dword ptr [esp + 4], 0
// 006e68f5  56                   push esi
// 006e68f6  8bf1                 mov esi, ecx
// 006e68f8  7423                 je 0x6e691d
// 006e68fa  8b06                 mov eax, dword ptr [esi]
// 006e68fc  8b9044010000         mov edx, dword ptr [eax + 0x144]
// 006e6902  ffd2                 call edx
// 006e6904  50                   push eax
// 006e6905  8bce                 mov ecx, esi
// 006e6907  898628010000         mov dword ptr [esi + 0x128], eax
// 006e690d  e8bee6ffff           call 0x6e4fd0
// 006e6912  8bce                 mov ecx, esi
// 006e6914  e8b7f1ffff           call 0x6e5ad0
// 006e6919  5e                   pop esi
// 006e691a  c20400               ret 4
// 006e691d  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 006e6923  50                   push eax
// 006e6924  e887ffffff           call 0x6e68b0
// 006e6929  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 006e692f  85c9                 test ecx, ecx
// 006e6931  740f                 je 0x6e6942
// 006e6933  e8aca2fbff           call 0x6a0be4
// 006e6938  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 006e6942  5e                   pop esi
// 006e6943  c20400               ret 4

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
        int v = ((int (__thiscall *)(void *))((*(int **)this)[0x144 / 4]))(this);
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
