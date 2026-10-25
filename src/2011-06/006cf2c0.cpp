// from server: 17% by atomic.potato
// roc 2011-06 006cf2c0  unit: RBX::Mechanism  size: 720 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 006cf2c0
//
// 006cf2c0  83ec58               sub esp, 0x58
// 006cf2c3  e87835e7ff           call 0x542840
// 006cf2c8  8b08                 mov ecx, dword ptr [eax]
// 006cf2ca  8b5004               mov edx, dword ptr [eax + 4]
// 006cf2cd  8b4008               mov eax, dword ptr [eax + 8]
// 006cf2d0  894c2404             mov dword ptr [esp + 4], ecx
// 006cf2d4  89542408             mov dword ptr [esp + 8], edx
// 006cf2d8  8944240c             mov dword ptr [esp + 0xc], eax
// 006cf2dc  e89f35e7ff           call 0x542880
// 006cf2e1  f30f10542468         movss xmm2, dword ptr [esp + 0x68]
// 006cf2e7  f30f104c2464         movss xmm1, dword ptr [esp + 0x64]
// 006cf2ed  f30f1064240c         movss xmm4, dword ptr [esp + 0xc]
// 006cf2f3  f30f106c2408         movss xmm5, dword ptr [esp + 8]
// 006cf2f9  0f28c2               movaps xmm0, xmm2
// 006cf2fc  f30f59c4             mulss xmm0, xmm4
// 006cf300  0f28d9               movaps xmm3, xmm1
// 006cf303  f30f59dd             mulss xmm3, xmm5
// 006cf307  f30f58c3             addss xmm0, xmm3
// 006cf30b  f30f105c2460         movss xmm3, dword ptr [esp + 0x60]
// 006cf311  0f28f3               movaps xmm6, xmm3
// 006cf314  f30f59742404         mulss xmm6, dword ptr [esp + 4]
// 006cf31a  f30f58c6             addss xmm0, xmm6
// 006cf31e  0f28f3               movaps xmm6, xmm3
// 006cf321  f30f59f0             mulss xmm6, xmm0
// 006cf325  f30f11742428         movss dword ptr [esp + 0x28], xmm6
// 006cf32b  0f28f1               movaps xmm6, xmm1
// 006cf32e  f30f59f0             mulss xmm6, xmm0
// 006cf332  f30f1174242c         movss dword ptr [esp + 0x2c], xmm6
// 006cf338  0f28f2               movaps xmm6, xmm2
// 006cf33b  f30f59f0             mulss xmm6, xmm0
// 006cf33f  f30f11742430         movss dword ptr [esp + 0x30], xmm6
// 006cf345  f30f10742404         movss xmm6, dword ptr [esp + 4]
// 006cf34b  f30f5c742428         subss xmm6, dword ptr [esp + 0x28]
// 006cf351  f30f11742434         movss dword ptr [esp + 0x34], xmm6
// 006cf357  0f28f5               movaps xmm6, xmm5
// 006cf35a  f30f5c74242c         subss xmm6, dword ptr [esp + 0x2c]
// 006cf360  f30f11742438         movss dword ptr [esp + 0x38], xmm6
// 006cf366  0f28f4               movaps xmm6, xmm4
// 006cf369  f30f5c742430         subss xmm6, dword ptr [esp + 0x30]
// 006cf36f  f30f1174243c         movss dword ptr [esp + 0x3c], xmm6
// 006cf375  d944243c             fld dword ptr [esp + 0x3c]
// 006cf379  8b08                 mov ecx, dword ptr [eax]
// 006cf37b  dcc8                 fmul st(0), st(0)
// 006cf37d  8b5004               mov edx, dword ptr [eax + 4]
// 006cf380  d9442438             fld dword ptr [esp + 0x38]
// 006cf384  8b4008               mov eax, dword ptr [eax + 8]
// 006cf387  dcc8                 fmul st(0), st(0)
// 006cf389  894c2410             mov dword ptr [esp + 0x10], ecx
// 006cf38d  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006cf391  89542414             mov dword ptr [esp + 0x14], edx
// 006cf395  dec1                 faddp st(1)
// 006cf397  8b542464             mov edx, dword ptr [esp + 0x64]
// 006cf39b  d9442434             fld dword ptr [esp + 0x34]
// 006cf39f  89442418             mov dword ptr [esp + 0x18], eax
// 006cf3a3  dcc8                 fmul st(0), st(0)
// 006cf3a5  8b442468             mov eax, dword ptr [esp + 0x68]
// 006cf3a9  894c244c             mov dword ptr [esp + 0x4c], ecx
// 006cf3ad  89542450             mov dword ptr [esp + 0x50], edx
// 006cf3b1  dec1                 faddp st(1)
// 006cf3b3  89442454             mov dword ptr [esp + 0x54], eax
// 006cf3b7  d9fa                 fsqrt 
// 006cf3b9  d91424               fst dword ptr [esp]
// 006cf3bc  d9e1                 fabs 
// 006cf3be  dd05a0eda700         fld qword ptr [0xa7eda0]
// 006cf3c4  d9c9                 fxch st(1)
// 006cf3c6  dff1                 fcompi st(1)
// 006cf3c8  ddd8                 fstp st(0)
// 006cf3ca  7656                 jbe 0x6cf422
// 006cf3cc  0f28f9               movaps xmm7, xmm1
// 006cf3cf  f30f59f8             mulss xmm7, xmm0
// 006cf3d3  f30f117c2438         movss dword ptr [esp + 0x38], xmm7
// 006cf3d9  f30f5c6c2438         subss xmm5, dword ptr [esp + 0x38]
// 006cf3df  0f28f3               movaps xmm6, xmm3
// 006cf3e2  f30f59f0             mulss xmm6, xmm0
// 006cf3e6  0f28fa               movaps xmm7, xmm2
// 006cf3e9  f30f59f8             mulss xmm7, xmm0
// 006cf3ed  f30f10442404         movss xmm0, dword ptr [esp + 4]
// 006cf3f3  f30f5cc6             subss xmm0, xmm6
// 006cf3f7  0f28f0               movaps xmm6, xmm0
// 006cf3fa  f30f1005143ba600     movss xmm0, dword ptr [0xa63b14]
// 006cf402  f30f5e0424           divss xmm0, dword ptr [esp]
// 006cf407  f30f5ce7             subss xmm4, xmm7
// 006cf40b  0f28f8               movaps xmm7, xmm0
// 006cf40e  f30f59fe             mulss xmm7, xmm6
// 006cf412  f30f59e8             mulss xmm5, xmm0
// 006cf416  f30f59e0             mulss xmm4, xmm0
// 006cf41a  0f28c7               movaps xmm0, xmm7
// 006cf41d  e9e7000000           jmp 0x6cf509
// 006cf422  f30f10642418         movss xmm4, dword ptr [esp + 0x18]
// 006cf428  f30f106c2414         movss xmm5, dword ptr [esp + 0x14]
// 006cf42e  0f28c2               movaps xmm0, xmm2
// 006cf431  f30f59c4             mulss xmm0, xmm4
// 006cf435  0f28f1               movaps xmm6, xmm1
// 006cf438  f30f59f5             mulss xmm6, xmm5
// 006cf43c  f30f58c6             addss xmm0, xmm6
// 006cf440  0f28f3               movaps xmm6, xmm3
// 006cf443  f30f59742410         mulss xmm6, dword ptr [esp + 0x10]
// 006cf449  f30f58c6             addss xmm0, xmm6
// 006cf44d  0f28f3               movaps xmm6, xmm3
// 006cf450  f30f59f0             mulss xmm6, xmm0
// 006cf454  f30f11742434         movss dword ptr [esp + 0x34], xmm6
// 006cf45a  0f28f1               movaps xmm6, xmm1
// 006cf45d  f30f59f0             mulss xmm6, xmm0
// 006cf461  f30f11742438         movss dword ptr [esp + 0x38], xmm6
// 006cf467  0f28f2               movaps xmm6, xmm2
// 006cf46a  f30f59f0             mulss xmm6, xmm0
// 006cf46e  f30f1174243c         movss dword ptr [esp + 0x3c], xmm6
// 006cf474  f30f10742410         movss xmm6, dword ptr [esp + 0x10]
// 006cf47a  f30f5c742434         subss xmm6, dword ptr [esp + 0x34]
// 006cf480  f30f11742428         movss dword ptr [esp + 0x28], xmm6
// 006cf486  0f28f5               movaps xmm6, xmm5
// 006cf489  f30f5c742438         subss xmm6, dword ptr [esp + 0x38]
// 006cf48f  f30f1174242c         movss dword ptr [esp + 0x2c], xmm6
// 006cf495  0f28f4               movaps xmm6, xmm4
// 006cf498  f30f5c74243c         subss xmm6, dword ptr [esp + 0x3c]
// 006cf49e  f30f11742430         movss dword ptr [esp + 0x30], xmm6
// 006cf4a4  d9442430             fld dword ptr [esp + 0x30]
// 006cf4a8  0f28f9               movaps xmm7, xmm1
// 006cf4ab  dcc8                 fmul st(0), st(0)
// 006cf4ad  f30f59f8             mulss xmm7, xmm0
// 006cf4b1  d944242c             fld dword ptr [esp + 0x2c]
// 006cf4b5  f30f117c2438         movss dword ptr [esp + 0x38], xmm7
// 006cf4bb  dcc8                 fmul st(0), st(0)
// 006cf4bd  f30f5c6c2438         subss xmm5, dword ptr [esp + 0x38]
// 006cf4c3  0f28f3               movaps xmm6, xmm3
// 006cf4c6  f30f59f0             mulss xmm6, xmm0
// 006cf4ca  dec1                 faddp st(1)
// 006cf4cc  0f28fa               movaps xmm7, xmm2
// 006cf4cf  d9442428             fld dword ptr [esp + 0x28]
// 006cf4d3  f30f59f8             mulss xmm7, xmm0
// 006cf4d7  dcc8                 fmul st(0), st(0)
// 006cf4d9  f30f10442410         movss xmm0, dword ptr [esp + 0x10]
// 006cf4df  f30f5cc6             subss xmm0, xmm6
// 006cf4e3  f30f5ce7             subss xmm4, xmm7
// 006cf4e7  dec1                 faddp st(1)
// 006cf4e9  0f28f0               movaps xmm6, xmm0
// 006cf4ec  d9fa                 fsqrt 
// 006cf4ee  d9e8                 fld1 
// 006cf4f0  def1                 fdivrp st(1)
// 006cf4f2  d91c24               fstp dword ptr [esp]
// 006cf4f5  f30f103c24           movss xmm7, dword ptr [esp]
// 006cf4fa  0f28c7               movaps xmm0, xmm7
// 006cf4fd  f30f59c6             mulss xmm0, xmm6
// 006cf501  f30f59ef             mulss xmm5, xmm7
// 006cf505  f30f59e7             mulss xmm4, xmm7
// 006cf509  0f28f9               movaps xmm7, xmm1
// 006cf50c  0f28f2               movaps xmm6, xmm2
// 006cf50f  f30f59f5             mulss xmm6, xmm5
// 006cf513  56                   push esi
// 006cf514  8b742460             mov esi, dword ptr [esp + 0x60]
// 006cf518  f30f59fc             mulss xmm7, xmm4
// 006cf51c  f30f5cf7             subss xmm6, xmm7
// 006cf520  f30f11742444         movss dword ptr [esp + 0x44], xmm6
// 006cf526  8d4c2444             lea ecx, [esp + 0x44]
// 006cf52a  0f28f3               movaps xmm6, xmm3
// 006cf52d  51                   push ecx
// 006cf52e  f30f59f4             mulss xmm6, xmm4
// 006cf532  f30f59d0             mulss xmm2, xmm0
// 006cf536  f30f59c8             mulss xmm1, xmm0
// 006cf53a  f30f59dd             mulss xmm3, xmm5
// 006cf53e  f30f5cf2             subss xmm6, xmm2
// 006cf542  f30f5ccb             subss xmm1, xmm3
// 006cf546  6a00                 push 0
// 006cf548  8bce                 mov ecx, esi
// 006cf54a  f30f11642430         movss dword ptr [esp + 0x30], xmm4
// 006cf550  f30f116c242c         movss dword ptr [esp + 0x2c], xmm5
// 006cf556  f30f11442428         movss dword ptr [esp + 0x28], xmm0
// 006cf55c  f30f11742450         movss dword ptr [esp + 0x50], xmm6
// 006cf562  f30f114c2454         movss dword ptr [esp + 0x54], xmm1
// 006cf568  e8930be7ff           call 0x540100
// 006cf56d  8d542420             lea edx, [esp + 0x20]
// 006cf571  52                   push edx
// 006cf572  6a01                 push 1
// 006cf574  8bce                 mov ecx, esi
// 006cf576  e8850be7ff           call 0x540100
// 006cf57b  8d442450             lea eax, [esp + 0x50]
// 006cf57f  50                   push eax
// 006cf580  6a02                 push 2
// 006cf582  8bce                 mov ecx, esi
// 006cf584  e8770be7ff           call 0x540100
// 006cf589  8bc6                 mov eax, esi
// 006cf58b  5e                   pop esi
// 006cf58c  83c458               add esp, 0x58
// 006cf58f  c3                   ret 

