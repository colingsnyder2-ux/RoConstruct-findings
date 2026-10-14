// from server: 90% by colin
// roc 2008-06 004fa700  unit: RBX::ViewNew::TorsoBuilder  size: 370 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fa700
//
// 004fa700  6aff                 push -1
// 004fa702  6853b07c00           push 0x7cb053
// 004fa707  64a100000000         mov eax, dword ptr fs:[0]
// 004fa70d  50                   push eax
// 004fa70e  64892500000000       mov dword ptr fs:[0], esp
// 004fa715  83ec34               sub esp, 0x34
// 004fa718  56                   push esi
// 004fa719  57                   push edi
// 004fa71a  8bf9                 mov edi, ecx
// 004fa71c  897c240c             mov dword ptr [esp + 0xc], edi
// 004fa720  e84bde0400           call 0x548570
// 004fa725  8b74244c             mov esi, dword ptr [esp + 0x4c]
// 004fa729  c70724718200         mov dword ptr [edi], 0x827124
// 004fa72f  d94608               fld dword ptr [esi + 8]
// 004fa732  d80d1c718200         fmul dword ptr [0x82711c]
// 004fa738  6a28                 push 0x28
// 004fa73a  c744244800000000     mov dword ptr [esp + 0x48], 0
// 004fa742  d95c2450             fstp dword ptr [esp + 0x50]
// 004fa746  e8d5611a00           call 0x6a0920
// 004fa74b  83c404               add esp, 4
// 004fa74e  89442410             mov dword ptr [esp + 0x10], eax
// 004fa752  c644244401           mov byte ptr [esp + 0x44], 1
// 004fa757  85c0                 test eax, eax
// 004fa759  740b                 je 0x4fa766
// 004fa75b  6a05                 push 5
// 004fa75d  8bc8                 mov ecx, eax
// 004fa75f  e87c2bfeff           call 0x4dd2e0
// 004fa764  eb02                 jmp 0x4fa768
// 004fa766  33c0                 xor eax, eax
// 004fa768  c744240800000000     mov dword ptr [esp + 8], 0
// 004fa770  85c0                 test eax, eax
// 004fa772  740e                 je 0x4fa782
// 004fa774  89442408             mov dword ptr [esp + 8], eax
// 004fa778  83c004               add eax, 4
// 004fa77b  50                   push eax
// 004fa77c  ff15b0218000         call dword ptr [0x8021b0]
// 004fa782  8d442408             lea eax, [esp + 8]
// 004fa786  50                   push eax
// 004fa787  8d4f0c               lea ecx, [edi + 0xc]
// 004fa78a  c644244802           mov byte ptr [esp + 0x48], 2
// 004fa78f  e81c24feff           call 0x4dcbb0
// 004fa794  d906                 fld dword ptr [esi]
// 004fa796  d94604               fld dword ptr [esi + 4]
// 004fa799  33c0                 xor eax, eax
// 004fa79b  d94608               fld dword ptr [esi + 8]
// 004fa79e  50                   push eax
// 004fa79f  83ec0c               sub esp, 0xc
// 004fa7a2  d9ca                 fxch st(2)
// 004fa7a4  8bc4                 mov eax, esp
// 004fa7a6  d918                 fstp dword ptr [eax]
// 004fa7a8  8d4c2418             lea ecx, [esp + 0x18]
// 004fa7ac  89642420             mov dword ptr [esp + 0x20], esp
// 004fa7b0  d95804               fstp dword ptr [eax + 4]
// 004fa7b3  51                   push ecx
// 004fa7b4  8d4c2428             lea ecx, [esp + 0x28]
// 004fa7b8  d95808               fstp dword ptr [eax + 8]
// 004fa7bb  e8c0650000           call 0x500d80
// 004fa7c0  d905f8708200         fld dword ptr [0x8270f8]
// 004fa7c6  c744241400718200     mov dword ptr [esp + 0x14], 0x827100
// 004fa7ce  d95c2434             fstp dword ptr [esp + 0x34]
// 004fa7d2  d944244c             fld dword ptr [esp + 0x4c]
// 004fa7d6  d95c2438             fstp dword ptr [esp + 0x38]
// 004fa7da  8b542450             mov edx, dword ptr [esp + 0x50]
// 004fa7de  6a01                 push 1
// 004fa7e0  52                   push edx
// 004fa7e1  8d4c241c             lea ecx, [esp + 0x1c]
// 004fa7e5  c644244c03           mov byte ptr [esp + 0x4c], 3
// 004fa7ea  e8b1640000           call 0x500ca0
// 004fa7ef  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fa7f3  8b35ac218000         mov esi, dword ptr [0x8021ac]
// 004fa7f9  c644244402           mov byte ptr [esp + 0x44], 2
// 004fa7fe  85c0                 test eax, eax
// 004fa800  742b                 je 0x4fa82d
// 004fa802  83c004               add eax, 4
// 004fa805  50                   push eax
// 004fa806  ffd6                 call esi
// 004fa808  85c0                 test eax, eax
// 004fa80a  7519                 jne 0x4fa825
// 004fa80c  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fa810  e87b05f6ff           call 0x45ad90
// 004fa815  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fa819  85c9                 test ecx, ecx
// 004fa81b  7408                 je 0x4fa825
// 004fa81d  8b01                 mov eax, dword ptr [ecx]
// 004fa81f  8b10                 mov edx, dword ptr [eax]
// 004fa821  6a01                 push 1
// 004fa823  ffd2                 call edx
// 004fa825  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004fa82d  8b442408             mov eax, dword ptr [esp + 8]
// 004fa831  c644244400           mov byte ptr [esp + 0x44], 0
// 004fa836  85c0                 test eax, eax
// 004fa838  7423                 je 0x4fa85d
// 004fa83a  83c004               add eax, 4
// 004fa83d  50                   push eax
// 004fa83e  ffd6                 call esi
// 004fa840  85c0                 test eax, eax
// 004fa842  7519                 jne 0x4fa85d
// 004fa844  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fa848  e84305f6ff           call 0x45ad90
// 004fa84d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fa851  85c9                 test ecx, ecx
// 004fa853  7408                 je 0x4fa85d
// 004fa855  8b01                 mov eax, dword ptr [ecx]
// 004fa857  8b10                 mov edx, dword ptr [eax]
// 004fa859  6a01                 push 1
// 004fa85b  ffd2                 call edx
// 004fa85d  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004fa861  8bc7                 mov eax, edi
// 004fa863  5f                   pop edi
// 004fa864  64890d00000000       mov dword ptr fs:[0], ecx
// 004fa86b  5e                   pop esi
// 004fa86c  83c440               add esp, 0x40
// 004fa86f  c20800               ret 8

extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long *);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

typedef unsigned int size_t;
void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;
    Vector3(const Vector3 &);
};

inline Vector3::Vector3(const Vector3 &v)
    : x(v.x), y(v.y), z(v.z) {
}

struct Object {
    virtual ~Object();
    volatile long references;
    void *resource;
    char data[28];

    Object(int);
    void dispose();
};

struct Reference {
    Object *pointer;

    explicit Reference(Object *);
    ~Reference();
};

inline Reference::Reference(Object *p) : pointer(0) {
    if (p) {
        pointer = p;
        InterlockedIncrement(&p->references);
    }
}

inline Reference::~Reference() {
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
    unsigned int reserved[2];

    BuilderBase();
};

struct ShapeBase {
    virtual ~ShapeBase();
    unsigned int reserved[4];
    Reference object;
    unsigned int tail[2];

    ShapeBase(const Reference &, Vector3, int);
    void apply(int, int);
};

inline ShapeBase::~ShapeBase() {
}

extern const float shapeConstant;
extern const float scaleConstant;

struct Shape : ShapeBase {
    float parameter;
    float depth;

    Shape(const Reference &, const Vector3 &, float);
    ~Shape();
};

inline Shape::Shape(const Reference &r, const Vector3 &v, float d)
    : ShapeBase(r, v, 0), parameter(shapeConstant), depth(d) {
}

inline Shape::~Shape() {
}

struct TorsoBuilder : BuilderBase {
    Holder holder;

    TorsoBuilder(const Vector3 &, int);
    virtual ~TorsoBuilder();
};

TorsoBuilder::TorsoBuilder(const Vector3 &dimensions, int purpose)
    : BuilderBase() {
    float depth = dimensions.z * scaleConstant;
    Reference object(new Object(5));
    holder.assign(object);
    Shape shape(object, dimensions, depth);
    shape.apply(purpose, 1);
}
