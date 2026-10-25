// from server: 100% by king_originala
// roc 2008-06 0059fbb0  unit: RBX::VSpecialShape::?$FactoryProduct  size: 305 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059fbb0
//
// 0059fbb0  6aff                 push -1
// 0059fbb2  689f287d00           push 0x7d289f
// 0059fbb7  64a100000000         mov eax, dword ptr fs:[0]
// 0059fbbd  50                   push eax
// 0059fbbe  64892500000000       mov dword ptr fs:[0], esp
// 0059fbc5  83ec24               sub esp, 0x24
// 0059fbc8  56                   push esi
// 0059fbc9  8bf1                 mov esi, ecx
// 0059fbcb  57                   push edi
// 0059fbcc  89742408             mov dword ptr [esp + 8], esi
// 0059fbd0  e8fbfeffff           call 0x59fad0
// 0059fbd5  d9e8                 fld1 
// 0059fbd7  33c0                 xor eax, eax
// 0059fbd9  c70684358300         mov dword ptr [esi], 0x833584
// 0059fbdf  c7461078358300       mov dword ptr [esi + 0x10], 0x833578
// 0059fbe6  c7461470358300       mov dword ptr [esi + 0x14], 0x833570
// 0059fbed  c7462068358300       mov dword ptr [esi + 0x20], 0x833568
// 0059fbf4  c7462458358300       mov dword ptr [esi + 0x24], 0x833558
// 0059fbfb  c7464448358300       mov dword ptr [esi + 0x44], 0x833548
// 0059fc02  c7466438358300       mov dword ptr [esi + 0x64], 0x833538
// 0059fc09  c7868400000028358300 mov dword ptr [esi + 0x84], 0x833528
// 0059fc13  c786a400000018358300 mov dword ptr [esi + 0xa4], 0x833518
// 0059fc1d  c786c400000008358300 mov dword ptr [esi + 0xc4], 0x833508
// 0059fc27  898630010000         mov dword ptr [esi + 0x130], eax
// 0059fc2d  d99634010000         fst dword ptr [esi + 0x134]
// 0059fc33  8dbe40010000         lea edi, [esi + 0x140]
// 0059fc39  d99638010000         fst dword ptr [esi + 0x138]
// 0059fc3f  8bcf                 mov ecx, edi
// 0059fc41  d99e3c010000         fstp dword ptr [esi + 0x13c]
// 0059fc47  89442434             mov dword ptr [esp + 0x34], eax
// 0059fc4b  897c240c             mov dword ptr [esp + 0xc], edi
// 0059fc4f  ff1560248000         call dword ptr [0x802460]
// 0059fc55  c644243401           mov byte ptr [esp + 0x34], 1
// 0059fc5a  e81146fbff           call 0x554270
// 0059fc5f  89471c               mov dword ptr [edi + 0x1c], eax
// 0059fc62  8dbe60010000         lea edi, [esi + 0x160]
// 0059fc68  8bcf                 mov ecx, edi
// 0059fc6a  c644243402           mov byte ptr [esp + 0x34], 2
// 0059fc6f  897c240c             mov dword ptr [esp + 0xc], edi
// 0059fc73  ff1560248000         call dword ptr [0x802460]
// 0059fc79  c644243403           mov byte ptr [esp + 0x34], 3
// 0059fc7e  e8ed45fbff           call 0x554270
// 0059fc83  89471c               mov dword ptr [edi + 0x1c], eax
// 0059fc86  d9e8                 fld1 
// 0059fc88  d99680010000         fst dword ptr [esi + 0x180]
// 0059fc8e  68fc348300           push 0x8334fc
// 0059fc93  d99684010000         fst dword ptr [esi + 0x184]
// 0059fc99  8d4c2414             lea ecx, [esp + 0x14]
// 0059fc9d  d99e88010000         fstp dword ptr [esi + 0x188]
// 0059fca3  c644243804           mov byte ptr [esp + 0x38], 4
// 0059fca8  ff1558248000         call dword ptr [0x802458]
// 0059fcae  8d442410             lea eax, [esp + 0x10]
// 0059fcb2  50                   push eax
// 0059fcb3  8bce                 mov ecx, esi
// 0059fcb5  c644243805           mov byte ptr [esp + 0x38], 5
// 0059fcba  e8d1b2fbff           call 0x55af90
// 0059fcbf  8d4c2410             lea ecx, [esp + 0x10]
// 0059fcc3  c644243404           mov byte ptr [esp + 0x34], 4
// 0059fcc8  ff1568248000         call dword ptr [0x802468]
// 0059fcce  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0059fcd2  5f                   pop edi
// 0059fcd3  8bc6                 mov eax, esi
// 0059fcd5  5e                   pop esi
// 0059fcd6  64890d00000000       mov dword ptr fs:[0], ecx
// 0059fcdd  83c430               add esp, 0x30
// 0059fce0  c3                   ret 

struct String;

extern void (__thiscall *stringDefault)(String *);
extern void (__thiscall *stringFromText)(String *, const char *);
extern void (__thiscall *stringDestroy)(String *);
extern unsigned long __cdecl getLocalScope();

struct String {
    unsigned char storage[28];
    String();
    String(const char *);
    ~String();
};

inline String::String() {
    stringDefault(this);
}

inline String::String(const char *text) {
    stringFromText(this, text);
}

inline String::~String() {
    stringDestroy(this);
}

struct Guid {
    String text;
    unsigned long scope;
    Guid();
};

inline Guid::Guid() : text(), scope(getLocalScope()) {
}

struct Vector {
    float x, y, z;
    Vector();
};

inline Vector::Vector() : x(1.0f), y(1.0f), z(1.0f) {
}

struct Base {
    unsigned long words[76];
    Base();
    ~Base();
    void setName(const String &);
};

struct S : Base {
    unsigned long type;
    Vector scale;
    Guid mesh;
    Guid texture;
    Vector vertexColor;

    S();
    unsigned long initializeTables();
};

inline unsigned long S::initializeTables() {
    words[0] = 0x833584;
    words[4] = 0x833578;
    words[5] = 0x833570;
    words[8] = 0x833568;
    words[9] = 0x833558;
    words[17] = 0x833548;
    words[25] = 0x833538;
    words[33] = 0x833528;
    words[41] = 0x833518;
    words[49] = 0x833508;
    return 0;
}

S::S()
    : Base(),
      type(initializeTables()),
      scale(),
      mesh(),
      texture(),
      vertexColor() {
    setName(String("Mesh"));
}
