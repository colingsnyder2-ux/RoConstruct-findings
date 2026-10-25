// from server: 100% by king_originala
// roc 2008-06 00563970  unit: RBX::ContentProvider  size: 126 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00563970
//
// 00563970  6aff                 push -1
// 00563972  687bf27c00           push 0x7cf27b
// 00563977  64a100000000         mov eax, dword ptr fs:[0]
// 0056397d  50                   push eax
// 0056397e  64892500000000       mov dword ptr fs:[0], esp
// 00563985  81ec88000000         sub esp, 0x88
// 0056398b  56                   push esi
// 0056398c  8d4c2408             lea ecx, [esp + 8]
// 00563990  c744240400000000     mov dword ptr [esp + 4], 0
// 00563998  e843e1f9ff           call 0x501ae0
// 0056399d  8bb4249c000000       mov esi, dword ptr [esp + 0x9c]
// 005639a4  83c068               add eax, 0x68
// 005639a7  50                   push eax
// 005639a8  8bce                 mov ecx, esi
// 005639aa  c784249800000001000000 mov dword ptr [esp + 0x98], 1
// 005639b5  ff155c248000         call dword ptr [0x80245c]
// 005639bb  8d4c2408             lea ecx, [esp + 8]
// 005639bf  c744240401000000     mov dword ptr [esp + 4], 1
// 005639c7  c684249400000000     mov byte ptr [esp + 0x94], 0
// 005639cf  e8ecf7ffff           call 0x5631c0
// 005639d4  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 005639db  8bc6                 mov eax, esi
// 005639dd  5e                   pop esi
// 005639de  64890d00000000       mov dword ptr fs:[0], ecx
// 005639e5  81c494000000         add esp, 0x94
// 005639eb  c20400               ret 4

struct String;
typedef void (__thiscall *StringCopy)(String*, const String&);
extern StringCopy copyString;

struct String {
    char storage[28];
    String(const String& other) { copyString(this, other); }
    ~String();
};

struct Temporary {
    char storage[104];
    String value;
    Temporary();
    ~Temporary();
};

String __stdcall f()
{
    return Temporary().value;
}
