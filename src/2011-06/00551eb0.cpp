// from server: 35% by atomic.potato
// roc 2011-06 00551eb0  unit: G3D::Sphere  size: 902 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00551eb0
//
// 00551eb0  8b442404             mov eax, dword ptr [esp + 4]
// 00551eb4  d900                 fld dword ptr [eax]
// 00551eb6  56                   push esi
// 00551eb7  8bf1                 mov esi, ecx
// 00551eb9  d91e                 fstp dword ptr [esi]
// 00551ebb  57                   push edi
// 00551ebc  d94004               fld dword ptr [eax + 4]
// 00551ebf  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00551ec3  d95e04               fstp dword ptr [esi + 4]
// 00551ec6  d94008               fld dword ptr [eax + 8]
// 00551ec9  d95e08               fstp dword ptr [esi + 8]
// 00551ecc  d907                 fld dword ptr [edi]
// 00551ece  d95e0c               fstp dword ptr [esi + 0xc]
// 00551ed1  d94704               fld dword ptr [edi + 4]
// 00551ed4  d95e10               fstp dword ptr [esi + 0x10]
// 00551ed7  d94708               fld dword ptr [edi + 8]
// 00551eda  d95e14               fstp dword ptr [esi + 0x14]
// 00551edd  e8de08ffff           call 0x5427c0
// 00551ee2  f30f1000             movss xmm0, dword ptr [eax]
// 00551ee6  f30f5e07             divss xmm0, dword ptr [edi]
// 00551eea  f30f104804           movss xmm1, dword ptr [eax + 4]
// 00551eef  f30f5e4f04           divss xmm1, dword ptr [edi + 4]
// 00551ef4  f30f105008           movss xmm2, dword ptr [eax + 8]
// 00551ef9  f30f5e5708           divss xmm2, dword ptr [edi + 8]
// 00551efe  f30f115620           movss dword ptr [esi + 0x20], xmm2
// 00551f03  f30f114618           movss dword ptr [esi + 0x18], xmm0
// 00551f08  f30f114e1c           movss dword ptr [esi + 0x1c], xmm1
// 00551f0d  f30f106e10           movss xmm5, dword ptr [esi + 0x10]
// 00551f12  f30f104618           movss xmm0, dword ptr [esi + 0x18]
// 00551f17  f30f107614           movss xmm6, dword ptr [esi + 0x14]
// 00551f1c  0f28d5               movaps xmm2, xmm5
// 00551f1f  f30f59d0             mulss xmm2, xmm0
// 00551f23  f30f104620           movss xmm0, dword ptr [esi + 0x20]
// 00551f28  0f28f9               movaps xmm7, xmm1
// 00551f2b  f30f104e0c           movss xmm1, dword ptr [esi + 0xc]
// 00551f30  0f28e0               movaps xmm4, xmm0
// 00551f33  f30f59c1             mulss xmm0, xmm1
// 00551f37  f30f59e5             mulss xmm4, xmm5
// 00551f3b  0f28ee               movaps xmm5, xmm6
// 00551f3e  f30f59ef             mulss xmm5, xmm7
// 00551f42  f30f1144240c         movss dword ptr [esp + 0xc], xmm0
// 00551f48  f30f114638           movss dword ptr [esi + 0x38], xmm0
// 00551f4d  f30f104618           movss xmm0, dword ptr [esi + 0x18]
// 00551f52  f30f59f0             mulss xmm6, xmm0
// 00551f56  f30f1006             movss xmm0, dword ptr [esi]
// 00551f5a  0f28d9               movaps xmm3, xmm1
// 00551f5d  f30f104e04           movss xmm1, dword ptr [esi + 4]
// 00551f62  f30f59df             mulss xmm3, xmm7
// 00551f66  f30f11562c           movss dword ptr [esi + 0x2c], xmm2
// 00551f6b  0f28f8               movaps xmm7, xmm0
// 00551f6e  f30f59fa             mulss xmm7, xmm2
// 00551f72  0f28d1               movaps xmm2, xmm1
// 00551f75  f30f5cd7             subss xmm2, xmm7
// 00551f79  f30f11763c           movss dword ptr [esi + 0x3c], xmm6
// 00551f7e  f30f115640           movss dword ptr [esi + 0x40], xmm2
// 00551f83  f30f105608           movss xmm2, dword ptr [esi + 8]
// 00551f88  0f28f8               movaps xmm7, xmm0
// 00551f8b  f30f59fe             mulss xmm7, xmm6
// 00551f8f  f30f115e28           movss dword ptr [esi + 0x28], xmm3
// 00551f94  0f28f2               movaps xmm6, xmm2
// 00551f97  f30f5cf7             subss xmm6, xmm7
// 00551f9b  f30f117644           movss dword ptr [esi + 0x44], xmm6
// 00551fa0  0f28f1               movaps xmm6, xmm1
// 00551fa3  f30f59f3             mulss xmm6, xmm3
// 00551fa7  0f28d8               movaps xmm3, xmm0
// 00551faa  f30f5cde             subss xmm3, xmm6
// 00551fae  f30f115e48           movss dword ptr [esi + 0x48], xmm3
// 00551fb3  0f28d9               movaps xmm3, xmm1
// 00551fb6  f30f59dd             mulss xmm3, xmm5
// 00551fba  f30f116e30           movss dword ptr [esi + 0x30], xmm5
// 00551fbf  0f28ea               movaps xmm5, xmm2
// 00551fc2  f30f5ceb             subss xmm5, xmm3
// 00551fc6  0f28da               movaps xmm3, xmm2
// 00551fc9  f30f595c240c         mulss xmm3, dword ptr [esp + 0xc]
// 00551fcf  f30f59d4             mulss xmm2, xmm4
// 00551fd3  f30f5cc3             subss xmm0, xmm3
// 00551fd7  f30f5cca             subss xmm1, xmm2
// 00551fdb  f30f116634           movss dword ptr [esi + 0x34], xmm4
// 00551fe0  f30f116e4c           movss dword ptr [esi + 0x4c], xmm5
// 00551fe5  f30f114650           movss dword ptr [esi + 0x50], xmm0
// 00551fea  f30f114e54           movss dword ptr [esi + 0x54], xmm1
// 00551fef  0f57c0               xorps xmm0, xmm0
// 00551ff2  f30f104e0c           movss xmm1, dword ptr [esi + 0xc]
// 00551ff7  0f2fc1               comiss xmm0, xmm1
// 00551ffa  0f86bc000000         jbe 0x5520bc
// 00552000  f30f104e10           movss xmm1, dword ptr [esi + 0x10]
// 00552005  0f2fc1               comiss xmm0, xmm1
// 00552008  7633                 jbe 0x55203d
// 0055200a  f30f104e14           movss xmm1, dword ptr [esi + 0x14]
// 0055200f  0f2fc1               comiss xmm0, xmm1
// 00552012  760c                 jbe 0x552020
// 00552014  5f                   pop edi
// 00552015  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0055201c  5e                   pop esi
// 0055201d  c20800               ret 8
// 00552020  0f2fc8               comiss xmm1, xmm0
// 00552023  760c                 jbe 0x552031
// 00552025  5f                   pop edi
// 00552026  c7462401000000       mov dword ptr [esi + 0x24], 1
// 0055202d  5e                   pop esi
// 0055202e  c20800               ret 8
// 00552031  5f                   pop edi
// 00552032  c7462416000000       mov dword ptr [esi + 0x24], 0x16
// 00552039  5e                   pop esi
// 0055203a  c20800               ret 8
// 0055203d  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 00552042  0f2fc2               comiss xmm0, xmm2
// 00552045  7621                 jbe 0x552068
// 00552047  0f2ec8               ucomiss xmm1, xmm0
// 0055204a  9f                   lahf 
// 0055204b  f6c444               test ah, 0x44
// 0055204e  7a0c                 jp 0x55205c
// 00552050  5f                   pop edi
// 00552051  c7462412000000       mov dword ptr [esi + 0x24], 0x12
// 00552058  5e                   pop esi
// 00552059  c20800               ret 8
// 0055205c  5f                   pop edi
// 0055205d  c7462402000000       mov dword ptr [esi + 0x24], 2
// 00552064  5e                   pop esi
// 00552065  c20800               ret 8
// 00552068  0f2ec8               ucomiss xmm1, xmm0
// 0055206b  9f                   lahf 
// 0055206c  f6c444               test ah, 0x44
// 0055206f  7a15                 jp 0x552086
// 00552071  0f2ed0               ucomiss xmm2, xmm0
// 00552074  9f                   lahf 
// 00552075  f6c444               test ah, 0x44
// 00552078  7a0c                 jp 0x552086
// 0055207a  5f                   pop edi
// 0055207b  c7462409000000       mov dword ptr [esi + 0x24], 9
// 00552082  5e                   pop esi
// 00552083  c20800               ret 8
// 00552086  0f2ed0               ucomiss xmm2, xmm0
// 00552089  9f                   lahf 
// 0055208a  f6c444               test ah, 0x44
// 0055208d  7a0c                 jp 0x55209b
// 0055208f  5f                   pop edi
// 00552090  c7462417000000       mov dword ptr [esi + 0x24], 0x17
// 00552097  5e                   pop esi
// 00552098  c20800               ret 8
// 0055209b  0f2ec8               ucomiss xmm1, xmm0
// 0055209e  9f                   lahf 
// 0055209f  f6c444               test ah, 0x44
// 005520a2  7a0c                 jp 0x5520b0
// 005520a4  5f                   pop edi
// 005520a5  c7462413000000       mov dword ptr [esi + 0x24], 0x13
// 005520ac  5e                   pop esi
// 005520ad  c20800               ret 8
// 005520b0  5f                   pop edi
// 005520b1  c7462403000000       mov dword ptr [esi + 0x24], 3
// 005520b8  5e                   pop esi
// 005520b9  c20800               ret 8
// 005520bc  f30f105610           movss xmm2, dword ptr [esi + 0x10]
// 005520c1  0f2fc2               comiss xmm0, xmm2
// 005520c4  767f                 jbe 0x552145
// 005520c6  f30f105614           movss xmm2, dword ptr [esi + 0x14]
// 005520cb  0f2fc2               comiss xmm0, xmm2
// 005520ce  7621                 jbe 0x5520f1
// 005520d0  0f2ec8               ucomiss xmm1, xmm0
// 005520d3  9f                   lahf 
// 005520d4  f6c444               test ah, 0x44
// 005520d7  7a0c                 jp 0x5520e5
// 005520d9  5f                   pop edi
// 005520da  c746240e000000       mov dword ptr [esi + 0x24], 0xe
// 005520e1  5e                   pop esi
// 005520e2  c20800               ret 8
// 005520e5  5f                   pop edi
// 005520e6  c7462404000000       mov dword ptr [esi + 0x24], 4
// 005520ed  5e                   pop esi
// 005520ee  c20800               ret 8
// 005520f1  0f2ec8               ucomiss xmm1, xmm0
// 005520f4  9f                   lahf 
// 005520f5  f6c444               test ah, 0x44
// 005520f8  7a15                 jp 0x55210f
// 005520fa  0f2ed0               ucomiss xmm2, xmm0
// 005520fd  9f                   lahf 
// 005520fe  f6c444               test ah, 0x44
// 00552101  7a0c                 jp 0x55210f
// 00552103  5f                   pop edi
// 00552104  c746240b000000       mov dword ptr [esi + 0x24], 0xb
// 0055210b  5e                   pop esi
// 0055210c  c20800               ret 8
// 0055210f  0f2ed0               ucomiss xmm2, xmm0
// 00552112  9f                   lahf 
// 00552113  f6c444               test ah, 0x44
// 00552116  7a0c                 jp 0x552124
// 00552118  5f                   pop edi
// 00552119  c7462418000000       mov dword ptr [esi + 0x24], 0x18
// 00552120  5e                   pop esi
// 00552121  c20800               ret 8
// 00552124  0f2ec8               ucomiss xmm1, xmm0
// 00552127  9f                   lahf 
// 00552128  f6c444               test ah, 0x44
// 0055212b  7a0c                 jp 0x552139
// 0055212d  5f                   pop edi
// 0055212e  c746240f000000       mov dword ptr [esi + 0x24], 0xf
// 00552135  5e                   pop esi
// 00552136  c20800               ret 8
// 00552139  5f                   pop edi
// 0055213a  c7462405000000       mov dword ptr [esi + 0x24], 5
// 00552141  5e                   pop esi
// 00552142  c20800               ret 8
// 00552145  f30f105e14           movss xmm3, dword ptr [esi + 0x14]
// 0055214a  0f2fc3               comiss xmm0, xmm3
// 0055214d  7654                 jbe 0x5521a3
// 0055214f  0f2ec8               ucomiss xmm1, xmm0
// 00552152  9f                   lahf 
// 00552153  f6c444               test ah, 0x44
// 00552156  7a15                 jp 0x55216d
// 00552158  0f2ed0               ucomiss xmm2, xmm0
// 0055215b  9f                   lahf 
// 0055215c  f6c444               test ah, 0x44
// 0055215f  7a0c                 jp 0x55216d
// 00552161  5f                   pop edi
// 00552162  c746240d000000       mov dword ptr [esi + 0x24], 0xd
// 00552169  5e                   pop esi
// 0055216a  c20800               ret 8
// 0055216d  0f2ec8               ucomiss xmm1, xmm0
// 00552170  9f                   lahf 
// 00552171  f6c444               test ah, 0x44
// 00552174  7a0c                 jp 0x552182
// 00552176  5f                   pop edi
// 00552177  c7462410000000       mov dword ptr [esi + 0x24], 0x10
// 0055217e  5e                   pop esi
// 0055217f  c20800               ret 8
// 00552182  0f2ed0               ucomiss xmm2, xmm0
// 00552185  9f                   lahf 
// 00552186  f6c444               test ah, 0x44
// 00552189  7a0c                 jp 0x552197
// 0055218b  5f                   pop edi
// 0055218c  c7462414000000       mov dword ptr [esi + 0x24], 0x14
// 00552193  5e                   pop esi
// 00552194  c20800               ret 8
// 00552197  5f                   pop edi
// 00552198  c7462406000000       mov dword ptr [esi + 0x24], 6
// 0055219f  5e                   pop esi
// 005521a0  c20800               ret 8
// 005521a3  0f2ec8               ucomiss xmm1, xmm0
// 005521a6  9f                   lahf 
// 005521a7  f6c444               test ah, 0x44
// 005521aa  7a36                 jp 0x5521e2
// 005521ac  0f2ed0               ucomiss xmm2, xmm0
// 005521af  9f                   lahf 
// 005521b0  f6c444               test ah, 0x44
// 005521b3  7a0c                 jp 0x5521c1
// 005521b5  5f                   pop edi
// 005521b6  c746240c000000       mov dword ptr [esi + 0x24], 0xc
// 005521bd  5e                   pop esi
// 005521be  c20800               ret 8
// 005521c1  0f2ed8               ucomiss xmm3, xmm0
// 005521c4  9f                   lahf 
// 005521c5  f6c444               test ah, 0x44
// 005521c8  7a0c                 jp 0x5521d6
// 005521ca  5f                   pop edi
// 005521cb  c746240a000000       mov dword ptr [esi + 0x24], 0xa
// 005521d2  5e                   pop esi
// 005521d3  c20800               ret 8
// 005521d6  5f                   pop edi
// 005521d7  c7462411000000       mov dword ptr [esi + 0x24], 0x11
// 005521de  5e                   pop esi
// 005521df  c20800               ret 8
// 005521e2  0f2ed0               ucomiss xmm2, xmm0
// 005521e5  9f                   lahf 
// 005521e6  f6c444               test ah, 0x44
// 005521e9  7a15                 jp 0x552200
// 005521eb  0f2ed8               ucomiss xmm3, xmm0
// 005521ee  9f                   lahf 
// 005521ef  f6c444               test ah, 0x44
// 005521f2  7a0c                 jp 0x552200
// 005521f4  5f                   pop edi
// 005521f5  c7462408000000       mov dword ptr [esi + 0x24], 8
// 005521fc  5e                   pop esi
// 005521fd  c20800               ret 8
// 00552200  0f2ed0               ucomiss xmm2, xmm0
// 00552203  9f                   lahf 
// 00552204  f6c444               test ah, 0x44
// 00552207  7a0c                 jp 0x552215
// 00552209  5f                   pop edi
// 0055220a  c7462415000000       mov dword ptr [esi + 0x24], 0x15
// 00552211  5e                   pop esi
// 00552212  c20800               ret 8
// 00552215  0f2ed8               ucomiss xmm3, xmm0
// 00552218  9f                   lahf 
// 00552219  f6c444               test ah, 0x44
// 0055221c  7a0c                 jp 0x55222a
// 0055221e  5f                   pop edi
// 0055221f  c7462419000000       mov dword ptr [esi + 0x24], 0x19
// 00552226  5e                   pop esi
// 00552227  c20800               ret 8
// 0055222a  5f                   pop edi
// 0055222b  c7462407000000       mov dword ptr [esi + 0x24], 7
// 00552232  5e                   pop esi
// 00552233  c20800               ret 8

