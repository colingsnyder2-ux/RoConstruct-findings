// from server: 73% by colin
// from server: 72% by colin
// roc 2008-06 005db280  unit: RBX::VHumanoid::?$BoundFuncDesc  size: 565 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005db280
//
// 005db280  6aff                 push -1
// 005db282  68cd5f7d00           push 0x7d5fcd
// 005db287  64a100000000         mov eax, dword ptr fs:[0]
// 005db28d  50                   push eax
// 005db28e  64892500000000       mov dword ptr fs:[0], esp
// 005db295  83ec20               sub esp, 0x20
// 005db298  53                   push ebx
// 005db299  56                   push esi
// 005db29a  57                   push edi
// 005db29b  33ff                 xor edi, edi
// 005db29d  8bf1                 mov esi, ecx
// 005db29f  8974240c             mov dword ptr [esp + 0xc], esi
// 005db2a3  397c243c             cmp dword ptr [esp + 0x3c], edi
// 005db2a7  740a                 je 0x5db2b3
// 005db2a9  c78650010000d8d78300 mov dword ptr [esi + 0x150], 0x83d7d8
// 005db2b3  e898f8ffff           call 0x5dab50
// 005db2b8  83c8ff               or eax, 0xffffffff
// 005db2bb  898634010000         mov dword ptr [esi + 0x134], eax
// 005db2c1  897c2434             mov dword ptr [esp + 0x34], edi
// 005db2c5  c78630010000f4d18300 mov dword ptr [esi + 0x130], 0x83d1f4
// 005db2cf  898640010000         mov dword ptr [esi + 0x140], eax
// 005db2d5  898644010000         mov dword ptr [esi + 0x144], eax
// 005db2db  89be48010000         mov dword ptr [esi + 0x148], edi
// 005db2e1  8d9e4c010000         lea ebx, [esi + 0x14c]
// 005db2e7  57                   push edi
// 005db2e8  8bcb                 mov ecx, ebx
// 005db2ea  c644243802           mov byte ptr [esp + 0x38], 2
// 005db2ef  e82c600600           call 0x641320
// 005db2f4  d905a4638100         fld dword ptr [0x8163a4]
// 005db2fa  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005db300  c7067cd48300         mov dword ptr [esi], 0x83d47c
// 005db306  c746106cd48300       mov dword ptr [esi + 0x10], 0x83d46c
// 005db30d  c7461464d48300       mov dword ptr [esi + 0x14], 0x83d464
// 005db314  c746205cd48300       mov dword ptr [esi + 0x20], 0x83d45c
// 005db31b  c746244cd48300       mov dword ptr [esi + 0x24], 0x83d44c
// 005db322  c746443cd48300       mov dword ptr [esi + 0x44], 0x83d43c
// 005db329  c746642cd48300       mov dword ptr [esi + 0x64], 0x83d42c
// 005db330  c786840000001cd48300 mov dword ptr [esi + 0x84], 0x83d41c
// 005db33a  c786a40000000cd48300 mov dword ptr [esi + 0xa4], 0x83d40c
// 005db344  c786c4000000fcd38300 mov dword ptr [esi + 0xc4], 0x83d3fc
// 005db34e  c78630010000e0d38300 mov dword ptr [esi + 0x130], 0x83d3e0
// 005db358  c78638010000d4d38300 mov dword ptr [esi + 0x138], 0x83d3d4
// 005db362  c7863c010000bcd38300 mov dword ptr [esi + 0x13c], 0x83d3bc
// 005db36c  c70388d38300         mov dword ptr [ebx], 0x83d388
// 005db372  c786a001000080d38300 mov dword ptr [esi + 0x1a0], 0x83d380
// 005db37c  c786a401000074d38300 mov dword ptr [esi + 0x1a4], 0x83d374
// 005db386  8b4804               mov ecx, dword ptr [eax + 4]
// 005db389  c78431500100006cd38300 mov dword ptr [ecx + esi + 0x150], 0x83d36c
// 005db394  8b9650010000         mov edx, dword ptr [esi + 0x150]
// 005db39a  8b4204               mov eax, dword ptr [edx + 4]
// 005db39d  8d8828ffffff         lea ecx, [eax - 0xd8]
// 005db3a3  898c304c010000       mov dword ptr [eax + esi + 0x14c], ecx
// 005db3aa  d996a8010000         fst dword ptr [esi + 0x1a8]
// 005db3b0  d99eac010000         fstp dword ptr [esi + 0x1ac]
// 005db3b6  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 005db3bc  d9ee                 fldz 
// 005db3be  c786b801000003000000 mov dword ptr [esi + 0x1b8], 3
// 005db3c8  d996b0010000         fst dword ptr [esi + 0x1b0]
// 005db3ce  89bebc010000         mov dword ptr [esi + 0x1bc], edi
// 005db3d4  89bec0010000         mov dword ptr [esi + 0x1c0], edi
// 005db3da  d996c4010000         fst dword ptr [esi + 0x1c4]
// 005db3e0  d996c8010000         fst dword ptr [esi + 0x1c8]
// 005db3e6  d996cc010000         fst dword ptr [esi + 0x1cc]
// 005db3ec  d996d0010000         fst dword ptr [esi + 0x1d0]
// 005db3f2  d996d4010000         fst dword ptr [esi + 0x1d4]
// 005db3f8  d996d8010000         fst dword ptr [esi + 0x1d8]
// 005db3fe  d996dc010000         fst dword ptr [esi + 0x1dc]
// 005db404  d996e0010000         fst dword ptr [esi + 0x1e0]
// 005db40a  d99ee4010000         fstp dword ptr [esi + 0x1e4]
// 005db410  80a6e8010000e0       and byte ptr [esi + 0x1e8], 0xe0
// 005db417  89beec010000         mov dword ptr [esi + 0x1ec], edi
// 005db41d  89bef0010000         mov dword ptr [esi + 0x1f0], edi
// 005db423  89bef4010000         mov dword ptr [esi + 0x1f4], edi
// 005db429  89bef8010000         mov dword ptr [esi + 0x1f8], edi
// 005db42f  89befc010000         mov dword ptr [esi + 0x1fc], edi
// 005db435  89be00020000         mov dword ptr [esi + 0x200], edi
// 005db43b  89be04020000         mov dword ptr [esi + 0x204], edi
// 005db441  89be08020000         mov dword ptr [esi + 0x208], edi
// 005db447  89be0c020000         mov dword ptr [esi + 0x20c], edi
// 005db44d  89be10020000         mov dword ptr [esi + 0x210], edi
// 005db453  89be14020000         mov dword ptr [esi + 0x214], edi
// 005db459  89be18020000         mov dword ptr [esi + 0x218], edi
// 005db45f  89be1c020000         mov dword ptr [esi + 0x21c], edi
// 005db465  89be20020000         mov dword ptr [esi + 0x220], edi
// 005db46b  b30a                 mov bl, 0xa
// 005db46d  68ccd78300           push 0x83d7cc
// 005db472  8d4c2414             lea ecx, [esp + 0x14]
// 005db476  885c2438             mov byte ptr [esp + 0x38], bl
// 005db47a  ff1558248000         call dword ptr [0x802458]
// 005db480  8d542410             lea edx, [esp + 0x10]
// 005db484  52                   push edx
// 005db485  8bce                 mov ecx, esi
// 005db487  c64424380b           mov byte ptr [esp + 0x38], 0xb
// 005db48c  e8fffaf7ff           call 0x55af90
// 005db491  8d4c2410             lea ecx, [esp + 0x10]
// 005db495  885c2434             mov byte ptr [esp + 0x34], bl
// 005db499  ff1568248000         call dword ptr [0x802468]
// 005db49f  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005db4a3  5f                   pop edi
// 005db4a4  8bc6                 mov eax, esi
// 005db4a6  5e                   pop esi
// 005db4a7  5b                   pop ebx
// 005db4a8  64890d00000000       mov dword ptr fs:[0], ecx
// 005db4af  83c42c               add esp, 0x2c
// 005db4b2  c20400               ret 4
#include <intrin.h>

