// from server: 100% by king_originala
// roc 2008-06 004161b0  unit: CopyVerb  size: 161 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004161b0
//
// 004161b0  6aff                 push -1
// 004161b2  6888617c00           push 0x7c6188
// 004161b7  64a100000000         mov eax, dword ptr fs:[0]
// 004161bd  50                   push eax
// 004161be  64892500000000       mov dword ptr fs:[0], esp
// 004161c5  83ec10               sub esp, 0x10
// 004161c8  56                   push esi
// 004161c9  8b742428             mov esi, dword ptr [esp + 0x28]
// 004161cd  57                   push edi
// 004161ce  33ff                 xor edi, edi
// 004161d0  897c2408             mov dword ptr [esp + 8], edi
// 004161d4  3bf7                 cmp esi, edi
// 004161d6  742e                 je 0x416206
// 004161d8  8b0e                 mov ecx, dword ptr [esi]
// 004161da  3bcf                 cmp ecx, edi
// 004161dc  7409                 je 0x4161e7
// 004161de  8b01                 mov eax, dword ptr [ecx]
// 004161e0  8b5004               mov edx, dword ptr [eax + 4]
// 004161e3  ffd2                 call edx
// 004161e5  eb05                 jmp 0x4161ec
// 004161e7  b814969200           mov eax, 0x929614
// 004161ec  6844bf9200           push 0x92bf44
// 004161f1  8bc8                 mov ecx, eax
// 004161f3  ff1578288000         call dword ptr [0x802878]
// 004161f9  84c0                 test al, al
// 004161fb  7409                 je 0x416206
// 004161fd  8b36                 mov esi, dword ptr [esi]
// 004161ff  83c604               add esi, 4
// 00416202  3bf7                 cmp esi, edi
// 00416204  7525                 jne 0x41622b
// 00416206  6834ba8000           push 0x80ba34
// 0041620b  8d4c2410             lea ecx, [esp + 0x10]
// 0041620f  ff1564288000         call dword ptr [0x802864]
// 00416215  c744240c2cba8000     mov dword ptr [esp + 0xc], 0x80ba2c
// 0041621d  8d44240c             lea eax, [esp + 0xc]
// 00416221  50                   push eax
// 00416222  897c2424             mov dword ptr [esp + 0x24], edi
// 00416226  e8c541ffff           call 0x40a3f0
// 0041622b  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0041622f  56                   push esi
// 00416230  8bcf                 mov ecx, edi
// 00416232  ff155c248000         call dword ptr [0x80245c]
// 00416238  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 0041623b  894f1c               mov dword ptr [edi + 0x1c], ecx
// 0041623e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00416242  8bc7                 mov eax, edi
// 00416244  5f                   pop edi
// 00416245  5e                   pop esi
// 00416246  64890d00000000       mov dword ptr fs:[0], ecx
// 0041624d  83c41c               add esp, 0x1c
// 00416250  c3                   ret 

struct TypeInfo {};
extern TypeInfo placeholderType;
extern TypeInfo contentIdType;
extern bool (__thiscall *sameType)(const TypeInfo *, const TypeInfo *);

struct Placeholder {
    virtual void destroy() = 0;
    virtual const TypeInfo &type() const = 0;
};

struct Any {
    Placeholder *value;
};

struct String {
    unsigned char storage[28];
    String(const String &);
    ~String();
};

extern void (__thiscall *copyString)(String *, const String *);

String::String(const String &other)
{
    copyString(this, &other);
}

struct ContentId {
    String text;
    unsigned int value;
    ContentId(const ContentId &);
};

ContentId::ContentId(const ContentId &other)
    : text(other.text), value(other.value)
{
}

struct BadCast {
    const void *vtable;
    unsigned int data[2];
    BadCast();
    ~BadCast();
};

extern const unsigned int badAnyCastVtable[];
extern void (__thiscall *constructBadCast)(BadCast *, const char *);
extern __declspec(noreturn) void __cdecl raiseBadCast(const BadCast &);

BadCast::BadCast()
{
    constructBadCast(this, "bad cast");
    vtable = badAnyCastVtable;
}

static __forceinline const ContentId *contentPointer(const Any *source)
{
    if (source) {
        const TypeInfo &type = source->value
            ? source->value->type()
            : placeholderType;
        if (sameType(&type, &contentIdType))
            return reinterpret_cast<const ContentId *>(
                reinterpret_cast<const char *>(source->value) + 4);
    }
    return 0;
}

ContentId __cdecl extractContentId(const Any *source)
{
    const ContentId *content = contentPointer(source);
    if (!content) {
        BadCast error;
        raiseBadCast(error);
    }
    return ContentId(*content);
}
