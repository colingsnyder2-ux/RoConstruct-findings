// from server: 100% by tester
// roc 2008-06 0068c4f0  unit: Ogre::RbxSceneManager  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c4f0
//
// 0068c4f0  56                   push esi
// 0068c4f1  8b742408             mov esi, dword ptr [esp + 8]
// 0068c4f5  89b1bc000000         mov dword ptr [ecx + 0xbc], esi
// 0068c4fb  8b4934               mov ecx, dword ptr [ecx + 0x34]
// 0068c4fe  8b01                 mov eax, dword ptr [ecx]
// 0068c500  8b90cc000000         mov edx, dword ptr [eax + 0xcc]
// 0068c506  56                   push esi
// 0068c507  ffd2                 call edx
// 0068c509  ff15604e8000         call dword ptr [0x804e60]
// 0068c50f  8b10                 mov edx, dword ptr [eax]
// 0068c511  83c670               add esi, 0x70
// 0068c514  8bc8                 mov ecx, eax
// 0068c516  8b82a0000000         mov eax, dword ptr [edx + 0xa0]
// 0068c51c  56                   push esi
// 0068c51d  ffd0                 call eax
// 0068c51f  5e                   pop esi
// 0068c520  c20400               ret 4

#define PADV(n) virtual void p##n() {}
struct Viewport { char pad[0x70]; char bg[4]; };
struct Target { virtual void f() = 0; };
struct Sys {
    virtual void v0();
};
// vtable slots are addressed by byte offset; model with function-pointer tables
struct VT1 { void* s[0x33]; void (__thiscall *setViewport)(void*, Viewport*); };
struct VT2 { void* s[0x28]; void (__thiscall *setBg)(void*, const char*); };
struct Obj1 { VT1* vt; };
struct Obj2 { VT2* vt; };
__declspec(dllimport) Obj2* __stdcall getSingleton();
struct SM {
    char pad[0x34];
    Obj1* rs;
    char pad2[0xbc - 0x38];
    Viewport* vp;
    void setViewport(Viewport* v);
};
void SM::setViewport(Viewport* v) {
    vp = v;
    rs->vt->setViewport(rs, v);
    Obj2* o = getSingleton();
    o->vt->setBg(o, v->bg);
}
