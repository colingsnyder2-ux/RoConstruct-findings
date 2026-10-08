// from server: 67% by colin
// roc 2007-08 00714d10  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714d10
//
// 00714d10  56                   push esi
// 00714d11  8bf1                 mov esi, ecx
// 00714d13  8b06                 mov eax, dword ptr [esi]
// 00714d15  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714d1b  ffd2                 call edx
// 00714d1d  85c0                 test eax, eax
// 00714d1f  7411                 je 0x714d32
// 00714d21  8bce                 mov ecx, esi
// 00714d23  e868c2ffff           call 0x710f90
// 00714d28  8b10                 mov edx, dword ptr [eax]
// 00714d2a  5e                   pop esi
// 00714d2b  8bc8                 mov ecx, eax
// 00714d2d  8b523c               mov edx, dword ptr [edx + 0x3c]
// 00714d30  ffe2                 jmp edx
// 00714d32  5e                   pop esi
// 00714d33  c20400               ret 4

struct CXTCaptionButton {
    virtual int vfunc_0x164();
    int method_0x710f90();
    int target(int);
};

int CXTCaptionButton::target(int arg) {
    if (this->vfunc_0x164() != 0) {
        CXTCaptionButton* p = (CXTCaptionButton*)this->method_0x710f90();
        return ((int (__thiscall*)(CXTCaptionButton*))((*(int**)p)[0x3c / 4]))(p);
    }
    return 0;
}
