// from server: 100% by king_originala
// roc 2008-06 0040aa70  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0040aa70
//
// 0040aa70  56                   push esi
// 0040aa71  8bf1                 mov esi, ecx
// 0040aa73  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0040aa77  e864fdffff           call 0x40a7e0
// 0040aa7c  8b4e18               mov ecx, dword ptr [esi + 0x18]
// 0040aa7f  8d54240c             lea edx, [esp + 0xc]
// 0040aa83  8844240c             mov byte ptr [esp + 0xc], al
// 0040aa87  8b01                 mov eax, dword ptr [ecx]
// 0040aa89  8b400c               mov eax, dword ptr [eax + 0xc]
// 0040aa8c  52                   push edx
// 0040aa8d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0040aa91  52                   push edx
// 0040aa92  ffd0                 call eax
// 0040aa94  5e                   pop esi
// 0040aa95  c20800               ret 8

struct Value {
    bool convert();
};

struct Receiver;

struct VTable {
    void* unused[3];
    void (__thiscall* set)(Receiver*, void*, const bool*);
};

struct Receiver {
    VTable* vtable;
};

struct S {
    unsigned char padding[24];
    Receiver* receiver;
    void f(void* object, Value* value);
};

void S::f(void* object, Value* value)
{
    *reinterpret_cast<bool*>(&value) = value->convert();
    receiver->vtable->set(receiver, object, reinterpret_cast<const bool*>(&value));
}
