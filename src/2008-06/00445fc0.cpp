// from server: 100% by king_originala
// roc 2008-06 00445fc0  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445fc0
//
// 00445fc0  56                   push esi
// 00445fc1  57                   push edi
// 00445fc2  8b7918               mov edi, dword ptr [ecx + 0x18]
// 00445fc5  8b37                 mov esi, dword ptr [edi]
// 00445fc7  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00445fcb  8d442410             lea eax, [esp + 0x10]
// 00445fcf  50                   push eax
// 00445fd0  83c60c               add esi, 0xc
// 00445fd3  e878feffff           call 0x445e50
// 00445fd8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445fdc  8b16                 mov edx, dword ptr [esi]
// 00445fde  50                   push eax
// 00445fdf  51                   push ecx
// 00445fe0  8bcf                 mov ecx, edi
// 00445fe2  ffd2                 call edx
// 00445fe4  5f                   pop edi
// 00445fe5  5e                   pop esi
// 00445fe6  c20800               ret 8

struct Value {
    void* convert(Value** value);
};

struct Target;
typedef void (__thiscall *Setter)(Target*, void*, void*);

struct Target {
    Setter* table;
};

struct S {
    char padding[24];
    Target* target;
    void set(void* object, Value* value);
};

void S::set(void* object, Value* value)
{
    Target* destination = target;
    Setter* slot = destination->table + 3;
    void* converted = value->convert(&value);
    (*slot)(destination, object, converted);
}