struct String {
    char storage[28];
    String(const char*);
    ~String();
};

struct Base {
    void construct();
};

struct Sub14c {
    void init(void*);
};

struct S : Base {
    char pad0[0x10];
    void* vtbl10;
    char pad1[0x10];
    void* vtbl24;
    char pad2[0x1c];
    void* vtbl44;
    char pad3[0x1c];
    void* vtbl64;
    char pad4[0x1c];
    void* vtbl84;
    char pad5[0x1c];
    void* vtbla4;
    char pad6[0x1c];
    void* vtblc4;
    char pad7[0x68];
    void* vtbl130;
    int field134;
    void* vtbl138;
    void* vtbl13c;
    int field140;
    int field144;
    int field148;
    Sub14c sub14c;
    void* vtbl150;
    char pad8[0x4c];
    void* vtbl1a0;
    void* vtbl1a4;
    float f1a8;
    float f1ac;
    float f1b0;
    int field1b4;
    int field1b8;
    int field1bc;
    int field1c0;
    float f1c4;
    float f1c8;
    float f1cc;
    float f1d0;
    float f1d4;
    float f1d8;
    float f1dc;
    float f1e0;
    float f1e4;
    unsigned char flags1e8;
    char pad9[3];
    int field1ec;
    int field1f0;
    int field1f4;
    int field1f8;
    int field1fc;
    int field200;
    int field204;
    int field208;
    int field20c;
    int field210;
    int field214;
    int field218;
    int field21c;
    int field220;