struct Vec3 {
    float x, y, z;
};

struct Sphere {
    float cx, cy, cz;
    float ex, ey, ez;
    float pad18;
    float pad1c;
    float pad20;
    int type;
    float m28, m2c, m30, m34, m38, m3c, m40, m44, m48, m4c, m50, m54;
    int classify(Vec3* center, Vec3* extent);
};

extern "C" float* __cdecl G3D_getUnitVector();

int Sphere::classify(Vec3* center, Vec3* extent) {
    cx = center->x;
    cy = center->y;
    cz = center->z;
    ex = extent->x;
    ey = extent->y;
    ez = extent->z;

    float* u = G3D_getUnitVector();
    float ux = u[0] / extent->x;
    float uy = u[1] / extent->y;
    float uz = u[2] / extent->z;

    pad20 = uz;
    pad18 = ux;
    pad1c = uy;

    float a = ey * ux;
    float b = ez * uy;
    float c = ez * ux;
    float d = ez * uy;
    float e = ex * uz;
    float f = ey * uz;
    float g = ex * uy;
    float h = ex * ux;

    m38 = ez * ex;
    m2c = ey * ux;
    m3c = ey * uz;
    m40 = cy - cx * m2c;
    m28 = ex * uy;
    m44 = cz - cx * m3c;
    m48 = cx - cy * m28;
    m30 = ey * uy;
    m4c = cz - cy * m30;
    m34 = ez * ey;
    m50 = cx - cz * m38;
    m54 = cy - cz * m34;

    float zero = 0.0f;
    float vx = ex;
    float vy = ey;
    float vz = ez;

    if (zero > vx) {
        if (zero > vy) {
            if (zero > vz) {
                type = 0;
                return type;
            }
            if (vz > zero) {
                type = 1;
                return type;
            }
            type = 0x16;
            return type;
        }
        if (zero > vz) {
            if (vy == zero) {
                type = 0x12;
                return type;
            }
            type = 2;
            return type;
        }
        if (vy == zero && vz == zero) {
            type = 9;
            return type;
        }
        if (vz == zero) {
            type = 0x17;
            return type;
        }
        if (vy == zero) {
            type = 0x13;
            return type;
        }
        type = 3;
        return type;
    }

    if (zero > vy) {
        if (zero > vz) {
            if (vx == zero) {
                type = 0xe;
                return type;
            }
            type = 4;
            return type;
        }
        if (vx == zero && vz == zero) {
            type = 0xb;
            return type;
        }
        if (vz == zero) {
            type = 0x18;
            return type;
        }
        if (vx == zero) {
            type = 0xf;
            return type;
        }
        type = 5;
        return type;
    }

    if (zero > vz) {
        if (vx == zero && vy == zero) {
            type = 0xd;
            return type;
        }
        if (vx == zero) {
            type = 0x10;
            return type;
        }
        if (vy == zero) {
            type = 0x14;
            return type;
        }
        type = 6;
        return type;
    }

    if (vx == zero) {
        if (vy == zero) {
            type = 0xc;
            return type;
        }
        if (vz == zero) {
            type = 0xa;
            return type;
        }
        type = 0x11;
        return type;
    }

    if (vy == zero) {
        if (vz == zero) {
            type = 8;
            return type;
        }
        type = 0x15;
        return type;
    }

    if (vz == zero) {
        type = 0x19;
        return type;
    }

    type = 7;
    return type;
}
