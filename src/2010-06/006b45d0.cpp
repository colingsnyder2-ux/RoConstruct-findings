// roc 2010-06 006b45d0  unit: RBX::VObjectValue::?$EventDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b45d0
//
// 006b45d0  8b442404             mov eax, dword ptr [esp + 4]
// 006b45d4  d98178010000         fld dword ptr [ecx + 0x178]
// 006b45da  d918                 fstp dword ptr [eax]
// 006b45dc  d9817c010000         fld dword ptr [ecx + 0x17c]
// 006b45e2  d95804               fstp dword ptr [eax + 4]
// 006b45e5  d98180010000         fld dword ptr [ecx + 0x180]
// 006b45eb  d95808               fstp dword ptr [eax + 8]
// 006b45ee  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUColor3@@XZ)

// roc 2009-12 007353f0
// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD

struct Color3
{
    float x, y, z;
};

struct S
{
    Color3 get();
};

Color3 S::get()
{
    Color3 c;
    c.x = *(float *)((char *)this + 0x178);
    c.y = *(float *)((char *)this + 0x17c);
    c.z = *(float *)((char *)this + 0x180);
    return c;
}