// from server: 93% by king_originala
struct CString;
struct String;

extern void (__thiscall *copyCString)(CString *, const CString *);
extern void (__thiscall *destroyCString)(CString *);
extern void (__thiscall *destroyString)(String *);

struct CString
{
    char *data;
    CString(const CString &other);
    __declspec(nothrow) ~CString();
};

struct String
{
    unsigned char storage[32];
    ~String();
};

inline CString::CString(const CString &other)
{
    copyCString(this, &other);
}

inline CString::~CString()
{
    destroyCString(this);
}

inline String::~String()
{
    destroyString(this);
}

struct S
{
#define SLOT(n) virtual void slot##n();
    SLOT(0) SLOT(1) SLOT(2) SLOT(3) SLOT(4) SLOT(5)
    SLOT(6) SLOT(7) SLOT(8) SLOT(9) SLOT(10) SLOT(11)
    SLOT(12) SLOT(13) SLOT(14) SLOT(15) SLOT(16) SLOT(17)
    SLOT(18) SLOT(19) SLOT(20) SLOT(21) SLOT(22) SLOT(23)
    SLOT(24) SLOT(25) SLOT(26) SLOT(27) SLOT(28) SLOT(29)
    SLOT(30) SLOT(31) SLOT(32) SLOT(33) SLOT(34) SLOT(35)
    SLOT(36) SLOT(37) SLOT(38) SLOT(39) SLOT(40) SLOT(41)
    SLOT(42) SLOT(43) SLOT(44) SLOT(45) SLOT(46) SLOT(47)
    SLOT(48) SLOT(49) SLOT(50) SLOT(51) SLOT(52) SLOT(53)
    SLOT(54) SLOT(55) SLOT(56)
#undef SLOT
    virtual String getValue();
    void setValue(CString value);
    void updateValue(const String &value);
    void func_004416e0(CString value);
};

void S::func_004416e0(CString value)
{
    setValue(value);
    updateValue(getValue());
}
