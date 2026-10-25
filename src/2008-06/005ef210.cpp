// from server: 100% by king_originala
// roc 2008-06 005ef210  unit: RBX::Controller::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef210
//
// 005ef210  8b491c               mov ecx, dword ptr [ecx + 0x1c]
// 005ef213  8b01                 mov eax, dword ptr [ecx]
// 005ef215  8b542404             mov edx, dword ptr [esp + 4]
// 005ef219  8b4008               mov eax, dword ptr [eax + 8]
// 005ef21c  52                   push edx
// 005ef21d  ffd0                 call eax
// 005ef21f  8d4c2404             lea ecx, [esp + 4]
// 005ef223  51                   push ecx
// 005ef224  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef228  89442408             mov dword ptr [esp + 8], eax
// 005ef22c  e84fffffff           call 0x5ef180
// 005ef231  c20800               ret 8

struct Source {
    virtual void slot0();
    virtual void slot1();
    virtual int get(int value);
};

struct Result {
    void set(const int* value);
};

struct S {
    char padding[28];
    Source* source;
    void f(int value, Result* result);
};

void S::f(int value, Result* result)
{
    value = source->get(value);
    result->set(&value);
}
