// from server: 97% by colin
// from server: 81% by king_originala
// roc 2008-06 004f49d0  unit: RBX::ViewNew::PBBBuilder  size: 329 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f49d0
//
// 004f49d0  6aff                 push -1
// 004f49d2  68e3ae7c00           push 0x7caee3
// 004f49d7  64a100000000         mov eax, dword ptr fs:[0]
// 004f49dd  50                   push eax
// 004f49de  64892500000000       mov dword ptr fs:[0], esp
// 004f49e5  83ec34               sub esp, 0x34
// 004f49e8  56                   push esi
// 004f49e9  8bf1                 mov esi, ecx
// 004f49eb  57                   push edi
// 004f49ec  8974240c             mov dword ptr [esp + 0xc], esi
// 004f49f0  e87b3b0500           call 0x548570
// 004f49f5  6a28                 push 0x28
// 004f49f7  c744244800000000     mov dword ptr [esp + 0x48], 0
// 004f49ff  c70670708200         mov dword ptr [esi], 0x827070
// 004f4a05  e816bf1a00           call 0x6a0920
// 004f4a0a  83c404               add esp, 4
// 004f4a0d  89442410             mov dword ptr [esp + 0x10], eax
// 004f4a11  c644244401           mov byte ptr [esp + 0x44], 1
// 004f4a16  85c0                 test eax, eax
// 004f4a18  740b                 je 0x4f4a25
// 004f4a1a  6a05                 push 5
// 004f4a1c  8bc8                 mov ecx, eax
// 004f4a1e  e8bd88feff           call 0x4dd2e0
// 004f4a23  eb02                 jmp 0x4f4a27
// 004f4a25  33c0                 xor eax, eax
// 004f4a27  c744240800000000     mov dword ptr [esp + 8], 0
// 004f4a2f  85c0                 test eax, eax
// 004f4a31  740e                 je 0x4f4a41
// 004f4a33  89442408             mov dword ptr [esp + 8], eax
// 004f4a37  83c004               add eax, 4
// 004f4a3a  50                   push eax
// 004f4a3b  ff15b0218000         call dword ptr [0x8021b0]
// 004f4a41  8d442408             lea eax, [esp + 8]
// 004f4a45  50                   push eax
// 004f4a46  8d4e0c               lea ecx, [esi + 0xc]
// 004f4a49  c644244802           mov byte ptr [esp + 0x48], 2
// 004f4a4e  e85d81feff           call 0x4dcbb0
// 004f4a53  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 004f4a57  d901                 fld dword ptr [ecx]
// 004f4a59  33c0                 xor eax, eax
// 004f4a5b  50                   push eax
// 004f4a5c  83ec0c               sub esp, 0xc
// 004f4a5f  8bc4                 mov eax, esp
// 004f4a61  d918                 fstp dword ptr [eax]
// 004f4a63  89642420             mov dword ptr [esp + 0x20], esp
// 004f4a67  d94104               fld dword ptr [ecx + 4]
// 004f4a6a  d95804               fstp dword ptr [eax + 4]
// 004f4a6d  d94108               fld dword ptr [ecx + 8]
// 004f4a70  8d4c2418             lea ecx, [esp + 0x18]
// 004f4a74  51                   push ecx
// 004f4a75  d95808               fstp dword ptr [eax + 8]
// 004f4a78  8d4c2428             lea ecx, [esp + 0x28]
// 004f4a7c  e82fd4ffff           call 0x4f1eb0
// 004f4a81  8b542450             mov edx, dword ptr [esp + 0x50]
// 004f4a85  6a01                 push 1
// 004f4a87  52                   push edx
// 004f4a88  8d4c241c             lea ecx, [esp + 0x1c]
// 004f4a8c  c644244c03           mov byte ptr [esp + 0x4c], 3
// 004f4a91  e80ac20000           call 0x500ca0
// 004f4a96  8b442428             mov eax, dword ptr [esp + 0x28]
// 004f4a9a  8b3dac218000         mov edi, dword ptr [0x8021ac]
// 004f4aa0  c644244402           mov byte ptr [esp + 0x44], 2
// 004f4aa5  85c0                 test eax, eax
// 004f4aa7  742b                 je 0x4f4ad4
// 004f4aa9  83c004               add eax, 4
// 004f4aac  50                   push eax
// 004f4aad  ffd7                 call edi
// 004f4aaf  85c0                 test eax, eax
// 004f4ab1  7519                 jne 0x4f4acc
// 004f4ab3  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f4ab7  e8d462f6ff           call 0x45ad90
// 004f4abc  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004f4ac0  85c9                 test ecx, ecx
// 004f4ac2  7408                 je 0x4f4acc
// 004f4ac4  8b01                 mov eax, dword ptr [ecx]
// 004f4ac6  8b10                 mov edx, dword ptr [eax]
// 004f4ac8  6a01                 push 1
// 004f4aca  ffd2                 call edx
// 004f4acc  c744242800000000     mov dword ptr [esp + 0x28], 0
// 004f4ad4  8b442408             mov eax, dword ptr [esp + 8]
// 004f4ad8  c644244400           mov byte ptr [esp + 0x44], 0
// 004f4add  85c0                 test eax, eax
// 004f4adf  7423                 je 0x4f4b04
// 004f4ae1  83c004               add eax, 4
// 004f4ae4  50                   push eax
// 004f4ae5  ffd7                 call edi
// 004f4ae7  85c0                 test eax, eax
// 004f4ae9  7519                 jne 0x4f4b04
// 004f4aeb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f4aef  e89c62f6ff           call 0x45ad90
// 004f4af4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004f4af8  85c9                 test ecx, ecx
// 004f4afa  7408                 je 0x4f4b04
// 004f4afc  8b01                 mov eax, dword ptr [ecx]
// 004f4afe  8b10                 mov edx, dword ptr [eax]
// 004f4b00  6a01                 push 1
// 004f4b02  ffd2                 call edx
// 004f4b04  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004f4b08  5f                   pop edi
// 004f4b09  8bc6                 mov eax, esi
// 004f4b0b  64890d00000000       mov dword ptr fs:[0], ecx
// 004f4b12  5e                   pop esi
// 004f4b13  83c440               add esp, 0x40
// 004f4b16  c20800               ret 8

