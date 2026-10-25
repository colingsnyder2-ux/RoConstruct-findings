// from server: 100% by king_originala
// roc 2008-06 004aabc0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 317 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004aabc0
//
// 004aabc0  6aff                 push -1
// 004aabc2  68f1807c00           push 0x7c80f1
// 004aabc7  64a100000000         mov eax, dword ptr fs:[0]
// 004aabcd  50                   push eax
// 004aabce  64892500000000       mov dword ptr fs:[0], esp
// 004aabd5  83ec20               sub esp, 0x20
// 004aabd8  53                   push ebx
// 004aabd9  56                   push esi
// 004aabda  8bf1                 mov esi, ecx
// 004aabdc  89742408             mov dword ptr [esp + 8], esi
// 004aabe0  e8bbfcffff           call 0x4aa8a0
// 004aabe5  d9058c438200         fld dword ptr [0x82438c]
// 004aabeb  33db                 xor ebx, ebx
// 004aabed  d99e50010000         fstp dword ptr [esi + 0x150]
// 004aabf3  b801000000           mov eax, 1
// 004aabf8  6884438200           push 0x824384
// 004aabfd  8d4c2410             lea ecx, [esp + 0x10]
// 004aac01  895c2434             mov dword ptr [esp + 0x34], ebx
// 004aac05  c70644438200         mov dword ptr [esi], 0x824344
// 004aac0b  c7461038438200       mov dword ptr [esi + 0x10], 0x824338
// 004aac12  c7461430438200       mov dword ptr [esi + 0x14], 0x824330
// 004aac19  c7462028438200       mov dword ptr [esi + 0x20], 0x824328
// 004aac20  c7462418438200       mov dword ptr [esi + 0x24], 0x824318
// 004aac27  c7464408438200       mov dword ptr [esi + 0x44], 0x824308
// 004aac2e  c74664f8428200       mov dword ptr [esi + 0x64], 0x8242f8
// 004aac35  c78684000000e8428200 mov dword ptr [esi + 0x84], 0x8242e8
// 004aac3f  c786a4000000d8428200 mov dword ptr [esi + 0xa4], 0x8242d8
// 004aac49  c786c4000000c8428200 mov dword ptr [esi + 0xc4], 0x8242c8
// 004aac53  889e30010000         mov byte ptr [esi + 0x130], bl
// 004aac59  889e31010000         mov byte ptr [esi + 0x131], bl
// 004aac5f  889e32010000         mov byte ptr [esi + 0x132], bl
// 004aac65  889e33010000         mov byte ptr [esi + 0x133], bl
// 004aac6b  899e34010000         mov dword ptr [esi + 0x134], ebx
// 004aac71  898638010000         mov dword ptr [esi + 0x138], eax
// 004aac77  c7863c010000b80b0000 mov dword ptr [esi + 0x13c], 0xbb8
// 004aac81  889e40010000         mov byte ptr [esi + 0x140], bl
// 004aac87  889e41010000         mov byte ptr [esi + 0x141], bl
// 004aac8d  889e42010000         mov byte ptr [esi + 0x142], bl
// 004aac93  889e43010000         mov byte ptr [esi + 0x143], bl
// 004aac99  c78644010000b0ffffff mov dword ptr [esi + 0x144], 0xffffffb0
// 004aaca3  c7864801000038ffffff mov dword ptr [esi + 0x148], 0xffffff38
// 004aacad  89864c010000         mov dword ptr [esi + 0x14c], eax
// 004aacb3  899e54010000         mov dword ptr [esi + 0x154], ebx
// 004aacb9  899e58010000         mov dword ptr [esi + 0x158], ebx
// 004aacbf  899e5c010000         mov dword ptr [esi + 0x15c], ebx
// 004aacc5  ff1558248000         call dword ptr [0x802458]
// 004aaccb  8d44240c             lea eax, [esp + 0xc]
// 004aaccf  50                   push eax
// 004aacd0  8bce                 mov ecx, esi
// 004aacd2  c644243401           mov byte ptr [esp + 0x34], 1
// 004aacd7  e8b4020b00           call 0x55af90
// 004aacdc  8d4c240c             lea ecx, [esp + 0xc]
// 004aace0  885c2430             mov byte ptr [esp + 0x30], bl
// 004aace4  ff1568248000         call dword ptr [0x802468]
// 004aacea  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 004aacee  8bc6                 mov eax, esi
// 004aacf0  5e                   pop esi
// 004aacf1  5b                   pop ebx
// 004aacf2  64890d00000000       mov dword ptr fs:[0], ecx
// 004aacf9  83c42c               add esp, 0x2c
// 004aacfc  c3                   ret 

struct Text {
    char storage[28];
    Text(const char *);
    ~Text();
};

typedef void (__thiscall *TextConstructor)(Text *, const char *);
typedef void (__thiscall *TextDestructor)(Text *);

extern TextConstructor textConstructor;
extern TextDestructor textDestructor;

__forceinline Text::Text(const char *s)
{
    textConstructor(this, s);
}

__forceinline Text::~Text()
{
    textDestructor(this);
}

extern const char settingsName[];
extern const float defaultValue;
extern const unsigned long table344[];
extern const unsigned long table338[];
extern const unsigned long table330[];
extern const unsigned long table328[];
extern const unsigned long table318[];
extern const unsigned long table308[];
extern const unsigned long table2F8[];
extern const unsigned long table2E8[];
extern const unsigned long table2D8[];
extern const unsigned long table2C8[];

struct Base {
    unsigned char storage[0x130];
    Base();
    ~Base();
    void setName(const Text &);
};

struct S : Base {
    bool flag130;
    bool flag131;
    bool flag132;
    bool flag133;
    int value134;
    int value138;
    int value13C;
    bool flag140;
    bool flag141;
    bool flag142;
    bool flag143;
    int value144;
    int value148;
    int value14C;
    float value150;
    int value154;
    int value158;
    int value15C;

    S();
};

S::S() : Base(), value150(defaultValue)
{
    *reinterpret_cast<const unsigned long **>(storage) = table344;
    *reinterpret_cast<const unsigned long **>(storage + 0x10) = table338;
    *reinterpret_cast<const unsigned long **>(storage + 0x14) = table330;
    *reinterpret_cast<const unsigned long **>(storage + 0x20) = table328;
    *reinterpret_cast<const unsigned long **>(storage + 0x24) = table318;
    *reinterpret_cast<const unsigned long **>(storage + 0x44) = table308;
    *reinterpret_cast<const unsigned long **>(storage + 0x64) = table2F8;
    *reinterpret_cast<const unsigned long **>(storage + 0x84) = table2E8;
    *reinterpret_cast<const unsigned long **>(storage + 0xA4) = table2D8;
    *reinterpret_cast<const unsigned long **>(storage + 0xC4) = table2C8;

    flag130 = false;
    flag131 = false;
    flag132 = false;
    flag133 = false;
    value134 = 0;
    value138 = 1;
    value13C = 3000;
    flag140 = false;
    flag141 = false;
    flag142 = false;
    flag143 = false;
    value144 = -80;
    value148 = -200;
    value14C = 1;
    value154 = 0;
    value158 = 0;
    value15C = 0;

    Text name(settingsName);
    setName(name);
}