    S(int);
    void setValue(const String&);
};

extern float g_float8163a4;

S::S(int arg)
{
    if (arg != 0) {
        *(void**)((char*)this + 0x150) = (void*)0x83d7d8;
    }
    construct();
    _ReadWriteBarrier();
    int neg = -1;
    field134 = neg;
    *(void**)((char*)this + 0x130) = (void*)0x83d1f4;
    field140 = neg;
    field144 = neg;
    field148 = 0;
    *(void**)((char*)this + 0x14c) = 0;
    sub14c.init(0);
    float f = g_float8163a4;
    void* p150 = *(void**)((char*)this + 0x150);
    *(void**)this = (void*)0x83d47c;
    vtbl10 = (void*)0x83d46c;
    vtbl24 = (void*)0x83d464;
    *(void**)((char*)this + 0x20) = (void*)0x83d45c;
    *(void**)((char*)this + 0x24) = (void*)0x83d44c;
    vtbl44 = (void*)0x83d43c;
    vtbl64 = (void*)0x83d42c;
    vtbl84 = (void*)0x83d41c;
    vtbla4 = (void*)0x83d40c;
    vtblc4 = (void*)0x83d3fc;
    vtbl130 = (void*)0x83d3e0;
    vtbl138 = (void*)0x83d3d4;
    vtbl13c = (void*)0x83d3bc;
    *(void**)((char*)this + 0x14c) = (void*)0x83d388;
    vtbl1a0 = (void*)0x83d380;
    vtbl1a4 = (void*)0x83d374;
    {
        void* v = *(void**)((char*)p150 + 4);
        *(void**)((char*)v + (int)this + 0x150) = (void*)0x83d36c;
    }
    {
        void* p = *(void**)((char*)this + 0x150);
        void* v = *(void**)((char*)p + 4);
        void* adj = (char*)v - 0xd8;
        *(void**)((char*)v + (int)this + 0x14c) = adj;
    }
    f1a8 = f;
    f1ac = f;
    field1b4 = 0;
    f1b0 = 0.0f;
    field1b8 = 3;
    field1bc = 0;
    field1c0 = 0;
    f1c4 = 0.0f;
    f1c8 = 0.0f;
    f1cc = 0.0f;
    f1d0 = 0.0f;
    f1d4 = 0.0f;
    f1d8 = 0.0f;
    f1dc = 0.0f;
    f1e0 = 0.0f;
    f1e4 = 0.0f;
    flags1e8 &= 0xe0;
    field1ec = 0;
    field1f0 = 0;
    field1f4 = 0;
    field1f8 = 0;
    field1fc = 0;
    field200 = 0;
    field204 = 0;
    field208 = 0;
    field20c = 0;
    field210 = 0;
    field214 = 0;
    field218 = 0;
    field21c = 0;
    field220 = 0;
    {
        String s("Humanoid");
        setValue(s);
    }
}
