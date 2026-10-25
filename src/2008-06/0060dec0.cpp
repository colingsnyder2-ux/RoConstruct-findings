// from server: 100% by king_originala
// roc 2008-06 0060dec0  unit: RBX::BlockBlockContact  size: 182 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060dec0
//
// 0060dec0  6aff                 push -1
// 0060dec2  68c08c7d00           push 0x7d8cc0
// 0060dec7  64a100000000         mov eax, dword ptr fs:[0]
// 0060decd  50                   push eax
// 0060dece  64892500000000       mov dword ptr fs:[0], esp
// 0060ded5  83ec28               sub esp, 0x28
// 0060ded8  d9ee                 fldz 
// 0060deda  53                   push ebx
// 0060dedb  56                   push esi
// 0060dedc  8b742440             mov esi, dword ptr [esp + 0x40]
// 0060dee0  33db                 xor ebx, ebx
// 0060dee2  d916                 fst dword ptr [esi]
// 0060dee4  d95604               fst dword ptr [esi + 4]
// 0060dee7  57                   push edi
// 0060dee8  d95e08               fstp dword ptr [esi + 8]
// 0060deeb  8bf9                 mov edi, ecx
// 0060deed  895c2410             mov dword ptr [esp + 0x10], ebx
// 0060def1  895c2414             mov dword ptr [esp + 0x14], ebx
// 0060def5  895c240c             mov dword ptr [esp + 0xc], ebx
// 0060def9  8d44240c             lea eax, [esp + 0xc]
// 0060defd  50                   push eax
// 0060defe  8d4f08               lea ecx, [edi + 8]
// 0060df01  51                   push ecx
// 0060df02  895c2444             mov dword ptr [esp + 0x44], ebx
// 0060df06  e8250c0000           call 0x60eb30
// 0060df0b  8b4724               mov eax, dword ptr [edi + 0x24]
// 0060df0e  83c408               add esp, 8
// 0060df11  3bc3                 cmp eax, ebx
// 0060df13  7407                 je 0x60df1c
// 0060df15  0588020000           add eax, 0x288
// 0060df1a  eb02                 jmp 0x60df1e
// 0060df1c  33c0                 xor eax, eax
// 0060df1e  8b542448             mov edx, dword ptr [esp + 0x48]
// 0060df22  50                   push eax
// 0060df23  52                   push edx
// 0060df24  8d442420             lea eax, [esp + 0x20]
// 0060df28  50                   push eax
// 0060df29  e8027d0000           call 0x615c30
// 0060df2e  8b5728               mov edx, dword ptr [edi + 0x28]
// 0060df31  56                   push esi
// 0060df32  8d4c241c             lea ecx, [esp + 0x1c]
// 0060df36  51                   push ecx
// 0060df37  50                   push eax
// 0060df38  52                   push edx
// 0060df39  c644245801           mov byte ptr [esp + 0x58], 1
// 0060df3e  e82d0a0000           call 0x60e970
// 0060df43  8b442428             mov eax, dword ptr [esp + 0x28]
// 0060df47  50                   push eax
// 0060df48  c7442438c4828200     mov dword ptr [esp + 0x38], 0x8282c4
// 0060df50  c744245cffffffff     mov dword ptr [esp + 0x5c], 0xffffffff
// 0060df58  e8c39defff           call 0x507d20
// 0060df5d  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 0060df61  83c420               add esp, 0x20
// 0060df64  5f                   pop edi
// 0060df65  8bc6                 mov eax, esi
// 0060df67  5e                   pop esi
// 0060df68  5b                   pop ebx
// 0060df69  64890d00000000       mov dword ptr fs:[0], ecx
// 0060df70  83c434               add esp, 0x34
// 0060df73  c20800               ret 8

struct Vector {
    float x, y, z;
};

extern void __cdecl alignedFree(void *);
extern char temporaryTable;

struct Buffer {
    void *data;
    int size;
    int capacity;

    Buffer();
    ~Buffer();
};

inline Buffer::Buffer() : size(0), capacity(0)
{
    data = 0;
}

inline Buffer::~Buffer()
{
    alignedFree(data);
}

struct Temporary {
    void *volatile table;
    char storage[24];

    ~Temporary();
};

inline Temporary::~Temporary()
{
    table = &temporaryTable;
}

extern void __cdecl prepare(void *, Buffer *);
extern Temporary __cdecl transform(void *, void *);
extern void __cdecl evaluate(void *, const Temporary &, Buffer *, Vector *);

struct Contact {
    char prefix[8];
    char storage[28];
    char *first;
    void *second;

    Vector compute(void *);
};

Vector Contact::compute(void *argument)
{
    Vector result = { 0.0f, 0.0f, 0.0f };
    Buffer buffer;
    prepare(storage, &buffer);
    evaluate(second, transform(argument, first ? first + 0x288 : 0),
             &buffer, &result);
    return result;
}
