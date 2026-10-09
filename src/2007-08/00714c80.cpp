// from server: 100% by colin
// roc 2007-08 00714c80  unit: CXTCaptionButton  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00714c80
//
// 00714c80  56                   push esi
// 00714c81  8bf1                 mov esi, ecx
// 00714c83  8b06                 mov eax, dword ptr [esi]
// 00714c85  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00714c8b  ffd2                 call edx
// 00714c8d  85c0                 test eax, eax
// 00714c8f  7411                 je 0x714ca2
// 00714c91  8bce                 mov ecx, esi
// 00714c93  e8f8c2ffff           call 0x710f90
// 00714c98  8b10                 mov edx, dword ptr [eax]
// 00714c9a  8bc8                 mov ecx, eax
// 00714c9c  8b4230               mov eax, dword ptr [edx + 0x30]
// 00714c9f  5e                   pop esi
// 00714ca0  ffe0                 jmp eax
// 00714ca2  e8492cf8ff           call 0x6978f0
// 00714ca7  8b4004               mov eax, dword ptr [eax + 4]
// 00714caa  5e                   pop esi
// 00714cab  c3                   ret 

struct CXTCaptionButton {
    virtual int vfunc_164();
    int method_710f90();
    int method_714c80();
};

extern "C" int __stdcall sub_6978f0();

int CXTCaptionButton::method_714c80() {
    if (((int (__thiscall **)(CXTCaptionButton *))(*(int *)this))[0x164 / 4](this) != 0) {
        int result = this->method_710f90();
        return (*(int (__thiscall **)(int))(*(int *)result + 0x30))(result);
    }
    return *(int *)(sub_6978f0() + 4);
}
