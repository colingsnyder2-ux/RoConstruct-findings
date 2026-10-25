// from server: 66% by colin
// roc 2008-06 0059d4d0  unit: VCRenderSettings::?$EnumPropDescriptor  size: 785 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0059d4d0
//
// 0059d4d0  6aff                 push -1
// 0059d4d2  6829277d00           push 0x7d2729
// 0059d4d7  64a100000000         mov eax, dword ptr fs:[0]
// 0059d4dd  50                   push eax
// 0059d4de  64892500000000       mov dword ptr fs:[0], esp
// 0059d4e5  83ec14               sub esp, 0x14
// 0059d4e8  53                   push ebx
// 0059d4e9  55                   push ebp
// 0059d4ea  56                   push esi
// 0059d4eb  33db                 xor ebx, ebx
// 0059d4ed  8bf1                 mov esi, ecx
// 0059d4ef  57                   push edi
// 0059d4f0  89742410             mov dword ptr [esp + 0x10], esi
// 0059d4f4  895c2414             mov dword ptr [esp + 0x14], ebx
// 0059d4f8  395c2434             cmp dword ptr [esp + 0x34], ebx
// 0059d4fc  7414                 je 0x59d512
// 0059d4fe  c786340100006c9e8400 mov dword ptr [esi + 0x134], 0x849e6c
// 0059d508  c7860004000044618400 mov dword ptr [esi + 0x400], 0x846144
// 0059d512  53                   push ebx
// 0059d513  68ec298300           push 0x8329ec
// 0059d518  e813fdffff           call 0x59d230
// 0059d51d  8dbea0010000         lea edi, [esi + 0x1a0]
// 0059d523  8bcf                 mov ecx, edi
// 0059d525  895c242c             mov dword ptr [esp + 0x2c], ebx
// 0059d529  e892c90400           call 0x5e9ec0
// 0059d52e  8daec0010000         lea ebp, [esi + 0x1c0]
// 0059d534  8bcd                 mov ecx, ebp
// 0059d536  c644242c01           mov byte ptr [esp + 0x2c], 1
// 0059d53b  e890760700           call 0x614bd0
// 0059d540  83c8ff               or eax, 0xffffffff
// 0059d543  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 0059d549  8986d4010000         mov dword ptr [esi + 0x1d4], eax
// 0059d54f  899ed8010000         mov dword ptr [esi + 0x1d8], ebx
// 0059d555  d9ee                 fldz 
// 0059d557  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0059d55d  c7064c2d8300         mov dword ptr [esi], 0x832d4c
// 0059d563  c746103c2d8300       mov dword ptr [esi + 0x10], 0x832d3c
// 0059d56a  c74614342d8300       mov dword ptr [esi + 0x14], 0x832d34
// 0059d571  c746202c2d8300       mov dword ptr [esi + 0x20], 0x832d2c
// 0059d578  c746241c2d8300       mov dword ptr [esi + 0x24], 0x832d1c
// 0059d57f  c746440c2d8300       mov dword ptr [esi + 0x44], 0x832d0c
// 0059d586  c74664fc2c8300       mov dword ptr [esi + 0x64], 0x832cfc
// 0059d58d  c78684000000ec2c8300 mov dword ptr [esi + 0x84], 0x832cec
// 0059d597  c786a4000000dc2c8300 mov dword ptr [esi + 0xa4], 0x832cdc
// 0059d5a1  c786c4000000cc2c8300 mov dword ptr [esi + 0xc4], 0x832ccc
// 0059d5ab  c78630010000c02c8300 mov dword ptr [esi + 0x130], 0x832cc0
// 0059d5b5  c707b02c8300         mov dword ptr [edi], 0x832cb0
// 0059d5bb  c74500a42c8300       mov dword ptr [ebp], 0x832ca4
// 0059d5c2  c786cc0100008c2c8300 mov dword ptr [esi + 0x1cc], 0x832c8c
// 0059d5cc  8b4804               mov ecx, dword ptr [eax + 4]
// 0059d5cf  c7843134010000802c8300 mov dword ptr [ecx + esi + 0x134], 0x832c80
// 0059d5da  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0059d5e0  8b4208               mov eax, dword ptr [edx + 8]
// 0059d5e3  c7843034010000782c8300 mov dword ptr [eax + esi + 0x134], 0x832c78
// 0059d5ee  8b8e34010000         mov ecx, dword ptr [esi + 0x134]
// 0059d5f4  8b510c               mov edx, dword ptr [ecx + 0xc]
// 0059d5f7  c78432340100005c2c8300 mov dword ptr [edx + esi + 0x134], 0x832c5c
// 0059d602  8b8634010000         mov eax, dword ptr [esi + 0x134]
// 0059d608  8b4004               mov eax, dword ptr [eax + 4]
// 0059d60b  8d8848fdffff         lea ecx, [eax - 0x2b8]
// 0059d611  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0059d618  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0059d61e  8b4208               mov eax, dword ptr [edx + 8]
// 0059d621  8d8840fdffff         lea ecx, [eax - 0x2c0]
// 0059d627  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0059d62e  8b9634010000         mov edx, dword ptr [esi + 0x134]
// 0059d634  8b420c               mov eax, dword ptr [edx + 0xc]
// 0059d637  8d8838fdffff         lea ecx, [eax - 0x2c8]
// 0059d63d  898c3030010000       mov dword ptr [eax + esi + 0x130], ecx
// 0059d644  b801000000           mov eax, 1
// 0059d649  8986dc010000         mov dword ptr [esi + 0x1dc], eax
// 0059d64f  8986e0010000         mov dword ptr [esi + 0x1e0], eax
// 0059d655  c786e4010000c2000000 mov dword ptr [esi + 0x1e4], 0xc2
// 0059d65f  d996e8010000         fst dword ptr [esi + 0x1e8]
// 0059d665  56                   push esi
// 0059d666  d99eec010000         fstp dword ptr [esi + 0x1ec]
// 0059d66c  8d8ef4010000         lea ecx, [esi + 0x1f4]
// 0059d672  c644243002           mov byte ptr [esp + 0x30], 2
// 0059d677  c686f001000000       mov byte ptr [esi + 0x1f0], 0
// 0059d67e  e82df50400           call 0x5ecbb0
// 0059d683  d9ee                 fldz 
// 0059d685  8dbe28020000         lea edi, [esi + 0x228]
// 0059d68b  d99e24020000         fstp dword ptr [esi + 0x224]
// 0059d691  6a02                 push 2
// 0059d693  8bcf                 mov ecx, edi
// 0059d695  e8d6b00400           call 0x5e8770
// 0059d69a  d9e8                 fld1 
// 0059d69c  d99e28030000         fstp dword ptr [esi + 0x328]
// 0059d6a2  899e24030000         mov dword ptr [esi + 0x324], ebx
// 0059d6a8  d9ee                 fldz 
// 0059d6aa  c644242c03           mov byte ptr [esp + 0x2c], 3
// 0059d6af  d99634030000         fst dword ptr [esi + 0x334]
// 0059d6b5  bb90965900           mov ebx, 0x599690
// 0059d6ba  d99638030000         fst dword ptr [esi + 0x338]
// 0059d6c0  d99e3c030000         fstp dword ptr [esi + 0x33c]
// 0059d6c6  8d8e68030000         lea ecx, [esi + 0x368]
// 0059d6cc  e8ffabedff           call 0x4782d0
// 0059d6d1  899ea0030000         mov dword ptr [esi + 0x3a0], ebx
// 0059d6d7  33c0                 xor eax, eax
// 0059d6d9  8986a4030000         mov dword ptr [esi + 0x3a4], eax
// 0059d6df  8986a8030000         mov dword ptr [esi + 0x3a8], eax
// 0059d6e5  c6869803000001       mov byte ptr [esi + 0x398], 1
// 0059d6ec  89b69c030000         mov dword ptr [esi + 0x39c], esi
// 0059d6f2  b840965900           mov eax, 0x599640
// 0059d6f7  33c9                 xor ecx, ecx
// 0059d6f9  8986b8030000         mov dword ptr [esi + 0x3b8], eax
// 0059d6ff  898ebc030000         mov dword ptr [esi + 0x3bc], ecx
// 0059d705  8d9ec8030000         lea ebx, [esi + 0x3c8]
// 0059d70b  33d2                 xor edx, edx
// 0059d70d  8bcb                 mov ecx, ebx
// 0059d70f  c686b103000001       mov byte ptr [esi + 0x3b1], 1
// 0059d716  89b6b4030000         mov dword ptr [esi + 0x3b4], esi
// 0059d71c  8996c0030000         mov dword ptr [esi + 0x3c0], edx
// 0059d722  895c2434             mov dword ptr [esp + 0x34], ebx
// 0059d726  ff1560248000         call dword ptr [0x802460]
// 0059d72c  c644242c04           mov byte ptr [esp + 0x2c], 4
// 0059d731  e83a6bfbff           call 0x554270
// 0059d736  89431c               mov dword ptr [ebx + 0x1c], eax
// 0059d739  6a03                 push 3
// 0059d73b  6a01                 push 1
// 0059d73d  8bcf                 mov ecx, edi
// 0059d73f  c644243405           mov byte ptr [esp + 0x34], 5
// 0059d744  e807a10400           call 0x5e7850
// 0059d749  6a04                 push 4
// 0059d74b  6a04                 push 4
// 0059d74d  8bcf                 mov ecx, edi
// 0059d74f  e8fca00400           call 0x5e7850
// 0059d754  d9056c6e8200         fld dword ptr [0x826e6c]
// 0059d75a  d95c2418             fstp dword ptr [esp + 0x18]
// 0059d75e  8d542418             lea edx, [esp + 0x18]
// 0059d762  d90578728200         fld dword ptr [0x827278]
// 0059d768  52                   push edx
// 0059d769  d95c2420             fstp dword ptr [esp + 0x20]
// 0059d76d  8bcf                 mov ecx, edi
// 0059d76f  d90534c48100         fld dword ptr [0x81c434]
// 0059d775  d95c2424             fstp dword ptr [esp + 0x24]
// 0059d779  e8f2ac0400           call 0x5e8470
// 0059d77e  d9051c718200         fld dword ptr [0x82711c]
// 0059d784  51                   push ecx
// 0059d785  8bcf                 mov ecx, edi
// 0059d787  d91c24               fstp dword ptr [esp]
// 0059d78a  e8719e0400           call 0x5e7600
// 0059d78f  d905ac9b8100         fld dword ptr [0x819bac]
// 0059d795  51                   push ecx
// 0059d796  8bcf                 mov ecx, edi
// 0059d798  d91c24               fstp dword ptr [esp]
// 0059d79b  e8a09e0400           call 0x5e7640
// 0059d7a0  6a00                 push 0
// 0059d7a2  8bcf                 mov ecx, edi
// 0059d7a4  e827a90400           call 0x5e80d0
// 0059d7a9  6a00                 push 0
// 0059d7ab  8bcf                 mov ecx, edi
// 0059d7ad  e82e9e0400           call 0x5e75e0
// 0059d7b2  8bce                 mov ecx, esi
// 0059d7b4  89aecc020000         mov dword ptr [esi + 0x2cc], ebp
// 0059d7ba  e8e1e3efff           call 0x49bba0
// 0059d7bf  8d4608               lea eax, [esi + 8]
// 0059d7c2  50                   push eax
// 0059d7c3  8bcf                 mov ecx, edi
// 0059d7c5  e8869c0400           call 0x5e7450
// 0059d7ca  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0059d7ce  5f                   pop edi
// 0059d7cf  8bc6                 mov eax, esi
// 0059d7d1  5e                   pop esi
// 0059d7d2  5d                   pop ebp
// 0059d7d3  5b                   pop ebx
// 0059d7d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0059d7db  83c420               add esp, 0x20
// 0059d7de  c20400               ret 4

