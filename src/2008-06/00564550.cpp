// from server: 100% by tester
// roc 2008-06 00564550  unit: RBX::Reflection::N::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00564550
//
// 00564550  6aff                 push -1
// 00564552  68a9707d00           push 0x7d70a9
// 00564557  64a100000000         mov eax, dword ptr fs:[0]
// 0056455d  50                   push eax
// 0056455e  64892500000000       mov dword ptr fs:[0], esp
// 00564565  83ec08               sub esp, 8
// 00564568  53                   push ebx
// 00564569  55                   push ebp
// 0056456a  56                   push esi
// 0056456b  8bf1                 mov esi, ecx
// 0056456d  8974240c             mov dword ptr [esp + 0xc], esi
// 00564571  c706f0e28200         mov dword ptr [esi], 0x82e2f0
// 00564577  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0056457a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00564580  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00564588  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0056458b  7602                 jbe 0x56458f
// 0056458d  ffd3                 call ebx
// 0056458f  57                   push edi
// 00564590  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00564593  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00564596  7602                 jbe 0x56459a
// 00564598  ffd3                 call ebx
// 0056459a  33db                 xor ebx, ebx
// 0056459c  3bfd                 cmp edi, ebp
// 0056459e  7415                 je 0x5645b5
// 005645a0  8b0f                 mov ecx, dword ptr [edi]
// 005645a2  3bcb                 cmp ecx, ebx
// 005645a4  7408                 je 0x5645ae
// 005645a6  8b01                 mov eax, dword ptr [ecx]
// 005645a8  8b10                 mov edx, dword ptr [eax]
// 005645aa  6a01                 push 1
// 005645ac  ffd2                 call edx
// 005645ae  83c704               add edi, 4
// 005645b1  3bfd                 cmp edi, ebp
// 005645b3  75eb                 jne 0x5645a0
// 005645b5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005645bb  3bc3                 cmp eax, ebx
// 005645bd  7409                 je 0x5645c8
// 005645bf  50                   push eax
// 005645c0  e8b5c01300           call 0x6a067a
// 005645c5  83c404               add esp, 4
// 005645c8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005645ce  50                   push eax
// 005645cf  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005645d5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005645db  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005645e1  e894c01300           call 0x6a067a
// 005645e6  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005645ec  83c404               add esp, 4
// 005645ef  3bc3                 cmp eax, ebx
// 005645f1  7409                 je 0x5645fc
// 005645f3  50                   push eax
// 005645f4  e881c01300           call 0x6a067a
// 005645f9  83c404               add esp, 4
// 005645fc  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00564602  50                   push eax
// 00564603  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00564609  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0056460f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00564615  e860c01300           call 0x6a067a
// 0056461a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00564620  83c404               add esp, 4
// 00564623  3bc3                 cmp eax, ebx
// 00564625  7409                 je 0x564630
// 00564627  50                   push eax
// 00564628  e84dc01300           call 0x6a067a
// 0056462d  83c404               add esp, 4
// 00564630  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00564636  50                   push eax
// 00564637  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0056463d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00564643  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00564649  e82cc01300           call 0x6a067a
// 0056464e  8dbe88000000         lea edi, [esi + 0x88]
// 00564654  83c404               add esp, 4
// 00564657  897c2414             mov dword ptr [esp + 0x14], edi
// 0056465b  8bcf                 mov ecx, edi
// 0056465d  c644242008           mov byte ptr [esp + 0x20], 8
// 00564662  e86931eaff           call 0x4077d0
// 00564667  8b3f                 mov edi, dword ptr [edi]
// 00564669  57                   push edi
// 0056466a  e80bc01300           call 0x6a067a
// 0056466f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00564672  83c404               add esp, 4
// 00564675  5f                   pop edi
// 00564676  3bc3                 cmp eax, ebx
// 00564678  7409                 je 0x564683
// 0056467a  50                   push eax
// 0056467b  e8fabf1300           call 0x6a067a
// 00564680  83c404               add esp, 4
// 00564683  8b4670               mov eax, dword ptr [esi + 0x70]
// 00564686  50                   push eax
// 00564687  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0056468a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00564690  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00564696  e8dfbf1300           call 0x6a067a
// 0056469b  83c404               add esp, 4
// 0056469e  8d4e50               lea ecx, [esi + 0x50]
// 005646a1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005646a6  e8d5f6feff           call 0x553d80
// 005646ab  8d4e30               lea ecx, [esi + 0x30]
// 005646ae  885c241c             mov byte ptr [esp + 0x1c], bl
// 005646b2  e8c9f6feff           call 0x553d80
// 005646b7  8bce                 mov ecx, esi
// 005646b9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005646c1  e8ba790000           call 0x56c080
// 005646c6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005646ca  5e                   pop esi
// 005646cb  5d                   pop ebp
// 005646cc  5b                   pop ebx
// 005646cd  64890d00000000       mov dword ptr fs:[0], ecx
// 005646d4  83c414               add esp, 0x14
// 005646d7  c3                   ret 

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
