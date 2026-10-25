// from server: 100% by tester
// roc 2011-06 00948090  unit: Ogre::RbxEntity  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00948090
//
// 00948090  8b442404             mov eax, dword ptr [esp + 4]
// 00948094  d900                 fld dword ptr [eax]
// 00948096  d95920               fstp dword ptr [ecx + 0x20]
// 00948099  d94004               fld dword ptr [eax + 4]
// 0094809c  d95924               fstp dword ptr [ecx + 0x24]
// 0094809f  d94008               fld dword ptr [eax + 8]
// 009480a2  d95928               fstp dword ptr [ecx + 0x28]
// 009480a5  c20400               ret 4

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
