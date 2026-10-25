// from server: 100% by king_originala
// roc 2008-06 0068cf00  unit: Ogre::RbxSceneManagerFactory  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0068cf00
//
// 0068cf00  56                   push esi
// 0068cf01  8bf1                 mov esi, ecx
// 0068cf03  683cdc9700           push 0x97dc3c
// 0068cf08  8d4e04               lea ecx, [esi + 4]
// 0068cf0b  ff150c248000         call dword ptr [0x80240c]
// 0068cf11  680cec8400           push 0x84ec0c
// 0068cf16  8d4e20               lea ecx, [esi + 0x20]
// 0068cf19  ff154c248000         call dword ptr [0x80244c]
// 0068cf1f  b801000000           mov eax, 1
// 0068cf24  6689463c             mov word ptr [esi + 0x3c], ax
// 0068cf28  c6463e00             mov byte ptr [esi + 0x3e], 0
// 0068cf2c  5e                   pop esi
// 0068cf2d  c3                   ret 

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
