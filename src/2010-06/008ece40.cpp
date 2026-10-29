// roc 2010-06 008ece40  unit: Ogre::RbxSceneManagerFactory  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 008ece40
//
// 008ece40  56                   push esi
// 008ece41  8bf1                 mov esi, ecx
// 008ece43  68e8cac200           push 0xc2cae8
// 008ece48  8d4e04               lea ecx, [esi + 4]
// 008ece4b  ff1568a49e00         call dword ptr [0x9ea468]
// 008ece51  68d89aa800           push 0xa89ad8
// 008ece56  8d4e20               lea ecx, [esi + 0x20]
// 008ece59  ff151ca49e00         call dword ptr [0x9ea41c]
// 008ece5f  b801000000           mov eax, 1
// 008ece64  6689463c             mov word ptr [esi + 0x3c], ax
// 008ece68  c6463e00             mov byte ptr [esi + 0x3e], 0
// 008ece6c  5e                   pop esi
// 008ece6d  c3                   ret 
// copied from an identical function in another client (function ?initialize@S@@QAEXXZ)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct String {
    char data[28];
};

typedef String& (__thiscall *CopyString)(String*, const String&);
typedef String& (__thiscall *AssignText)(String*, const char*);

extern CopyString copyString;
extern AssignText assignText;
extern const String managerName;
extern const char managerDescription[];

struct S {
    unsigned int reserved;
    String name;
    String description;
    unsigned short flags;
    unsigned char extra;

    void initialize();
};

void S::initialize()
{
    copyString(&name, managerName);
    assignText(&description, managerDescription);
    flags = 1;
    extra = 0;
}