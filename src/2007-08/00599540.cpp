// from server: 59% by colin
// roc 2007-08 00599540  unit: RBX::Camera  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00599540
//
// 00599540  8b442404             mov eax, dword ptr [esp + 4]
// 00599544  d900                 fld dword ptr [eax]
// 00599546  89442404             mov dword ptr [esp + 4], eax
// 0059954a  d99980010000         fstp dword ptr [ecx + 0x180]
// 00599550  81c12c010000         add ecx, 0x12c
// 00599556  d94004               fld dword ptr [eax + 4]
// 00599559  d95958               fstp dword ptr [ecx + 0x58]
// 0059955c  d94008               fld dword ptr [eax + 8]
// 0059955f  d9595c               fstp dword ptr [ecx + 0x5c]
// 00599562  e9f949f8ff           jmp 0x51df60

struct Camera {
    char pad[0x180];
    float field180;
    char pad2[0x58];
    float field58;
    float field5c;
    void setCameraFrame(const float* src);
};

extern "C" void __stdcall sub_51df60();

void Camera::setCameraFrame(const float* src) {
    field180 = src[0];
    float* base = (float*)((char*)this + 0x12c);
    base[0x58 / 4] = src[1];
    base[0x5c / 4] = src[2];
    sub_51df60();
}
