// from server: 74% by colin
// from server: 72% by king_originala
// roc 2008-06 00438580  unit: RBX::Soundscape::VSoundId::?$XItem  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438580
//
// 00438580  6aff                 push -1
// 00438582  68e2037c00           push 0x7c03e2
// 00438587  64a100000000         mov eax, dword ptr fs:[0]
// 0043858d  50                   push eax
// 0043858e  64892500000000       mov dword ptr fs:[0], esp
// 00438595  51                   push ecx
// 00438596  56                   push esi
// 00438597  8d442404             lea eax, [esp + 4]
// 0043859b  33f6                 xor esi, esi
// 0043859d  50                   push eax
// 0043859e  89742408             mov dword ptr [esp + 8], esi
// 004385a2  e829f9ffff           call 0x437ed0
// 004385a7  8bc8                 mov ecx, eax
// 004385a9  89742410             mov dword ptr [esp + 0x10], esi
// 004385ad  ff15e03e8000         call dword ptr [0x803ee0]
// 004385b3  8b742418             mov esi, dword ptr [esp + 0x18]
// 004385b7  50                   push eax
// 004385b8  8bce                 mov ecx, esi
// 004385ba  ff1558248000         call dword ptr [0x802458]
// 004385c0  c644241001           mov byte ptr [esp + 0x10], 1
// 004385c5  e8a6bc1100           call 0x554270
// 004385ca  8d4c2404             lea ecx, [esp + 4]
// 004385ce  89461c               mov dword ptr [esi + 0x1c], eax
// 004385d1  ff15143f8000         call dword ptr [0x803f14]
// 004385d7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004385db  8bc6                 mov eax, esi
// 004385dd  5e                   pop esi
// 004385de  64890d00000000       mov dword ptr fs:[0], ecx
// 004385e5  83c410               add esp, 0x10
// 004385e8  c20400               ret 4

struct Str_00437ed0 { int words[8]; };

extern const void* __cdecl getLocalScope();

extern const char* (__thiscall* text_access)(Str_00437ed0*);
extern void (__thiscall* temp_destroy)(void*);

struct String {
    char data[28];
    String(const char*);
    ~String();
};

extern void (__thiscall* string_construct)(String*, const char*);

inline String::String(const char* text)
{
    string_construct(this, text);
}

struct Result {
    String text;
    const void* scope;
    Result(const char*);
};

inline Result::Result(const char* textValue)
    : text(textValue), scope(getLocalScope())
{
}

inline void* operator new(unsigned int, void* p)
{
    return p;
}

struct Temporary {
    int value;
    __declspec(dllimport) ~Temporary() throw();
};

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0*);
    Result* func_00438580(Result*);
};

Result* X_00437ed0::func_00438580(Result* out)
{
    Temporary temporary;
    temporary.value = 0;
    Str_00437ed0* value = copy((Str_00437ed0*)&temporary);
    new (out) Result(text_access(value));
    return out;
}
