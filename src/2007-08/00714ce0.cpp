// from server: 64% by colin
// roc 2007-08 00714ce0  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714ce0
//
// 00714ce0  56                   push esi
// 00714ce1  8bf1                 mov esi, ecx
// 00714ce3  8b06                 mov eax, dword ptr [esi]
// 00714ce5  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714ceb  ffd2                 call edx
// 00714ced  85c0                 test eax, eax
// 00714cef  7411                 je 0x714d02
// 00714cf1  8bce                 mov ecx, esi
// 00714cf3  e898c2ffff           call 0x710f90
// 00714cf8  8b10                 mov edx, dword ptr [eax]
// 00714cfa  5e                   pop esi
// 00714cfb  8bc8                 mov ecx, eax
// 00714cfd  8b5238               mov edx, dword ptr [edx + 0x38]
// 00714d00  ffe2                 jmp edx
// 00714d02  5e                   pop esi
// 00714d03  c20400               ret 4

struct CXTCaptionButton {
    virtual int vfunc_0x164();
    virtual int vfunc_0x38();
    int sub_710f90();
    int func_714ce0(int);
};

int CXTCaptionButton::func_714ce0(int arg)
{
    if (this->vfunc_0x164() != 0)
    {
        CXTCaptionButton* p = (CXTCaptionButton*)this->sub_710f90();
        return p->vfunc_0x38();
    }
    return 0;
}
