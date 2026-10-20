// from server: 89% by colin
// from server: 78% by king_originala
// roc 2008-06 004f78d0  unit: RBX::ViewNew::WedgeBuilder  size: 349 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f78d0
//
// 004f78d0  6aff                 push -1
// 004f78d2  68a3af7c00           push 0x7cafa3
// 004f78d7  64a100000000         mov eax, dword ptr fs:[0]
// 004f78dd  50                   push eax
// 004f78de  64892500000000       mov dword ptr fs:[0], esp
// 004f78e5  83ec30               sub esp, 0x30
// 004f78e8  56                   push esi
// 004f78e9  8bf1                 mov esi, ecx
// 004f78eb  57                   push edi
// 004f78ec  8974240c             mov dword ptr [esp + 0xc], esi
// 004f78f0  e87b0c0500           call 0x548570
// 004f78f5  6a28                 push 0x28
// 004f78f7  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004f78ff  c706e8708200         mov dword ptr [esi], 0x8270e8
// 004f7905  e816901a00           call 0x6a0920
// 004f790a  83c404               add esp, 4
// 004f790d  89442410             mov dword ptr [esp + 0x10], eax
// 004f7911  c644244001           mov byte ptr [esp + 0x40], 1
// 004f7916  85c0                 test eax, eax
// 004f7918  740b                 je 0x4f7925
// 004f791a  6a05                 push 5
// 004f791c  8bc8                 mov ecx, eax
// 004f791e  e8bd59feff           call 0x4dd2e0
// 004f7923  eb02                 jmp 0x4f7927
// 004f7925  33c0                 xor eax, eax
// 004f7927  c744240800000000     mov dword ptr [esp + 8], 0
// 004f792f  85c0                 test eax, eax
// 004f7931  740e                 je 0x4f7941
// 004f7933  89442408             mov dword ptr [esp + 8], eax
// 004f7937  83c004               add eax, 4
// 004f793a  50                   push eax
// 004f793b  ff15b0218000         call dword ptr [0x8021b0]
// 004f7941  8d442408             lea eax, [esp + 8]
// 004f7945  50                   push eax
// 004f7946  8d4e0c               lea ecx, [esi + 0xc]
// 004f7949  c644244402           mov byte ptr [esp + 0x44], 2
// 004f794e  e85d52feff           call 0x4dcbb0
// 004f7953  8b442448             mov eax, dword ptr [esp + 0x48]
// 004f7957  d900                 fld dword ptr [eax]
// 004f7959  8d4c2408             lea ecx, [esp + 8]
// 004f795d  d94004               fld dword ptr [eax + 4]
// 004f7960  d94008               fld dword ptr [eax + 8]
// 004f7963  33c0                 xor eax, eax
// 004f7965  50                   push eax
// 004f7966  d9ca                 fxch st(2)
// 004f7968  83ec0c               sub esp, 0xc
// 004f796b  8bc4                 mov eax, esp
// 004f796d  d918                 fstp dword ptr [eax]
// 004f796f  89642458             mov dword ptr [esp + 0x58], esp
// 004f7973  51                   push ecx
// 004f7974  d95804               fstp dword ptr [eax + 4]
// 004f7977  8d4c2428             lea ecx, [esp + 0x28]
// 004f797b  d95808               fstp dword ptr [eax + 8]
// 004f797e  e8fd930000           call 0x500d80
// 004f7983  d90580708200         fld dword ptr [0x827080]
// 004f7989  c7442414a8708200     mov dword ptr [esp + 0x14], 0x8270a8
// 004f7991  d95c2434             fstp dword ptr [esp + 0x34]
// 004f7995  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004f7999  6a01                 push 1
// 004f799b  52                   push edx
// 004f799c  8d4c241c             lea ecx, [esp + 0x1c]
// 004f79a0  c644244803           mov byte ptr [esp + 0x48], 3
// 004f79a5  e8f6920000           call 0x500ca0
// 004f79aa  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f79ae  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 004f79b4  c644244002           mov byte ptr [esp + 0x40], 2
// 004f79b9  85c0                 test eax, eax
// 004f79bb  742b                 je 0x4f79e8
// 004f79bd  83c004               add eax, 4
// 004f79c0  50                   push eax
// 004f79c1  ffd7                 call edi
// 004f79c3  85c0                 test eax, eax
// 004f79c5  7519                 jne 0x4f79e0
// 004f79c7  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f79cb  e8c033f6ff           call 0x45ad90
// 004f79d0  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f79d4  85c9                 test ecx, ecx
// 004f79d6  7408                 je 0x4f79e0
// 004f79d8  8b01                 mov eax, dword ptr [ecx]
// 004f79da  8b10                 mov edx, dword ptr [eax]
// 004f79dc  6a01                 push 1
// 004f79de  ffd2                 call edx
// 004f79e0  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004f79e8  8b442408             mov eax, dword ptr [esp + 8]
// 004f79ec  c644244000           mov byte ptr [esp + 0x40], 0
// 004f79f1  85c0                 test eax, eax
// 004f79f3  7423                 je 0x4f7a18
// 004f79f5  83c004               add eax, 4
// 004f79f8  50                   push eax
// 004f79f9  ffd7                 call edi
// 004f79fb  85c0                 test eax, eax
// 004f79fd  7519                 jne 0x4f7a18
// 004f79ff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f7a03  e88833f6ff           call 0x45ad90
// 004f7a08  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f7a0c  85c9                 test ecx, ecx
// 004f7a0e  7408                 je 0x4f7a18
// 004f7a10  8b01                 mov eax, dword ptr [ecx]
// 004f7a12  8b10                 mov edx, dword ptr [eax]
// 004f7a14  6a01                 push 1
// 004f7a16  ffd2                 call edx
// 004f7a18  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004f7a1c  5f                   pop edi
// 004f7a1d  8bc6                 mov eax, esi
// 004f7a1f  64890d00000000       mov dword ptr fs:[0], ecx
// 004f7a26  5e                   pop esi
// 004f7a27  83c43c               add esp, 0x3c
// 004f7a2a  c20800               ret 8

