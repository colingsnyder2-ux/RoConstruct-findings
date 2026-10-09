// roc 2007-03 005f2410  unit: seg_005f0000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f2410
//
// 005f2410  8b442404             mov eax, dword ptr [esp + 4]
// 005f2414  8b506c               mov edx, dword ptr [eax + 0x6c]
// 005f2417  89542404             mov dword ptr [esp + 4], edx
// 005f241b  e920fcffff           jmp 0x5f2040
// copied from an identical function in another client (function ?f@RBX_ClumpStage@ns_ROCX000004@@QAEXH@Z)

namespace ns_ROCX000004 {
struct RBX_ClumpStage {
    void sub_6083B0(int);
    void f(int);
};

void RBX_ClumpStage::f(int a) {
    sub_6083B0(*(int*)((char*)a + 0x6c));
}
}
