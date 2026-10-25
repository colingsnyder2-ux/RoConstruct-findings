// from server: 100% by king_originala
// roc 2008-06 006389f0  unit: G3D::VColor3::V?$Value::?$FactoryProduct  size: 198 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006389f0
//
// 006389f0  6aff                 push -1
// 006389f2  6811a47d00           push 0x7da411
// 006389f7  64a100000000         mov eax, dword ptr fs:[0]
// 006389fd  50                   push eax
// 006389fe  64892500000000       mov dword ptr fs:[0], esp
// 00638a05  83ec20               sub esp, 0x20
// 00638a08  56                   push esi
// 00638a09  8bf1                 mov esi, ecx
// 00638a0b  89742404             mov dword ptr [esp + 4], esi
// 00638a0f  e87cf6ffff           call 0x638090
// 00638a14  c7064c988400         mov dword ptr [esi], 0x84984c
// 00638a1a  c7461040988400       mov dword ptr [esi + 0x10], 0x849840
// 00638a21  c7461438988400       mov dword ptr [esi + 0x14], 0x849838
// 00638a28  c7462030988400       mov dword ptr [esi + 0x20], 0x849830
// 00638a2f  c7462420988400       mov dword ptr [esi + 0x24], 0x849820
// 00638a36  c7464410988400       mov dword ptr [esi + 0x44], 0x849810
// 00638a3d  c7466400988400       mov dword ptr [esi + 0x64], 0x849800
// 00638a44  c78684000000f0978400 mov dword ptr [esi + 0x84], 0x8497f0
// 00638a4e  c786a4000000e0978400 mov dword ptr [esi + 0xa4], 0x8497e0
// 00638a58  c786c4000000d0978400 mov dword ptr [esi + 0xc4], 0x8497d0
// 00638a62  a1ecd39700           mov eax, dword ptr [0x97d3ec]
// 00638a67  6878848100           push 0x818478
// 00638a6c  8d4c240c             lea ecx, [esp + 0xc]
// 00638a70  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00638a78  898630010000         mov dword ptr [esi + 0x130], eax
// 00638a7e  ff1558248000         call dword ptr [0x802458]
// 00638a84  8d4c2408             lea ecx, [esp + 8]
// 00638a88  51                   push ecx
// 00638a89  8bce                 mov ecx, esi
// 00638a8b  c644243001           mov byte ptr [esp + 0x30], 1
// 00638a90  e8fb24f2ff           call 0x55af90
// 00638a95  8d4c2408             lea ecx, [esp + 8]
// 00638a99  c644242c00           mov byte ptr [esp + 0x2c], 0
// 00638a9e  ff1568248000         call dword ptr [0x802468]
// 00638aa4  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00638aa8  8bc6                 mov eax, esi
// 00638aaa  5e                   pop esi
// 00638aab  64890d00000000       mov dword ptr fs:[0], ecx
// 00638ab2  83c42c               add esp, 0x2c
// 00638ab5  c3                   ret 

struct Text;

extern void (__thiscall *textConstruct)(Text *, const char *);
extern void (__thiscall *textDestroy)(Text *);

struct Text {
    unsigned char storage[28];

    Text(const char *s) { textConstruct(this, s); }
    ~Text() { textDestroy(this); }
};

struct Base {
    unsigned words[76];

    Base();
    ~Base();
    void setName(const Text &);
};

struct S : Base {
    unsigned value;

    S();
};

S::S()
{
    words[0]  = 0x84984c;
    words[4]  = 0x849840;
    words[5]  = 0x849838;
    words[8]  = 0x849830;
    words[9]  = 0x849820;
    words[17] = 0x849810;
    words[25] = 0x849800;
    words[33] = 0x8497f0;
    words[41] = 0x8497e0;
    words[49] = 0x8497d0;
    value = *reinterpret_cast<const unsigned *>(0x97d3ec);
    Text name("Value");
    setName(name);
}
