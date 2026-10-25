// from server: 100% by tester
// roc 2008-06 0048ca70  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 41 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048ca70
//
// 0048ca70  56                   push esi
// 0048ca71  57                   push edi
// 0048ca72  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0048ca75  8b37                 mov esi, dword ptr [edi]
// 0048ca77  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ca7b  8d442410             lea eax, [esp + 0x10]
// 0048ca7f  50                   push eax
// 0048ca80  83c60c               add esi, 0xc
// 0048ca83  e858fbffff           call 0x48c5e0
// 0048ca88  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048ca8c  8b16                 mov edx, dword ptr [esi]
// 0048ca8e  50                   push eax
// 0048ca8f  51                   push ecx
// 0048ca90  8bcf                 mov ecx, edi
// 0048ca92  ffd2                 call edx
// 0048ca94  5f                   pop edi
// 0048ca95  5e                   pop esi
// 0048ca96  c20800               ret 8

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
