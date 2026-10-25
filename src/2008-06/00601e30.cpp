// from server: 100% by king_originala
// roc 2008-06 00601e30  unit: RBX::UnifiedImageWidget  size: 195 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00601e30
//
// 00601e30  6aff                 push -1
// 00601e32  682e837d00           push 0x7d832e
// 00601e37  64a100000000         mov eax, dword ptr fs:[0]
// 00601e3d  50                   push eax
// 00601e3e  64892500000000       mov dword ptr fs:[0], esp
// 00601e45  83ec28               sub esp, 0x28
// 00601e48  53                   push ebx
// 00601e49  33db                 xor ebx, ebx
// 00601e4b  56                   push esi
// 00601e4c  895c2408             mov dword ptr [esp + 8], ebx
// 00601e50  6868010000           push 0x168
// 00601e55  885c2410             mov byte ptr [esp + 0x10], bl
// 00601e59  ff15b0288000         call dword ptr [0x8028b0]
// 00601e5f  8bf0                 mov esi, eax
// 00601e61  83c404               add esp, 4
// 00601e64  89742410             mov dword ptr [esp + 0x10], esi
// 00601e68  c744243801000000     mov dword ptr [esp + 0x38], 1
// 00601e70  85f6                 test esi, esi
// 00601e72  7430                 je 0x601ea4
// 00601e74  8b442448             mov eax, dword ptr [esp + 0x48]
// 00601e78  50                   push eax
// 00601e79  8d4c2418             lea ecx, [esp + 0x18]
// 00601e7d  ff1558248000         call dword ptr [0x802458]
// 00601e83  8b542444             mov edx, dword ptr [esp + 0x44]
// 00601e87  8d4c2414             lea ecx, [esp + 0x14]
// 00601e8b  51                   push ecx
// 00601e8c  bb01000000           mov ebx, 1
// 00601e91  52                   push edx
// 00601e92  8bce                 mov ecx, esi
// 00601e94  c644244002           mov byte ptr [esp + 0x40], 2
// 00601e99  895c2410             mov dword ptr [esp + 0x10], ebx
// 00601e9d  e84ecd0400           call 0x64ebf0
// 00601ea2  eb02                 jmp 0x601ea6
// 00601ea4  33c0                 xor eax, eax
// 00601ea6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00601eaa  8b742440             mov esi, dword ptr [esp + 0x40]
// 00601eae  51                   push ecx
// 00601eaf  50                   push eax
// 00601eb0  8bce                 mov ecx, esi
// 00601eb2  c744244003000000     mov dword ptr [esp + 0x40], 3
// 00601eba  e871f4ffff           call 0x601330
// 00601ebf  83cb02               or ebx, 2
// 00601ec2  c744243800000000     mov dword ptr [esp + 0x38], 0
// 00601eca  f6c301               test bl, 1
// 00601ecd  7411                 je 0x601ee0
// 00601ecf  83e3fe               and ebx, 0xfffffffe
// 00601ed2  8d4c2414             lea ecx, [esp + 0x14]
// 00601ed6  895c2408             mov dword ptr [esp + 8], ebx
// 00601eda  ff1568248000         call dword ptr [0x802468]
// 00601ee0  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00601ee4  8bc6                 mov eax, esi
// 00601ee6  5e                   pop esi
// 00601ee7  5b                   pop ebx
// 00601ee8  64890d00000000       mov dword ptr fs:[0], ecx
// 00601eef  83c434               add esp, 0x34
// 00601ef2  c3                   ret 

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
    char storage[360];
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
