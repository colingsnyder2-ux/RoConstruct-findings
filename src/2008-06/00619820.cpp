// from server: 90% by colin
// from server: 87% by king_originala
// roc 2008-06 00619820  unit: RBX::VFlag::?$FactoryProduct  size: 335 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00619820
//
// 00619820  6aff                 push -1
// 00619822  68fd917d00           push 0x7d91fd
// 00619827  64a100000000         mov eax, dword ptr fs:[0]
// 0061982d  50                   push eax
// 0061982e  64892500000000       mov dword ptr fs:[0], esp
// 00619835  83ec20               sub esp, 0x20
// 00619838  53                   push ebx
// 00619839  56                   push esi
// 0061983a  33db                 xor ebx, ebx
// 0061983c  8bf1                 mov esi, ecx
// 0061983e  89742408             mov dword ptr [esp + 8], esi
// 00619842  395c2438             cmp dword ptr [esp + 0x38], ebx
// 00619846  740a                 je 0x619852
// 00619848  c786c0010000d0408400 mov dword ptr [esi + 0x1c0], 0x8440d0
// 00619852  53                   push ebx
// 00619853  e858feffff           call 0x6196b0
// 00619858  8b86c0010000         mov eax, dword ptr [esi + 0x1c0]
// 0061985e  c706b43e8400         mov dword ptr [esi], 0x843eb4
// 00619864  c74610a43e8400       mov dword ptr [esi + 0x10], 0x843ea4
// 0061986b  c746149c3e8400       mov dword ptr [esi + 0x14], 0x843e9c
// 00619872  c74620943e8400       mov dword ptr [esi + 0x20], 0x843e94
// 00619879  c74624843e8400       mov dword ptr [esi + 0x24], 0x843e84
// 00619880  c74644743e8400       mov dword ptr [esi + 0x44], 0x843e74
// 00619887  c74664643e8400       mov dword ptr [esi + 0x64], 0x843e64
// 0061988e  c78684000000543e8400 mov dword ptr [esi + 0x84], 0x843e54
// 00619898  c786a4000000443e8400 mov dword ptr [esi + 0xa4], 0x843e44
// 006198a2  c786c4000000343e8400 mov dword ptr [esi + 0xc4], 0x843e34
// 006198ac  c786300100002c3e8400 mov dword ptr [esi + 0x130], 0x843e2c
// 006198b6  c786a0010000243e8400 mov dword ptr [esi + 0x1a0], 0x843e24
// 006198c0  c786b00100000c3e8400 mov dword ptr [esi + 0x1b0], 0x843e0c
// 006198ca  8b4804               mov ecx, dword ptr [eax + 4]
// 006198cd  c78431c0010000043e8400 mov dword ptr [ecx + esi + 0x1c0], 0x843e04
// 006198d8  8b96c0010000         mov edx, dword ptr [esi + 0x1c0]
// 006198de  8b4204               mov eax, dword ptr [edx + 4]
// 006198e1  8d882cffffff         lea ecx, [eax - 0xd4]
// 006198e7  898c30bc010000       mov dword ptr [eax + esi + 0x1bc], ecx
// 006198ee  899e68020000         mov dword ptr [esi + 0x268], ebx
// 006198f4  895c2430             mov dword ptr [esp + 0x30], ebx
// 006198f8  899e6c020000         mov dword ptr [esi + 0x26c], ebx
// 006198fe  899e78020000         mov dword ptr [esi + 0x278], ebx
// 00619904  899e7c020000         mov dword ptr [esi + 0x27c], ebx
// 0061990a  889e80020000         mov byte ptr [esi + 0x280], bl
// 00619910  889e84020000         mov byte ptr [esi + 0x284], bl
// 00619916  899e88020000         mov dword ptr [esi + 0x288], ebx
// 0061991c  68903c8400           push 0x843c90
// 00619921  8d4c2410             lea ecx, [esp + 0x10]
// 00619925  c644243402           mov byte ptr [esp + 0x34], 2
// 0061992a  c7868c020000c2000000 mov dword ptr [esi + 0x28c], 0xc2
// 00619934  ff1558248000         call dword ptr [0x802458]
// 0061993a  8d54240c             lea edx, [esp + 0xc]
// 0061993e  52                   push edx
// 0061993f  8bce                 mov ecx, esi
// 00619941  c644243403           mov byte ptr [esp + 0x34], 3
// 00619946  e84516f4ff           call 0x55af90
// 0061994b  8d4c240c             lea ecx, [esp + 0xc]
// 0061994f  c644243002           mov byte ptr [esp + 0x30], 2
// 00619954  ff1568248000         call dword ptr [0x802468]
// 0061995a  8b4c2428             mov ecx, dword ptr [esp + 0x28]
// 0061995e  8bc6                 mov eax, esi
// 00619960  5e                   pop esi
// 00619961  5b                   pop ebx
// 00619962  64890d00000000       mov dword ptr fs:[0], ecx
// 00619969  83c42c               add esp, 0x2c
// 0061996c  c20400               ret 4
#include <intrin.h>