struct Base {
    unsigned words[77];
    int* vbtable;
    Base(void*, int);
    ~Base();
};

struct PartA {
    char data[32];
    PartA();
    ~PartA();
};

struct PartB {
    char data[12];
    PartB();
    ~PartB();
};

struct OwnerPart {
    char data[48];
    OwnerPart(void*);
    ~OwnerPart();
};

struct Settings {
    char data[252];
    Settings(int);
    ~Settings();
    void setPair(int, int);
    void setVector(const float*);
    void setFirst(float);
    void setSecond(float);
    void setFlag(int);
    void setMode(int);
    void setSource(void*);
};

struct Name {
    char data[48];
    Name();
    ~Name();
};

namespace std {
    template<class T> struct char_traits;
    template<class T> struct allocator;
    template<class T, class Traits, class Alloc> struct basic_string {
        char data[28];
        basic_string();
        ~basic_string();
    };
}

typedef std::basic_string<char, std::char_traits<char>,
                         std::allocator<char> > String;

extern const void* __cdecl getLocalScope();
extern const float vectorX;
extern const float vectorY;
extern const float vectorZ;
extern const float firstValue;
extern const float secondValue;

void callbackA();
void callbackB();

struct S : Base {
    char padding[104];
    PartA partA;
    PartB partB;
    unsigned secondaryTable;
    int indexA;
    int indexB;
    int count;
    int enabledA;
    int enabledB;
    int format;
    float valueA;
    float valueB;
    unsigned char flag;
    char align1[3];
    char ownerStorage[48];
    float valueC;
    char settingsStorage[252];
    int state;
    float scale;
    char gap1[8];
    float vector[3];
    char gap2[40];
    char nameStorage[48];
    unsigned char callbackFlagA;
    char align2[3];
    S* callbackOwnerA;
    void (*callbackFunctionA)();
    unsigned callbackDataA;
    unsigned callbackDataB;
    char gap3[5];
    unsigned char callbackFlagB;
    char align3[2];
    S* callbackOwnerB;
    void (*callbackFunctionB)();
    unsigned callbackDataC;
    unsigned callbackDataD;
    char gap4[4];
    char stringStorage[28];
    const void* scope;
    char tail[24];
    unsigned finalTable;

