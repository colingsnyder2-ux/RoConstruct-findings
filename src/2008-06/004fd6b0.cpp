// from server: 80% by colin
// from server: 78% by colin
// roc 2008-06 004fd6b0  unit: RBX::ViewNew::CylinderBuilder  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004fd6b0
//
// 004fd6b0  6aff                 push -1
// 004fd6b2  68b3b07c00           push 0x7cb0b3
// 004fd6b7  64a100000000         mov eax, dword ptr fs:[0]
// 004fd6bd  50                   push eax
// 004fd6be  64892500000000       mov dword ptr fs:[0], esp
// 004fd6c5  83ec2c               sub esp, 0x2c
// 004fd6c8  55                   push ebp
// 004fd6c9  56                   push esi
// 004fd6ca  8be9                 mov ebp, ecx
// 004fd6cc  57                   push edi
// 004fd6cd  896c2410             mov dword ptr [esp + 0x10], ebp
// 004fd6d1  e89aae0400           call 0x548570
// 004fd6d6  6a28                 push 0x28
// 004fd6d8  c744244400000000     mov dword ptr [esp + 0x44], 0
// 004fd6e0  c7450084718200       mov dword ptr [ebp], 0x827184
// 004fd6e7  c7858400000003000000 mov dword ptr [ebp + 0x84], 3
// 004fd6f1  e82a321a00           call 0x6a0920
// 004fd6f6  83c404               add esp, 4
// 004fd6f9  8944240c             mov dword ptr [esp + 0xc], eax
// 004fd6fd  c644244001           mov byte ptr [esp + 0x40], 1
// 004fd702  85c0                 test eax, eax
// 004fd704  740b                 je 0x4fd711
// 004fd706  6a05                 push 5
// 004fd708  8bc8                 mov ecx, eax
// 004fd70a  e8d1fbfdff           call 0x4dd2e0
// 004fd70f  eb02                 jmp 0x4fd713
// 004fd711  33c0                 xor eax, eax
// 004fd713  33ff                 xor edi, edi
// 004fd715  897c240c             mov dword ptr [esp + 0xc], edi
// 004fd719  85c0                 test eax, eax
// 004fd71b  7410                 je 0x4fd72d
// 004fd71d  8bf8                 mov edi, eax
// 004fd71f  83c004               add eax, 4
// 004fd722  50                   push eax
// 004fd723  897c2410             mov dword ptr [esp + 0x10], edi
// 004fd727  ff15b0218000         call dword ptr [0x8021b0]
// 004fd72d  8d44240c             lea eax, [esp + 0xc]
// 004fd731  8d750c               lea esi, [ebp + 0xc]
// 004fd734  50                   push eax
// 004fd735  8bce                 mov ecx, esi
// 004fd737  c644244402           mov byte ptr [esp + 0x44], 2
// 004fd73c  e86ff4fdff           call 0x4dcbb0
// 004fd741  c644244000           mov byte ptr [esp + 0x40], 0
// 004fd746  85ff                 test edi, edi
// 004fd748  741f                 je 0x4fd769
// 004fd74a  8d4704               lea eax, [edi + 4]
// 004fd74d  50                   push eax
// 004fd74e  ff15ac218000         call dword ptr [0x8021ac]
// 004fd754  85c0                 test eax, eax
// 004fd756  7511                 jne 0x4fd769
// 004fd758  8bcf                 mov ecx, edi
// 004fd75a  e831d6f5ff           call 0x45ad90
// 004fd75f  8b17                 mov edx, dword ptr [edi]
// 004fd761  8b02                 mov eax, dword ptr [edx]
// 004fd763  6a01                 push 1
// 004fd765  8bcf                 mov ecx, edi
// 004fd767  ffd0                 call eax
// 004fd769  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 004fd76d  8b4e04               mov ecx, dword ptr [esi + 4]
// 004fd770  8b16                 mov edx, dword ptr [esi]
// 004fd772  6a0c                 push 0xc
// 004fd774  50                   push eax
// 004fd775  8d548afc             lea edx, [edx + ecx*4 - 4]
// 004fd779  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 004fd77d  d901                 fld dword ptr [ecx]
// 004fd77f  83ec0c               sub esp, 0xc
// 004fd782  8bc4                 mov eax, esp
// 004fd784  d918                 fstp dword ptr [eax]
// 004fd786  89642420             mov dword ptr [esp + 0x20], esp
// 004fd78a  d94104               fld dword ptr [ecx + 4]
// 004fd78d  52                   push edx
// 004fd78e  d95804               fstp dword ptr [eax + 4]
// 004fd791  d94108               fld dword ptr [ecx + 8]
// 004fd794  8d4c242c             lea ecx, [esp + 0x2c]
// 004fd798  d95808               fstp dword ptr [eax + 8]
// 004fd79b  e890fcffff           call 0x4fd430
// 004fd7a0  6a00                 push 0
// 004fd7a2  8d4c2418             lea ecx, [esp + 0x18]
// 004fd7a6  c644244403           mov byte ptr [esp + 0x44], 3
// 004fd7ab  e880350000           call 0x500d30
// 004fd7b0  8b442428             mov eax, dword ptr [esp + 0x28]
// 004fd7b4  c644244000           mov byte ptr [esp + 0x40], 0
// 004fd7b9  85c0                 test eax, eax
// 004fd7bb  7427                 je 0x4fd7e4
// 004fd7bd  83c004               add eax, 4
// 004fd7c0  50                   push eax
// 004fd7c1  ff15ac218000         call dword ptr [0x8021ac]
// 004fd7c7  85c0                 test eax, eax
// 004fd7c9  7519                 jne 0x4fd7e4
// 004fd7cb  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fd7cf  e8bcd5f5ff           call 0x45ad90
// 004fd7d4  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004fd7d8  85c9                 test ecx, ecx
// 004fd7da  7408                 je 0x4fd7e4
// 004fd7dc  8b11                 mov edx, dword ptr [ecx]
// 004fd7de  8b02                 mov eax, dword ptr [edx]
// 004fd7e0  6a01                 push 1
// 004fd7e2  ffd0                 call eax
// 004fd7e4  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 004fd7e8  5f                   pop edi
// 004fd7e9  5e                   pop esi
// 004fd7ea  8bc5                 mov eax, ebp
// 004fd7ec  64890d00000000       mov dword ptr fs:[0], ecx
// 004fd7f3  5d                   pop ebp
// 004fd7f4  83c438               add esp, 0x38
// 004fd7f7  c20800               ret 8

