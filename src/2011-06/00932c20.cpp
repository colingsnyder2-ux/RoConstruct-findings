// roc 2011-06 00932c20  unit: Ogre::RbxSceneManagerFactory  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00932c20
//
// 00932c20  56                   push esi
// 00932c21  8bf1                 mov esi, ecx
// 00932c23  68a0f6d100           push 0xd1f6a0
// 00932c28  8d4e04               lea ecx, [esi + 4]
// 00932c2b  ff15a804a400         call dword ptr [0xa404a8]
// 00932c31  68a85aaf00           push 0xaf5aa8
// 00932c36  8d4e20               lea ecx, [esi + 0x20]
// 00932c39  ff15b404a400         call dword ptr [0xa404b4]
// 00932c3f  b801000000           mov eax, 1
// 00932c44  6689463c             mov word ptr [esi + 0x3c], ax
// 00932c48  c6463e00             mov byte ptr [esi + 0x3e], 0
// 00932c4c  5e                   pop esi
// 00932c4d  c3                   ret 
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