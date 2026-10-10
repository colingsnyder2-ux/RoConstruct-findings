// from server: 51% by colin
struct StreamBuf {
    int sbumpc();
};

struct String {
    char data[28];
    String();
    String(const char*);
    String& operator+=(char);
};

struct Verb {
    char pad[4];
    StreamBuf* stream;
    void parseTag();
    void doIt(int);
};

extern "C" int (__stdcall *sbumpc_ptr)();
extern "C" int (__stdcall *peek_ptr)();
extern "C" int (__stdcall *get_ptr)();
extern "C" int (__stdcall *put_ptr)();
extern "C" void (__stdcall *string_ctor_cstr)(String*, const char*);
extern "C" void (__stdcall *string_ctor)(String*);
extern "C" String& (__stdcall *string_append)(String*, char);
extern "C" void (__stdcall *throw_fn)(void*, void*);

void Verb::doIt(int arg)
{
    String s;
    int c;
    int ch;

    parseTag();

    c = ((int (__thiscall*)(StreamBuf*))peek_ptr)(stream);
    if ((char)c != '<') {
        string_ctor_cstr(&s, "tag expected");
        throw_fn((void*)0x8410c0, &s);
    }

    ((int (__thiscall*)(StreamBuf*))get_ptr)(stream);

    ((int (__thiscall*)(StreamBuf*))get_ptr)(stream);
    ch = ((int (__thiscall*)(StreamBuf*))peek_ptr)(stream);
    while ((char)ch != '>') {
        ((int (__thiscall*)(StreamBuf*))get_ptr)(stream);
        ch = ((int (__thiscall*)(StreamBuf*))peek_ptr)(stream);
    }
}