extern "C" long __stdcall InterlockedIncrement(long *);
extern "C" __declspec(dllimport) long __stdcall InterlockedDecrement(long *);

void * __cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Vector3
{
    float x, y, z;
    Vector3(const Vector3 &) throw();
};

inline Vector3::Vector3(const Vector3 &v) throw()
    : x(v.x), y(v.y), z(v.z)
{
}

struct Resource
{
    virtual ~Resource();
    long references;
    void *owner;
    char storage[28];

    Resource(int);
    void releaseOwner();
};

struct ResourcePtr
{
    Resource *value;

    ResourcePtr(Resource *);
    ~ResourcePtr();
};

inline ResourcePtr::ResourcePtr(Resource *p) : value(p)
{
    if (p)
        InterlockedIncrement(&p->references);
}

inline ResourcePtr::~ResourcePtr()
{
    if (value && InterlockedDecrement(&value->references) == 0)
    {
        value->releaseOwner();
        delete value;
    }
}

struct ResourceList
{
    Resource **data;
    int count;

    void append(const ResourcePtr &);
};

struct Base
{
    virtual ~Base();
    char prefix[8];
    ResourceList resources;
    char suffix[112];

    Base();
};

struct TemporaryBuilder
{
    char prefix[20];
    Resource *resource;
    char suffix[8];

    TemporaryBuilder(Resource **, Vector3, void *, int);
    void build(int);
    ~TemporaryBuilder();
};

inline TemporaryBuilder::~TemporaryBuilder()
{
    if (resource && InterlockedDecrement(&resource->references) == 0)
    {
        resource->releaseOwner();
        if (resource)
            delete resource;
    }
}

struct CylinderBuilder : Base
{
    int kind;

    CylinderBuilder(const Vector3 &, void *);
    virtual ~CylinderBuilder();
};

CylinderBuilder::CylinderBuilder(const Vector3 &size, void *context)
    : Base()
{
    kind = 3;
    {
        ResourcePtr resource(new Resource(5));
        resources.append(resource);
    }

    Resource **last = resources.data + resources.count - 1;
    TemporaryBuilder builder(last, size, context, 12);
    builder.build(0);
}
