// from server: 100% by king_originala
// roc 2008-06 0060be60  unit: RBX::VVelocityMotor::?$FactoryProduct  size: 254 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060be60
//
// 0060be60  6aff                 push -1
// 0060be62  682f8b7d00           push 0x7d8b2f
// 0060be67  64a100000000         mov eax, dword ptr fs:[0]
// 0060be6d  50                   push eax
// 0060be6e  64892500000000       mov dword ptr fs:[0], esp
// 0060be75  83ec20               sub esp, 0x20
// 0060be78  53                   push ebx
// 0060be79  56                   push esi
// 0060be7a  8bf1                 mov esi, ecx
// 0060be7c  89742408             mov dword ptr [esp + 8], esi
// 0060be80  e85bfeffff           call 0x60bce0
// 0060be85  33c0                 xor eax, eax
// 0060be87  83c9ff               or ecx, 0xffffffff
// 0060be8a  89442430             mov dword ptr [esp + 0x30], eax
// 0060be8e  898e34010000         mov dword ptr [esi + 0x134], ecx
// 0060be94  898e38010000         mov dword ptr [esi + 0x138], ecx
// 0060be9a  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0060bea0  bb01000000           mov ebx, 1
// 0060bea5  6898058300           push 0x830598
// 0060beaa  8d4c2410             lea ecx, [esp + 0x10]
// 0060beae  885c2434             mov byte ptr [esp + 0x34], bl
// 0060beb2  c706742c8400         mov dword ptr [esi], 0x842c74
// 0060beb8  c74610682c8400       mov dword ptr [esi + 0x10], 0x842c68
// 0060bebf  c74614602c8400       mov dword ptr [esi + 0x14], 0x842c60
// 0060bec6  c74620582c8400       mov dword ptr [esi + 0x20], 0x842c58
// 0060becd  c74624482c8400       mov dword ptr [esi + 0x24], 0x842c48
// 0060bed4  c74644382c8400       mov dword ptr [esi + 0x44], 0x842c38
// 0060bedb  c74664282c8400       mov dword ptr [esi + 0x64], 0x842c28
// 0060bee2  c78684000000182c8400 mov dword ptr [esi + 0x84], 0x842c18
// 0060beec  c786a4000000082c8400 mov dword ptr [esi + 0xa4], 0x842c08
// 0060bef6  c786c4000000f82b8400 mov dword ptr [esi + 0xc4], 0x842bf8
// 0060bf00  c78630010000e02b8400 mov dword ptr [esi + 0x130], 0x842be0
// 0060bf0a  898640010000         mov dword ptr [esi + 0x140], eax
// 0060bf10  899e44010000         mov dword ptr [esi + 0x144], ebx
// 0060bf16  899e48010000         mov dword ptr [esi + 0x148], ebx
// 0060bf1c  c7864c01000002000000 mov dword ptr [esi + 0x14c], 2
// 0060bf26  ff1558248000         call dword ptr [0x802458]
// 0060bf2c  8d44240c             lea eax, [esp + 0xc]
// 0060bf30  50                   push eax
// 0060bf31  8bce                 mov ecx, esi
// 0060bf33  c644243402           mov byte ptr [esp + 0x34], 2
// 0060bf38  e853f0f4ff           call 0x55af90
// 0060bf3d  8d4c240c             lea ecx, [esp + 0xc]
// 0060bf41  885c2430             mov byte ptr [esp + 0x30], bl
// 0060bf45  ff1568248000         call dword ptr [0x802468]
// 0060bf4b  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0060bf4f  8bc6                 mov eax, esi
// 0060bf51  5e                   pop esi
// 0060bf52  5b                   pop ebx
// 0060bf53  64890d00000000       mov dword ptr fs:[0], ecx
// 0060bf5a  83c42c               add esp, 0x2c
// 0060bf5d  c3                   ret 

struct Text;
extern void (__thiscall *text_construct)(Text *, const char *);
extern void (__thiscall *text_destroy)(Text *);

extern const unsigned long table000[];
extern const unsigned long table010[];
extern const unsigned long table014[];
extern const unsigned long table020[];
extern const unsigned long table024[];
extern const unsigned long table044[];
extern const unsigned long table064[];
extern const unsigned long table084[];
extern const unsigned long table0a4[];
extern const unsigned long table0c4[];
extern const unsigned long table130[];

struct Text {
    char storage[28];
    Text(const char *);
    ~Text();
};

__forceinline Text::Text(const char *s)
{
    text_construct(this, s);
}

__forceinline Text::~Text()
{
    text_destroy(this);
}

struct Base {
    unsigned char storage[0x134];
    Base();
    ~Base();
    void setName(const Text &);
};

struct State {
    int first;
    int second;
    int third;
    State();
    ~State();
};

__forceinline State::State()
{
    first = -1;
    second = -1;
    third = 0;
}

struct S : Base {
    State state;
    int value;
    int enabled;
    int active;
    int mode;
    S();
};

S::S() : Base(), state()
{
    *(const unsigned long **)(storage + 0x000) = table000;
    *(const unsigned long **)(storage + 0x010) = table010;
    *(const unsigned long **)(storage + 0x014) = table014;
    *(const unsigned long **)(storage + 0x020) = table020;
    *(const unsigned long **)(storage + 0x024) = table024;
    *(const unsigned long **)(storage + 0x044) = table044;
    *(const unsigned long **)(storage + 0x064) = table064;
    *(const unsigned long **)(storage + 0x084) = table084;
    *(const unsigned long **)(storage + 0x0a4) = table0a4;
    *(const unsigned long **)(storage + 0x0c4) = table0c4;
    *(const unsigned long **)(storage + 0x130) = table130;
    value = 0;
    enabled = 1;
    active = 1;
    mode = 2;
    setName(Text("Feature"));
}
