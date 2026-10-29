// roc 2010-06 006f7010  unit: CXTPToolBar::CControlButtonExpand  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 006f7010
//
// 006f7010  8b442404             mov eax, dword ptr [esp + 4]
// 006f7014  d98188010000         fld dword ptr [ecx + 0x188]
// 006f701a  d918                 fstp dword ptr [eax]
// 006f701c  d9818c010000         fld dword ptr [ecx + 0x18c]
// 006f7022  d95804               fstp dword ptr [eax + 4]
// 006f7025  d98190010000         fld dword ptr [ecx + 0x190]
// 006f702b  d95808               fstp dword ptr [eax + 8]
// 006f702e  c20400               ret 4
// copied from an identical function in another client (function ?get@S@@QAE?AUColor3@@XZ)

// roc 2009-12 0076cf20
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
    c.x = *(float *)((char *)this + 0x188);
    c.y = *(float *)((char *)this + 0x18c);
    c.z = *(float *)((char *)this + 0x190);
    return c;
}