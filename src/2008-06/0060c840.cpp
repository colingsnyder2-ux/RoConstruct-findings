// from server: 100% by king_originala
// roc 2008-06 0060c840  unit: RBX::VHole::?$FactoryProduct  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060c840
//
// 0060c840  6aff                 push -1
// 0060c842  68918b7d00           push 0x7d8b91
// 0060c847  64a100000000         mov eax, dword ptr fs:[0]
// 0060c84d  50                   push eax
// 0060c84e  64892500000000       mov dword ptr fs:[0], esp
// 0060c855  83ec20               sub esp, 0x20
// 0060c858  56                   push esi
// 0060c859  8bf1                 mov esi, ecx
// 0060c85b  89742404             mov dword ptr [esp + 4], esi
// 0060c85f  e8dcfeffff           call 0x60c740
// 0060c864  68b0358400           push 0x8435b0
// 0060c869  8d4c240c             lea ecx, [esp + 0xc]
// 0060c86d  c744243000000000     mov dword ptr [esp + 0x30], 0
// 0060c875  c7066c358400         mov dword ptr [esi], 0x84356c
// 0060c87b  c746105c358400       mov dword ptr [esi + 0x10], 0x84355c
// 0060c882  c7461454358400       mov dword ptr [esi + 0x14], 0x843554
// 0060c889  c746204c358400       mov dword ptr [esi + 0x20], 0x84354c
// 0060c890  c746243c358400       mov dword ptr [esi + 0x24], 0x84353c
// 0060c897  c746442c358400       mov dword ptr [esi + 0x44], 0x84352c
// 0060c89e  c746641c358400       mov dword ptr [esi + 0x64], 0x84351c
// 0060c8a5  c786840000000c358400 mov dword ptr [esi + 0x84], 0x84350c
// 0060c8af  c786a4000000fc348400 mov dword ptr [esi + 0xa4], 0x8434fc
// 0060c8b9  c786c4000000ec348400 mov dword ptr [esi + 0xc4], 0x8434ec
// 0060c8c3  c78630010000d4348400 mov dword ptr [esi + 0x130], 0x8434d4
// 0060c8cd  ff1558248000         call dword ptr [0x802458]
// 0060c8d3  8d442408             lea eax, [esp + 8]
// 0060c8d7  50                   push eax
// 0060c8d8  8bce                 mov ecx, esi
// 0060c8da  c644243001           mov byte ptr [esp + 0x30], 1
// 0060c8df  e8ace6f4ff           call 0x55af90
// 0060c8e4  8d4c2408             lea ecx, [esp + 8]
// 0060c8e8  c644242c00           mov byte ptr [esp + 0x2c], 0
// 0060c8ed  ff1568248000         call dword ptr [0x802468]
// 0060c8f3  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0060c8f7  8bc6                 mov eax, esi
// 0060c8f9  5e                   pop esi
// 0060c8fa  64890d00000000       mov dword ptr fs:[0], ecx
// 0060c901  83c42c               add esp, 0x2c
// 0060c904  c3                   ret 

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char* text) { stringConstruct(this, text); }
    ~String() { stringDestroy(this); }
};

struct Base {
    char storage[0x134];
    Base();
    ~Base();
    void setValue(const String&);
};

struct S : Base {
    S();
};

S::S()
{
    *reinterpret_cast<unsigned long*>(storage + 0x000) = 0x84356c;
    *reinterpret_cast<unsigned long*>(storage + 0x010) = 0x84355c;
    *reinterpret_cast<unsigned long*>(storage + 0x014) = 0x843554;
    *reinterpret_cast<unsigned long*>(storage + 0x020) = 0x84354c;
    *reinterpret_cast<unsigned long*>(storage + 0x024) = 0x84353c;
    *reinterpret_cast<unsigned long*>(storage + 0x044) = 0x84352c;
    *reinterpret_cast<unsigned long*>(storage + 0x064) = 0x84351c;
    *reinterpret_cast<unsigned long*>(storage + 0x084) = 0x84350c;
    *reinterpret_cast<unsigned long*>(storage + 0x0a4) = 0x8434fc;
    *reinterpret_cast<unsigned long*>(storage + 0x0c4) = 0x8434ec;
    *reinterpret_cast<unsigned long*>(storage + 0x130) = 0x8434d4;
    setValue(String("Hole"));
}
