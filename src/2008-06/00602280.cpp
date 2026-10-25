// from server: 100% by king_originala
// roc 2008-06 00602280  unit: RBX::UnifiedImageWidget  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00602280
//
// 00602280  6aff                 push -1
// 00602282  682e837d00           push 0x7d832e
// 00602287  64a100000000         mov eax, dword ptr fs:[0]
// 0060228d  50                   push eax
// 0060228e  64892500000000       mov dword ptr fs:[0], esp
// 00602295  83ec28               sub esp, 0x28
// 00602298  53                   push ebx
// 00602299  33db                 xor ebx, ebx
// 0060229b  56                   push esi
// 0060229c  895c2408             mov dword ptr [esp + 8], ebx
// 006022a0  6880010000           push 0x180
// 006022a5  885c2410             mov byte ptr [esp + 0x10], bl
// 006022a9  ff15b0288000         call dword ptr [0x8028b0]
// 006022af  8bf0                 mov esi, eax
// 006022b1  83c404               add esp, 4
// 006022b4  89742410             mov dword ptr [esp + 0x10], esi
// 006022b8  c744243801000000     mov dword ptr [esp + 0x38], 1
// 006022c0  85f6                 test esi, esi
// 006022c2  7430                 je 0x6022f4
// 006022c4  8b442448             mov eax, dword ptr [esp + 0x48]
// 006022c8  50                   push eax
// 006022c9  8d4c2418             lea ecx, [esp + 0x18]
// 006022cd  ff1558248000         call dword ptr [0x802458]
// 006022d3  8b542444             mov edx, dword ptr [esp + 0x44]
// 006022d7  8d4c2414             lea ecx, [esp + 0x14]
// 006022db  51                   push ecx
// 006022dc  bb01000000           mov ebx, 1
// 006022e1  52                   push edx
// 006022e2  8bce                 mov ecx, esi
// 006022e4  c644244002           mov byte ptr [esp + 0x40], 2
// 006022e9  895c2410             mov dword ptr [esp + 0x10], ebx
// 006022ed  e80efaffff           call 0x601d00
// 006022f2  eb02                 jmp 0x6022f6
// 006022f4  33c0                 xor eax, eax
// 006022f6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006022fa  8b742440             mov esi, dword ptr [esp + 0x40]
// 006022fe  51                   push ecx
// 006022ff  50                   push eax
// 00602300  8bce                 mov ecx, esi
// 00602302  c744244003000000     mov dword ptr [esp + 0x40], 3
// 0060230a  e841f4ffff           call 0x601750
// 0060230f  83cb02               or ebx, 2
// 00602312  c744243800000000     mov dword ptr [esp + 0x38], 0
// 0060231a  f6c301               test bl, 1
// 0060231d  7411                 je 0x602330
// 0060231f  83e3fe               and ebx, 0xfffffffe
// 00602322  8d4c2414             lea ecx, [esp + 0x14]
// 00602326  895c2408             mov dword ptr [esp + 8], ebx
// 0060232a  ff1568248000         call dword ptr [0x802468]
// 00602330  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00602334  8bc6                 mov eax, esi
// 00602336  5e                   pop esi
// 00602337  5b                   pop ebx
// 00602338  64890d00000000       mov dword ptr fs:[0], ecx
// 0060233f  83c434               add esp, 0x34
// 00602342  c3                   ret 

extern "C" void* (__cdecl *malloc_call)(unsigned int);

inline void* __cdecl operator new(unsigned int size)
{
    return malloc_call(size);
}

void __cdecl operator delete(void*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

extern void (__thiscall *string_construct)(String*, const char*);
extern void (__thiscall *string_destroy)(String*);

inline String::String(const char* text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

struct S {
    char storage[384];
    S(int, const String&);
};

struct Tag {
    char value;
    Tag();
};

inline Tag::Tag() : value(0)
{
}

struct Result {
    Result(S*, Tag);
    ~Result();
};

Result __cdecl make(int a, const char* text)
{
    Tag tag;
    return Result(new S(a, String(text)), tag);
}
