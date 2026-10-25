// from server: 100% by king_originala
// roc 2008-06 006091f0  unit: RBX::VModelInstance::?$FactoryProduct  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006091f0
//
// 006091f0  6aff                 push -1
// 006091f2  68a9707d00           push 0x7d70a9
// 006091f7  64a100000000         mov eax, dword ptr fs:[0]
// 006091fd  50                   push eax
// 006091fe  64892500000000       mov dword ptr fs:[0], esp
// 00609205  83ec08               sub esp, 8
// 00609208  53                   push ebx
// 00609209  55                   push ebp
// 0060920a  56                   push esi
// 0060920b  8bf1                 mov esi, ecx
// 0060920d  8974240c             mov dword ptr [esp + 0xc], esi
// 00609211  c706ac288400         mov dword ptr [esi], 0x8428ac
// 00609217  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0060921a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00609220  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00609228  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0060922b  7602                 jbe 0x60922f
// 0060922d  ffd3                 call ebx
// 0060922f  57                   push edi
// 00609230  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00609233  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00609236  7602                 jbe 0x60923a
// 00609238  ffd3                 call ebx
// 0060923a  33db                 xor ebx, ebx
// 0060923c  3bfd                 cmp edi, ebp
// 0060923e  7415                 je 0x609255
// 00609240  8b0f                 mov ecx, dword ptr [edi]
// 00609242  3bcb                 cmp ecx, ebx
// 00609244  7408                 je 0x60924e
// 00609246  8b01                 mov eax, dword ptr [ecx]
// 00609248  8b10                 mov edx, dword ptr [eax]
// 0060924a  6a01                 push 1
// 0060924c  ffd2                 call edx
// 0060924e  83c704               add edi, 4
// 00609251  3bfd                 cmp edi, ebp
// 00609253  75eb                 jne 0x609240
// 00609255  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0060925b  3bc3                 cmp eax, ebx
// 0060925d  7409                 je 0x609268
// 0060925f  50                   push eax
// 00609260  e815740900           call 0x6a067a
// 00609265  83c404               add esp, 4
// 00609268  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0060926e  50                   push eax
// 0060926f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00609275  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0060927b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00609281  e8f4730900           call 0x6a067a
// 00609286  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0060928c  83c404               add esp, 4
// 0060928f  3bc3                 cmp eax, ebx
// 00609291  7409                 je 0x60929c
// 00609293  50                   push eax
// 00609294  e8e1730900           call 0x6a067a
// 00609299  83c404               add esp, 4
// 0060929c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 006092a2  50                   push eax
// 006092a3  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 006092a9  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 006092af  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 006092b5  e8c0730900           call 0x6a067a
// 006092ba  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 006092c0  83c404               add esp, 4
// 006092c3  3bc3                 cmp eax, ebx
// 006092c5  7409                 je 0x6092d0
// 006092c7  50                   push eax
// 006092c8  e8ad730900           call 0x6a067a
// 006092cd  83c404               add esp, 4
// 006092d0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 006092d6  50                   push eax
// 006092d7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 006092dd  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 006092e3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 006092e9  e88c730900           call 0x6a067a
// 006092ee  8dbe88000000         lea edi, [esi + 0x88]
// 006092f4  83c404               add esp, 4
// 006092f7  897c2414             mov dword ptr [esp + 0x14], edi
// 006092fb  8bcf                 mov ecx, edi
// 006092fd  c644242008           mov byte ptr [esp + 0x20], 8
// 00609302  e8c9e4dfff           call 0x4077d0
// 00609307  8b3f                 mov edi, dword ptr [edi]
// 00609309  57                   push edi
// 0060930a  e86b730900           call 0x6a067a
// 0060930f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00609312  83c404               add esp, 4
// 00609315  5f                   pop edi
// 00609316  3bc3                 cmp eax, ebx
// 00609318  7409                 je 0x609323
// 0060931a  50                   push eax
// 0060931b  e85a730900           call 0x6a067a
// 00609320  83c404               add esp, 4
// 00609323  8b4670               mov eax, dword ptr [esi + 0x70]
// 00609326  50                   push eax
// 00609327  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0060932a  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00609330  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00609336  e83f730900           call 0x6a067a
// 0060933b  83c404               add esp, 4
// 0060933e  8d4e50               lea ecx, [esi + 0x50]
// 00609341  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00609346  e835aaf4ff           call 0x553d80
// 0060934b  8d4e30               lea ecx, [esi + 0x30]
// 0060934e  885c241c             mov byte ptr [esp + 0x1c], bl
// 00609352  e829aaf4ff           call 0x553d80
// 00609357  8bce                 mov ecx, esi
// 00609359  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00609361  e81a2df6ff           call 0x56c080
// 00609366  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060936a  5e                   pop esi
// 0060936b  5d                   pop ebp
// 0060936c  5b                   pop ebx
// 0060936d  64890d00000000       mov dword ptr fs:[0], ecx
// 00609374  83c414               add esp, 0x14
// 00609377  c3                   ret 

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
