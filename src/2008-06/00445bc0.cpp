// from server: 100% by king_originala
// roc 2008-06 00445bc0  unit: RBX::Reflection::M::?$TypedPropertyDescriptor  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445bc0
//
// 00445bc0  56                   push esi
// 00445bc1  57                   push edi
// 00445bc2  8bf9                 mov edi, ecx
// 00445bc4  e807731200           call 0x56ced0
// 00445bc9  6a08                 push 8
// 00445bcb  8907                 mov dword ptr [edi], eax
// 00445bcd  8d7704               lea esi, [edi + 4]
// 00445bd0  e84bad2500           call 0x6a0920
// 00445bd5  83c404               add esp, 4
// 00445bd8  85c0                 test eax, eax
// 00445bda  7411                 je 0x445bed
// 00445bdc  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00445be0  c700c45d8100         mov dword ptr [eax], 0x815dc4
// 00445be6  8b11                 mov edx, dword ptr [ecx]
// 00445be8  895004               mov dword ptr [eax + 4], edx
// 00445beb  eb02                 jmp 0x445bef
// 00445bed  33c0                 xor eax, eax
// 00445bef  8d54240c             lea edx, [esp + 0xc]
// 00445bf3  8bc8                 mov ecx, eax
// 00445bf5  3bd6                 cmp edx, esi
// 00445bf7  7404                 je 0x445bfd
// 00445bf9  8b0e                 mov ecx, dword ptr [esi]
// 00445bfb  8906                 mov dword ptr [esi], eax
// 00445bfd  85c9                 test ecx, ecx
// 00445bff  7408                 je 0x445c09
// 00445c01  8b01                 mov eax, dword ptr [ecx]
// 00445c03  8b10                 mov edx, dword ptr [eax]
// 00445c05  6a01                 push 1
// 00445c07  ffd2                 call edx
// 00445c09  8bc7                 mov eax, edi
// 00445c0b  5f                   pop edi
// 00445c0c  5e                   pop esi
// 00445c0d  c20400               ret 4

struct Type {
    unsigned char data[16];
    Type(const char *, const void *);
    ~Type();
};

const Type &singleton();
void *__cdecl allocate(unsigned int);

struct Object;

struct Table {
    void (__thiscall *destroy)(Object *, unsigned int);
};

extern Table objectTable;

struct Object {
    Table *table;
    int value;
};

struct S {
    const Type *type;
    Object *owned;
    S *assign(int *value);
};

S *S::assign(int *value)
{
    type = &singleton();
    Object **slot = &owned;

    Object *replacement = static_cast<Object *>(allocate(8));
    if (replacement) {
        replacement->table = &objectTable;
        replacement->value = *value;
    } else {
        replacement = 0;
    }

    Object *old = replacement;
    if (static_cast<void *>(&value) != static_cast<void *>(slot)) {
        old = *slot;
        *slot = replacement;
    }

    if (old)
        old->table->destroy(old, 1);

    return this;
}
