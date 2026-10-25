// from server: 100% by king_originala
// roc 2008-06 005e86f0  unit: RBX::Primitive  size: 123 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e86f0
//
// 005e86f0  83ec0c               sub esp, 0xc
// 005e86f3  56                   push esi
// 005e86f4  8bf1                 mov esi, ecx
// 005e86f6  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 005e86fc  8b01                 mov eax, dword ptr [ecx]
// 005e86fe  8b5008               mov edx, dword ptr [eax + 8]
// 005e8701  57                   push edi
// 005e8702  ffd2                 call edx
// 005e8704  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 005e8708  3bc7                 cmp eax, edi
// 005e870a  7457                 je 0x5e8763
// 005e870c  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 005e8712  d94104               fld dword ptr [ecx + 4]
// 005e8715  d95c2408             fstp dword ptr [esp + 8]
// 005e8719  d94108               fld dword ptr [ecx + 8]
// 005e871c  d95c240c             fstp dword ptr [esp + 0xc]
// 005e8720  d9410c               fld dword ptr [ecx + 0xc]
// 005e8723  d95c2410             fstp dword ptr [esp + 0x10]
// 005e8727  85c9                 test ecx, ecx
// 005e8729  7409                 je 0x5e8734
// 005e872b  8b01                 mov eax, dword ptr [ecx]
// 005e872d  8b5004               mov edx, dword ptr [eax + 4]
// 005e8730  6a01                 push 1
// 005e8732  ffd2                 call edx
// 005e8734  57                   push edi
// 005e8735  e846f6ffff           call 0x5e7d80
// 005e873a  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 005e873d  83c404               add esp, 4
// 005e8740  89869c000000         mov dword ptr [esi + 0x9c], eax
// 005e8746  85c9                 test ecx, ecx
// 005e8748  7406                 je 0x5e8750
// 005e874a  56                   push esi
// 005e874b  e8e00a0000           call 0x5e9230
// 005e8750  8d442408             lea eax, [esp + 8]
// 005e8754  50                   push eax
// 005e8755  8bce                 mov ecx, esi
// 005e8757  e814fdffff           call 0x5e8470
// 005e875c  c686f000000001       mov byte ptr [esi + 0xf0], 1
// 005e8763  5f                   pop edi
// 005e8764  5e                   pop esi
// 005e8765  83c40c               add esp, 0xc
// 005e8768  c20400               ret 4

struct Vector {
    float x, y, z;
};

struct Geometry {
    virtual void slot0();
    virtual ~Geometry();
    virtual int getType();

    float x, y, z;
};

struct Primitive;

struct Observer {
    void notify(Primitive*);
};

Geometry* __cdecl createGeometry(int);

struct Primitive {
    char reserved0[0x58];
    Observer* observer;
    char reserved1[0x40];
    Geometry* geometry;
    char reserved2[0x50];
    unsigned char changed;

    void setVector(const Vector&);
    void func_005e86f0(int);
};

void Primitive::func_005e86f0(int type)
{
    if (geometry->getType() != type) {
        Vector saved;
        saved.x = geometry->x;
        saved.y = geometry->y;
        saved.z = geometry->z;

        delete geometry;
        geometry = createGeometry(type);

        if (observer)
            observer->notify(this);

        setVector(saved);
        changed = 1;
    }
}
