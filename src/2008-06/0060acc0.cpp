// from server: 100% by tester
// roc 2008-06 0060acc0  unit: RBX::HUMAN::MovingNoPhysicsBase  size: 392 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060acc0
//
// 0060acc0  6aff                 push -1
// 0060acc2  68a9707d00           push 0x7d70a9
// 0060acc7  64a100000000         mov eax, dword ptr fs:[0]
// 0060accd  50                   push eax
// 0060acce  64892500000000       mov dword ptr fs:[0], esp
// 0060acd5  83ec08               sub esp, 8
// 0060acd8  53                   push ebx
// 0060acd9  55                   push ebp
// 0060acda  56                   push esi
// 0060acdb  8bf1                 mov esi, ecx
// 0060acdd  8974240c             mov dword ptr [esp + 0xc], esi
// 0060ace1  c7065c2f8400         mov dword ptr [esi], 0x842f5c
// 0060ace7  8b6e20               mov ebp, dword ptr [esi + 0x20]
// 0060acea  8b1d90288000         mov ebx, dword ptr [0x802890]
// 0060acf0  c744241c07000000     mov dword ptr [esp + 0x1c], 7
// 0060acf8  396e1c               cmp dword ptr [esi + 0x1c], ebp
// 0060acfb  7602                 jbe 0x60acff
// 0060acfd  ffd3                 call ebx
// 0060acff  57                   push edi
// 0060ad00  8b7e1c               mov edi, dword ptr [esi + 0x1c]
// 0060ad03  3b7e20               cmp edi, dword ptr [esi + 0x20]
// 0060ad06  7602                 jbe 0x60ad0a
// 0060ad08  ffd3                 call ebx
// 0060ad0a  33db                 xor ebx, ebx
// 0060ad0c  3bfd                 cmp edi, ebp
// 0060ad0e  7415                 je 0x60ad25
// 0060ad10  8b0f                 mov ecx, dword ptr [edi]
// 0060ad12  3bcb                 cmp ecx, ebx
// 0060ad14  7408                 je 0x60ad1e
// 0060ad16  8b01                 mov eax, dword ptr [ecx]
// 0060ad18  8b10                 mov edx, dword ptr [eax]
// 0060ad1a  6a01                 push 1
// 0060ad1c  ffd2                 call edx
// 0060ad1e  83c704               add edi, 4
// 0060ad21  3bfd                 cmp edi, ebp
// 0060ad23  75eb                 jne 0x60ad10
// 0060ad25  8b86dc000000         mov eax, dword ptr [esi + 0xdc]
// 0060ad2b  3bc3                 cmp eax, ebx
// 0060ad2d  7409                 je 0x60ad38
// 0060ad2f  50                   push eax
// 0060ad30  e845590900           call 0x6a067a
// 0060ad35  83c404               add esp, 4
// 0060ad38  8b86d0000000         mov eax, dword ptr [esi + 0xd0]
// 0060ad3e  50                   push eax
// 0060ad3f  899edc000000         mov dword ptr [esi + 0xdc], ebx
// 0060ad45  899ee0000000         mov dword ptr [esi + 0xe0], ebx
// 0060ad4b  899ee4000000         mov dword ptr [esi + 0xe4], ebx
// 0060ad51  e824590900           call 0x6a067a
// 0060ad56  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0060ad5c  83c404               add esp, 4
// 0060ad5f  3bc3                 cmp eax, ebx
// 0060ad61  7409                 je 0x60ad6c
// 0060ad63  50                   push eax
// 0060ad64  e811590900           call 0x6a067a
// 0060ad69  83c404               add esp, 4
// 0060ad6c  8b86b8000000         mov eax, dword ptr [esi + 0xb8]
// 0060ad72  50                   push eax
// 0060ad73  899ec4000000         mov dword ptr [esi + 0xc4], ebx
// 0060ad79  899ec8000000         mov dword ptr [esi + 0xc8], ebx
// 0060ad7f  899ecc000000         mov dword ptr [esi + 0xcc], ebx
// 0060ad85  e8f0580900           call 0x6a067a
// 0060ad8a  8b86ac000000         mov eax, dword ptr [esi + 0xac]
// 0060ad90  83c404               add esp, 4
// 0060ad93  3bc3                 cmp eax, ebx
// 0060ad95  7409                 je 0x60ada0
// 0060ad97  50                   push eax
// 0060ad98  e8dd580900           call 0x6a067a
// 0060ad9d  83c404               add esp, 4
// 0060ada0  8b86a0000000         mov eax, dword ptr [esi + 0xa0]
// 0060ada6  50                   push eax
// 0060ada7  899eac000000         mov dword ptr [esi + 0xac], ebx
// 0060adad  899eb0000000         mov dword ptr [esi + 0xb0], ebx
// 0060adb3  899eb4000000         mov dword ptr [esi + 0xb4], ebx
// 0060adb9  e8bc580900           call 0x6a067a
// 0060adbe  8dbe88000000         lea edi, [esi + 0x88]
// 0060adc4  83c404               add esp, 4
// 0060adc7  897c2414             mov dword ptr [esp + 0x14], edi
// 0060adcb  8bcf                 mov ecx, edi
// 0060adcd  c644242008           mov byte ptr [esp + 0x20], 8
// 0060add2  e8f9c9dfff           call 0x4077d0
// 0060add7  8b3f                 mov edi, dword ptr [edi]
// 0060add9  57                   push edi
// 0060adda  e89b580900           call 0x6a067a
// 0060addf  8b467c               mov eax, dword ptr [esi + 0x7c]
// 0060ade2  83c404               add esp, 4
// 0060ade5  5f                   pop edi
// 0060ade6  3bc3                 cmp eax, ebx
// 0060ade8  7409                 je 0x60adf3
// 0060adea  50                   push eax
// 0060adeb  e88a580900           call 0x6a067a
// 0060adf0  83c404               add esp, 4
// 0060adf3  8b4670               mov eax, dword ptr [esi + 0x70]
// 0060adf6  50                   push eax
// 0060adf7  895e7c               mov dword ptr [esi + 0x7c], ebx
// 0060adfa  899e80000000         mov dword ptr [esi + 0x80], ebx
// 0060ae00  899e84000000         mov dword ptr [esi + 0x84], ebx
// 0060ae06  e86f580900           call 0x6a067a
// 0060ae0b  83c404               add esp, 4
// 0060ae0e  8d4e50               lea ecx, [esi + 0x50]
// 0060ae11  c644241c01           mov byte ptr [esp + 0x1c], 1
// 0060ae16  e8658ff4ff           call 0x553d80
// 0060ae1b  8d4e30               lea ecx, [esi + 0x30]
// 0060ae1e  885c241c             mov byte ptr [esp + 0x1c], bl
// 0060ae22  e8598ff4ff           call 0x553d80
// 0060ae27  8bce                 mov ecx, esi
// 0060ae29  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 0060ae31  e84a12f6ff           call 0x56c080
// 0060ae36  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0060ae3a  5e                   pop esi
// 0060ae3b  5d                   pop ebp
// 0060ae3c  5b                   pop ebx
// 0060ae3d  64890d00000000       mov dword ptr fs:[0], ecx
// 0060ae44  83c414               add esp, 0x14
// 0060ae47  c3                   ret 

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
