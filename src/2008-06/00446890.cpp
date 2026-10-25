// from server: 100% by tester
// roc 2008-06 00446890  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446890
//
// 00446890  6aff                 push -1
// 00446892  68a9707d00           push 0x7d70a9
// 00446897  64a100000000         mov eax, dword ptr fs:[0]
// 0044689d  50                   push eax
// 0044689e  64892500000000       mov dword ptr fs:[0], esp
// 004468a5  83ec08               sub esp, 8
// 004468a8  53                   push ebx
// 004468a9  55                   push ebp
// 004468aa  56                   push esi
// 004468ab  8bf1                 mov esi, ecx
// 004468ad  8974240c             mov dword ptr [esp + 0xc], esi
// 004468b1  c706e05e8100         mov dword ptr [esi], 0x815ee0
// 004468b7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 004468ba  8b1d90288000         mov ebx, dword ptr [0x802890]
// 004468c0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 004468c8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 004468cb  7602                 jbe 0x4468cf
// 004468cd  ffd3                 call ebx
// 004468cf  57                   push edi
// 004468d0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 004468d3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 004468d6  7602                 jbe 0x4468da
// 004468d8  ffd3                 call ebx
// 004468da  33db                 xor ebx, ebx
// 004468dc  3bfd                 cmp edi, ebp
// 004468de  7415                 je 0x4468f5
// 004468e0  8b0f                 mov ecx, dword ptr [edi]
// 004468e2  3bcb                 cmp ecx, ebx
// 004468e4  7408                 je 0x4468ee
// 004468e6  8b01                 mov eax, dword ptr [ecx]
// 004468e8  8b10                 mov edx, dword ptr [eax]
// 004468ea  6a01                 push 1
// 004468ec  ffd2                 call edx
// 004468ee  83c704               add edi, 4
// 004468f1  3bfd                 cmp edi, ebp
// 004468f3  75eb                 jne 0x4468e0
// 004468f5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 004468fb  3bc3                 cmp eax, ebx
// 004468fd  7409                 je 0x446908
// 004468ff  50                   push eax
// 00446900  e8759d2500           call 0x6a067a
// 00446905  83c404               add esp, 4
// 00446908  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0044690e  50                   push eax
// 0044690f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00446915  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0044691b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00446921  e8549d2500           call 0x6a067a
// 00446926  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0044692c  83c404               add esp, 4
// 0044692f  3bc3                 cmp eax, ebx
// 00446931  7409                 je 0x44693c
// 00446933  50                   push eax
// 00446934  e8419d2500           call 0x6a067a
// 00446939  83c404               add esp, 4
// 0044693c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00446942  50                   push eax
// 00446943  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00446949  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0044694f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00446955  e8209d2500           call 0x6a067a
// 0044695a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00446960  83c404               add esp, 4
// 00446963  3bc3                 cmp eax, ebx
// 00446965  7409                 je 0x446970
// 00446967  50                   push eax
// 00446968  e80d9d2500           call 0x6a067a
// 0044696d  83c404               add esp, 4
// 00446970  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00446976  50                   push eax
// 00446977  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0044697d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00446983  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00446989  e8ec9c2500           call 0x6a067a
// 0044698e  8dbe88000000         lea edi, [esi + 0x88]
// 00446994  83c404               add esp, 4
// 00446997  897c2414             mov dword ptr [esp + 0x14], edi
// 0044699b  8bcf                 mov ecx, edi
// 0044699d  c644242008           mov byte ptr [esp + 0x20], 8
// 004469a2  e8290efcff           call 0x4077d0
// 004469a7  8b3f                 mov edi, dword ptr [edi]
// 004469a9  57                   push edi
// 004469aa  e8cb9c2500           call 0x6a067a
// 004469af  8b467c               mov eax, dword ptr [esi + 0x7c]
// 004469b2  83c404               add esp, 4
// 004469b5  5f                   pop edi
// 004469b6  3bc3                 cmp eax, ebx
// 004469b8  7409                 je 0x4469c3
// 004469ba  50                   push eax
// 004469bb  e8ba9c2500           call 0x6a067a
// 004469c0  83c404               add esp, 4
// 004469c3  8b4670               mov eax, dword ptr [esi + 0x70]
// 004469c6  50                   push eax
// 004469c7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 004469ca  899e80000000         mov dword ptr [esi + 0x80], ebx
// 004469d0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 004469d6  e89f9c2500           call 0x6a067a
// 004469db  83c404               add esp, 4
// 004469de  8d4e50               lea ecx, [esi + 0x50]
// 004469e1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 004469e6  e895d31000           call 0x553d80
// 004469eb  8d4e30               lea ecx, [esi + 0x30]
// 004469ee  885c241c             mov byte ptr [esp + 0x1c], bl
// 004469f2  e889d31000           call 0x553d80
// 004469f7  8bce                 mov ecx, esi
// 004469f9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00446a01  e87a561200           call 0x56c080
// 00446a06  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446a0a  5e                   pop esi
// 00446a0b  5d                   pop ebp
// 00446a0c  5b                   pop ebx
// 00446a0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00446a14  83c414               add esp, 0x14
// 00446a17  c3                   ret 

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
