// roc 2007-03 0065ba30  unit: seg_00650000  size: 86 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0065ba30
//
// 0065ba30  837c240400           cmp dword ptr [esp + 4], 0
// 0065ba35  56                   push esi
// 0065ba36  8bf1                 mov esi, ecx
// 0065ba38  7423                 je 0x65ba5d
// 0065ba3a  8b06                 mov eax, dword ptr [esi]
// 0065ba3c  8b903c010000         mov edx, dword ptr [eax + 0x13c]
// 0065ba42  ffd2                 call edx
// 0065ba44  50                   push eax
// 0065ba45  8bce                 mov ecx, esi
// 0065ba47  898628010000         mov dword ptr [esi + 0x128], eax
// 0065ba4d  e86ee6ffff           call 0x65a0c0
// 0065ba52  8bce                 mov ecx, esi
// 0065ba54  e8e7f1ffff           call 0x65ac40
// 0065ba59  5e                   pop esi
// 0065ba5a  c20400               ret 4
// 0065ba5d  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 0065ba63  50                   push eax
// 0065ba64  e887ffffff           call 0x65b9f0
// 0065ba69  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 0065ba6f  85c9                 test ecx, ecx
// 0065ba71  740f                 je 0x65ba82
// 0065ba73  e8fa2bfcff           call 0x61e672
// 0065ba78  c7862801000000000000 mov dword ptr [esi + 0x128], 0
// 0065ba82  5e                   pop esi
// 0065ba83  c20400               ret 4
// copied from an identical function in another client (function ?func@CXTPDockingPaneManager@ns_ROCX000001@@QAEXH@Z)

namespace ns_ROCX000001 {
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
}
