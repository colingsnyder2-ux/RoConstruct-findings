// from server: 48% by colin
// roc 2007-08 005994c0  unit: RBX::Camera  size: 98 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005994c0
//
// 005994c0  837c240400           cmp dword ptr [esp + 4], 0
// 005994c5  d98150010000         fld dword ptr [ecx + 0x150]
// 005994cb  d8a180010000         fsub dword ptr [ecx + 0x180]
// 005994d1  d98154010000         fld dword ptr [ecx + 0x154]
// 005994d7  d8a184010000         fsub dword ptr [ecx + 0x184]
// 005994dd  d98158010000         fld dword ptr [ecx + 0x158]
// 005994e3  d8a188010000         fsub dword ptr [ecx + 0x188]
// 005994e9  dcc8                 fmul st(0), st(0)
// 005994eb  d9c1                 fld st(1)
// 005994ed  deca                 fmulp st(2)
// 005994ef  dec1                 faddp st(1)
// 005994f1  d9c1                 fld st(1)
// 005994f3  deca                 fmulp st(2)
// 005994f5  dec1                 faddp st(1)
// 005994f7  d9fa                 fsqrt 
// 005994f9  7e12                 jle 0x59950d
// 005994fb  d81d50707800         fcomp dword ptr [0x787050]
// 00599501  dfe0                 fnstsw ax
// 00599503  f6c441               test ah, 0x41
// 00599506  7412                 je 0x59951a
// 00599508  33c0                 xor eax, eax
// 0059950a  c20400               ret 4
// 0059950d  d81d48157b00         fcomp dword ptr [0x7b1548]
// 00599513  dfe0                 fnstsw ax
// 00599515  f6c405               test ah, 5
// 00599518  7aee                 jp 0x599508
// 0059951a  b801000000           mov eax, 1
// 0059951f  c20400               ret 4

struct Camera {
    char pad[0x150];
    float field150;
    float field154;
    float field158;
    char pad2[0x180 - 0x15c];
    float field180;
    float field184;
    float field188;
    bool method(int arg);
};

extern float g_787050;
extern float g_7b1548;

extern "C" float sqrtf(float);

bool Camera::method(int arg) {
    float dx = field150 - field180;
    float dy = field154 - field184;
    float dz = field158 - field188;
    float dist = dx * dy + dx * dy + dz * dz;
    dist = sqrtf(dist);
    if (arg > 0) {
        if (dist > g_787050) {
            return true;
        }
        return false;
    } else {
        if (dist >= g_7b1548) {
            return true;
        }
        return false;
    }
}
