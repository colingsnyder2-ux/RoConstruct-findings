// from server: 100% by king_originala
// roc 2008-06 005bf680  unit: RBX::VGameSettings::?$FactoryProduct  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005bf680
//
// 005bf680  6aff                 push -1
// 005bf682  6871407d00           push 0x7d4071
// 005bf687  64a100000000         mov eax, dword ptr fs:[0]
// 005bf68d  50                   push eax
// 005bf68e  64892500000000       mov dword ptr fs:[0], esp
// 005bf695  83ec20               sub esp, 0x20
// 005bf698  53                   push ebx
// 005bf699  56                   push esi
// 005bf69a  8bf1                 mov esi, ecx
// 005bf69c  89742408             mov dword ptr [esp + 8], esi
// 005bf6a0  e8dbfeffff           call 0x5bf580
// 005bf6a5  33db                 xor ebx, ebx
// 005bf6a7  68b4878300           push 0x8387b4
// 005bf6ac  8d4c2410             lea ecx, [esp + 0x10]
// 005bf6b0  895c2434             mov dword ptr [esp + 0x34], ebx
// 005bf6b4  c70674878300         mov dword ptr [esi], 0x838774
// 005bf6ba  c7461068878300       mov dword ptr [esi + 0x10], 0x838768
// 005bf6c1  c7461460878300       mov dword ptr [esi + 0x14], 0x838760
// 005bf6c8  c7462058878300       mov dword ptr [esi + 0x20], 0x838758
// 005bf6cf  c7462448878300       mov dword ptr [esi + 0x24], 0x838748
// 005bf6d6  c7464438878300       mov dword ptr [esi + 0x44], 0x838738
// 005bf6dd  c7466428878300       mov dword ptr [esi + 0x64], 0x838728
// 005bf6e4  c7868400000018878300 mov dword ptr [esi + 0x84], 0x838718
// 005bf6ee  c786a400000008878300 mov dword ptr [esi + 0xa4], 0x838708
// 005bf6f8  c786c4000000f8868300 mov dword ptr [esi + 0xc4], 0x8386f8
// 005bf702  c7863001000032000000 mov dword ptr [esi + 0x130], 0x32
// 005bf70c  c7863401000005000000 mov dword ptr [esi + 0x134], 5
// 005bf716  c6863801000001       mov byte ptr [esi + 0x138], 1
// 005bf71d  889e39010000         mov byte ptr [esi + 0x139], bl
// 005bf723  889e3a010000         mov byte ptr [esi + 0x13a], bl
// 005bf729  ff1558248000         call dword ptr [0x802458]
// 005bf72f  8d44240c             lea eax, [esp + 0xc]
// 005bf733  50                   push eax
// 005bf734  8bce                 mov ecx, esi
// 005bf736  c644243401           mov byte ptr [esp + 0x34], 1
// 005bf73b  e850b8f9ff           call 0x55af90
// 005bf740  8d4c240c             lea ecx, [esp + 0xc]
// 005bf744  885c2430             mov byte ptr [esp + 0x30], bl
// 005bf748  ff1568248000         call dword ptr [0x802468]
// 005bf74e  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 005bf752  8bc6                 mov eax, esi
// 005bf754  5e                   pop esi
// 005bf755  5b                   pop ebx
// 005bf756  64890d00000000       mov dword ptr fs:[0], ecx
// 005bf75d  83c42c               add esp, 0x2c
// 005bf760  c3                   ret 

struct String;
extern String* (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String
{
    char storage[28];
    String(const char*);
    ~String();
};

__forceinline String::String(const char* text)
{
    stringConstruct(this, text);
}

__forceinline String::~String()
{
    stringDestroy(this);
}

struct Base
{
    unsigned long data[76];
    Base();
    ~Base();
    void setValue(const String&);
};

struct S : Base
{
    int first;
    int second;
    bool enabled;
    bool flag1;
    bool flag2;
    S();
};

S::S()
{
    data[0] = 0x838774;
    data[4] = 0x838768;
    data[5] = 0x838760;
    data[8] = 0x838758;
    data[9] = 0x838748;
    data[17] = 0x838738;
    data[25] = 0x838728;
    data[33] = 0x838718;
    data[41] = 0x838708;
    data[49] = 0x8386f8;
    first = 50;
    second = 5;
    enabled = true;
    flag1 = false;
    flag2 = false;
    String text((const char*)0x8387b4);
    setValue(text);
}
