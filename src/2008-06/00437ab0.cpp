// from server: 100% by king_originala
// roc 2008-06 00437ab0  unit: CPropertyGridItemBrickColor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00437ab0
//
// 00437ab0  8b442404             mov eax, dword ptr [esp + 4]
// 00437ab4  56                   push esi
// 00437ab5  51                   push ecx
// 00437ab6  8bf1                 mov esi, ecx
// 00437ab8  8bcc                 mov ecx, esp
// 00437aba  8964240c             mov dword ptr [esp + 0xc], esp
// 00437abe  50                   push eax
// 00437abf  51                   push ecx
// 00437ac0  89860c010000         mov dword ptr [esi + 0x10c], eax
// 00437ac6  e855ffffff           call 0x437a20
// 00437acb  83c408               add esp, 8
// 00437ace  8bce                 mov ecx, esi
// 00437ad0  e81b9f2d00           call 0x7119f0
// 00437ad5  5e                   pop esi
// 00437ad6  c20400               ret 4

struct Value {
    void* data;
    Value(const Value&);
    ~Value();
};

Value __cdecl convert(int);

struct S {
    char padding[0x10c];
    int color;

    void set(Value);
    void f(int);
};

void S::f(int value)
{
    color = value;
    set(convert(value));
}
