// from server: 100% by tester
// roc 2008-06 005bac70  unit: RBX::Soundscape::SoundChannel  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bac70
//
// 005bac70  6aff                 push -1
// 005bac72  68a9707d00           push 0x7d70a9
// 005bac77  64a100000000         mov eax, dword ptr fs:[0]
// 005bac7d  50                   push eax
// 005bac7e  64892500000000       mov dword ptr fs:[0], esp
// 005bac85  83ec08               sub esp, 8
// 005bac88  53                   push ebx
// 005bac89  55                   push ebp
// 005bac8a  56                   push esi
// 005bac8b  8bf1                 mov esi, ecx
// 005bac8d  8974240c             mov dword ptr [esp + 0xc], esi
// 005bac91  c706347a8300         mov dword ptr [esi], 0x837a34
// 005bac97  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 005bac9a  8b1d90288000         mov ebx, dword ptr [0x802890]
// 005baca0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 005baca8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 005bacab  7602                 jbe 0x5bacaf
// 005bacad  ffd3                 call ebx
// 005bacaf  57                   push edi
// 005bacb0  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 005bacb3  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 005bacb6  7602                 jbe 0x5bacba
// 005bacb8  ffd3                 call ebx
// 005bacba  33db                 xor ebx, ebx
// 005bacbc  3bfd                 cmp edi, ebp
// 005bacbe  7415                 je 0x5bacd5
// 005bacc0  8b0f                 mov ecx, dword ptr [edi]
// 005bacc2  3bcb                 cmp ecx, ebx
// 005bacc4  7408                 je 0x5bacce
// 005bacc6  8b01                 mov eax, dword ptr [ecx]
// 005bacc8  8b10                 mov edx, dword ptr [eax]
// 005bacca  6a01                 push 1
// 005baccc  ffd2                 call edx
// 005bacce  83c704               add edi, 4
// 005bacd1  3bfd                 cmp edi, ebp
// 005bacd3  75eb                 jne 0x5bacc0
// 005bacd5  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 005bacdb  3bc3                 cmp eax, ebx
// 005bacdd  7409                 je 0x5bace8
// 005bacdf  50                   push eax
// 005bace0  e895590e00           call 0x6a067a
// 005bace5  83c404               add esp, 4
// 005bace8  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 005bacee  50                   push eax
// 005bacef  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 005bacf5  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 005bacfb  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 005bad01  e874590e00           call 0x6a067a
// 005bad06  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 005bad0c  83c404               add esp, 4
// 005bad0f  3bc3                 cmp eax, ebx
// 005bad11  7409                 je 0x5bad1c
// 005bad13  50                   push eax
// 005bad14  e861590e00           call 0x6a067a
// 005bad19  83c404               add esp, 4
// 005bad1c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 005bad22  50                   push eax
// 005bad23  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 005bad29  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 005bad2f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 005bad35  e840590e00           call 0x6a067a
// 005bad3a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 005bad40  83c404               add esp, 4
// 005bad43  3bc3                 cmp eax, ebx
// 005bad45  7409                 je 0x5bad50
// 005bad47  50                   push eax
// 005bad48  e82d590e00           call 0x6a067a
// 005bad4d  83c404               add esp, 4
// 005bad50  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 005bad56  50                   push eax
// 005bad57  899eac000000         mov dword ptr [esi + 0xac], ebx
// 005bad5d  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 005bad63  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 005bad69  e80c590e00           call 0x6a067a
// 005bad6e  8dbe88000000         lea edi, [esi + 0x88]
// 005bad74  83c404               add esp, 4
// 005bad77  897c2414             mov dword ptr [esp + 0x14], edi
// 005bad7b  8bcf                 mov ecx, edi
// 005bad7d  c644242008           mov byte ptr [esp + 0x20], 8
// 005bad82  e849cae4ff           call 0x4077d0
// 005bad87  8b3f                 mov edi, dword ptr [edi]
// 005bad89  57                   push edi
// 005bad8a  e8eb580e00           call 0x6a067a
// 005bad8f  8b467c               mov eax, dword ptr [esi + 0x7c]
// 005bad92  83c404               add esp, 4
// 005bad95  5f                   pop edi
// 005bad96  3bc3                 cmp eax, ebx
// 005bad98  7409                 je 0x5bada3
// 005bad9a  50                   push eax
// 005bad9b  e8da580e00           call 0x6a067a
// 005bada0  83c404               add esp, 4
// 005bada3  8b4670               mov eax, dword ptr [esi + 0x70]
// 005bada6  50                   push eax
// 005bada7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 005badaa  899e80000000         mov dword ptr [esi + 0x80], ebx
// 005badb0  899e84000000         mov dword ptr [esi + 0x84], ebx
// 005badb6  e8bf580e00           call 0x6a067a
// 005badbb  83c404               add esp, 4
// 005badbe  8d4e50               lea ecx, [esi + 0x50]
// 005badc1  c644241c01           mov byte ptr [esp + 0x1c], 1
// 005badc6  e8b58ff9ff           call 0x553d80
// 005badcb  8d4e30               lea ecx, [esi + 0x30]
// 005badce  885c241c             mov byte ptr [esp + 0x1c], bl
// 005badd2  e8a98ff9ff           call 0x553d80
// 005badd7  8bce                 mov ecx, esi
// 005badd9  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005bade1  e89a12fbff           call 0x56c080
// 005bade6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005badea  5e                   pop esi
// 005badeb  5d                   pop ebp
// 005badec  5b                   pop ebx
// 005baded  64890d00000000       mov dword ptr fs:[0], ecx
// 005badf4  83c414               add esp, 0x14
// 005badf7  c3                   ret 

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
