// from server: 100% by king_originala
// roc 2008-06 0056e820  unit: RBX::Reflection::H::?$TypedPropertyDescriptor  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056e820
//
// 0056e820  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 0056e823  8b01                 mov eax, dword ptr [ecx]
// 0056e825  8b542404             mov edx, dword ptr [esp + 4]
// 0056e829  8b4008               mov eax, dword ptr [eax + 8]
// 0056e82c  56                   push esi
// 0056e82d  57                   push edi
// 0056e82e  52                   push edx
// 0056e82f  ffd0                 call eax
// 0056e831  8b742410             mov esi, dword ptr [esp + 0x10]
// 0056e835  83c610               add esi, 0x10
// 0056e838  8bce                 mov ecx, esi
// 0056e83a  8bf8                 mov edi, eax
// 0056e83c  e88fda0000           call 0x57c2d0
// 0056e841  897e08               mov dword ptr [esi + 8], edi
// 0056e844  5f                   pop edi
// 0056e845  c7460405000000       mov dword ptr [esi + 4], 5
// 0056e84c  5e                   pop esi
// 0056e84d  c20800               ret 8

struct Accessor {
    virtual void slot0();
    virtual void slot1();
    virtual int get(void* object);
};

struct Value {
    unsigned char padding[4];
    int tag;
    int value;
    void clear();
};

struct Output {
    unsigned char padding[16];
    Value data;
};

struct S {
    unsigned char padding[24];
    Accessor* accessor;
    void f(void* object, Output* output);
};

void S::f(void* object, Output* output)
{
    int value = accessor->get(object);
    Value* data = &output->data;
    data->clear();
    data->value = value;
    data->tag = 5;
}
