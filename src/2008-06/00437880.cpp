// from server: 84% by king_originala
extern "C" int (__cdecl *formatText)(char*, const char*, ...);

struct Text;
extern void (__thiscall *constructText)(Text*, const char*);

struct Text
{
    void* data;

    Text(const char*, Text* volatile*);
    Text(const Text&);
};

__forceinline Text::Text(const char* value, Text* volatile* temporary)
{
    *temporary = this;
    constructText(this, value);
}

struct S
{
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void slot3();
    virtual void slot4();
    virtual void slot5();
    virtual void slot6();
    virtual void slot7();
    virtual void slot8();
    virtual void slot9();
    virtual void slot10();
    virtual void slot11();
    virtual void slot12();
    virtual void slot13();
    virtual void slot14();
    virtual void slot15();
    virtual void slot16();
    virtual void slot17();
    virtual void slot18();
    virtual void slot19();
    virtual void slot20();
    virtual void slot21();
    virtual void slot22();
    virtual void slot23();
    virtual void setValue(Text);

    void update(const float* value);
};

void S::update(const float* value)
{
    char buffer[32];
    formatText(buffer, "%.3g", *value);
    setValue(Text(buffer, reinterpret_cast<Text* volatile*>(static_cast<void*>(&value))));
}
