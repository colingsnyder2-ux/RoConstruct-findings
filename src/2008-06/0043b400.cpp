// from server: 96% by king_originala
struct String {
    char padding[4];
};

typedef const char* (__thiscall *StringData)(const String*);
extern StringData stringData;

struct Text;
typedef void (__thiscall *TextInit)(Text*, const char*);
extern TextInit textInit;

struct Text {
    void* data;
    Text(const char*);
    Text(const Text&);
    ~Text();
};

inline Text::Text(const char* value) {
    textInit(this, value);
}

struct Source {
    virtual ~Source();
    virtual bool value();
    String* name;
};

struct Primary {
    virtual ~Primary();
    char padding[0x1c];
};

struct Secondary {
    virtual ~Secondary();
    char padding[0xd8];
    int flag;
    char tail[0x18];
};

struct CXTPPropertyGridItem : Primary, Secondary {
    CXTPPropertyGridItem(Text, int);
    virtual ~CXTPPropertyGridItem();
    void SetValue(int);
};

struct Extra {
    virtual ~Extra();
    char padding[0x1c];
    Extra(Source*, int);
};

struct S : CXTPPropertyGridItem, Extra {
    Source* source;
    S(Source*, int);
    virtual ~S();
};

S::S(Source* value, int argument)
    : CXTPPropertyGridItem(
          Text(stringData(reinterpret_cast<const String*>(
              reinterpret_cast<const char*>(value->name) + 4))), 0),
      Extra(value, argument)
{
    flag = 1;
    source = value;
    SetValue(value->value());
}
