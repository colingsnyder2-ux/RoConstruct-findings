// from server: 98% by king_originala
struct String;

extern void (__thiscall *constructString)(String*, const char*);

struct String {
    void* data;
    String(const char*);
    String(const String&);
    ~String();
};

__forceinline String::String(const char* text)
{
    constructString(this, text);
}

struct Primary {
    virtual void dispatch();
    char padding[0x1c];
};

struct Secondary {
    virtual void dispatch();
    char padding[0xe8];
};

struct Tertiary {
    virtual void dispatch();
};

struct Base : Primary, Secondary, Tertiary {
    Base(int, int);
    ~Base();
    void setValue(String);
};

struct CSelectionPropGrid : Base {
    CSelectionPropGrid(int, int);
    virtual void dispatch();
};

CSelectionPropGrid::CSelectionPropGrid(int a, int b)
    : Base(a, b)
{
    setValue(String("(Texture)"));
}