extern unsigned int table8440d0[];
extern unsigned int table843eb4[];
extern unsigned int table843ea4[];
extern unsigned int table843e9c[];
extern unsigned int table843e94[];
extern unsigned int table843e84[];
extern unsigned int table843e74[];
extern unsigned int table843e64[];
extern unsigned int table843e54[];
extern unsigned int table843e44[];
extern unsigned int table843e34[];
extern unsigned int table843e2c[];
extern unsigned int table843e24[];
extern unsigned int table843e0c[];
extern unsigned int table843e04[];
extern const char flagName[];

struct String;
extern String& (__thiscall *stringConstruct)(String*, const char*);
extern void (__thiscall *stringDestroy)(String*);

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

inline String::String(const char* text) {
    stringConstruct(this, text);
}
inline String::~String() {
    stringDestroy(this);
}

struct Pair {
    unsigned int first;
    unsigned int second;
    Pair(int = 0);
    ~Pair();
};

inline Pair::Pair(int) : first(0), second(0) {}

struct Base {
    char storage[0x268];
    Base(int);
    ~Base();
};

struct S : Base {
    Pair field268;
    char padding270[8];
    Pair field278;
    unsigned char field280;
    char padding281[3];
    unsigned char field284;
    char padding285[3];
    unsigned int field288;
    unsigned int field28c;

    S(int);
    void setValue(const String&);
};

S::S(int initializeVirtualBase)
    : Base(initializeVirtualBase
               ? (*(unsigned int**)((char*)this + 0x1c0) = table8440d0, 0)
               : 0),
      field268((
          *(unsigned int**)((char*)this + 0x000) = table843eb4,
          *(unsigned int**)((char*)this + 0x010) = table843ea4,
          *(unsigned int**)((char*)this + 0x014) = table843e9c,
          *(unsigned int**)((char*)this + 0x020) = table843e94,
          *(unsigned int**)((char*)this + 0x024) = table843e84,
          *(unsigned int**)((char*)this + 0x044) = table843e74,
          *(unsigned int**)((char*)this + 0x064) = table843e64,
          *(unsigned int**)((char*)this + 0x084) = table843e54,
          *(unsigned int**)((char*)this + 0x0a4) = table843e44,
          *(unsigned int**)((char*)this + 0x0c4) = table843e34,
          *(unsigned int**)((char*)this + 0x130) = table843e2c,
          *(unsigned int**)((char*)this + 0x1a0) = table843e24,
          *(unsigned int**)((char*)this + 0x1b0) = table843e0c,
          *(unsigned int**)((char*)this + 0x1c0 +
              (*(unsigned int**)((char*)this + 0x1c0))[1]) = table843e04,
          *(unsigned int*)((char*)this + 0x1bc +
              (*(unsigned int**)((char*)this + 0x1c0))[1]) =
              (*(unsigned int**)((char*)this + 0x1c0))[1] - 0xd4,
          0)),
      field278()
{
    field280 = 0;
    field284 = 0;
    field288 = 0;
    _ReadWriteBarrier();
    field28c = 0xc2;

    String name(flagName);
    setValue(name);
}
