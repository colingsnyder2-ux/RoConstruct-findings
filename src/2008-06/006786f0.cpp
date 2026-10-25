// from server: 100% by king_originala
// roc 2008-06 006786f0  unit: Ogre::RbxSceneManagerFactory  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006786f0
//
// 006786f0  8b0d48db9700         mov ecx, dword ptr [0x97db48]
// 006786f6  85c9                 test ecx, ecx
// 006786f8  741d                 je 0x678717
// 006786fa  56                   push esi
// 006786fb  8bf1                 mov esi, ecx
// 006786fd  ff154c438000         call dword ptr [0x80434c]
// 00678703  56                   push esi
// 00678704  e8717f0200           call 0x6a067a
// 00678709  83c404               add esp, 4
// 0067870c  c70548db970000000000 mov dword ptr [0x97db48], 0
// 00678716  5e                   pop esi
// 00678717  c3                   ret 

struct Root;
extern Root* root;
extern void (__thiscall *destroyRoot)(Root*);
void __cdecl operator delete(void*);

struct Root
{
    ~Root();
};

__forceinline Root::~Root()
{
    destroyRoot(this);
}

void cleanupRoot()
{
    if (root)
    {
        delete root;
        root = 0;
    }
}
