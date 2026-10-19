// from server: 74% by colin
// from server: 66% by king_originala
// roc 2008-06 005ade40  unit: RBX::VScriptContext::?$BoundFuncDesc  size: 309 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ade40
//
// 005ade40  6aff                 push -1
// 005ade42  6802337d00           push 0x7d3302
// 005ade47  64a100000000         mov eax, dword ptr fs:[0]
// 005ade4d  50                   push eax
// 005ade4e  64892500000000       mov dword ptr fs:[0], esp
// 005ade55  83ec40               sub esp, 0x40
// 005ade58  56                   push esi
// 005ade59  57                   push edi
// 005ade5a  68e8468300           push 0x8346e8
// 005ade5f  6a01                 push 1
// 005ade61  e8fa58eeff           call 0x493760
// 005ade66  8bc8                 mov ecx, eax
// 005ade68  e8a3b9edff           call 0x489810
// 005ade6d  8b742458             mov esi, dword ptr [esp + 0x58]
// 005ade71  6aff                 push -1
// 005ade73  56                   push esi
// 005ade74  e837e90600           call 0x61c7b0
// 005ade79  83c408               add esp, 8
// 005ade7c  50                   push eax
// 005ade7d  8d4c242c             lea ecx, [esp + 0x2c]
// 005ade81  ff1558248000         call dword ptr [0x802458]
// 005ade87  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005ade8f  e8dc63faff           call 0x554270
// 005ade94  89442444             mov dword ptr [esp + 0x44], eax
// 005ade98  83ec20               sub esp, 0x20
// 005ade9b  8bfc                 mov edi, esp
// 005ade9d  8d442448             lea eax, [esp + 0x48]
// 005adea1  89642428             mov dword ptr [esp + 0x28], esp
// 005adea5  50                   push eax
// 005adea6  8bcf                 mov ecx, edi
// 005adea8  c744247401000000     mov dword ptr [esp + 0x74], 1
// 005adeb0  ff155c248000         call dword ptr [0x80245c]
// 005adeb6  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 005adeba  894f1c               mov dword ptr [edi + 0x1c], ecx
// 005adebd  6a43                 push 0x43
// 005adebf  56                   push esi
// 005adec0  c644247802           mov byte ptr [esp + 0x78], 2
// 005adec5  e846450600           call 0x612410
// 005adeca  68eed8ffff           push 0xffffd8ee
// 005adecf  56                   push esi
// 005aded0  e88b450600           call 0x612460
// 005aded5  6aff                 push -1
// 005aded7  56                   push esi
// 005aded8  e843420600           call 0x612120
// 005adedd  6afe                 push -2
// 005adedf  56                   push esi
// 005adee0  8bf8                 mov edi, eax
// 005adee2  e8393d0600           call 0x611c20
// 005adee7  83c420               add esp, 0x20
// 005adeea  8d54242c             lea edx, [esp + 0x2c]
// 005adeee  52                   push edx
// 005adeef  57                   push edi
// 005adef0  e81b73ebff           call 0x465210
// 005adef5  83c404               add esp, 4
// 005adef8  8bc8                 mov ecx, eax
// 005adefa  c644247401           mov byte ptr [esp + 0x74], 1
// 005adeff  e82c3ffbff           call 0x561e30
// 005adf04  837c242410           cmp dword ptr [esp + 0x24], 0x10
// 005adf09  8b442410             mov eax, dword ptr [esp + 0x10]
// 005adf0d  c644245003           mov byte ptr [esp + 0x50], 3
// 005adf12  7304                 jae 0x5adf18
// 005adf14  8d442410             lea eax, [esp + 0x10]
// 005adf18  50                   push eax
// 005adf19  56                   push esi
// 005adf1a  e851330600           call 0x611270
// 005adf1f  83c408               add esp, 8
// 005adf22  85c0                 test eax, eax
// 005adf24  7505                 jne 0x5adf2b
// 005adf26  8d7001               lea esi, [eax + 1]
// 005adf29  eb16                 jmp 0x5adf41
// 005adf2b  56                   push esi
// 005adf2c  e8af420600           call 0x6121e0
// 005adf31  6afe                 push -2
// 005adf33  56                   push esi
// 005adf34  e8873d0600           call 0x611cc0
// 005adf39  83c40c               add esp, 0xc
// 005adf3c  be02000000           mov esi, 2
// 005adf41  8d4c240c             lea ecx, [esp + 0xc]
// 005adf45  c644245001           mov byte ptr [esp + 0x50], 1
// 005adf4a  ff1568248000         call dword ptr [0x802468]
// 005adf50  8d4c2428             lea ecx, [esp + 0x28]
// 005adf54  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005adf5c  ff1568248000         call dword ptr [0x802468]
// 005adf62  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005adf66  5f                   pop edi
// 005adf67  8bc6                 mov eax, esi
// 005adf69  64890d00000000       mov dword ptr fs:[0], ecx
// 005adf70  5e                   pop esi
// 005adf71  83c44c               add esp, 0x4c
// 005adf74  c3                   ret 

struct String;

extern void (__thiscall *string_construct)(String *, const char *);
extern void (__thiscall *string_copy)(String *, const String &);
extern void (__thiscall *string_destroy)(String *);

struct String
{
    unsigned char allocator[4];
    union
    {
        char buffer[16];
        char *pointer;
    };
    unsigned int length;
    unsigned int capacity;

    String(const char *);
    String(const String &);
    ~String();
    const char *c_str() const;
};

__forceinline String::String(const char *s)
{
    string_construct(this, s);
}

__forceinline String::String(const String &s)
{
    string_copy(this, s);
}

__forceinline String::~String()
{
    string_destroy(this);
}

__forceinline const char *String::c_str() const
{
    const char *s = pointer;
    if (capacity < 16)
        s = buffer;
    return s;
}

struct Name;
extern const Name &__cdecl sub_554270();

struct __declspec(dllimport) Guid
{
    String text;
    const Name *scope;

    Guid(const char *);
};

__forceinline Guid::Guid(const char *s)
    : text(s), scope(&sub_554270())
{
}

struct Bridge
{
    void sub_489810();
};

extern Bridge *__stdcall sub_493760(int, const char *);

namespace RBX
{
    class Instance;

    class ServiceProvider
    {
    public:
        String sub_561e30(Guid);
    };
}

extern RBX::ServiceProvider *__cdecl func_00465210(RBX::Instance *);
extern const char *__cdecl sub_61c7b0(void *, int);
extern void __cdecl sub_612410(void *, int);
extern void __cdecl sub_612460(void *, int);
extern RBX::Instance *__cdecl sub_612120(void *, int);
extern void __cdecl sub_611c20(void *, int);
extern int __cdecl sub_611270(void *, const char *);
extern void __cdecl sub_6121e0(void *);
extern void __cdecl sub_611cc0(void *, int);

int __cdecl sub_5ade40(void *state)
{
    sub_493760(1, "loadfile")->sub_489810();

    Guid id(sub_61c7b0(state, -1));
    RBX::Instance *instance;

    String source = func_00465210(
        (sub_612410(state, 67),
         sub_612460(state, -10002),
         instance = sub_612120(state, -1),
         sub_611c20(state, -2),
         instance))->sub_561e30(id);

    int result;
    if (sub_611270(state, source.c_str()) != 0)
    {
        result = 1;
    }
    else
    {
        sub_6121e0(state);
        sub_611cc0(state, -2);
        result = 2;
    }
    return result;
}
