// from server: 100% by colin
// roc 2008-06 00438450  unit: std::D::DU?$char_traits::V?$basic_string::?$XItem  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00438450
//
// 00438450  6aff                 push -1
// 00438452  68c9107c00           push 0x7c10c9
// 00438457  64a100000000         mov eax, dword ptr fs:[0]
// 0043845d  50                   push eax
// 0043845e  64892500000000       mov dword ptr fs:[0], esp
// 00438465  51                   push ecx
// 00438466  56                   push esi
// 00438467  8d442404             lea eax, [esp + 4]
// 0043846b  33f6                 xor esi, esi
// 0043846d  50                   push eax
// 0043846e  89742408             mov dword ptr [esp + 8], esi
// 00438472  e859faffff           call 0x437ed0
// 00438477  8bc8                 mov ecx, eax
// 00438479  89742410             mov dword ptr [esp + 0x10], esi
// 0043847d  ff15e03e8000         call dword ptr [0x803ee0]
// 00438483  8b742418             mov esi, dword ptr [esp + 0x18]
// 00438487  50                   push eax
// 00438488  8bce                 mov ecx, esi
// 0043848a  ff1558248000         call dword ptr [0x802458]
// 00438490  8d4c2404             lea ecx, [esp + 4]
// 00438494  ff15143f8000         call dword ptr [0x803f14]
// 0043849a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0043849e  8bc6                 mov eax, esi
// 004384a0  5e                   pop esi
// 004384a1  64890d00000000       mov dword ptr fs:[0], ecx
// 004384a8  83c410               add esp, 0x10
// 004384ab  c20400               ret 4

struct Str {
    int words[8];
};

struct X {
    char pad[0xa4];
    Str value;
    Str* copy(Str* out);
    Str* convert(Str* out);
};

extern const char* (__thiscall* text_data)(Str*);
extern void (__thiscall* text_destroy)(void*);
extern void (__thiscall* string_construct)(Str*, const char*);

struct Temporary {
    int value;
    Temporary(X* owner, Str*& text);
    __declspec(dllimport) ~Temporary() throw();
};

inline Temporary::Temporary(X* owner, Str*& text)
{
    value = 0;
    text = owner->copy(reinterpret_cast<Str*>(this));
}


Str* X::convert(Str* out)
{
    Str* text;
    Temporary temporary(this, text);
    string_construct(out, text_data(text));
    return out;
}
