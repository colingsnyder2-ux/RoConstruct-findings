// from server: 100% by king_originala
// roc 2008-06 0059b5d0  unit: G3D::VColor3::?$TypedPropertyDescriptor  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b5d0
//
// 0059b5d0  8b542404             mov edx, dword ptr [esp + 4]
// 0059b5d4  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0059b5d7  8b01                 mov eax, dword ptr [ecx]
// 0059b5d9  8b4008               mov eax, dword ptr [eax + 8]
// 0059b5dc  83ec0c               sub esp, 0xc
// 0059b5df  56                   push esi
// 0059b5e0  52                   push edx
// 0059b5e1  8d542408             lea edx, [esp + 8]
// 0059b5e5  52                   push edx
// 0059b5e6  ffd0                 call eax
// 0059b5e8  8bf0                 mov esi, eax
// 0059b5ea  e85119fdff           call 0x56cf40
// 0059b5ef  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b5f3  8901                 mov dword ptr [ecx], eax
// 0059b5f5  56                   push esi
// 0059b5f6  83c104               add ecx, 4
// 0059b5f9  e8621cfdff           call 0x56d260
// 0059b5fe  5e                   pop esi
// 0059b5ff  83c40c               add esp, 0xc
// 0059b602  c20800               ret 8

struct Color {
    float r, g, b;
};

struct Accessor;

struct AccessorTable {
    void* reserved[2];
    Color* (__thiscall *get)(Accessor*, Color*, void*);
};

struct Accessor {
    AccessorTable* table;
};

struct Holder {
    void* value;
    void assign(const Color* color);
};

struct Result {
    void* type;
    Holder holder;
};

extern void* __cdecl getColorType();

struct S {
    unsigned char reserved[24];
    Accessor* accessor;
    void get(void* object, Result* result);
};

void S::get(void* object, Result* result)
{
    Color temporary;
    const Color* color = accessor->table->get(accessor, &temporary, object);
    result->type = getColorType();
    result->holder.assign(color);
}
