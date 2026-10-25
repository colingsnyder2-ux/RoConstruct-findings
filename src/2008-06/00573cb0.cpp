// from server: 100% by colin
// roc 2008-06 00573cb0  unit: RBX::GuiRoot  size: 330 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00573cb0
//
// 00573cb0  6aff                 push -1
// 00573cb2  6868817d00           push 0x7d8168
// 00573cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00573cbd  50                   push eax
// 00573cbe  64892500000000       mov dword ptr fs:[0], esp
// 00573cc5  51                   push ecx
// 00573cc6  56                   push esi
// 00573cc7  8bf1                 mov esi, ecx
// 00573cc9  89742404             mov dword ptr [esp + 4], esi
// 00573ccd  e8fefcffff           call 0x5739d0
// 00573cd2  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00573cda  c706f4fa8200         mov dword ptr [esi], 0x82faf4
// 00573ce0  c74610e4fa8200       mov dword ptr [esi + 0x10], 0x82fae4
// 00573ce7  c74614dcfa8200       mov dword ptr [esi + 0x14], 0x82fadc
// 00573cee  c74620d4fa8200       mov dword ptr [esi + 0x20], 0x82fad4
// 00573cf5  c74624c4fa8200       mov dword ptr [esi + 0x24], 0x82fac4
// 00573cfc  c74644b4fa8200       mov dword ptr [esi + 0x44], 0x82fab4
// 00573d03  c74664a4fa8200       mov dword ptr [esi + 0x64], 0x82faa4
// 00573d0a  c7868400000094fa8200 mov dword ptr [esi + 0x84], 0x82fa94
// 00573d14  c786a400000084fa8200 mov dword ptr [esi + 0xa4], 0x82fa84
// 00573d1e  c786c400000074fa8200 mov dword ptr [esi + 0xc4], 0x82fa74
// 00573d28  c786300100006cfa8200 mov dword ptr [esi + 0x130], 0x82fa6c
// 00573d32  c7865401000000000000 mov dword ptr [esi + 0x154], 0
// 00573d3c  e8cf712400           call 0x7baf10
// 00573d41  d900                 fld dword ptr [eax]
// 00573d43  d99e44010000         fstp dword ptr [esi + 0x144]
// 00573d49  8bce                 mov ecx, esi
// 00573d4b  d94004               fld dword ptr [eax + 4]
// 00573d4e  d99e48010000         fstp dword ptr [esi + 0x148]
// 00573d54  d94008               fld dword ptr [eax + 8]
// 00573d57  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 00573d5d  d9400c               fld dword ptr [eax + 0xc]
// 00573d60  8b442418             mov eax, dword ptr [esp + 0x18]
// 00573d64  d99e50010000         fstp dword ptr [esi + 0x150]
// 00573d6a  50                   push eax
// 00573d6b  c6865801000001       mov byte ptr [esi + 0x158], 1
// 00573d72  e81972feff           call 0x55af90
// 00573d77  807c242000           cmp byte ptr [esp + 0x20], 0
// 00573d7c  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 00573d80  898e54010000         mov dword ptr [esi + 0x154], ecx
// 00573d86  745e                 je 0x573de6
// 00573d88  f605504e970001       test byte ptr [0x974e50], 1
// 00573d8f  7525                 jne 0x573db6
// 00573d91  d90538f88200         fld dword ptr [0x82f838]
// 00573d97  830d504e970001       or dword ptr [0x974e50], 1
// 00573d9e  d915404e9700         fst dword ptr [0x974e40]
// 00573da4  d915444e9700         fst dword ptr [0x974e44]
// 00573daa  d915484e9700         fst dword ptr [0x974e48]
// 00573db0  d91d4c4e9700         fstp dword ptr [0x974e4c]
// 00573db6  d905404e9700         fld dword ptr [0x974e40]
// 00573dbc  d99e44010000         fstp dword ptr [esi + 0x144]
// 00573dc2  d905444e9700         fld dword ptr [0x974e44]
// 00573dc8  d99e48010000         fstp dword ptr [esi + 0x148]
// 00573dce  d905484e9700         fld dword ptr [0x974e48]
// 00573dd4  d99e4c010000         fstp dword ptr [esi + 0x14c]
// 00573dda  d9054c4e9700         fld dword ptr [0x974e4c]
// 00573de0  d99e50010000         fstp dword ptr [esi + 0x150]
// 00573de6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00573dea  8bc6                 mov eax, esi
// 00573dec  5e                   pop esi
// 00573ded  64890d00000000       mov dword ptr fs:[0], ecx
// 00573df4  83c410               add esp, 0x10
// 00573df7  c20c00               ret 0xc

struct Color {
    float r, g, b, a;
    Color() {}
    Color(float);
    Color& operator=(const Color& other) { r=other.r; g=other.g; b=other.b; a=other.a; return *this; }
};

__forceinline Color::Color(float v) : r(v), g(v), b(v), a(v) {}

extern const Color& __cdecl zeroColor();
extern const float whiteValue;

extern const unsigned long table00Data[];
extern const unsigned long table10Data[];
extern const unsigned long table14Data[];
extern const unsigned long table20Data[];
extern const unsigned long table24Data[];
extern const unsigned long table44Data[];
extern const unsigned long table64Data[];
extern const unsigned long table84Data[];
extern const unsigned long tableA4Data[];
extern const unsigned long tableC4Data[];
extern const unsigned long table130Data[];

struct PercentPanel {
    unsigned long table00;
    char pad04[12];
    unsigned long table10;
    unsigned long table14;
    char pad18[8];
    unsigned long table20;
    unsigned long table24;
    char pad28[28];
    unsigned long table44;
    char pad48[28];
    unsigned long table64;
    char pad68[28];
    unsigned long table84;
    char pad88[28];
    unsigned long tableA4;
    char padA8[28];
    unsigned long tableC4;
    char padC8[104];
    unsigned long table130;
    char pad134[16];

    PercentPanel();
    ~PercentPanel();
    void setName(const char*);
};

struct GuiRoot : PercentPanel {
    Color backdropColor;
    void* owner;
    bool enabled;

    GuiRoot(const char*, void*, bool);
};

GuiRoot::GuiRoot(const char* name, void* parent, bool white)
    : PercentPanel()
{
    table00 = reinterpret_cast<unsigned long>(table00Data);
    table10 = reinterpret_cast<unsigned long>(table10Data);
    table14 = reinterpret_cast<unsigned long>(table14Data);
    table20 = reinterpret_cast<unsigned long>(table20Data);
    table24 = reinterpret_cast<unsigned long>(table24Data);
    table44 = reinterpret_cast<unsigned long>(table44Data);
    table64 = reinterpret_cast<unsigned long>(table64Data);
    table84 = reinterpret_cast<unsigned long>(table84Data);
    tableA4 = reinterpret_cast<unsigned long>(tableA4Data);
    tableC4 = reinterpret_cast<unsigned long>(tableC4Data);
    table130 = reinterpret_cast<unsigned long>(table130Data);

    owner = 0;
    const Color& zero = zeroColor();
    backdropColor = zero;
    enabled = true;
    setName(name);
    owner = parent;

    if (white) {
        static Color whiteColor(whiteValue);
        backdropColor = whiteColor;
    }
}
