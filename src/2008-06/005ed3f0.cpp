// from server: 100% by tester
// roc 2008-06 005ed3f0  unit: RBX::Controller::W4InputType::?$holder  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ed3f0
//
// 005ed3f0  6aff                 push -1
// 005ed3f2  68a9707d00           push 0x7d70a9
// 005ed3f7  64a100000000         mov eax, dword ptr fs:[0]
// 005ed3fd  50                   push eax
// 005ed3fe  64892500000000       mov dword ptr fs:[0], esp
// 005ed405  83ec08               sub esp, 8
// 005ed408  53                   push ebx
// 005ed409  55                   push ebp
// 005ed40a  56                   push esi
// 005ed40b  8bf1                 mov esi, ecx
// 005ed40d  8974240c             mov dword ptr [esp + 0xc], esi
// 005ed411  c70688fe8300         mov dword ptr [esi], 0x83fe88
// 005ed417  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005ed41a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005ed420  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005ed428  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005ed42b  7602                 jbe 0x5ed42f
// 005ed42d  ffd3                 call ebx
// 005ed42f  57                   push edi
// 005ed430  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005ed433  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005ed436  7602                 jbe 0x5ed43a
// 005ed438  ffd3                 call ebx
// 005ed43a  33db                 xor ebx, ebx
// 005ed43c  3bfd                 cmp edi, ebp
// 005ed43e  7415                 je 0x5ed455
// 005ed440  8b0f                 mov ecx, dword ptr [edi]
// 005ed442  3bcb                 cmp ecx, ebx
// 005ed444  7408                 je 0x5ed44e
// 005ed446  8b01                 mov eax, dword ptr [ecx]
// 005ed448  8b10                 mov edx, dword ptr [eax]
// 005ed44a  6a01                 push 1
// 005ed44c  ffd2                 call edx
// 005ed44e  83c704               add edi, 4
// 005ed451  3bfd                 cmp edi, ebp
// 005ed453  75eb                 jne 0x5ed440
// 005ed455  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005ed45b  3bc3                 cmp eax, ebx
// 005ed45d  7409                 je 0x5ed468
// 005ed45f  50                   push eax
// 005ed460  e815320b00           call 0x6a067a
// 005ed465  83c404               add esp, 4
// 005ed468  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005ed46e  50                   push eax
// 005ed46f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005ed475  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005ed47b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005ed481  e8f4310b00           call 0x6a067a
// 005ed486  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005ed48c  83c404               add esp, 4
// 005ed48f  3bc3                 cmp eax, ebx
// 005ed491  7409                 je 0x5ed49c
// 005ed493  50                   push eax
// 005ed494  e8e1310b00           call 0x6a067a
// 005ed499  83c404               add esp, 4
// 005ed49c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005ed4a2  50                   push eax
// 005ed4a3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 005ed4a9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 005ed4af  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005ed4b5  e8c0310b00           call 0x6a067a
// 005ed4ba  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005ed4c0  83c404               add esp, 4
// 005ed4c3  3bc3                 cmp eax, ebx
// 005ed4c5  7409                 je 0x5ed4d0
// 005ed4c7  50                   push eax
// 005ed4c8  e8ad310b00           call 0x6a067a
// 005ed4cd  83c404               add esp, 4
// 005ed4d0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005ed4d6  50                   push eax
// 005ed4d7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005ed4dd  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005ed4e3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005ed4e9  e88c310b00           call 0x6a067a
// 005ed4ee  8dbe88000000         lea edi, [esi + 0x88]
// 005ed4f4  83c404               add esp, 4
// 005ed4f7  897c2414             mov dword ptr [esp + 0x14], edi
// 005ed4fb  8bcf                 mov ecx, edi
// 005ed4fd  c644242008           mov byte ptr [esp + 0x20], 8
// 005ed502  e8c9a2e1ff           call 0x4077d0
// 005ed507  8b3f                 mov edi, dword ptr [edi]
// 005ed509  57                   push edi
// 005ed50a  e86b310b00           call 0x6a067a
// 005ed50f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005ed512  83c404               add esp, 4
// 005ed515  5f                   pop edi
// 005ed516  3bc3                 cmp eax, ebx
// 005ed518  7409                 je 0x5ed523
// 005ed51a  50                   push eax
// 005ed51b  e85a310b00           call 0x6a067a
// 005ed520  83c404               add esp, 4
// 005ed523  8b4670               mov eax, dword ptr [esi + 0x70]
// 005ed526  50                   push eax
// 005ed527  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005ed52a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005ed530  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005ed536  e83f310b00           call 0x6a067a
// 005ed53b  83c404               add esp, 4
// 005ed53e  8d4e50               lea ecx, [esi + 0x50]
// 005ed541  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005ed546  e83568f6ff           call 0x553d80
// 005ed54b  8d4e30               lea ecx, [esi + 0x30]
// 005ed54e  885c241c             mov byte ptr [esp + 0x1c], bl
// 005ed552  e82968f6ff           call 0x553d80
// 005ed557  8bce                 mov ecx, esi
// 005ed559  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005ed561  e81aebf7ff           call 0x56c080
// 005ed566  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005ed56a  5e                   pop esi
// 005ed56b  5d                   pop ebp
// 005ed56c  5b                   pop ebx
// 005ed56d  64890d00000000       mov dword ptr fs:[0], ecx
// 005ed574  83c414               add esp, 0x14
// 005ed577  c3                   ret 

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