typedef unsigned int size_t;

extern "C" long __stdcall InterlockedIncrement(volatile long *);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

void *__cdecl operator new(size_t);
void __cdecl operator delete(void *);

extern const float faceScale;

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &);
};

inline Vector3::Vector3(const Vector3 &v)
    : x(v.x), y(v.y), z(v.z)
{
}

struct Object {
    virtual ~Object();
    volatile long references;
    char storage[32];

    Object(int);
    void dispose();
};

struct Reference {
    Object *pointer;

    Reference(Object *);
    ~Reference();
};

inline Reference::Reference(Object *p) : pointer(0)
{
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference()
{
    if (pointer) {
        if (!InterlockedDecrement(&pointer->references)) {
            pointer->dispose();
            if (pointer)
                delete pointer;
        }
        pointer = 0;
    }
}

struct Holder {
    void assign(const Reference &);
};

struct BuilderBase {
    virtual ~BuilderBase();
    char storage[8];
    Holder holder;

    BuilderBase();
};

struct __declspec(novtable) FaceBase {
    virtual void unused();
    char storage[16];
    Reference reference;
    char tail[8];

    FaceBase(const Reference &, Vector3, int);
    ~FaceBase();
    void build(int, int);
};

inline FaceBase::~FaceBase()
{
}

struct Face : FaceBase {
    float scale;

    Face(const Reference &, const Vector3 &, int);
    ~Face();
    virtual void unused();
};

inline Face::Face(const Reference &r, const Vector3 &size, int side)
    : FaceBase(r, size, side), scale(faceScale)
{
}

inline Face::~Face()
{
}

struct WedgeBuilder : BuilderBase {
    WedgeBuilder(const Vector3 &, int);
    virtual ~WedgeBuilder();
};

WedgeBuilder::WedgeBuilder(const Vector3 &size, int purpose)
    : BuilderBase()
{
    Reference reference(new Object(5));
    holder.assign(reference);
    Face face(reference, size, 0);
    face.build(purpose, 1);
}
