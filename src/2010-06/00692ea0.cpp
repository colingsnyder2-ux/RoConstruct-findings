// roc 2010-06 00692ea0  unit: RBX::VHint::?$FactoryProduct  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00692ea0
//
// 00692ea0  8b442404             mov eax, dword ptr [esp + 4]
// 00692ea4  d981d8010000         fld dword ptr [ecx + 0x1d8]
// 00692eaa  d918                 fstp dword ptr [eax]
// 00692eac  d981dc010000         fld dword ptr [ecx + 0x1dc]
// 00692eb2  d95804               fstp dword ptr [eax + 4]
// 00692eb5  d981e0010000         fld dword ptr [ecx + 0x1e0]
// 00692ebb  d95808               fstp dword ptr [eax + 8]
// 00692ebe  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUColor3@@XZ)

// roc 2009-12 00574d70  unit: RBX::RbxParticleEmitter
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
    c.x = *(float *)((char *)this + 0x1d8);
    c.y = *(float *)((char *)this + 0x1dc);
    c.z = *(float *)((char *)this + 0x1e0);
    return c;
}