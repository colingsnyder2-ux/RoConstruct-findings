// from server: 47% by colin
// roc 2007-08 006047c0  unit: RBX::SleepStage  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006047c0
//
// 006047c0  8b4960               mov ecx, dword ptr [ecx + 0x60]
// 006047c3  d94108               fld dword ptr [ecx + 8]
// 006047c6  83c104               add ecx, 4
// 006047c9  d819                 fcomp dword ptr [ecx]
// 006047cb  dfe0                 fnstsw ax
// 006047cd  d94108               fld dword ptr [ecx + 8]
// 006047d0  f6c441               test ah, 0x41
// 006047d3  7510                 jne 0x6047e5
// 006047d5  d819                 fcomp dword ptr [ecx]
// 006047d7  dfe0                 fnstsw ax
// 006047d9  f6c441               test ah, 0x41
// 006047dc  7517                 jne 0x6047f5
// 006047de  d94108               fld dword ptr [ecx + 8]
// 006047e1  d84904               fmul dword ptr [ecx + 4]
// 006047e4  c3                   ret 
// 006047e5  d85904               fcomp dword ptr [ecx + 4]
// 006047e8  dfe0                 fnstsw ax
// 006047ea  f6c441               test ah, 0x41
// 006047ed  7506                 jne 0x6047f5
// 006047ef  d94108               fld dword ptr [ecx + 8]
// 006047f2  d809                 fmul dword ptr [ecx]
// 006047f4  c3                   ret 
// 006047f5  d901                 fld dword ptr [ecx]
// 006047f7  d84904               fmul dword ptr [ecx + 4]
// 006047fa  c3                   ret 

struct SleepStage {
    float compute() const;
};

float SleepStage::compute() const {
    const float* p = *reinterpret_cast<const float* const*>(reinterpret_cast<const char*>(this) + 0x60);
    p += 1;
    if (p[1] < p[0]) {
        if (p[1] < p[1]) {
            return p[0] * p[1];
        }
        return p[1] * p[0];
    }
    if (p[1] < p[0]) {
        return p[1] * p[0];
    }
    return p[1] * p[1];
}
