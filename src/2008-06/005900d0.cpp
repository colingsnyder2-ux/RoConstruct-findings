// from server: 100% by king_originala
// roc 2008-06 005900d0  unit: TextXmlParser  size: 133 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005900d0
//
// 005900d0  6aff                 push -1
// 005900d2  68f8107d00           push 0x7d10f8
// 005900d7  64a100000000         mov eax, dword ptr fs:[0]
// 005900dd  50                   push eax
// 005900de  64892500000000       mov dword ptr fs:[0], esp
// 005900e5  83ec2c               sub esp, 0x2c
// 005900e8  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005900ec  56                   push esi
// 005900ed  8bf1                 mov esi, ecx
// 005900ef  56                   push esi
// 005900f0  50                   push eax
// 005900f1  6a00                 push 0
// 005900f3  8d4c2410             lea ecx, [esp + 0x10]
// 005900f7  e834e50700           call 0x60e630
// 005900fc  d9442444             fld dword ptr [esp + 0x44]
// 00590100  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 00590104  51                   push ecx
// 00590105  83ec0c               sub esp, 0xc
// 00590108  8bc4                 mov eax, esp
// 0059010a  d918                 fstp dword ptr [eax]
// 0059010c  8d542414             lea edx, [esp + 0x14]
// 00590110  d9442458             fld dword ptr [esp + 0x58]
// 00590114  89642450             mov dword ptr [esp + 0x50], esp
// 00590118  d95804               fstp dword ptr [eax + 4]
// 0059011b  52                   push edx
// 0059011c  d9442460             fld dword ptr [esp + 0x60]
// 00590120  8bce                 mov ecx, esi
// 00590122  d95808               fstp dword ptr [eax + 8]
// 00590125  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0059012d  e83effffff           call 0x590070
// 00590132  8d4c2404             lea ecx, [esp + 4]
// 00590136  c7442438ffffffff     mov dword ptr [esp + 0x38], 0xffffffff
// 0059013e  e8bde50700           call 0x60e700
// 00590143  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00590147  64890d00000000       mov dword ptr fs:[0], ecx
// 0059014e  5e                   pop esi
// 0059014f  83c438               add esp, 0x38
// 00590152  c21400               ret 0x14

struct TextXmlParser;

struct Element {
    char storage[44];
    Element(int, const char*, TextXmlParser*);
    ~Element();
};

struct Vector {
    float x, y, z;
    Vector(float, float, float);
    Vector(const Vector&);
};

inline Vector::Vector(float a, float b, float c)
    : x(a), y(b), z(c) {}

struct TextXmlParser {
    void apply(Element*, Vector, int);
    void setVector(const char*, float, float, float, int);
};

void TextXmlParser::setVector(const char* name, float x, float y, float z, int flag) {
    Element element(0, name, this);
    apply(&element, Vector(x, y, z), flag);
}
