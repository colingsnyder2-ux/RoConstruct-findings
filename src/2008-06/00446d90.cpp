// from server: 100% by tester
// roc 2008-06 00446d90  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00446d90
//
// 00446d90  6aff                 push -1
// 00446d92  68a9707d00           push 0x7d70a9
// 00446d97  64a100000000         mov eax, dword ptr fs:[0]
// 00446d9d  50                   push eax
// 00446d9e  64892500000000       mov dword ptr fs:[0], esp
// 00446da5  83ec08               sub esp, 8
// 00446da8  53                   push ebx
// 00446da9  55                   push ebp
// 00446daa  56                   push esi
// 00446dab  8bf1                 mov esi, ecx
// 00446dad  8974240c             mov dword ptr [esp + 0xc], esi
// 00446db1  c706045f8100         mov dword ptr [esi], 0x815f04
// 00446db7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 00446dba  8b1d90288000         mov ebx, dword ptr [0x802890]
// 00446dc0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 00446dc8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 00446dcb  7602                 jbe 0x446dcf
// 00446dcd  ffd3                 call ebx
// 00446dcf  57                   push edi
// 00446dd0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 00446dd3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 00446dd6  7602                 jbe 0x446dda
// 00446dd8  ffd3                 call ebx
// 00446dda  33db                 xor ebx, ebx
// 00446ddc  3bfd                 cmp edi, ebp
// 00446dde  7415                 je 0x446df5
// 00446de0  8b0f                 mov ecx, dword ptr [edi]
// 00446de2  3bcb                 cmp ecx, ebx
// 00446de4  7408                 je 0x446dee
// 00446de6  8b01                 mov eax, dword ptr [ecx]
// 00446de8  8b10                 mov edx, dword ptr [eax]
// 00446dea  6a01                 push 1
// 00446dec  ffd2                 call edx
// 00446dee  83c704               add edi, 4
// 00446df1  3bfd                 cmp edi, ebp
// 00446df3  75eb                 jne 0x446de0
// 00446df5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 00446dfb  3bc3                 cmp eax, ebx
// 00446dfd  7409                 je 0x446e08
// 00446dff  50                   push eax
// 00446e00  e875982500           call 0x6a067a
// 00446e05  83c404               add esp, 4
// 00446e08  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 00446e0e  50                   push eax
// 00446e0f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 00446e15  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 00446e1b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 00446e21  e854982500           call 0x6a067a
// 00446e26  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 00446e2c  83c404               add esp, 4
// 00446e2f  3bc3                 cmp eax, ebx
// 00446e31  7409                 je 0x446e3c
// 00446e33  50                   push eax
// 00446e34  e841982500           call 0x6a067a
// 00446e39  83c404               add esp, 4
// 00446e3c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 00446e42  50                   push eax
// 00446e43  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 00446e49  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 00446e4f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 00446e55  e820982500           call 0x6a067a
// 00446e5a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 00446e60  83c404               add esp, 4
// 00446e63  3bc3                 cmp eax, ebx
// 00446e65  7409                 je 0x446e70
// 00446e67  50                   push eax
// 00446e68  e80d982500           call 0x6a067a
// 00446e6d  83c404               add esp, 4
// 00446e70  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 00446e76  50                   push eax
// 00446e77  899eac000000         mov dword ptr [esi + 0xac], ebx
// 00446e7d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 00446e83  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 00446e89  e8ec972500           call 0x6a067a
// 00446e8e  8dbe88000000         lea edi, [esi + 0x88]
// 00446e94  83c404               add esp, 4
// 00446e97  897c2414             mov dword ptr [esp + 0x14], edi
// 00446e9b  8bcf                 mov ecx, edi
// 00446e9d  c644242008           mov byte ptr [esp + 0x20], 8
// 00446ea2  e82909fcff           call 0x4077d0
// 00446ea7  8b3f                 mov edi, dword ptr [edi]
// 00446ea9  57                   push edi
// 00446eaa  e8cb972500           call 0x6a067a
// 00446eaf  8b467c               mov eax, dword ptr [esi + 0x7c]
// 00446eb2  83c404               add esp, 4
// 00446eb5  5f                   pop edi
// 00446eb6  3bc3                 cmp eax, ebx
// 00446eb8  7409                 je 0x446ec3
// 00446eba  50                   push eax
// 00446ebb  e8ba972500           call 0x6a067a
// 00446ec0  83c404               add esp, 4
// 00446ec3  8b4670               mov eax, dword ptr [esi + 0x70]
// 00446ec6  50                   push eax
// 00446ec7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 00446eca  899e80000000         mov dword ptr [esi + 0x80], ebx
// 00446ed0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 00446ed6  e89f972500           call 0x6a067a
// 00446edb  83c404               add esp, 4
// 00446ede  8d4e50               lea ecx, [esi + 0x50]
// 00446ee1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 00446ee6  e895ce1000           call 0x553d80
// 00446eeb  8d4e30               lea ecx, [esi + 0x30]
// 00446eee  885c241c             mov byte ptr [esp + 0x1c], bl
// 00446ef2  e889ce1000           call 0x553d80
// 00446ef7  8bce                 mov ecx, esi
// 00446ef9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 00446f01  e87a511200           call 0x56c080
// 00446f06  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00446f0a  5e                   pop esi
// 00446f0b  5d                   pop ebp
// 00446f0c  5b                   pop ebx
// 00446f0d  64890d00000000       mov dword ptr fs:[0], ecx
// 00446f14  83c414               add esp, 0x14
// 00446f17  c3                   ret 

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
