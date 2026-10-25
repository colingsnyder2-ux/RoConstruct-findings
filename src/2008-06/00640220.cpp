// from server: 100% by king_originala
// roc 2008-06 00640220  unit: RBX::GameTool  size: 90 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00640220
//
// 00640220  6aff                 push -1
// 00640222  68f8a97d00           push 0x7da9f8
// 00640227  64a100000000         mov eax, dword ptr fs:[0]
// 0064022d  50                   push eax
// 0064022e  64892500000000       mov dword ptr fs:[0], esp
// 00640235  51                   push ecx
// 00640236  56                   push esi
// 00640237  8bf1                 mov esi, ecx
// 00640239  89742404             mov dword ptr [esp + 4], esi
// 0064023d  c70644a58400         mov dword ptr [esi], 0x84a544
// 00640243  c746042ca58400       mov dword ptr [esi + 4], 0x84a52c
// 0064024a  8d4e1c               lea ecx, [esi + 0x1c]
// 0064024d  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00640255  ff1568248000         call dword ptr [0x802468]
// 0064025b  8bce                 mov ecx, esi
// 0064025d  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 00640265  e81655fdff           call 0x615780
// 0064026a  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0064026e  5e                   pop esi
// 0064026f  64890d00000000       mov dword ptr fs:[0], ecx
// 00640276  83c410               add esp, 0x10
// 00640279  c3                   ret 

struct String;
extern void (__thiscall *destroyString)(String*);

struct String {
    char storage[28];
    ~String() { destroyString(this); }
};

struct Primary {
    virtual ~Primary();
};

struct Secondary {
    virtual ~Secondary();
};

struct Base : Primary, Secondary {
    char padding[20];
    virtual ~Base();
};

struct GameTool : Base {
    String cursor;
    virtual ~GameTool();
};

GameTool::~GameTool()
{
}
