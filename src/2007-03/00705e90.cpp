// roc 2007-03 00705e90  unit: seg_00700000  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00705e90
//
// 00705e90  56                   push esi
// 00705e91  8bf1                 mov esi, ecx
// 00705e93  8b06                 mov eax, dword ptr [esi]
// 00705e95  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00705e9b  ffd2                 call edx
// 00705e9d  85c0                 test eax, eax
// 00705e9f  7411                 je 0x705eb2
// 00705ea1  8bce                 mov ecx, esi
// 00705ea3  e878c4ffff           call 0x702320
// 00705ea8  8b10                 mov edx, dword ptr [eax]
// 00705eaa  8bc8                 mov ecx, eax
// 00705eac  8b4230               mov eax, dword ptr [edx + 0x30]
// 00705eaf  5e                   pop esi
// 00705eb0  ffe0                 jmp eax
// 00705eb2  e829cef7ff           call 0x682ce0
// 00705eb7  8b4004               mov eax, dword ptr [eax + 4]
// 00705eba  5e                   pop esi
// 00705ebb  c3                   ret 
// copied from an identical function in another client (function ?method_714c80@CXTCaptionButton@ns_ROCX00001e@@QAEHXZ)

namespace ns_ROCX00001e {
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
}
