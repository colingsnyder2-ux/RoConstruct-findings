// roc 2009-06 004736a0  unit: Ogre::RbxSceneManagerFactory  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004736a0
//
// 004736a0  56                   push esi
// 004736a1  8bf1                 mov esi, ecx
// 004736a3  6840c5a300           push 0xa3c540
// 004736a8  8d4e04               lea ecx, [esi + 4]
// 004736ab  ff1564e48900         call dword ptr [0x89e464]
// 004736b1  68d0db8b00           push 0x8bdbd0
// 004736b6  8d4e20               lea ecx, [esi + 0x20]
// 004736b9  ff15a8e48900         call dword ptr [0x89e4a8]
// 004736bf  b801000000           mov eax, 1
// 004736c4  6689463c             mov word ptr [esi + 0x3c], ax
// 004736c8  c6463e00             mov byte ptr [esi + 0x3e], 0
// 004736cc  5e                   pop esi
// 004736cd  c3                   ret 
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