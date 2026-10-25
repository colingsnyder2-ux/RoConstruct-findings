// from server: 100% by king_originala
// roc 2008-06 00602450  unit: RBX::UnifiedImageWidget  size: 252 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00602450
//
// 00602450  6aff                 push -1
// 00602452  68f8837d00           push 0x7d83f8
// 00602457  64a100000000         mov eax, dword ptr fs:[0]
// 0060245d  50                   push eax
// 0060245e  64892500000000       mov dword ptr fs:[0], esp
// 00602465  83ec44               sub esp, 0x44
// 00602468  53                   push ebx
// 00602469  33db                 xor ebx, ebx
// 0060246b  56                   push esi
// 0060246c  895c2408             mov dword ptr [esp + 8], ebx
// 00602470  6888010000           push 0x188
// 00602475  885c2410             mov byte ptr [esp + 0x10], bl
// 00602479  ff15b0288000         call dword ptr [0x8028b0]
// 0060247f  8bf0                 mov esi, eax
// 00602481  83c404               add esp, 4
// 00602484  89742410             mov dword ptr [esp + 0x10], esi
// 00602488  c744245401000000     mov dword ptr [esp + 0x54], 1
// 00602490  85f6                 test esi, esi
// 00602492  744b                 je 0x6024df
// 00602494  8b442464             mov eax, dword ptr [esp + 0x64]
// 00602498  50                   push eax
// 00602499  8d4c2434             lea ecx, [esp + 0x34]
// 0060249d  ff1558248000         call dword ptr [0x802458]
// 006024a3  8b4c2460             mov ecx, dword ptr [esp + 0x60]
// 006024a7  51                   push ecx
// 006024a8  8d4c2418             lea ecx, [esp + 0x18]
// 006024ac  c644245802           mov byte ptr [esp + 0x58], 2
// 006024b1  c744240c01000000     mov dword ptr [esp + 0xc], 1
// 006024b9  ff1558248000         call dword ptr [0x802458]
// 006024bf  8d542430             lea edx, [esp + 0x30]
// 006024c3  52                   push edx
// 006024c4  8d442418             lea eax, [esp + 0x18]
// 006024c8  bb03000000           mov ebx, 3
// 006024cd  50                   push eax
// 006024ce  8bce                 mov ecx, esi
// 006024d0  895c245c             mov dword ptr [esp + 0x5c], ebx
// 006024d4  895c2410             mov dword ptr [esp + 0x10], ebx
// 006024d8  e8c31ff7ff           call 0x5744a0
// 006024dd  eb02                 jmp 0x6024e1
// 006024df  33c0                 xor eax, eax
// 006024e1  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 006024e5  8b74245c             mov esi, dword ptr [esp + 0x5c]
// 006024e9  51                   push ecx
// 006024ea  50                   push eax
// 006024eb  8bce                 mov ecx, esi
// 006024ed  c744245c05000000     mov dword ptr [esp + 0x5c], 5
// 006024f5  e866f4ffff           call 0x601960
// 006024fa  83cb04               or ebx, 4
// 006024fd  c744245404000000     mov dword ptr [esp + 0x54], 4
// 00602505  f6c302               test bl, 2
// 00602508  7411                 je 0x60251b
// 0060250a  83e3fd               and ebx, 0xfffffffd
// 0060250d  8d4c2414             lea ecx, [esp + 0x14]
// 00602511  895c2408             mov dword ptr [esp + 8], ebx
// 00602515  ff1568248000         call dword ptr [0x802468]
// 0060251b  c744245400000000     mov dword ptr [esp + 0x54], 0
// 00602523  f6c301               test bl, 1
// 00602526  7411                 je 0x602539
// 00602528  83e3fe               and ebx, 0xfffffffe
// 0060252b  8d4c2430             lea ecx, [esp + 0x30]
// 0060252f  895c2408             mov dword ptr [esp + 8], ebx
// 00602533  ff1568248000         call dword ptr [0x802468]
// 00602539  8b4c244c             mov ecx, dword ptr [esp + 0x4c]
// 0060253d  8bc6                 mov eax, esi
// 0060253f  5e                   pop esi
// 00602540  5b                   pop ebx
// 00602541  64890d00000000       mov dword ptr fs:[0], ecx
// 00602548  83c450               add esp, 0x50
// 0060254b  c3                   ret 

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
    unsigned char storage[0x188];
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
