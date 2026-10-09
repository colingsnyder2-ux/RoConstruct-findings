// from server: 76% by colin
// roc 2007-08 005087b0  unit: G3D::GCamera  size: 77 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005087b0
//
// 005087b0  8b442404             mov eax, dword ptr [esp + 4]
// 005087b4  8b10                 mov edx, dword ptr [eax]
// 005087b6  895134               mov dword ptr [ecx + 0x34], edx
// 005087b9  8b5004               mov edx, dword ptr [eax + 4]
// 005087bc  895138               mov dword ptr [ecx + 0x38], edx
// 005087bf  8b5008               mov edx, dword ptr [eax + 8]
// 005087c2  89513c               mov dword ptr [ecx + 0x3c], edx
// 005087c5  8b500c               mov edx, dword ptr [eax + 0xc]
// 005087c8  895140               mov dword ptr [ecx + 0x40], edx
// 005087cb  8b5010               mov edx, dword ptr [eax + 0x10]
// 005087ce  895144               mov dword ptr [ecx + 0x44], edx
// 005087d1  8b514c               mov edx, dword ptr [ecx + 0x4c]
// 005087d4  8b4014               mov eax, dword ptr [eax + 0x14]
// 005087d7  52                   push edx
// 005087d8  894148               mov dword ptr [ecx + 0x48], eax
// 005087db  e8a0ffffff           call 0x508780
// 005087e0  83794400             cmp dword ptr [ecx + 0x44], 0
// 005087e4  b830707800           mov eax, 0x787030
// 005087e9  7405                 je 0x5087f0
// 005087eb  b8588e7900           mov eax, 0x798e58
// 005087f0  89442404             mov dword ptr [esp + 4], eax
// 005087f4  83c154               add ecx, 0x54
// 005087f7  ff252ce67700         jmp dword ptr [0x77e62c]

struct GCamera {
    char pad[0x34];
    int m34;
    int m38;
    int m3c;
    int m40;
    int m44;
    int m48;
    int m4c;
    char pad2[0x54 - 0x50];
    void setCoordinateFrame(const int* src);
};

extern "C" void __stdcall sub_508780(int);
extern "C" void* __stdcall sub_77e62c();

void GCamera::setCoordinateFrame(const int* src) {
    m34 = src[0];
    m38 = src[1];
    m3c = src[2];
    m40 = src[3];
    m44 = src[4];
    m48 = src[5];
    sub_508780(m4c);
    const char* s;
    if (m44 == 0) {
        s = (const char*)0x787030;
    } else {
        s = (const char*)0x798e58;
    }
    void* p = sub_77e62c();
    (void)p;
}
