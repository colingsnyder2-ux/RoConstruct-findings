// from server: 100% by king_originala
// roc 2008-06 00579c10  unit: RBX::VDataModel::?$BoundFuncDesc  size: 415 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00579c10
//
// 00579c10  6aff                 push -1
// 00579c12  68a4097d00           push 0x7d09a4
// 00579c17  64a100000000         mov eax, dword ptr fs:[0]
// 00579c1d  50                   push eax
// 00579c1e  64892500000000       mov dword ptr fs:[0], esp
// 00579c25  81ecf4000000         sub esp, 0xf4
// 00579c2b  56                   push esi
// 00579c2c  57                   push edi
// 00579c2d  8bf9                 mov edi, ecx
// 00579c2f  6a01                 push 1
// 00579c31  6a03                 push 3
// 00579c33  8d4c247c             lea ecx, [esp + 0x7c]
// 00579c37  c784240c01000000000000 mov dword ptr [esp + 0x10c], 0
// 00579c42  ff1528248000         call dword ptr [0x802428]
// 00579c48  c684240401000001     mov byte ptr [esp + 0x104], 1
// 00579c50  e8db7d0100           call 0x591a30
// 00579c55  8bf0                 mov esi, eax
// 00579c57  89742408             mov dword ptr [esp + 8], esi
// 00579c5b  56                   push esi
// 00579c5c  8bcf                 mov ecx, edi
// 00579c5e  c684240801000002     mov byte ptr [esp + 0x108], 2
// 00579c66  e8a5e4fdff           call 0x558110
// 00579c6b  85ff                 test edi, edi
// 00579c6d  7409                 je 0x579c78
// 00579c6f  8bcf                 mov ecx, edi
// 00579c71  e82a52eaff           call 0x41eea0
// 00579c76  eb02                 jmp 0x579c7a
// 00579c78  33c0                 xor eax, eax
// 00579c7a  8d4c247c             lea ecx, [esp + 0x7c]
// 00579c7e  51                   push ecx
// 00579c7f  50                   push eax
// 00579c80  8d4c2414             lea ecx, [esp + 0x14]
// 00579c84  e8c718efff           call 0x46b550
// 00579c89  56                   push esi
// 00579c8a  8d4c2410             lea ecx, [esp + 0x10]
// 00579c8e  c684240801000003     mov byte ptr [esp + 0x108], 3
// 00579c96  e8754b0100           call 0x58e810
// 00579c9b  8d4c247c             lea ecx, [esp + 0x7c]
// 00579c9f  ff15bc238000         call dword ptr [0x8023bc]
// 00579ca5  8d4c2434             lea ecx, [esp + 0x34]
// 00579ca9  c684240401000004     mov byte ptr [esp + 0x104], 4
// 00579cb1  e8ba13efff           call 0x46b070
// 00579cb6  8d4c2410             lea ecx, [esp + 0x10]
// 00579cba  c684240401000002     mov byte ptr [esp + 0x104], 2
// 00579cc2  e809aae9ff           call 0x4146d0
// 00579cc7  c684240401000001     mov byte ptr [esp + 0x104], 1
// 00579ccf  85f6                 test esi, esi
// 00579cd1  7410                 je 0x579ce3
// 00579cd3  8bce                 mov ecx, esi
// 00579cd5  e8969de9ff           call 0x413a70
// 00579cda  56                   push esi
// 00579cdb  e89a691200           call 0x6a067a
// 00579ce0  83c404               add esp, 4
// 00579ce3  8d4c2458             lea ecx, [esp + 0x58]
// 00579ce7  ff1560248000         call dword ptr [0x802460]
// 00579ced  8d94240c010000       lea edx, [esp + 0x10c]
// 00579cf4  52                   push edx
// 00579cf5  8d4c2410             lea ecx, [esp + 0x10]
// 00579cf9  c684240801000005     mov byte ptr [esp + 0x108], 5
// 00579d01  ff155c248000         call dword ptr [0x80245c]
// 00579d07  8d4c2428             lea ecx, [esp + 0x28]
// 00579d0b  c684240401000006     mov byte ptr [esp + 0x104], 6
// 00579d13  ff1560248000         call dword ptr [0x802460]
// 00579d19  8d442458             lea eax, [esp + 0x58]
// 00579d1d  50                   push eax
// 00579d1e  6a01                 push 1
// 00579d20  8d4c247c             lea ecx, [esp + 0x7c]
// 00579d24  51                   push ecx
// 00579d25  8d4c2418             lea ecx, [esp + 0x18]
// 00579d29  c684241001000007     mov byte ptr [esp + 0x110], 7
// 00579d31  e80afdfeff           call 0x569a40
// 00579d36  8d4c2428             lea ecx, [esp + 0x28]
// 00579d3a  c684240401000008     mov byte ptr [esp + 0x104], 8
// 00579d42  ff1568248000         call dword ptr [0x802468]
// 00579d48  8d4c240c             lea ecx, [esp + 0xc]
// 00579d4c  c684240401000005     mov byte ptr [esp + 0x104], 5
// 00579d54  ff1568248000         call dword ptr [0x802468]
// 00579d5a  8d4c2458             lea ecx, [esp + 0x58]
// 00579d5e  c684240401000001     mov byte ptr [esp + 0x104], 1
// 00579d66  ff1568248000         call dword ptr [0x802468]
// 00579d6c  8d4c2474             lea ecx, [esp + 0x74]
// 00579d70  c684240401000000     mov byte ptr [esp + 0x104], 0
// 00579d78  ff152c248000         call dword ptr [0x80242c]
// 00579d7e  8d8c240c010000       lea ecx, [esp + 0x10c]
// 00579d85  c7842404010000ffffffff mov dword ptr [esp + 0x104], 0xffffffff
// 00579d90  ff1568248000         call dword ptr [0x802468]
// 00579d96  8b8c24fc000000       mov ecx, dword ptr [esp + 0xfc]
// 00579d9d  5f                   pop edi
// 00579d9e  5e                   pop esi
// 00579d9f  64890d00000000       mov dword ptr fs:[0], ecx
// 00579da6  81c400010000         add esp, 0x100
// 00579dac  c22000               ret 0x20

