// from server: 53% by colin
// roc 2007-08 005e3830  unit: RBX::ArrowTool  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e3830
//
// 005e3830  8b4118               mov eax, dword ptr [ecx + 0x18]
// 005e3833  50                   push eax
// 005e3834  e86712fcff           call 0x5a4aa0
// 005e3839  83c404               add esp, 4
// 005e383c  85c0                 test eax, eax
// 005e383e  7447                 je 0x5e3887
// 005e3840  8bc8                 mov ecx, eax
// 005e3842  e83907f9ff           call 0x573f80
// 005e3847  d94024               fld dword ptr [eax + 0x24]
// 005e384a  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005e384e  d821                 fsub dword ptr [ecx]
// 005e3850  83c024               add eax, 0x24
// 005e3853  d94004               fld dword ptr [eax + 4]
// 005e3856  d86104               fsub dword ptr [ecx + 4]
// 005e3859  d94008               fld dword ptr [eax + 8]
// 005e385c  d86108               fsub dword ptr [ecx + 8]
// 005e385f  d9c2                 fld st(2)
// 005e3861  decb                 fmulp st(3)
// 005e3863  dcc8                 fmul st(0), st(0)
// 005e3865  dec2                 faddp st(2)
// 005e3867  dcc8                 fmul st(0), st(0)
// 005e3869  dec1                 faddp st(1)
// 005e386b  d9fa                 fsqrt 
// 005e386d  dc1d78b37900         fcomp qword ptr [0x79b378]
// 005e3873  dfe0                 fnstsw ax
// 005e3875  f6c405               test ah, 5
// 005e3878  7a08                 jp 0x5e3882
// 005e387a  b801000000           mov eax, 1
// 005e387f  c20400               ret 4
// 005e3882  33c0                 xor eax, eax
// 005e3884  c20400               ret 4
// 005e3887  32c0                 xor al, al
// 005e3889  c20400               ret 4

struct ArrowTool {
    char pad[0x18];
    void* field_18;
    bool method(void* arg);
};

extern void* __cdecl func_5a4aa0(void* p);
extern void* __cdecl func_573f80(void* p);

bool ArrowTool::method(void* arg)
{
    void* p = func_5a4aa0(field_18);
    if (!p)
        return false;
    float* v = (float*)func_573f80(p);
    float dx = v[9] - ((float*)arg)[0];
    float dy = v[10] - ((float*)arg)[1];
    float dz = v[11] - ((float*)arg)[2];
    float dist = dx*dx + dy*dy + dz*dz;
    return dist < 0.0f;
}
