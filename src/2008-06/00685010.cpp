// from server: 82% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
// from server: 81% by colin
// roc 2008-06 00685010  unit: Ogre::RbxSubEntity  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685010
//
// 00685010  83ec0c               sub esp, 0xc
// 00685013  56                   push esi
// 00685014  57                   push edi
// 00685015  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 00685019  8bf1                 mov esi, ecx
// 0068501b  39bee8000000         cmp dword ptr [esi + 0xe8], edi
// 00685021  750e                 jne 0x685031
// 00685023  d986e4000000         fld dword ptr [esi + 0xe4]
// 00685029  5f                   pop edi
// 0068502a  5e                   pop esi
// 0068502b  83c40c               add esp, 0xc
// 0068502e  c20400               ret 4
// 00685031  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 00685034  8b01                 mov eax, dword ptr [ecx]
// 00685036  8b5048               mov edx, dword ptr [eax + 0x48]
// 00685039  6a00                 push 0
// 0068503b  68042d9300           push 0x932d04
// 00685040  68ec2c9300           push 0x932cec
// 00685045  6a00                 push 0
// 00685047  ffd2                 call edx
// 00685049  50                   push eax
// 0068504a  e877c70100           call 0x6a17c6
// 0068504f  d986fc000000         fld dword ptr [esi + 0xfc]
// 00685055  d95c241c             fstp dword ptr [esp + 0x1c]
// 00685059  83c414               add esp, 0x14
// 0068505c  d9860c010000         fld dword ptr [esi + 0x10c]
// 00685062  8bcf                 mov ecx, edi
// 00685064  d95c240c             fstp dword ptr [esp + 0xc]
// 00685068  d9861c010000         fld dword ptr [esi + 0x11c]
// 0068506e  d95c2410             fstp dword ptr [esp + 0x10]
// 00685072  ff1590448000         call dword ptr [0x804490]
// 00685078  d9442408             fld dword ptr [esp + 8]
// 0068507c  5f                   pop edi
// 0068507d  d820                 fsub dword ptr [eax]
// 0068507f  5e                   pop esi
// 00685080  d9442404             fld dword ptr [esp + 4]
// 00685084  d86004               fsub dword ptr [eax + 4]
// 00685087  d9442408             fld dword ptr [esp + 8]
// 0068508b  d86008               fsub dword ptr [eax + 8]
// 0068508e  dcc8                 fmul st(0), st(0)
// 00685090  d9c2                 fld st(2)
// 00685092  decb                 fmulp st(3)
// 00685094  dec2                 faddp st(2)
// 00685096  dcc8                 fmul st(0), st(0)
// 00685098  dec1                 faddp st(1)
// 0068509a  83c40c               add esp, 0xc
// 0068509d  c20400               ret 4

struct Vector3 {
    float x, y, z;
};

struct Camera {
    Vector3 const& getDerivedPosition() const;
};

extern "C" int __cdecl sub_6A17C6(void*);

struct RbxSubEntity {
    char pad[0x28];
    void* node;
    char pad2[0xe4 - 0x2c];
    float cachedValue;
    int cachedId;
    char pad3[0xfc - 0xec];
    float fx;
    char pad4[0x10c - 0x100];
    float fy;
    char pad5[0x11c - 0x110];
    float fz;
    float getValue(int id);
};

float RbxSubEntity::getValue(int id) {
    if (cachedId == id) {
        return cachedValue;
    }
    void* n = node;
    void** vtbl = *(void***)n;
    typedef void* (__thiscall *Fn)(void*, int, const char*, const char*, int);
    Fn fn = (Fn)vtbl[0x48 / 4];
    void* r = fn(n, 0, (const char*)0x932cec, (const char*)0x932d04, 0);
    sub_6A17C6(r);

    float a = fx;
    float b = fy;
    float c = fz;

    Camera* cam = (Camera*)id;
    const Vector3& p = cam->getDerivedPosition();

    float dx = a - p.x;
    float dy = b - p.y;
    float dz = c - p.z;
    return dx * dx + dy * dy + dz * dz;
}
