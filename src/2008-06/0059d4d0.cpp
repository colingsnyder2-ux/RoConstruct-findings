// from server: 65% by king_originala
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

    callbackFunctionA = callbackA;
    callbackDataA = 0;
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
