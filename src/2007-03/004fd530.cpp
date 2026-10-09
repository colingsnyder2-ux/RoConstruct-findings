// roc 2007-03 004fd530  unit: seg_004f0000  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 004fd530
//
// 004fd530  dd05a0597900         fld qword ptr [0x7959a0]
// 004fd536  56                   push esi
// 004fd537  8bf1                 mov esi, ecx
// 004fd539  dd5e18               fstp qword ptr [esi + 0x18]
// 004fd53c  33c0                 xor eax, eax
// 004fd53e  d9ee                 fldz 
// 004fd540  8806                 mov byte ptr [esi], al
// 004fd542  dd5620               fst qword ptr [esi + 0x20]
// 004fd545  894628               mov dword ptr [esi + 0x28], eax
// 004fd548  dd5630               fst qword ptr [esi + 0x30]
// 004fd54b  89462c               mov dword ptr [esi + 0x2c], eax
// 004fd54e  dd5638               fst qword ptr [esi + 0x38]
// 004fd551  dd5640               fst qword ptr [esi + 0x40]
// 004fd554  dd5e48               fstp qword ptr [esi + 0x48]
// 004fd557  e8a4ffffff           call 0x4fd500
// 004fd55c  8bc6                 mov eax, esi
// 004fd55e  5e                   pop esi
// 004fd55f  c3                   ret 
// copied from an identical function in another client (function ??0GCamera@ns_ROCX000009@@QAE@XZ)

namespace ns_ROCX000009 {
struct GCamera {
    char pad0[0x18];
    double f18;
    double f20;
    int i28;
    int i2c;
    double f30;
    double f38;
    double f40;
    double f48;
    void init();
    GCamera();
};

extern double g_cameraDefault;

GCamera::GCamera()
{
    f18 = g_cameraDefault;
    *(char*)this = 0;
    f20 = 0.0;
    i28 = 0;
    f30 = 0.0;
    i2c = 0;
    f38 = 0.0;
    f40 = 0.0;
    f48 = 0.0;
    init();
}
}
