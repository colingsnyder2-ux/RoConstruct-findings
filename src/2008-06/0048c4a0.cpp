// from server: 100% by king_originala
// roc 2008-06 0048c4a0  unit: RBX::VBrickColor::?$TypedPropertyDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c4a0
//
// 0048c4a0  8b542404             mov edx, dword ptr [esp + 4]
// 0048c4a4  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0048c4a7  8b01                 mov eax, dword ptr [ecx]
// 0048c4a9  8b4008               mov eax, dword ptr [eax + 8]
// 0048c4ac  52                   push edx
// 0048c4ad  8d542408             lea edx, [esp + 8]
// 0048c4b1  52                   push edx
// 0048c4b2  ffd0                 call eax
// 0048c4b4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0048c4b8  50                   push eax
// 0048c4b9  e8e2f7ffff           call 0x48bca0
// 0048c4be  c20800               ret 8

struct Holder;
typedef void (__thiscall *Destroy)(Holder*, unsigned int);

struct Holder {
    Destroy* table;
    unsigned int value;
};

struct Color {
    unsigned int value;
};

struct S {
    void* type;
    Holder* holder;

    void assign(const Color* value);
};

struct Accessor;
typedef Color* (__thiscall *Getter)(Accessor*, void**, void*);

struct Accessor {
    Getter* table;
};

struct Descriptor {
    unsigned char reserved[24];
    Accessor* accessor;

    void f(void* instance, S* output);
};

void Descriptor::f(void* instance, S* output)
{
    output->assign(accessor->table[2](accessor, &instance, instance));
}
