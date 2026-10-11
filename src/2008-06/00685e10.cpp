// from server: 100% by tester
// roc 2008-06 00685e10  unit: Ogre::RbxSubEntity  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00685e10
//
// 00685e10  8b442404             mov eax, dword ptr [esp + 4]
// 00685e14  d900                 fld dword ptr [eax]
// 00685e16  d95920               fstp dword ptr [ecx + 0x20]
// 00685e19  d94004               fld dword ptr [eax + 4]
// 00685e1c  d95924               fstp dword ptr [ecx + 0x24]
// 00685e1f  d94008               fld dword ptr [eax + 8]
// 00685e22  d95928               fstp dword ptr [ecx + 0x28]
// 00685e25  c20400               ret 4

struct S
{
    void f(const float* p);
};

void S::f(const float* p)
{
    *(float*)((char*)this + 0x20) = p[0];
    *(float*)((char*)this + 0x24) = p[1];
    *(float*)((char*)this + 0x28) = p[2];
}
