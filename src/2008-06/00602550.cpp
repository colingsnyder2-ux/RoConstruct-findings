// from server: 100% by colin
// roc 2008-06 00602550  unit: RBX::UnifiedImageWidget  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00602550
//
// 00602550  6aff                 push -1
// 00602552  68f8837d00           push 0x7d83f8
// 00602557  64a100000000         mov eax, dword ptr fs:[0]
// 0060255d  50                   push eax
// 0060255e  64892500000000       mov dword ptr fs:[0], esp
// 00602565  83ec44               sub esp, 0x44
// 00602568  53                   push ebx
// 00602569  33db                 xor ebx, ebx
// 0060256b  56                   push esi
// 0060256c  895c2408             mov dword ptr [esp + 8], ebx
// 00602570  68a4010000           push 0x1a4
// 00602575  885c2410             mov byte ptr [esp + 0x10], bl
// 00602579  ff15b0288000         call dword ptr [0x8028b0]
// 0060257f  8bf0                 mov esi, eax
// 00602581  83c404               add esp, 4
// 00602584  89742410             mov dword ptr [esp + 0x10], esi
// 00602588  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00602590  85f6                 test esi, esi
// 00602592  744b                 je 0x6025df
// 00602594  8b442464             mov eax, dword ptr [esp + 0x64]
// 00602598  50                   push eax
// 00602599  8d4c2434             lea ecx, [esp + 0x34]
// 0060259d  ff1558248000         call dword ptr [0x802458]
// 006025a3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006025a7  51                   push ecx
// 006025a8  8d4c2418             lea ecx, [esp + 0x18]
// 006025ac  c644245802           mov byte ptr [esp + 0x58], 2
// 006025b1  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006025b9  ff1558248000         call dword ptr [0x802458]
// 006025bf  8d542430             lea edx, [esp + 0x30]
// 006025c3  52                   push edx
// 006025c4  8d442418             lea eax, [esp + 0x18]
// 006025c8  bb03000000           mov ebx, 3
// 006025cd  50                   push eax
// 006025ce  8bce                 mov ecx, esi
// 006025d0  895c245c             mov dword ptr [esp + 0x5c], ebx
// 006025d4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006025d8  e873440500           call 0x656a50
// 006025dd  eb02                 jmp 0x6025e1
// 006025df  33c0                 xor eax, eax
// 006025e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006025e5  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006025e9  51                   push ecx
// 006025ea  50                   push eax
// 006025eb  8bce                 mov ecx, esi
// 006025ed  c744245c05000000     mov dword ptr [esp + 0x5c], 5
// 006025f5  e816f4ffff           call 0x601a10
// 006025fa  83cb04               or ebx, 4
// 006025fd  c744245404000000     mov dword ptr [esp + 0x54], 4
// 00602605  f6c302               test bl, 2
// 00602608  7411                 je 0x60261b
// 0060260a  83e3fd               and ebx, 0xfffffffd
// 0060260d  8d4c2414             lea ecx, [esp + 0x14]
// 00602611  895c2408             mov dword ptr [esp + 8], ebx
// 00602615  ff1568248000         call dword ptr [0x802468]
// 0060261b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00602623  f6c301               test bl, 1
// 00602626  7411                 je 0x602639
// 00602628  83e3fe               and ebx, 0xfffffffe
// 0060262b  8d4c2430             lea ecx, [esp + 0x30]
// 0060262f  895c2408             mov dword ptr [esp + 8], ebx
// 00602633  ff1568248000         call dword ptr [0x802468]
// 00602639  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0060263d  8bc6                 mov eax, esi
// 0060263f  5e                   pop esi
// 00602640  5b                   pop ebx
// 00602641  64890d00000000       mov dword ptr fs:[0], ecx
// 00602648  83c450               add esp, 0x50
// 0060264b  c3                   ret 


extern "C" void * (__cdecl *malloc)(unsigned int);

inline void * __cdecl operator new(unsigned int size)
{
    return malloc(size);
}

void __cdecl operator delete(void *);

struct String;
extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_destroy)(String *);

struct String {
    unsigned char storage[28];
    String(const char *);
    ~String();
};

inline String::String(const char *text)
{
    string_construct(this, text);
}

inline String::~String()
{
    string_destroy(this);
}

struct Widget {
    unsigned char storage[0x1a4];
    Widget(const String &, const String &);
};

struct Empty {};

struct Result {
    void *object;
    void *control;
    Result(Widget *, Empty = Empty());
    ~Result();
};

Result makeWidget(const char *first, const char *second)
{
    return Result(new Widget(String(first), String(second)));
}
