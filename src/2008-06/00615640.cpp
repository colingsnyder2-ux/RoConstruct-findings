// from server: 68% by colin
struct Result {
    int value;
    Result(const Result&);
    ~Result();
};

struct Interface {
    virtual void slot0() = 0;
    virtual void slot1() = 0;
    virtual Result get(int) = 0;
};

struct S {
    char padding[24];
    Interface* iface;
};

extern "C" void __stdcall string_copy(void*, const void*);
extern "C" void __stdcall string_destroy(void*);

struct String {
    char data[28];
    String(const String&);
    ~String();
};

struct Target {
    char pad[16];
    void assign(const String&);
};

struct Holder {
    String str;
    Target* target;
    void set(const String&, int);
};

void Holder::set(const String& source, int)
{
    String tmp(source);
    target->assign(tmp);
}
