// from server: 44% by colin
struct PercentPanel {
    char pad[0xE8];
    int fieldE8;
    int fieldEC;
    int fieldF0;
    float fieldF4;
    float fieldF8;
    PercentPanel();
};

struct BasePanel {
    BasePanel();
};

struct String {
    char data[0x1C];
    String(const char*);
    ~String();
};

extern "C" void __stdcall sub_541BF0(void*);
extern "C" void __stdcall sub_542520(void*);

PercentPanel::PercentPanel()
{
    sub_542520(this);
    fieldE8 = 0x7a834c;
    *(int*)((char*)this + 0x00) = 0x7a8414;
    *(int*)((char*)this + 0x04) = 0x7a840c;
    *(int*)((char*)this + 0x10) = 0x7a8404;
    *(int*)((char*)this + 0x14) = 0x7a83f4;
    *(int*)((char*)this + 0x2c) = 0x7a83e4;
    *(int*)((char*)this + 0x44) = 0x7a83d4;
    *(int*)((char*)this + 0x5c) = 0x7a83c4;
    *(int*)((char*)this + 0x74) = 0x7a83b4;
    *(int*)((char*)this + 0x8c) = 0x7a83a4;
    fieldE8 = 0x7a839c;
    fieldEC = 0;
    fieldF0 = 0;
    fieldF4 = 0.0f;
    fieldF8 = 0.0f;
    String s("RelativePanel");
    sub_541BF0(&s);
    s.~String();
}
