// from server: 52% by colin
// roc 2008-06 005e83c0  unit: RBX::Primitive  size: 165 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e83c0
//
// 005e83c0  83ec0c               sub esp, 0xc
// 005e83c3  d905703c8200         fld dword ptr [0x823c70]
// 005e83c9  8b542414             mov edx, dword ptr [esp + 0x14]
// 005e83cd  d91424               fst dword ptr [esp]
// 005e83d0  8d4a08               lea ecx, [edx + 8]
// 005e83d3  d9542404             fst dword ptr [esp + 4]
// 005e83d7  d9542408             fst dword ptr [esp + 8]
// 005e83db  d811                 fcom dword ptr [ecx]
// 005e83dd  dfe0                 fnstsw ax
// 005e83df  f6c441               test ah, 0x41
// 005e83e2  8bc1                 mov eax, ecx
// 005e83e4  7404                 je 0x5e83ea
// 005e83e6  8d442408             lea eax, [esp + 8]
// 005e83ea  d900                 fld dword ptr [eax]
// 005e83ec  8d4a04               lea ecx, [edx + 4]
// 005e83ef  d9c9                 fxch st(1)
// 005e83f1  d811                 fcom dword ptr [ecx]
// 005e83f3  dfe0                 fnstsw ax
// 005e83f5  f6c441               test ah, 0x41
// 005e83f8  7404                 je 0x5e83fe
// 005e83fa  8d4c2404             lea ecx, [esp + 4]
// 005e83fe  d901                 fld dword ptr [ecx]
// 005e8400  d9c9                 fxch st(1)
// 005e8402  d81a                 fcomp dword ptr [edx]
// 005e8404  dfe0                 fnstsw ax
// 005e8406  f6c441               test ah, 0x41
// 005e8409  7403                 je 0x5e840e
// 005e840b  8d1424               lea edx, [esp]
// 005e840e  d902                 fld dword ptr [edx]
// 005e8410  56                   push esi
// 005e8411  8b742414             mov esi, dword ptr [esp + 0x14]
// 005e8415  d916                 fst dword ptr [esi]
// 005e8417  d9c9                 fxch st(1)
// 005e8419  d95604               fst dword ptr [esi + 4]
// 005e841c  d9ca                 fxch st(2)
// 005e841e  d95608               fst dword ptr [esi + 8]
// 005e8421  d9c1                 fld st(1)
// 005e8423  decb                 fmulp st(3)
// 005e8425  dcca                 fmul st(2), st(0)
// 005e8427  d905043e8200         fld dword ptr [0x823e04]
// 005e842d  d8d3                 fcom st(3)
// 005e842f  dfe0                 fnstsw ax
// 005e8431  dddb                 fstp st(3)
// 005e8433  f6c405               test ah, 5
// 005e8436  7a1e                 jp 0x5e8456
// 005e8438  dec9                 fmulp st(1)
// 005e843a  83ec08               sub esp, 8
// 005e843d  def9                 fdivp st(1)
// 005e843f  dd1c24               fstp qword ptr [esp]
// 005e8442  e869970b00           call 0x6a1bb0
// 005e8447  d95e04               fstp dword ptr [esi + 4]
// 005e844a  83c408               add esp, 8
// 005e844d  8bc6                 mov eax, esi
// 005e844f  5e                   pop esi
// 005e8450  83c40c               add esp, 0xc
// 005e8453  c20800               ret 8
// 005e8456  ddd9                 fstp st(1)
// 005e8458  8bc6                 mov eax, esi
// 005e845a  ddd8                 fstp st(0)
// 005e845c  5e                   pop esi
// 005e845d  ddd8                 fstp st(0)
// 005e845f  83c40c               add esp, 0xc
// 005e8462  c20800               ret 8

struct RBX_Primitive_005e83c0 {
    float x;
    float y;
    float z;
    RBX_Primitive_005e83c0* readNormQuat(const float* q, const float* v);
};

extern float g_005e83c0_a;
extern float g_005e83c0_b;

extern "C" float __stdcall sub_006a1bb0(double);

RBX_Primitive_005e83c0* RBX_Primitive_005e83c0::readNormQuat(const float* q, const float* v) {
    float a = g_005e83c0_a;
    float b = g_005e83c0_a;
    float c = g_005e83c0_a;

    const float* pa = &c;
    if (a < q[2]) pa = &q[2];
    float fa = *pa;

    const float* pb = &b;
    if (a < q[1]) pb = &q[1];
    float fb = *pb;

    const float* pc = &a;
    if (a < q[0]) pc = &q[0];
    float fc = *pc;

    x = fa;
    y = fb;
    z = fc;

    float t = fa * fb + fa * fb + fc * fc;
    if (t > g_005e83c0_b) {
        y = (float)sub_006a1bb0((double)(fb / t));
    }
    return this;
}
