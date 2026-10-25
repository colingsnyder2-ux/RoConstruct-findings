// from server: 100% by tester
// roc 2008-06 0064ea20  unit: RBX::ChatWidget  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0064ea20
//
// 0064ea20  6aff                 push -1
// 0064ea22  6888827d00           push 0x7d8288
// 0064ea27  64a100000000         mov eax, dword ptr fs:[0]
// 0064ea2d  50                   push eax
// 0064ea2e  64892500000000       mov dword ptr fs:[0], esp
// 0064ea35  51                   push ecx
// 0064ea36  56                   push esi
// 0064ea37  8bf1                 mov esi, ecx
// 0064ea39  89742404             mov dword ptr [esp + 4], esi
// 0064ea3d  8d8e48010000         lea ecx, [esi + 0x148]
// 0064ea43  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0064ea4b  ff1568248000         call dword ptr [0x802468]
// 0064ea51  8bce                 mov ecx, esi
// 0064ea53  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0064ea5b  e8e02adcff           call 0x411540
// 0064ea60  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064ea64  5e                   pop esi
// 0064ea65  64890d00000000       mov dword ptr fs:[0], ecx
// 0064ea6c  83c410               add esp, 0x10
// 0064ea6f  c3                   ret 

struct String;
extern void (__thiscall *string_destroy)(String *);

struct String
{
    char storage[28];
    ~String();
};

inline String::~String()
{
    string_destroy(this);
}

struct Base
{
    char storage[0x148];
    ~Base();
};

struct S : Base
{
    String value;
    ~S();
};

S::~S()
{
}
