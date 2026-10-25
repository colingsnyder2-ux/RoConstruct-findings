// from server: 100% by king_originala
// roc 2008-06 005b8150  unit: RBX::VTextureId::?$TypedPropertyDescriptor  size: 199 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b8150
//
// 005b8150  64a100000000         mov eax, dword ptr fs:[0]
// 005b8156  6aff                 push -1
// 005b8158  68793a7d00           push 0x7d3a79
// 005b815d  50                   push eax
// 005b815e  64892500000000       mov dword ptr fs:[0], esp
// 005b8165  83ec40               sub esp, 0x40
// 005b8168  56                   push esi
// 005b8169  57                   push edi
// 005b816a  8b7c245c             mov edi, dword ptr [esp + 0x5c]
// 005b816e  8bf1                 mov esi, ecx
// 005b8170  8bcf                 mov ecx, edi
// 005b8172  e89946fcff           call 0x57c810
// 005b8177  84c0                 test al, al
// 005b8179  0f8585000000         jne 0x5b8204
// 005b817f  8d4c2408             lea ecx, [esp + 8]
// 005b8183  ff1560248000         call dword ptr [0x802460]
// 005b8189  c744245000000000     mov dword ptr [esp + 0x50], 0
// 005b8191  e8dac0f9ff           call 0x554270
// 005b8196  89442424             mov dword ptr [esp + 0x24], eax
// 005b819a  8d442408             lea eax, [esp + 8]
// 005b819e  50                   push eax
// 005b819f  8d4f10               lea ecx, [edi + 0x10]
// 005b81a2  c744245401000000     mov dword ptr [esp + 0x54], 1
// 005b81aa  e82142fcff           call 0x57c3d0
// 005b81af  84c0                 test al, al
// 005b81b1  743f                 je 0x5b81f2
// 005b81b3  8d4c2408             lea ecx, [esp + 8]
// 005b81b7  51                   push ecx
// 005b81b8  8d4c242c             lea ecx, [esp + 0x2c]
// 005b81bc  ff155c248000         call dword ptr [0x80245c]
// 005b81c2  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b81c6  89542444             mov dword ptr [esp + 0x44], edx
// 005b81ca  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 005b81cd  8b01                 mov eax, dword ptr [ecx]
// 005b81cf  8b400c               mov eax, dword ptr [eax + 0xc]
// 005b81d2  8d542428             lea edx, [esp + 0x28]
// 005b81d6  52                   push edx
// 005b81d7  8b54245c             mov edx, dword ptr [esp + 0x5c]
// 005b81db  52                   push edx
// 005b81dc  c644245802           mov byte ptr [esp + 0x58], 2
// 005b81e1  ffd0                 call eax
// 005b81e3  8d4c2428             lea ecx, [esp + 0x28]
// 005b81e7  c644245001           mov byte ptr [esp + 0x50], 1
// 005b81ec  ff1568248000         call dword ptr [0x802468]
// 005b81f2  8d4c2408             lea ecx, [esp + 8]
// 005b81f6  c7442450ffffffff     mov dword ptr [esp + 0x50], 0xffffffff
// 005b81fe  ff1568248000         call dword ptr [0x802468]
// 005b8204  8b4c2448             mov ecx, dword ptr [esp + 0x48]
// 005b8208  5f                   pop edi
// 005b8209  5e                   pop esi
// 005b820a  64890d00000000       mov dword ptr fs:[0], ecx
// 005b8211  83c44c               add esp, 0x4c
// 005b8214  c20c00               ret 0xc

struct String;

extern void (__thiscall *stringConstruct)(String *);
extern void (__thiscall *stringCopy)(String *, const String &);
extern void (__thiscall *stringDestroy)(String *);

struct String {
    unsigned char data[28];

    String() { stringConstruct(this); }
    String(const String &other) { stringCopy(this, other); }
    ~String() { stringDestroy(this); }
};

struct Name;
extern const Name &__cdecl getLocalScope();

struct Value {
    String text;
    const Name *scope;

    Value() : scope(&getLocalScope()) {}
};

struct Reader {
    bool read(Value &);
};

struct Input {
    unsigned char padding[16];
    Reader reader;
    bool empty();
};

struct Accessor {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void set(void *, const Value &) = 0;
};

struct S {
    unsigned char padding[24];
    Accessor *accessor;

    void f(void *, Input *, int);
};

void S::f(void *object, Input *input, int)
{
    if (!input->empty()) {
        Value value;
        if (input->reader.read(value)) {
            Value copy(value);
            accessor->set(object, copy);
        }
    }
}
