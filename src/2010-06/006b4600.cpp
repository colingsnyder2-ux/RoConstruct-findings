// roc 2010-06 006b4600  unit: RBX::VObjectValue::?$EventDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006b4600
//
// 006b4600  8b442404             mov eax, dword ptr [esp + 4]
// 006b4604  d98174010000         fld dword ptr [ecx + 0x174]
// 006b460a  d918                 fstp dword ptr [eax]
// 006b460c  d98178010000         fld dword ptr [ecx + 0x178]
// 006b4612  d95804               fstp dword ptr [eax + 4]
// 006b4615  d9817c010000         fld dword ptr [ecx + 0x17c]
// 006b461b  d95808               fstp dword ptr [eax + 8]
// 006b461e  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUColor3@@XZ)

// roc 2009-12 00735420
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
    c.x = *(float *)((char *)this + 0x174);
    c.y = *(float *)((char *)this + 0x178);
    c.z = *(float *)((char *)this + 0x17c);
    return c;
}