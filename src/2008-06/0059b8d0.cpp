// from server: 100% by king_originala
// roc 2008-06 0059b8d0  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b8d0
//
// 0059b8d0  83ec0c               sub esp, 0xc
// 0059b8d3  56                   push esi
// 0059b8d4  57                   push edi
// 0059b8d5  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0059b8d8  8b37                 mov esi, dword ptr [edi]
// 0059b8da  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059b8de  8d442408             lea eax, [esp + 8]
// 0059b8e2  50                   push eax
// 0059b8e3  83c60c               add esi, 0xc
// 0059b8e6  e865fdffff           call 0x59b650
// 0059b8eb  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b8ef  8b16                 mov edx, dword ptr [esi]
// 0059b8f1  50                   push eax
// 0059b8f2  51                   push ecx
// 0059b8f3  8bcf                 mov ecx, edi
// 0059b8f5  ffd2                 call edx
// 0059b8f7  5f                   pop edi
// 0059b8f8  5e                   pop esi
// 0059b8f9  83c40c               add esp, 0xc
// 0059b8fc  c20800               ret 8

struct Color {
    float r, g, b;
};

struct Value {
    const Color* get(Color* temporary);
};

struct Accessor;

typedef void (__thiscall *Setter)(Accessor*, void*, const Color*);

struct AccessorTable {
    void* reserved[3];
    Setter set;
};

struct Accessor {
    AccessorTable* table;
};

struct S {
    unsigned char reserved[24];
    Accessor* accessor;
    void set(void* object, Value* value);
};

void S::set(void* object, Value* value)
{
    Color temporary;
    Accessor* target = accessor;
    Setter* slot = &target->table->set;
    const Color* color = value->get(&temporary);
    (*slot)(target, object, color);
}
