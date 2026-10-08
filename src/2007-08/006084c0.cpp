// from server: 100% by colin
// roc 2007-08 006084c0  unit: RBX::ClumpStage  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006084c0
//
// 006084c0  8b442404             mov eax, dword ptr [esp + 4]
// 006084c4  8b506c               mov edx, dword ptr [eax + 0x6c]
// 006084c7  89542404             mov dword ptr [esp + 4], edx
// 006084cb  e9e0feffff           jmp 0x6083b0

struct RBX_ClumpStage {
    void sub_6083B0(int);
    void f(int);
};

void RBX_ClumpStage::f(int a) {
    sub_6083B0(*(int*)((char*)a + 0x6c));
}
