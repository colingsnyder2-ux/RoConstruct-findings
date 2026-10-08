// from server: 51% by colin
// roc 2007-08 00714c20  unit: CXTCaptionButton  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714c20
//
// 00714c20  56                   push esi
// 00714c21  8bf1                 mov esi, ecx
// 00714c23  8b06                 mov eax, dword ptr [esi]
// 00714c25  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714c2b  ffd2                 call edx
// 00714c2d  85c0                 test eax, eax
// 00714c2f  7411                 je 0x714c42
// 00714c31  8bce                 mov ecx, esi
// 00714c33  e858c3ffff           call 0x710f90
// 00714c38  8b10                 mov edx, dword ptr [eax]
// 00714c3a  5e                   pop esi
// 00714c3b  8bc8                 mov ecx, eax
// 00714c3d  8b5228               mov edx, dword ptr [edx + 0x28]
// 00714c40  ffe2                 jmp edx
// 00714c42  5e                   pop esi
// 00714c43  c21000               ret 0x10

struct CXTCaptionButton {
    virtual int vfunc_0x164();
    int helper_710f90();
    int OnClick(int, int, int, int);
};

int CXTCaptionButton::OnClick(int a, int b, int c, int d)
{
    if (this->vfunc_0x164() != 0)
    {
        int* p = (int*)this->helper_710f90();
        int (*fn)(void*) = (int (*)(void*))((int*)p)[0x28 / 4];
        return fn(p);
    }
    return 0;
}
