// from server: 56% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 49% by colin
// roc 2008-06 00641c40  unit: RBX::Humanoid  size: 216 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00641c40
//
// 00641c40  83ec08               sub esp, 8
// 00641c43  53                   push ebx
// 00641c44  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00641c48  d94324               fld dword ptr [ebx + 0x24]
// 00641c4b  56                   push esi
// 00641c4c  57                   push edi
// 00641c4d  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00641c51  d86724               fsub dword ptr [edi + 0x24]
// 00641c54  8bf1                 mov esi, ecx
// 00641c56  d94328               fld dword ptr [ebx + 0x28]
// 00641c59  d86728               fsub dword ptr [edi + 0x28]
// 00641c5c  d9432c               fld dword ptr [ebx + 0x2c]
// 00641c5f  d8672c               fsub dword ptr [edi + 0x2c]
// 00641c62  dcc8                 fmul st(0), st(0)
// 00641c64  d9c2                 fld st(2)
// 00641c66  decb                 fmulp st(3)
// 00641c68  dec2                 faddp st(2)
// 00641c6a  dcc8                 fmul st(0), st(0)
// 00641c6c  dec1                 faddp st(1)
// 00641c6e  d9fa                 fsqrt 
// 00641c70  d81df8a58400         fcomp dword ptr [0x84a5f8]
// 00641c76  dfe0                 fnstsw ax
// 00641c78  f6c405               test ah, 5
// 00641c7b  7a07                 jp 0x641c84
// 00641c7d  b801000000           mov eax, 1
// 00641c82  eb02                 jmp 0x641c86
// 00641c84  33c0                 xor eax, eax
// 00641c86  6a00                 push 0
// 00641c88  687c909200           push 0x92907c
// 00641c8d  68c8169500           push 0x9516c8
// 00641c92  6a00                 push 0
// 00641c94  56                   push esi
// 00641c95  88463c               mov byte ptr [esi + 0x3c], al
// 00641c98  e829fb0500           call 0x6a17c6
// 00641c9d  50                   push eax
// 00641c9e  e8ad01e5ff           call 0x491e50
// 00641ca3  83c418               add esp, 0x18
// 00641ca6  85c0                 test eax, eax
// 00641ca8  740c                 je 0x641cb6
// 00641caa  0fb64e3c             movzx ecx, byte ptr [esi + 0x3c]
// 00641cae  51                   push ecx
// 00641caf  8bc8                 mov ecx, eax
// 00641cb1  e8ba1cf6ff           call 0x5a3970
// 00641cb6  807e3c00             cmp byte ptr [esi + 0x3c], 0
// 00641cba  d9ee                 fldz 
// 00641cbc  7439                 je 0x641cf7
// 00641cbe  ddd8                 fstp st(0)
// 00641cc0  8d54240c             lea edx, [esp + 0xc]
// 00641cc4  d94724               fld dword ptr [edi + 0x24]
// 00641cc7  52                   push edx
// 00641cc8  d86324               fsub dword ptr [ebx + 0x24]
// 00641ccb  d9472c               fld dword ptr [edi + 0x2c]
// 00641cce  d8632c               fsub dword ptr [ebx + 0x2c]
// 00641cd1  d9c0                 fld st(0)
// 00641cd3  d8c9                 fmul st(1)
// 00641cd5  d9c2                 fld st(2)
// 00641cd7  d8cb                 fmul st(3)
// 00641cd9  dec1                 faddp st(1)
// 00641cdb  d9fa                 fsqrt 
// 00641cdd  d9e8                 fld1 
// 00641cdf  def1                 fdivrp st(1)
// 00641ce1  d9c0                 fld st(0)
// 00641ce3  decb                 fmulp st(3)
// 00641ce5  dec9                 fmulp st(1)
// 00641ce7  d95c2410             fstp dword ptr [esp + 0x10]
// 00641ceb  d95c2414             fstp dword ptr [esp + 0x14]
// 00641cef  e8fcc3f9ff           call 0x5de0f0
// 00641cf4  83c404               add esp, 4
// 00641cf7  807e3c00             cmp byte ptr [esi + 0x3c], 0
// 00641cfb  8b06                 mov eax, dword ptr [esi]
// 00641cfd  8b402c               mov eax, dword ptr [eax + 0x2c]
// 00641d00  0f94c1               sete cl
// 00641d03  0fb6d1               movzx edx, cl
// 00641d06  52                   push edx
// 00641d07  51                   push ecx
// 00641d08  8bce                 mov ecx, esi
// 00641d0a  d91c24               fstp dword ptr [esp]
// 00641d0d  ffd0                 call eax
// 00641d0f  5f                   pop edi
// 00641d10  5e                   pop esi
// 00641d11  5b                   pop ebx
// 00641d12  83c408               add esp, 8
// 00641d15  c20800               ret 8

struct Vec3 {
    float x, y, z;
};

struct Instance {
    virtual ~Instance();
    char pad[0x100];
    Instance* next;
};

struct ServiceProvider : Instance {
    ServiceProvider* finish();
};

struct Workspace {
    char pad0[0x3f8];
    bool flag3f8;
    void method(bool);
};

extern "C" double __cdecl acos(double);
extern const float tolerance;
extern "C" double __cdecl sqrt(double);

ServiceProvider* func_00491e50(Instance* p);
ServiceProvider* func_005a32e0(Instance* p);
void func_005de0f0(float* p);

struct Humanoid {
    char pad0[0x24];
    Vec3 pos;
    char pad1[0x3c - 0x30];
    bool flag3c;
    void method(Vec3* other, bool b);
};

void Humanoid::method(Vec3* other, bool b)
{
    float dx = pos.x - other->x;
    float dy = pos.y - other->y;
    float dz = pos.z - other->z;
    float dist = (float)sqrt(dx*dy + dx*dy + dz*dz);
    flag3c = (dist < tolerance) ? true : false;

    ServiceProvider* sp = func_00491e50((Instance*)this);
    if (sp) {
        ServiceProvider* ws = func_005a32e0((Instance*)sp);
        if (ws) {
            ((Workspace*)ws)->method(flag3c);
        }
    }

    if (flag3c) {
        float ax = other->x - pos.x;
        float az = other->z - pos.z;
        float len = (float)sqrt(ax*ax + az*az);
        float inv = 1.0f / len;
        float vx = ax * inv;
        float vz = az * inv;
        func_005de0f0(&vx);
    }

    bool c = !flag3c;
    void (Humanoid::*fn)(bool) = 0;
    (this->*(*(void (Humanoid::**)(bool))((char*)this + 0x2c)))(c);
}
