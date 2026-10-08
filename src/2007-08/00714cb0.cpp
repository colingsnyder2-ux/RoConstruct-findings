// from server: 64% by colin
// roc 2007-08 00714cb0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714cb0
//
// 00714cb0  56                   push esi
// 00714cb1  8bf1                 mov esi, ecx
// 00714cb3  8b06                 mov eax, dword ptr [esi]
// 00714cb5  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714cbb  ffd2                 call edx
// 00714cbd  85c0                 test eax, eax
// 00714cbf  7411                 je 0x714cd2
// 00714cc1  8bce                 mov ecx, esi
// 00714cc3  e8c8c2ffff           call 0x710f90
// 00714cc8  8b10                 mov edx, dword ptr [eax]
// 00714cca  5e                   pop esi
// 00714ccb  8bc8                 mov ecx, eax
// 00714ccd  8b5234               mov edx, dword ptr [edx + 0x34]
// 00714cd0  ffe2                 jmp edx
// 00714cd2  5e                   pop esi
// 00714cd3  c20400               ret 4

struct CXTCaptionButton {
    virtual int vfunc_0x164();
    virtual int vfunc_0x34();
    int sub_710F90();
    int method(int arg);
};

int CXTCaptionButton::method(int arg) {
    if (this->vfunc_0x164() != 0) {
        CXTCaptionButton* p = (CXTCaptionButton*)this->sub_710F90();
        return p->vfunc_0x34();
    }
    return 0;
}