struct String;
struct Stream;

extern void (__thiscall *string_default)(String *);
extern void (__thiscall *string_copy)(String *, const String &);
extern void (__thiscall *string_destroy)(String *);
extern void (__thiscall *stream_construct)(Stream *, int, int);
extern void (__thiscall *stream_destroy)(Stream *);
extern void *(__thiscall *stream_flush)(void *);

struct String {
    unsigned char storage[28];
    String();
    String(const String &);
    ~String();
};

inline String::String()
{
    string_default(this);
}

inline String::String(const String &s)
{
    string_copy(this, s);
}

inline String::~String()
{
    string_destroy(this);
}

struct Stream {
    unsigned char storage[136];
    Stream(int);
    ~Stream();
    void flush();
};

inline Stream::Stream(int mode)
{
    stream_construct(this, mode, 1);
}

inline Stream::~Stream()
{
    stream_destroy(this);
}

inline void Stream::flush()
{
    stream_flush(storage + 8);
}

struct Resource {
    void destroy();
};

extern Resource *__cdecl acquire_resource();
extern void __cdecl release_memory(void *);

struct Owner {
    Resource *p;
    Owner();
    ~Owner();
};

inline Owner::Owner() : p(acquire_resource())
{
}

inline Owner::~Owner()
{
    if (p) {
        p->destroy();
        release_memory(p);
    }
}

struct FirstPart {
    unsigned char storage[36];
    ~FirstPart();
};

struct SecondPart {
    unsigned char storage[36];
    ~SecondPart();
};

struct Context {
    unsigned char storage[4];
    FirstPart first;
    SecondPart second;
    Context(void *, void *);
    void use(Resource *);
};

struct Operation {
    String first;
    String second;
    Operation(const String &);
    void finish(Stream *, int, String *);
};

__forceinline Operation::Operation(const String &s) : first(s), second()
{
}

struct S {
    void attach(Resource *);
    void *get_context();
    void f(String, int);
};

void S::f(String text, int)
{
    Stream stream(3);
    {
        Owner resource;
        attach(resource.p);
        {
            Context context(this ? get_context() : 0, stream.storage + 8);
            context.use(resource.p);
            stream.flush();
        }
    }
    String result;
    {
        Operation operation(text);
        operation.finish(&stream, 1, &result);
    }
}
