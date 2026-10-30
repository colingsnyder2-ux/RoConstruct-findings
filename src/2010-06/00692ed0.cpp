// roc 2010-06 00692ed0  unit: RBX::VHint::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692ed0
//
// 00692ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00692ed4  d981e4010000         fld dword ptr [ecx + 0x1e4]
// 00692eda  d918                 fstp dword ptr [eax]
// 00692edc  d981e8010000         fld dword ptr [ecx + 0x1e8]
// 00692ee2  d95804               fstp dword ptr [eax + 4]
// 00692ee5  d981ec010000         fld dword ptr [ecx + 0x1ec]
// 00692eeb  d95808               fstp dword ptr [eax + 8]
// 00692eee  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUColor3@@XZ)

// roc 2009-12 00574da0  unit: RBX::RbxParticleEmitter
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
    c.x = *(float *)((char *)this + 0x1e4);
    c.y = *(float *)((char *)this + 0x1e8);
    c.z = *(float *)((char *)this + 0x1ec);
    return c;
}