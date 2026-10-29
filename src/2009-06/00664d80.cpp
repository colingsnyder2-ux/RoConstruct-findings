// roc 2009-06 00664d80  unit: RBX::$00W4SurfaceType::?$SurfaceEnumPropDescriptor  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00664d80
//
// 00664d80  56                   push esi
// 00664d81  8bf1                 mov esi, ecx
// 00664d83  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00664d87  e894feffff           call 0x664c20
// 00664d8c  8b4e1c               mov ecx, dword ptr [esi + 0x1c]
// 00664d8f  8d54240c             lea edx, [esp + 0xc]
// 00664d93  8944240c             mov dword ptr [esp + 0xc], eax
// 00664d97  8b01                 mov eax, dword ptr [ecx]
// 00664d99  8b400c               mov eax, dword ptr [eax + 0xc]
// 00664d9c  52                   push edx
// 00664d9d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00664da1  52                   push edx
// 00664da2  ffd0                 call eax
// 00664da4  5e                   pop esi
// 00664da5  c20800               ret 8
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