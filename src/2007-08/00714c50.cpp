// from server: 84% by colin
// roc 2007-08 00714c50  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714c50
//
// 00714c50  56                   push esi
// 00714c51  8bf1                 mov esi, ecx
// 00714c53  8b06                 mov eax, dword ptr [esi]
// 00714c55  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714c5b  ffd2                 call edx
// 00714c5d  85c0                 test eax, eax
// 00714c5f  7411                 je 0x714c72
// 00714c61  8bce                 mov ecx, esi
// 00714c63  e828c3ffff           call 0x710f90
// 00714c68  8b10                 mov edx, dword ptr [eax]
// 00714c6a  5e                   pop esi
// 00714c6b  8bc8                 mov ecx, eax
// 00714c6d  8b522c               mov edx, dword ptr [edx + 0x2c]
// 00714c70  ffe2                 jmp edx
// 00714c72  5e                   pop esi
// 00714c73  c20400               ret 4

struct CXTCaptionButton {
    virtual void vfunc_000();
    virtual void vfunc_004();
    virtual void vfunc_008();
    virtual void vfunc_00c();
    virtual void vfunc_010();
    virtual void vfunc_014();
    virtual void vfunc_018();
    virtual void vfunc_01c();
    virtual void vfunc_020();
    virtual void vfunc_024();
    virtual void vfunc_028();
    virtual void vfunc_02c();
    virtual void vfunc_030();
    virtual void vfunc_034();
    virtual void vfunc_038();
    virtual void vfunc_03c();
    virtual void vfunc_040();
    virtual void vfunc_044();
    virtual void vfunc_048();
    virtual void vfunc_04c();
    virtual void vfunc_050();
    virtual void vfunc_054();
    virtual void vfunc_058();
    virtual void vfunc_05c();
    virtual void vfunc_060();
    virtual void vfunc_064();
    virtual void vfunc_068();
    virtual void vfunc_06c();
    virtual void vfunc_070();
    virtual void vfunc_074();
    virtual void vfunc_078();
    virtual void vfunc_07c();
    virtual void vfunc_080();
    virtual void vfunc_084();
    virtual void vfunc_088();
    virtual void vfunc_08c();
    virtual void vfunc_090();
    virtual void vfunc_094();
    virtual void vfunc_098();
    virtual void vfunc_09c();
    virtual void vfunc_0a0();
    virtual void vfunc_0a4();
    virtual void vfunc_0a8();
    virtual void vfunc_0ac();
    virtual void vfunc_0b0();
    virtual void vfunc_0b4();
    virtual void vfunc_0b8();
    virtual void vfunc_0bc();
    virtual void vfunc_0c0();
    virtual void vfunc_0c4();
    virtual void vfunc_0c8();
    virtual void vfunc_0cc();
    virtual void vfunc_0d0();
    virtual void vfunc_0d4();
    virtual void vfunc_0d8();
    virtual void vfunc_0dc();
    virtual void vfunc_0e0();
    virtual void vfunc_0e4();
    virtual void vfunc_0e8();
    virtual void vfunc_0ec();
    virtual void vfunc_0f0();
    virtual void vfunc_0f4();
    virtual void vfunc_0f8();
    virtual void vfunc_0fc();
    virtual void vfunc_100();
    virtual void vfunc_104();
    virtual void vfunc_108();
    virtual void vfunc_10c();
    virtual void vfunc_110();
    virtual void vfunc_114();
    virtual void vfunc_118();
    virtual void vfunc_11c();
    virtual void vfunc_120();
    virtual void vfunc_124();
    virtual void vfunc_128();
    virtual void vfunc_12c();
    virtual void vfunc_130();
    virtual void vfunc_134();
    virtual void vfunc_138();
    virtual void vfunc_13c();
    virtual void vfunc_140();
    virtual void vfunc_144();
    virtual void vfunc_148();
    virtual void vfunc_14c();
    virtual void vfunc_150();
    virtual void vfunc_154();
    virtual void vfunc_158();
    virtual void vfunc_15c();
    virtual void vfunc_160();
    virtual void* vfunc_164();
    void* sub_710f90();
    void method(int);
};

void CXTCaptionButton::method(int) {
    if (this->vfunc_164()) {
        void** p = (void**)this->sub_710f90();
        void (*fn)() = (void (*)())p[11];
        fn();
    }
}
