// from server: 100% by king_originala
// roc 2008-06 006297e0  unit: RBX::VClickDetector::?$FactoryProduct  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006297e0
//
// 006297e0  6aff                 push -1
// 006297e2  68ff977d00           push 0x7d97ff
// 006297e7  64a100000000         mov eax, dword ptr fs:[0]
// 006297ed  50                   push eax
// 006297ee  64892500000000       mov dword ptr fs:[0], esp
// 006297f5  83ec20               sub esp, 0x20
// 006297f8  56                   push esi
// 006297f9  8bf1                 mov esi, ecx
// 006297fb  89742404             mov dword ptr [esp + 4], esi
// 006297ff  e8dcfeffff           call 0x6296e0
// 00629804  33c0                 xor eax, eax
// 00629806  83c9ff               or ecx, 0xffffffff
// 00629809  8944242c             mov dword ptr [esp + 0x2c], eax
// 0062980d  898e34010000         mov dword ptr [esi + 0x134], ecx
// 00629813  898e38010000         mov dword ptr [esi + 0x138], ecx
// 00629819  89863c010000         mov dword ptr [esi + 0x13c], eax
// 0062981f  d905ac3e8300         fld dword ptr [0x833eac]
// 00629825  683c5b8400           push 0x845b3c
// 0062982a  d99e44010000         fstp dword ptr [esi + 0x144]
// 00629830  8d4c240c             lea ecx, [esp + 0xc]
// 00629834  c644243001           mov byte ptr [esp + 0x30], 1
// 00629839  c706fc5a8400         mov dword ptr [esi], 0x845afc
// 0062983f  c74610f05a8400       mov dword ptr [esi + 0x10], 0x845af0
// 00629846  c74614e85a8400       mov dword ptr [esi + 0x14], 0x845ae8
// 0062984d  c74620e05a8400       mov dword ptr [esi + 0x20], 0x845ae0
// 00629854  c74624d05a8400       mov dword ptr [esi + 0x24], 0x845ad0
// 0062985b  c74644c05a8400       mov dword ptr [esi + 0x44], 0x845ac0
// 00629862  c74664b05a8400       mov dword ptr [esi + 0x64], 0x845ab0
// 00629869  c78684000000a05a8400 mov dword ptr [esi + 0x84], 0x845aa0
// 00629873  c786a4000000905a8400 mov dword ptr [esi + 0xa4], 0x845a90
// 0062987d  c786c4000000805a8400 mov dword ptr [esi + 0xc4], 0x845a80
// 00629887  c78630010000685a8400 mov dword ptr [esi + 0x130], 0x845a68
// 00629891  898640010000         mov dword ptr [esi + 0x140], eax
// 00629897  ff1558248000         call dword ptr [0x802458]
// 0062989d  8d442408             lea eax, [esp + 8]
// 006298a1  50                   push eax
// 006298a2  8bce                 mov ecx, esi
// 006298a4  c644243002           mov byte ptr [esp + 0x30], 2
// 006298a9  e8e216f3ff           call 0x55af90
// 006298ae  8d4c2408             lea ecx, [esp + 8]
// 006298b2  c644242c01           mov byte ptr [esp + 0x2c], 1
// 006298b7  ff1568248000         call dword ptr [0x802468]
// 006298bd  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 006298c1  8bc6                 mov eax, esi
// 006298c3  5e                   pop esi
// 006298c4  64890d00000000       mov dword ptr fs:[0], ecx
// 006298cb  83c42c               add esp, 0x2c
// 006298ce  c3                   ret 

struct String;

typedef void (__thiscall *StringConstructor)(String *, const char *);
typedef void (__thiscall *StringDestructor)(String *);

extern StringConstructor stringConstructor;
extern StringDestructor stringDestructor;

struct String
{
    unsigned char storage[28];

    String(const char *text)
    {
        stringConstructor(this, text);
    }

    ~String()
    {
        stringDestructor(this);
    }
};

struct Base
{
    unsigned char storage[0x130];

    Base();
    ~Base();
    void setName(const String &);
};

struct Trackable
{
    unsigned long table;
    int first;
    int second;
    unsigned long third;

    Trackable() : first(-1), second(-1), third(0) {}
    ~Trackable();
};

extern unsigned long table0[];
extern unsigned long table10[];
extern unsigned long table14[];
extern unsigned long table20[];
extern unsigned long table24[];
extern unsigned long table44[];
extern unsigned long table64[];
extern unsigned long table84[];
extern unsigned long tableA4[];
extern unsigned long tableC4[];
extern unsigned long table130[];
extern const char detectorName[];

struct Detector : Base, Trackable
{
    unsigned long value;
    float distance;

    Detector();
};

Detector::Detector() : distance(32.0f)
{
    *reinterpret_cast<unsigned long **>(storage) = table0;
    *reinterpret_cast<unsigned long **>(storage + 0x10) = table10;
    *reinterpret_cast<unsigned long **>(storage + 0x14) = table14;
    *reinterpret_cast<unsigned long **>(storage + 0x20) = table20;
    *reinterpret_cast<unsigned long **>(storage + 0x24) = table24;
    *reinterpret_cast<unsigned long **>(storage + 0x44) = table44;
    *reinterpret_cast<unsigned long **>(storage + 0x64) = table64;
    *reinterpret_cast<unsigned long **>(storage + 0x84) = table84;
    *reinterpret_cast<unsigned long **>(storage + 0xA4) = tableA4;
    *reinterpret_cast<unsigned long **>(storage + 0xC4) = tableC4;
    table = reinterpret_cast<unsigned long>(table130);
    value = 0;
    String name(detectorName);
    setName(name);
}
