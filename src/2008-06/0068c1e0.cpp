// from server: 100% by king_originala
// roc 2008-06 0068c1e0  unit: Ogre::RbxSceneManager  size: 72 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068c1e0
//
// 0068c1e0  8a54240c             mov dl, byte ptr [esp + 0xc]
// 0068c1e4  56                   push esi
// 0068c1e5  8bf1                 mov esi, ecx
// 0068c1e7  8b86ec8b0000         mov eax, dword ptr [esi + 0x8bec]
// 0068c1ed  c6400c01             mov byte ptr [eax + 0xc], 1
// 0068c1f1  8b8eec8b0000         mov ecx, dword ptr [esi + 0x8bec]
// 0068c1f7  88510d               mov byte ptr [ecx + 0xd], dl
// 0068c1fa  8b86ec8b0000         mov eax, dword ptr [esi + 0x8bec]
// 0068c200  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0068c204  894810               mov dword ptr [eax + 0x10], ecx
// 0068c207  8b96ec8b0000         mov edx, dword ptr [esi + 0x8bec]
// 0068c20d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0068c211  6a02                 push 2
// 0068c213  52                   push edx
// 0068c214  ff15d4478000         call dword ptr [0x8047d4]
// 0068c21a  8b86ec8b0000         mov eax, dword ptr [esi + 0x8bec]
// 0068c220  c6400c00             mov byte ptr [eax + 0xc], 0
// 0068c224  5e                   pop esi
// 0068c225  c21000               ret 0x10

struct Visitor {
    char padding[12];
    unsigned char active;
    unsigned char flag;
    char padding2[2];
    int value;
};

typedef void (__thiscall *AcceptVisitor)(void*, Visitor*, int);
extern AcceptVisitor acceptVisitor;

struct S {
    char padding[0x8bec];
    Visitor* visitor;

    void f(void* collection, int unused, unsigned char flag, int value);
};

void S::f(void* collection, int unused, unsigned char flag, int value)
{
    visitor->active = 1;
    visitor->flag = flag;
    visitor->value = value;
    acceptVisitor(collection, visitor, 2);
    visitor->active = 0;
}
