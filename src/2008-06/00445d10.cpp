// from server: 100% by king_originala
// roc 2008-06 00445d10  unit: G3D::VVector2int16::?$TypedPropertyDescriptor  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00445d10
//
// 00445d10  8b542404             mov edx, dword ptr [esp + 4]
// 00445d14  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 00445d17  8b01                 mov eax, dword ptr [ecx]
// 00445d19  8b4008               mov eax, dword ptr [eax + 8]
// 00445d1c  52                   push edx
// 00445d1d  8d542408             lea edx, [esp + 8]
// 00445d21  52                   push edx
// 00445d22  ffd0                 call eax
// 00445d24  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00445d28  50                   push eax
// 00445d29  e892feffff           call 0x445bc0
// 00445d2e  c20800               ret 8

struct Getter;
typedef void* (__thiscall *GetValue)(Getter*, void**, void*);

struct Getter {
    GetValue* table;
};

struct Output {
    void assign(void* value);
};

struct S {
    unsigned char padding[24];
    Getter* getter;
    void get(void* object, Output* output);
};

void S::get(void* object, Output* output)
{
    void* value = getter->table[2](getter, &object, object);
    output->assign(value);
}
