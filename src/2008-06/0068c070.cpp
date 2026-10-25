// from server: 100% by king_originala
// roc 2008-06 0068c070  unit: Ogre::RbxSceneManager  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c070
//
// 0068c070  8b81ec8b0000         mov eax, dword ptr [ecx + 0x8bec]
// 0068c076  8a54240c             mov dl, byte ptr [esp + 0xc]
// 0068c07a  88500d               mov byte ptr [eax + 0xd], dl
// 0068c07d  8b81ec8b0000         mov eax, dword ptr [ecx + 0x8bec]
// 0068c083  8b542410             mov edx, dword ptr [esp + 0x10]
// 0068c087  895010               mov dword ptr [eax + 0x10], edx
// 0068c08a  8b81ec8b0000         mov eax, dword ptr [ecx + 0x8bec]
// 0068c090  8b542408             mov edx, dword ptr [esp + 8]
// 0068c094  c6400c00             mov byte ptr [eax + 0xc], 0
// 0068c098  8b81ec8b0000         mov eax, dword ptr [ecx + 0x8bec]
// 0068c09e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0068c0a2  52                   push edx
// 0068c0a3  50                   push eax
// 0068c0a4  ff15d4478000         call dword ptr [0x8047d4]
// 0068c0aa  c21000               ret 0x10

struct Visitor {
    char pad0[12];
    bool flag0;
    bool flag1;
    char pad1[2];
    int value;
};

typedef void (__thiscall *AcceptVisitor)(void *, Visitor *, int);
extern AcceptVisitor acceptVisitor;

struct S {
    char pad0[35820];
    Visitor *visitor;
    void f(void *collection, int mode, bool flag, int value);
};

void S::f(void *collection, int mode, bool flag, int value)
{
    visitor->flag1 = flag;
    visitor->value = value;
    visitor->flag0 = false;
    acceptVisitor(collection, visitor, mode);
}