struct Vec3 { float x, y, z; };

extern "C" {
    void* __cdecl sub_542840();
    void* __cdecl sub_542880();
}

struct Mechanism {
    char pad[0x58];
    void sub_540100(int idx, float* v);
    void func(float a, float b, float c);
};

void Mechanism::sub_540100(int idx, float* v)
{
    float* p = (float*)this;
    p[idx] = v[0];
    p[idx + 3] = v[1];
    p[idx + 6] = v[2];
}

void Mechanism::func(float a, float b, float c)
{
    float* p1 = (float*)sub_542840();
    float v1x = p1[0], v1y = p1[1], v1z = p1[2];
    float* p2 = (float*)sub_542880();
    float v2x = p2[0], v2y = p2[1], v2z = p2[2];

    float d = a * v1x + b * v1y + c * v1z;

    float px = a * d;
    float py = b * d;
    float pz = c * d;

    float dx = v1x - px;
    float dy = v1y - py;
    float dz = v1z - pz;

    float len = dx*dx + dy*dy + dz*dz;
    float inv;

    if (len > 1e-6f) {
        inv = 1.0f / len;
        dx *= inv; dy *= inv; dz *= inv;
    } else {
        float d2 = a * v2x + b * v2y + c * v2z;
        float qx = a * d2;
        float qy = b * d2;
        float qz = c * d2;
        float ex = v2x - qx;
        float ey = v2y - qy;
        float ez = v2z - qz;
        float len2 = ex*ex + ey*ey + ez*ez;
        inv = 1.0f / len2;
        dx = ex * inv; dy = ey * inv; dz = ez * inv;
    }

    float r0 = b * dz - c * dy;
    float r1 = c * dx - a * dz;
    float r2 = a * dy - b * dx;

    sub_540100(0, &dx);
    sub_540100(1, &r0);
    sub_540100(2, &dx);
}
