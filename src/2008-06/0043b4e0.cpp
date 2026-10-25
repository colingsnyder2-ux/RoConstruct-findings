// from server: 100% by king_originala
// roc 2008-06 0043b4e0  unit: MVCXTPPropertyGridItem::?$XItem  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0043b4e0
//
// 0043b4e0  51                   push ecx
// 0043b4e1  53                   push ebx
// 0043b4e2  8d442404             lea eax, [esp + 4]
// 0043b4e6  50                   push eax
// 0043b4e7  e8e4c9ffff           call 0x437ed0
// 0043b4ec  8bc8                 mov ecx, eax
// 0043b4ee  ff15d82f8000         call dword ptr [0x802fd8]
// 0043b4f4  8d4c2404             lea ecx, [esp + 4]
// 0043b4f8  8ad8                 mov bl, al
// 0043b4fa  ff15143f8000         call dword ptr [0x803f14]
// 0043b500  8ac3                 mov al, bl
// 0043b502  5b                   pop ebx
// 0043b503  59                   pop ecx
// 0043b504  c3                   ret 

struct Str_00437ed0 {
    int words[8];
};

extern bool (__thiscall* query)(Str_00437ed0*);
extern void (__thiscall* destroy)(Str_00437ed0*);

struct X_00437ed0 {
    char pad[0xa4];
    Str_00437ed0 value;
    Str_00437ed0* copy(Str_00437ed0* out);
    bool f();
};

bool X_00437ed0::f()
{
    int storage;
    bool result = query(copy(reinterpret_cast<Str_00437ed0*>(&storage)));
    destroy(reinterpret_cast<Str_00437ed0*>(&storage));
    return result;
}