typedef unsigned int size_t;

extern "C" {
    __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long*);
    __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long*);
}

void* __cdecl operator new(size_t);
void __cdecl operator delete(void*);

struct Vector3 {
    float x, y, z;

    Vector3(const Vector3& v) : x(v.x), y(v.y), z(v.z) {}
};

struct Resource {
    virtual void destroy(unsigned int);
    volatile long references;
    void* data;
    unsigned char storage[28];

    Resource(int);
    void releaseData();
};

struct Reference {
    Resource* p;

    Reference(Resource* value) : p(0) {
        if (value) {
            p = value;
            InterlockedIncrement(&value->references);
        }
    }

    ~Reference() {
        if (p) {
            if (!InterlockedDecrement(&p->references)) {
                p->releaseData();
                if (p)
                    p->destroy(1);
            }
            p = 0;
        }
    }
};

struct Holder {
    Resource* p;

    void assign(const Reference&);
};

struct Temporary {
    unsigned char prefix[20];
    Reference resource;
    unsigned char suffix[16];

    Temporary(const Reference&, Vector3, int);
    void apply(void*, int);
};

struct Base {
    unsigned int state[2];

    Base();
    virtual ~Base();
};

struct Builder : Base {
    Holder resource;

    Builder(const Vector3&, void*);
    virtual ~Builder();
};

Builder::Builder(const Vector3& position, void* value)
    : Base() {
    Reference reference(new Resource(5));
    resource.assign(reference);
    Temporary temporary(reference, position, false);
    temporary.apply(value, 1);
}