    S(int);
    void finish();

    unsigned& word(unsigned offset);
};

inline unsigned& S::word(unsigned offset)
{
    return *reinterpret_cast<unsigned*>(
        reinterpret_cast<char*>(this) + offset);
}

void* __cdecl operator new(unsigned, void*);

S::S(int initializeVirtualBases)
    : Base(reinterpret_cast<void*>(0x8329ec), 0), partA(), partB()
{
    if (initializeVirtualBases) {
        word(0x134) = 0x849e6c;
        finalTable = 0x846144;
    }

    indexA = -1;
    indexB = -1;
    count = 0;

    word(0) = 0x832d4c;
    word(0x10) = 0x832d3c;
    word(0x14) = 0x832d34;
    word(0x20) = 0x832d2c;
    word(0x24) = 0x832d1c;
    word(0x44) = 0x832d0c;
    word(0x64) = 0x832cfc;
    word(0x84) = 0x832cec;
    word(0xa4) = 0x832cdc;
    word(0xc4) = 0x832ccc;
    word(0x130) = 0x832cc0;
    word(0x1a0) = 0x832cb0;
    word(0x1c0) = 0x832ca4;
    secondaryTable = 0x832c8c;

    word(0x134 + vbtable[1]) = 0x832c80;
    word(0x134 + vbtable[2]) = 0x832c78;
    word(0x134 + vbtable[3]) = 0x832c5c;
    word(0x130 + vbtable[1]) = vbtable[1] - 0x2b8;
    word(0x130 + vbtable[2]) = vbtable[2] - 0x2c0;
    word(0x130 + vbtable[3]) = vbtable[3] - 0x2c8;

    enabledA = 1;
    enabledB = 1;
    format = 194;
    valueA = 0.0f;
    valueB = 0.0f;
    flag = 0;

    new (ownerStorage) OwnerPart(this);
    valueC = 0.0f;
    Settings* settings = new (settingsStorage) Settings(2);
    scale = 1.0f;
    state = 0;
    vector[0] = 0.0f;
    vector[1] = 0.0f;
    vector[2] = 0.0f;
    new (nameStorage) Name;

    callbackDataA = 0;
    callbackFunctionA = callbackA;
    callbackDataB = 0;
    callbackFlagA = 1;
    callbackOwnerA = this;

    callbackFunctionB = callbackB;
    callbackDataC = 0;
    callbackFlagB = 1;
    callbackOwnerB = this;
    callbackDataD = 0;

    new (stringStorage) String;
    scope = getLocalScope();

    settings->setPair(1, 3);
    settings->setPair(4, 4);
    float values[3] = { vectorX, vectorY, vectorZ };
    settings->setVector(values);
    settings->setFirst(firstValue);
    settings->setSecond(secondValue);
    settings->setFlag(0);
    settings->setMode(0);
    word(0x2cc) = reinterpret_cast<unsigned>(&partB);
    finish();
    settings->setSource(reinterpret_cast<char*>(this) + 8);
}
