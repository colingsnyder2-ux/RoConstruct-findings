// roc 2009-12 004997b0  unit: Ogre::RbxSceneManagerFactory  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004997b0
//
// 004997b0  56                   push esi
// 004997b1  8bf1                 mov esi, ecx
// 004997b3  68b8cdb700           push 0xb7cdb8
// 004997b8  8d4e04               lea ecx, [esi + 4]
// 004997bb  ff159cb69800         call dword ptr [0x98b69c]
// 004997c1  68c8329b00           push 0x9b32c8
// 004997c6  8d4e20               lea ecx, [esi + 0x20]
// 004997c9  ff1500b79800         call dword ptr [0x98b700]
// 004997cf  b801000000           mov eax, 1
// 004997d4  6689463c             mov word ptr [esi + 0x3c], ax
// 004997d8  c6463e00             mov byte ptr [esi + 0x3e], 0
// 004997dc  5e                   pop esi
// 004997dd  c3                   ret 
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