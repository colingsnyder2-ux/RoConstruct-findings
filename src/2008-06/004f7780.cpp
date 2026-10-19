// from server: 69% by colin
// from server: 67% by king_originala
// roc 2008-06 004f7780  unit: RBX::ViewNew::WedgeBuilder  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004f7780
//
// 004f7780  6aff                 push -1
// 004f7782  6873af7c00           push 0x7caf73
// 004f7787  64a100000000         mov eax, dword ptr fs:[0]
// 004f778d  50                   push eax
// 004f778e  64892500000000       mov dword ptr fs:[0], esp
// 004f7795  83ec2c               sub esp, 0x2c
// 004f7798  53                   push ebx
// 004f7799  55                   push ebp
// 004f779a  56                   push esi
// 004f779b  8be9                 mov ebp, ecx
// 004f779d  57                   push edi
// 004f779e  896c2414             mov dword ptr [esp + 0x14], ebp
// 004f77a2  e8c90d0500           call 0x548570
// 004f77a7  6a28                 push 0x28
// 004f77a9  c744244800000000     mov dword ptr [esp + 0x48], 0
// 004f77b1  c74500e8708200       mov dword ptr [ebp], 0x8270e8
// 004f77b8  e863911a00           call 0x6a0920
// 004f77bd  83c404               add esp, 4
// 004f77c0  89442410             mov dword ptr [esp + 0x10], eax
// 004f77c4  c644244401           mov byte ptr [esp + 0x44], 1
// 004f77c9  85c0                 test eax, eax
// 004f77cb  740b                 je 0x4f77d8
// 004f77cd  6a05                 push 5
// 004f77cf  8bc8                 mov ecx, eax
// 004f77d1  e80a5bfeff           call 0x4dd2e0
// 004f77d6  eb02                 jmp 0x4f77da
// 004f77d8  33c0                 xor eax, eax
// 004f77da  33f6                 xor esi, esi
// 004f77dc  89742410             mov dword ptr [esp + 0x10], esi
// 004f77e0  85c0                 test eax, eax
// 004f77e2  7410                 je 0x4f77f4
// 004f77e4  8bf0                 mov esi, eax
// 004f77e6  83c004               add eax, 4
// 004f77e9  50                   push eax
// 004f77ea  89742414             mov dword ptr [esp + 0x14], esi
// 004f77ee  ff15b0218000         call dword ptr [0x8021b0]
// 004f77f4  8d442410             lea eax, [esp + 0x10]
// 004f77f8  8d7d0c               lea edi, [ebp + 0xc]
// 004f77fb  50                   push eax
// 004f77fc  8bcf                 mov ecx, edi
// 004f77fe  c644244802           mov byte ptr [esp + 0x48], 2
// 004f7803  e8a853feff           call 0x4dcbb0
// 004f7808  8b1dac218000         mov ebx, dword ptr [0x8021ac]
// 004f780e  c644244400           mov byte ptr [esp + 0x44], 0
// 004f7813  85f6                 test esi, esi
// 004f7815  741b                 je 0x4f7832
// 004f7817  8d4604               lea eax, [esi + 4]
// 004f781a  50                   push eax
// 004f781b  ffd3                 call ebx
// 004f781d  85c0                 test eax, eax
// 004f781f  7511                 jne 0x4f7832
// 004f7821  8bce                 mov ecx, esi
// 004f7823  e86835f6ff           call 0x45ad90
// 004f7828  8b16                 mov edx, dword ptr [esi]
// 004f782a  8b02                 mov eax, dword ptr [edx]
// 004f782c  6a01                 push 1
// 004f782e  8bce                 mov ecx, esi
// 004f7830  ffd0                 call eax
// 004f7832  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004f7836  d900                 fld dword ptr [eax]
// 004f7838  8b4f04               mov ecx, dword ptr [edi + 4]
// 004f783b  d94004               fld dword ptr [eax + 4]
// 004f783e  8b17                 mov edx, dword ptr [edi]
// 004f7840  d94008               fld dword ptr [eax + 8]
// 004f7843  8b442450             mov eax, dword ptr [esp + 0x50]
// 004f7847  50                   push eax
// 004f7848  d9ca                 fxch st(2)
// 004f784a  83ec0c               sub esp, 0xc
// 004f784d  8bc4                 mov eax, esp
// 004f784f  d918                 fstp dword ptr [eax]
// 004f7851  8d4c8afc             lea ecx, [edx + ecx*4 - 4]
// 004f7855  8964245c             mov dword ptr [esp + 0x5c], esp
// 004f7859  d95804               fstp dword ptr [eax + 4]
// 004f785c  51                   push ecx
// 004f785d  8d4c242c             lea ecx, [esp + 0x2c]
// 004f7861  d95808               fstp dword ptr [eax + 8]
// 004f7864  e817950000           call 0x500d80
// 004f7869  d9ee                 fldz 
// 004f786b  c7442418a8708200     mov dword ptr [esp + 0x18], 0x8270a8
// 004f7873  d95c2438             fstp dword ptr [esp + 0x38]
// 004f7877  6a00                 push 0
// 004f7879  8d4c241c             lea ecx, [esp + 0x1c]
// 004f787d  c644244803           mov byte ptr [esp + 0x48], 3
// 004f7882  e8b9970000           call 0x501040
// 004f7887  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 004f788b  c644244400           mov byte ptr [esp + 0x44], 0
// 004f7890  85c0                 test eax, eax
// 004f7892  7423                 je 0x4f78b7
// 004f7894  83c004               add eax, 4
// 004f7897  50                   push eax
// 004f7898  ffd3                 call ebx
// 004f789a  85c0                 test eax, eax
// 004f789c  7519                 jne 0x4f78b7
// 004f789e  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004f78a2  e8e934f6ff           call 0x45ad90
// 004f78a7  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 004f78ab  85c9                 test ecx, ecx
// 004f78ad  7408                 je 0x4f78b7
// 004f78af  8b11                 mov edx, dword ptr [ecx]
// 004f78b1  8b02                 mov eax, dword ptr [edx]
// 004f78b3  6a01                 push 1
// 004f78b5  ffd0                 call eax
// 004f78b7  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004f78bb  5f                   pop edi
// 004f78bc  5e                   pop esi
// 004f78bd  8bc5                 mov eax, ebp
// 004f78bf  5d                   pop ebp
// 004f78c0  64890d00000000       mov dword ptr fs:[0], ecx
// 004f78c7  5b                   pop ebx
// 004f78c8  83c438               add esp, 0x38
// 004f78cb  c20800               ret 8
extern "C" __declspec(dllimport) long __stdcall InterlockedIncrement(volatile long *);

