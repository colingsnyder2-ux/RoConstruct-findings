// from server: 100% by tester
// roc 2008-06 00446700  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446700
//
// 00446700  6aff                 push -1
// 00446702  68a9707d00           push 0x7d70a9
// 00446707  64a100000000         mov eax, dword ptr fs:[0]
// 0044670d  50                   push eax
// 0044670e  64892500000000       mov dword ptr fs:[0], esp
// 00446715  83ec08               sub esp, 8
// 00446718  53                   push ebx
// 00446719  55                   push ebp
// 0044671a  56                   push esi
// 0044671b  8bf1                 mov esi, ecx
// 0044671d  8974240c             mov dword ptr [esp + 0xc], esi
// 00446721  c706d45e8100         mov dword ptr [esi], 0x815ed4
// 00446727  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0044672a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00446730  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00446738  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0044673b  7602                 jbe 0x44673f
// 0044673d  ffd3                 call ebx
// 0044673f  57                   push edi
// 00446740  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00446743  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00446746  7602                 jbe 0x44674a
// 00446748  ffd3                 call ebx
// 0044674a  33db                 xor ebx, ebx
// 0044674c  3bfd                 cmp edi, ebp
// 0044674e  7415                 je 0x446765
// 00446750  8b0f                 mov ecx, dword ptr [edi]
// 00446752  3bcb                 cmp ecx, ebx
// 00446754  7408                 je 0x44675e
// 00446756  8b01                 mov eax, dword ptr [ecx]
// 00446758  8b10                 mov edx, dword ptr [eax]
// 0044675a  6a01                 push 1
// 0044675c  ffd2                 call edx
// 0044675e  83c704               add edi, 4
// 00446761  3bfd                 cmp edi, ebp
// 00446763  75eb                 jne 0x446750
// 00446765  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0044676b  3bc3                 cmp eax, ebx
// 0044676d  7409                 je 0x446778
// 0044676f  50                   push eax
// 00446770  e8059f2500           call 0x6a067a
// 00446775  83c404               add esp, 4
// 00446778  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0044677e  50                   push eax
// 0044677f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00446785  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0044678b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00446791  e8e49e2500           call 0x6a067a
// 00446796  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0044679c  83c404               add esp, 4
// 0044679f  3bc3                 cmp eax, ebx
// 004467a1  7409                 je 0x4467ac
// 004467a3  50                   push eax
// 004467a4  e8d19e2500           call 0x6a067a
// 004467a9  83c404               add esp, 4
// 004467ac  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 004467b2  50                   push eax
// 004467b3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 004467b9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 004467bf  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 004467c5  e8b09e2500           call 0x6a067a
// 004467ca  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 004467d0  83c404               add esp, 4
// 004467d3  3bc3                 cmp eax, ebx
// 004467d5  7409                 je 0x4467e0
// 004467d7  50                   push eax
// 004467d8  e89d9e2500           call 0x6a067a
// 004467dd  83c404               add esp, 4
// 004467e0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 004467e6  50                   push eax
// 004467e7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 004467ed  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 004467f3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 004467f9  e87c9e2500           call 0x6a067a
// 004467fe  8dbe88000000         lea edi, [esi + 0x88]
// 00446804  83c404               add esp, 4
// 00446807  897c2414             mov dword ptr [esp + 0x14], edi
// 0044680b  8bcf                 mov ecx, edi
// 0044680d  c644242008           mov byte ptr [esp + 0x20], 8
// 00446812  e8b90ffcff           call 0x4077d0
// 00446817  8b3f                 mov edi, dword ptr [edi]
// 00446819  57                   push edi
// 0044681a  e85b9e2500           call 0x6a067a
// 0044681f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00446822  83c404               add esp, 4
// 00446825  5f                   pop edi
// 00446826  3bc3                 cmp eax, ebx
// 00446828  7409                 je 0x446833
// 0044682a  50                   push eax
// 0044682b  e84a9e2500           call 0x6a067a
// 00446830  83c404               add esp, 4
// 00446833  8b4670               mov eax, dword ptr [esi + 0x70]
// 00446836  50                   push eax
// 00446837  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0044683a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00446840  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00446846  e82f9e2500           call 0x6a067a
// 0044684b  83c404               add esp, 4
// 0044684e  8d4e50               lea ecx, [esi + 0x50]
// 00446851  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00446856  e825d51000           call 0x553d80
// 0044685b  8d4e30               lea ecx, [esi + 0x30]
// 0044685e  885c241c             mov byte ptr [esp + 0x1c], bl
// 00446862  e819d51000           call 0x553d80
// 00446867  8bce                 mov ecx, esi
// 00446869  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00446871  e80a581200           call 0x56c080
// 00446876  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0044687a  5e                   pop esi
// 0044687b  5d                   pop ebp
// 0044687c  5b                   pop ebx
// 0044687d  64890d00000000       mov dword ptr fs:[0], ecx
// 00446884  83c414               add esp, 0x14
// 00446887  c3                   ret 

extern "C" void (__cdecl *invalid_parameter_noinfo)();
void __cdecl operator delete(void *) throw();

struct Object {
    virtual ~Object();
};

struct Base {
    unsigned char padding[24];
    Object **first;
    Object **last;
    unsigned char tail[12];
    virtual ~Base();
};

struct String {
    unsigned char data[32];
    ~String();
};

struct Storage {
    void *allocation;
    unsigned int reserved[2];
    ~Storage();
};

__forceinline Storage::~Storage()
{
    void *memory = allocation;
    ::operator delete(memory);
}

struct Array {
    Storage storage;
    void *first;
    void *last;
    void *limit;
    ~Array();
};

__forceinline Array::~Array()
{
    if (first)
        ::operator delete(first);
    first = 0;
    last = 0;
    limit = 0;
}

struct Elements {
    Storage storage;
    void *first;
    void *last;
    void *limit;
    void clear();
    ~Elements();
};

__forceinline Elements::~Elements()
{
    clear();
}

struct S : Base {
    String string1;
    String string2;
    Array array1;
    Elements elements;
    Array array2;
    Array array3;
    Array array4;
    virtual ~S();
};

S::~S()
{
    Object **end = last;
    void (__cdecl *invalid)() = invalid_parameter_noinfo;
    if (first > end)
        invalid();

    Object **current = first;
    if (current > last)
        invalid();

    while (current != end) {
        if (*current)
            delete *current;
        ++current;
    }
}
