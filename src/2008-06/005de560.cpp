// from server: 100% by king_originala
// roc 2008-06 005de560  unit: RBX::Message  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005de560
//
// 005de560  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005de564  8b442404             mov eax, dword ptr [esp + 4]
// 005de568  d9410c               fld dword ptr [ecx + 0xc]
// 005de56b  d84804               fmul dword ptr [eax + 4]
// 005de56e  d94118               fld dword ptr [ecx + 0x18]
// 005de571  d84808               fmul dword ptr [eax + 8]
// 005de574  dec1                 faddp st(1)
// 005de576  d900                 fld dword ptr [eax]
// 005de578  d809                 fmul dword ptr [ecx]
// 005de57a  dec1                 faddp st(1)
// 005de57c  d94110               fld dword ptr [ecx + 0x10]
// 005de57f  d84804               fmul dword ptr [eax + 4]
// 005de582  d94104               fld dword ptr [ecx + 4]
// 005de585  d808                 fmul dword ptr [eax]
// 005de587  dec1                 faddp st(1)
// 005de589  d9411c               fld dword ptr [ecx + 0x1c]
// 005de58c  d84808               fmul dword ptr [eax + 8]
// 005de58f  dec1                 faddp st(1)
// 005de591  d94114               fld dword ptr [ecx + 0x14]
// 005de594  d84804               fmul dword ptr [eax + 4]
// 005de597  d94108               fld dword ptr [ecx + 8]
// 005de59a  d808                 fmul dword ptr [eax]
// 005de59c  dec1                 faddp st(1)
// 005de59e  d94120               fld dword ptr [ecx + 0x20]
// 005de5a1  d84808               fmul dword ptr [eax + 8]
// 005de5a4  dec1                 faddp st(1)
// 005de5a6  d9c2                 fld st(2)
// 005de5a8  d9e1                 fabs 
// 005de5aa  d9c2                 fld st(2)
// 005de5ac  d9e1                 fabs 
// 005de5ae  d9c2                 fld st(2)
// 005de5b0  d9e1                 fabs 
// 005de5b2  d9ca                 fxch st(2)
// 005de5b4  d8d1                 fcom st(1)
// 005de5b6  dfe0                 fnstsw ax
// 005de5b8  f6c441               test ah, 0x41
// 005de5bb  7529                 jne 0x5de5e6
// 005de5bd  ddd9                 fstp st(1)
// 005de5bf  dddb                 fstp st(3)
// 005de5c1  d8da                 fcomp st(2)
// 005de5c3  dfe0                 fnstsw ax
// 005de5c5  ddd9                 fstp st(1)
// 005de5c7  f6c405               test ah, 5
// 005de5ca  7a16                 jp 0x5de5e2
// 005de5cc  ddd8                 fstp st(0)
// 005de5ce  d9ee                 fldz 
// 005de5d0  ded9                 fcompp 
// 005de5d2  dfe0                 fnstsw ax
// 005de5d4  f6c405               test ah, 5
// 005de5d7  7a03                 jp 0x5de5dc
// 005de5d9  33c0                 xor eax, eax
// 005de5db  c3                   ret 
// 005de5dc  b803000000           mov eax, 3
// 005de5e1  c3                   ret 
// 005de5e2  ddd9                 fstp st(1)
// 005de5e4  eb29                 jmp 0x5de60f
// 005de5e6  ddd8                 fstp st(0)
// 005de5e8  dddc                 fstp st(4)
// 005de5ea  d8db                 fcomp st(3)
// 005de5ec  dfe0                 fnstsw ax
// 005de5ee  ddda                 fstp st(2)
// 005de5f0  f6c405               test ah, 5
// 005de5f3  7a18                 jp 0x5de60d
// 005de5f5  ddd9                 fstp st(1)
// 005de5f7  d9ee                 fldz 
// 005de5f9  ded9                 fcompp 
// 005de5fb  dfe0                 fnstsw ax
// 005de5fd  f6c405               test ah, 5
// 005de600  b801000000           mov eax, 1
// 005de605  7b1d                 jnp 0x5de624
// 005de607  b804000000           mov eax, 4
// 005de60c  c3                   ret 
// 005de60d  ddd8                 fstp st(0)
// 005de60f  d9ee                 fldz 
// 005de611  ded9                 fcompp 
// 005de613  dfe0                 fnstsw ax
// 005de615  f6c405               test ah, 5
// 005de618  b802000000           mov eax, 2
// 005de61d  7b05                 jnp 0x5de624
// 005de61f  b805000000           mov eax, 5
// 005de624  c3                   ret 

extern "C" double __cdecl fabs(double);

struct Vector3 {
    float x, y, z;
};

struct Matrix3 {
    float m[9];
};

int __cdecl classify(const Vector3& v, const Matrix3& m)
{
    double x = v.x * m.m[0] + (m.m[3] * v.y + m.m[6] * v.z);
    double y = m.m[1] * v.x + m.m[4] * v.y + m.m[7] * v.z;
    double z = m.m[2] * v.x + m.m[5] * v.y + m.m[8] * v.z;

    double ax = fabs(x);
    double ay = fabs(y);
    double az = fabs(z);

    if (ax > ay) {
        if (ax > az)
            return x > 0.0 ? 0 : 3;
        else
            return z > 0.0 ? 2 : 5;
    } else {
        if (ay > az)
            return y > 0.0 ? 1 : 4;
        else
            return z > 0.0 ? 2 : 5;
    }
}
