// from server: 96% by king_originala
struct Text {
    char storage[28];
};

extern const char *(__thiscall *textString)(const Text *);

struct Name {
    int header;
    Text text;
};

struct Object {
    virtual void first();
    virtual bool value();
    Name *name;
};

struct Primary {
    virtual ~Primary();
    char padding[0x1C];
};

struct Secondary {
    virtual ~Secondary();
    char padding04[0xD8];
    int flag;
    char paddingE0[0x20];
};

struct Base : Primary, Secondary {
    Base(const char *, int, int);
    virtual ~Base();
    void OnValueChanged(int);
};

struct Helper {
    virtual ~Helper();
    char padding[0x1C];
    Helper(Object *, int);
};

struct Combined : Base, Helper {
    Combined(const char *, Object *, int);
};

struct S : Combined {
    Object *object;
    S(Object *, int);
    virtual ~S();
};

__forceinline Combined::Combined(const char *name, Object *p, int n)
    : Base(name, 0, 0), Helper(p, n)
{
    flag = 1;
}

S::S(Object *p, int n)
    : Combined(textString(&p->name->text), p, n), object(p)
{
    OnValueChanged(p->value());
}
