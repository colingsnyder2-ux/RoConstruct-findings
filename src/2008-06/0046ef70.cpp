// from server: 100% by king_originala
// roc 2008-06 0046ef70  unit: RBX::LDraw2Lua::LDrawCommand  size: 139 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0046ef70
//
// 0046ef70  64a100000000         mov eax, dword ptr fs:[0]
// 0046ef76  6aff                 push -1
// 0046ef78  68793f7c00           push 0x7c3f79
// 0046ef7d  50                   push eax
// 0046ef7e  64892500000000       mov dword ptr fs:[0], esp
// 0046ef85  56                   push esi
// 0046ef86  8d4c2418             lea ecx, [esp + 0x18]
// 0046ef8a  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0046ef92  ff1564248000         call dword ptr [0x802464]
// 0046ef98  8b742414             mov esi, dword ptr [esp + 0x14]
// 0046ef9c  50                   push eax
// 0046ef9d  6854cb8100           push 0x81cb54
// 0046efa2  56                   push esi
// 0046efa3  e8a8b4fdff           call 0x44a450
// 0046efa8  83c408               add esp, 8
// 0046efab  50                   push eax
// 0046efac  e89fb4fdff           call 0x44a450
// 0046efb1  68cccb8100           push 0x81cbcc
// 0046efb6  56                   push esi
// 0046efb7  e894b4fdff           call 0x44a450
// 0046efbc  6840cb8100           push 0x81cb40
// 0046efc1  56                   push esi
// 0046efc2  e889b4fdff           call 0x44a450
// 0046efc7  68cccb8100           push 0x81cbcc
// 0046efcc  56                   push esi
// 0046efcd  e87eb4fdff           call 0x44a450
// 0046efd2  83c420               add esp, 0x20
// 0046efd5  8d4c2418             lea ecx, [esp + 0x18]
// 0046efd9  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 0046efe1  ff1568248000         call dword ptr [0x802468]
// 0046efe7  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046efeb  32c0                 xor al, al
// 0046efed  64890d00000000       mov dword ptr fs:[0], ecx
// 0046eff4  5e                   pop esi
// 0046eff5  83c40c               add esp, 0xc
// 0046eff8  c22000               ret 0x20

struct String;
typedef const char *(__thiscall *StringData)(const String *);
typedef void (__thiscall *StringDestroy)(String *);

extern StringData stringData;
extern StringDestroy stringDestroy;

struct String {
    unsigned char storage[28];
    ~String();
};

inline String::~String()
{
    stringDestroy(this);
}

extern void *__cdecl writeText(void *, const char *);
extern const char text81cb54[];
extern const char text81cbcc[];
extern const char text81cb40[];

bool __stdcall f(void *stream, String text)
{
    writeText(writeText(stream, text81cb54), stringData(&text));
    writeText(stream, text81cbcc);
    writeText(stream, text81cb40);
    writeText(stream, text81cbcc);
    return false;
}
