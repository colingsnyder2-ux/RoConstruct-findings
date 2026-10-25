// from server: 100% by king_originala
// roc 2008-06 0059b900  unit: G3D::VVector3::?$TypedPropertyDescriptor  size: 47 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059b900
//
// 0059b900  83ec0c               sub esp, 0xc
// 0059b903  56                   push esi
// 0059b904  57                   push edi
// 0059b905  8b7918               mov edi, dword ptr [ecx + 0x18]
// 0059b908  8b37                 mov esi, dword ptr [edi]
// 0059b90a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0059b90e  8d442408             lea eax, [esp + 8]
// 0059b912  50                   push eax
// 0059b913  83c60c               add esi, 0xc
// 0059b916  e815feffff           call 0x59b730
// 0059b91b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b91f  8b16                 mov edx, dword ptr [esi]
// 0059b921  50                   push eax
// 0059b922  51                   push ecx
// 0059b923  8bcf                 mov ecx, edi
// 0059b925  ffd2                 call edx
// 0059b927  5f                   pop edi
// 0059b928  5e                   pop esi
// 0059b929  83c40c               add esp, 0xc
// 0059b92c  c20800               ret 8

struct Vector3 {
    float x, y, z;
};

struct Value {
    Vector3 get();
};

struct Setter {
    typedef void (__thiscall *SetFunction)(Setter*, void*, const Vector3&);
    SetFunction* table;
};

struct Descriptor {
    char padding[24];
    Setter* setter;

    void write(void* object, Value* value);
};

void Descriptor::write(void* object, Value* value)
{
    Setter* target = setter;
    Setter::SetFunction& set = target->table[3];
    set(target, object, value->get());
}
