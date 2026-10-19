// from server: 97% by colin
// from server: 82% by king_originala
// roc 2008-06 004fd800  unit: RBX::ViewNew::CylinderBuilder  size: 341 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd800
//
// 004fd800  6aff                 push -1
// 004fd802  6813b17c00           push 0x7cb113
// 004fd807  64a100000000         mov eax, dword ptr fs:[0]
// 004fd80d  50                   push eax
// 004fd80e  64892500000000       mov dword ptr fs:[0], esp
// 004fd815  83ec30               sub esp, 0x30
// 004fd818  56                   push esi
// 004fd819  8bf1                 mov esi, ecx
// 004fd81b  57                   push edi
// 004fd81c  8974240c             mov dword ptr [esp + 0xc], esi
// 004fd820  e84bad0400           call 0x548570
// 004fd825  6a28                 push 0x28
// 004fd827  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004fd82f  c70684718200         mov dword ptr [esi], 0x827184
// 004fd835  c7868400000003000000 mov dword ptr [esi + 0x84], 3
// 004fd83f  e8dc301a00           call 0x6a0920
// 004fd844  83c404               add esp, 4
// 004fd847  89442410             mov dword ptr [esp + 0x10], eax
// 004fd84b  c644244001           mov byte ptr [esp + 0x40], 1
// 004fd850  85c0                 test eax, eax
// 004fd852  740b                 je 0x4fd85f
// 004fd854  6a05                 push 5
// 004fd856  8bc8                 mov ecx, eax
// 004fd858  e883fafdff           call 0x4dd2e0
// 004fd85d  eb02                 jmp 0x4fd861
// 004fd85f  33c0                 xor eax, eax
// 004fd861  c744240800000000     mov dword ptr [esp + 8], 0
// 004fd869  85c0                 test eax, eax
// 004fd86b  740e                 je 0x4fd87b
// 004fd86d  89442408             mov dword ptr [esp + 8], eax
// 004fd871  83c004               add eax, 4
// 004fd874  50                   push eax
// 004fd875  ff15b0218000         call dword ptr [0x8021b0]
// 004fd87b  8d442408             lea eax, [esp + 8]
// 004fd87f  50                   push eax
// 004fd880  8d4e0c               lea ecx, [esi + 0xc]
// 004fd883  c644244402           mov byte ptr [esp + 0x44], 2
// 004fd888  e823f3fdff           call 0x4dcbb0
// 004fd88d  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 004fd891  d901                 fld dword ptr [ecx]
// 004fd893  6a0c                 push 0xc
// 004fd895  33c0                 xor eax, eax
// 004fd897  50                   push eax
// 004fd898  83ec0c               sub esp, 0xc
// 004fd89b  8bc4                 mov eax, esp
// 004fd89d  d918                 fstp dword ptr [eax]
// 004fd89f  89642424             mov dword ptr [esp + 0x24], esp
// 004fd8a3  d94104               fld dword ptr [ecx + 4]
// 004fd8a6  d95804               fstp dword ptr [eax + 4]
// 004fd8a9  d94108               fld dword ptr [ecx + 8]
// 004fd8ac  8d4c241c             lea ecx, [esp + 0x1c]
// 004fd8b0  51                   push ecx
// 004fd8b1  d95808               fstp dword ptr [eax + 8]
// 004fd8b4  8d4c242c             lea ecx, [esp + 0x2c]
// 004fd8b8  e873fbffff           call 0x4fd430
// 004fd8bd  8b54244c             mov edx, dword ptr [esp + 0x4c]
// 004fd8c1  6a01                 push 1
// 004fd8c3  52                   push edx
// 004fd8c4  8d4c241c             lea ecx, [esp + 0x1c]
// 004fd8c8  c644244803           mov byte ptr [esp + 0x48], 3
// 004fd8cd  e8ce330000           call 0x500ca0
// 004fd8d2  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fd8d6  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 004fd8dc  c644244002           mov byte ptr [esp + 0x40], 2
// 004fd8e1  85c0                 test eax, eax
// 004fd8e3  742b                 je 0x4fd910
// 004fd8e5  83c004               add eax, 4
// 004fd8e8  50                   push eax
// 004fd8e9  ffd7                 call edi
// 004fd8eb  85c0                 test eax, eax
// 004fd8ed  7519                 jne 0x4fd908
// 004fd8ef  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fd8f3  e898d4f5ff           call 0x45ad90
// 004fd8f8  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fd8fc  85c9                 test ecx, ecx
// 004fd8fe  7408                 je 0x4fd908
// 004fd900  8b01                 mov eax, dword ptr [ecx]
// 004fd902  8b10                 mov edx, dword ptr [eax]
// 004fd904  6a01                 push 1
// 004fd906  ffd2                 call edx
// 004fd908  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004fd910  8b442408             mov eax, dword ptr [esp + 8]
// 004fd914  c644244000           mov byte ptr [esp + 0x40], 0
// 004fd919  85c0                 test eax, eax
// 004fd91b  7423                 je 0x4fd940
// 004fd91d  83c004               add eax, 4
// 004fd920  50                   push eax
// 004fd921  ffd7                 call edi
// 004fd923  85c0                 test eax, eax
// 004fd925  7519                 jne 0x4fd940
// 004fd927  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fd92b  e860d4f5ff           call 0x45ad90
// 004fd930  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004fd934  85c9                 test ecx, ecx
// 004fd936  7408                 je 0x4fd940
// 004fd938  8b01                 mov eax, dword ptr [ecx]
// 004fd93a  8b10                 mov edx, dword ptr [eax]
// 004fd93c  6a01                 push 1
// 004fd93e  ffd2                 call edx
// 004fd940  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004fd944  5f                   pop edi
// 004fd945  8bc6                 mov eax, esi
// 004fd947  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd94e  5e                   pop esi
// 004fd94f  83c43c               add esp, 0x3c
// 004fd952  c20800               ret 8
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long *);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);

extern "C" {
}

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Object {
    virtual ~Object();
    volatile long references;
    void *resource;
    char storage[28];

    Object(int);
    void release();
};

struct Reference {
    Object *pointer;

    Reference(Object *p) : pointer(0) {
        if (p) {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    ~Reference() {
        if (pointer) {
            if (InterlockedDecrement(&pointer->references) == 0) {
                pointer->release();
                if (pointer)
                    delete pointer;
            }
            pointer = 0;
        }
    }

    void assign(const Reference &);
};

struct Vector {
    float x, y, z;

    Vector(const Vector &v) : x(v.x), y(v.y), z(v.z) {}
};

struct Sphere {
    char prefix[20];
    Reference reference;
    char suffix[12];

    Sphere(const Reference &, Vector, void *, int);
    void build(void *, int);
};

struct Base {
    virtual ~Base();
    char prefix[8];
    Reference reference;
    char suffix[116];

    Base();
};

struct Cylinder : Base {
    int kind;
    Cylinder(const Vector &, void *);
};

Cylinder::Cylinder(const Vector &size, void *destination)
    : Base()
{
    kind = 3;
    Reference object(new Object(5));
    reference.assign(object);
    Sphere sphere(object, size, 0, 12);
    sphere.build(destination, 1);
}
