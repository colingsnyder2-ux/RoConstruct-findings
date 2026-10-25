// from server: 100% by king_originala
// roc 2008-06 005ef3a0  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ef3a0
//
// 005ef3a0  56                   push esi
// 005ef3a1  8bf1                 mov esi, ecx
// 005ef3a3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005ef3a7  e894feffff           call 0x5ef240
// 005ef3ac  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 005ef3af  8d54240c             lea edx, [esp + 0xc]
// 005ef3b3  8944240c             mov dword ptr [esp + 0xc], eax
// 005ef3b7  8b01                 mov eax, dword ptr [ecx]
// 005ef3b9  8b400c               mov eax, dword ptr [eax + 0xc]
// 005ef3bc  52                   push edx
// 005ef3bd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 005ef3c1  52                   push edx
// 005ef3c2  ffd0                 call eax
// 005ef3c4  5e                   pop esi
// 005ef3c5  c20800               ret 8

struct Input {
    int convert();
};

struct Setter {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void set(void* object, const int* value);
};

struct S {
    char padding[28];
    Setter* setter;

    void set(void* object, int value);
};

void S::set(void* object, int value)
{
    value = reinterpret_cast<Input*>(value)->convert();
    setter->set(object, &value);
}
