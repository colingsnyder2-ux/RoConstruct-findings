// roc 2009-06 00664db0  unit: RBX::LegacyController::$00W4InputType::?$SurfaceEnumPropDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00664db0
//
// 00664db0  56                   push esi
// 00664db1  8bf1                 mov esi, ecx
// 00664db3  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664db7  e814ffffff           call 0x664cd0
// 00664dbc  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00664dbf  8d54240c             lea edx, [esp + 0xc]
// 00664dc3  8944240c             mov dword ptr [esp + 0xc], eax
// 00664dc7  8b01                 mov eax, dword ptr [ecx]
// 00664dc9  8b400c               mov eax, dword ptr [eax + 0xc]
// 00664dcc  52                   push edx
// 00664dcd  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00664dd1  52                   push edx
// 00664dd2  ffd0                 call eax
// 00664dd4  5e                   pop esi
// 00664dd5  c20800               ret 8
// copied from an identical function in another client (function ?set@S@@QAEXPAXH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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