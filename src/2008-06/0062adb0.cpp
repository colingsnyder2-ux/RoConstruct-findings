// from server: 97% by king_originala
struct String {
    unsigned char data[28];
    String(const char*);
    ~String();
};

typedef void (__thiscall *StringConstructor)(String*, const char*);
typedef void (__thiscall *StringDestructor)(String*);

extern StringConstructor const stringConstructor;
extern StringDestructor const stringDestructor;

inline String::String(const char* text) {
    stringConstructor(this, text);
}

inline String::~String() {
    stringDestructor(this);
}

struct Base {
    volatile unsigned words[78];
    Base();
    ~Base();
    void setName(const String&);
};

struct State {
    volatile int first;
    volatile int second;
    volatile unsigned pointer;
    volatile float value;
    State();
    ~State();
};

inline State::State()
    : first(-1), second(-1), pointer(0) {
    value = 0.0f;
}

struct S : Base {
    State state;
    volatile float x;
    volatile float y;
    volatile float z;
    volatile float radius;
    volatile float pressure;
    S();
};

S::S() {
    words[0] = 0x845ea4;
    words[4] = 0x845e94;
    words[5] = 0x845e8c;
    words[8] = 0x845e84;
    words[9] = 0x845e74;
    words[17] = 0x845e64;
    words[25] = 0x845e54;
    words[33] = 0x845e44;
    words[41] = 0x845e34;
    words[49] = 0x845e24;
    words[76] = 0x845e18;
    words[77] = 0x845e00;
    x = 0.0f;
    y = 0.0f;
    z = 0.0f;
    radius = *(const float*)0x826e6c;
    pressure = *(const float*)0x845dec;
    String name((const char*)0x845df0);
    setName(name);
}