typedef unsigned int size_t;

extern "C" {
    extern long (__stdcall *InterlockedDecrement)(volatile long *);
}

void * __cdecl operator new(size_t);
void __cdecl operator delete(void *);

struct Vector3 {
    float x, y, z;

    Vector3(const Vector3 &v) : x(v.x), y(v.y), z(v.z) {}
};

struct Object {
    virtual ~Object();
    volatile long references;
    void *owner;
    char storage[28];

    Object(int);
    void releaseOwner();
};

struct Reference {
    Object *pointer;

    explicit Reference(Object *p) : pointer(0) {
        if (p) {
            pointer = p;
            InterlockedIncrement(&p->references);
        }
    }

    ~Reference() {
        if (pointer && !InterlockedDecrement(&pointer->references)) {
            pointer->releaseOwner();
            delete pointer;
        }
    }
};

struct References {
    Object **data;
    int count;

    void append(const Reference &);
};

struct BuilderBase {
    virtual ~BuilderBase();
    int reserved[2];

    BuilderBase();
};

struct OperationBase {
    virtual void execute();
    char reserved[16];
    Reference reference;
    char remaining[8];

    OperationBase(Object **, Vector3, int);
    void apply(int);
};

struct Operation : OperationBase {
    float value;

    Operation(Object **p, const Vector3 &v, int mode)
        : OperationBase(p, v, mode) {
        value = 0.0f;
    }

    virtual void execute();
};

struct WedgeBuilder : BuilderBase {
    References objects;

    WedgeBuilder(const Vector3 &, int);
    virtual ~WedgeBuilder();
};

WedgeBuilder::WedgeBuilder(const Vector3 &v, int mode)
    : BuilderBase()
{
    objects.append(Reference(new Object(5)));

    Operation operation(objects.data + objects.count - 1, v, mode);
    operation.apply(0);
}
