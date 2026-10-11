// from server: 52% by atomic.potato
extern "C" {
    typedef unsigned int DWORD;
}

struct String {
    char pad[0x1c];
    String(const char*);
    ~String();
};

struct Base {
    void init(const String*);
};

struct Derived : Base {
    Derived();
};

Derived::Derived() {
    String s("no random access");
    init(&s);
    *(void**)this = (void*)0xbd4454;
}
