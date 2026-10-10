// from server: 54% by colin
struct GuiItem {
    virtual void f0();
    virtual void f1();
    virtual void f2();
    virtual void f3();
    virtual void f4();
    virtual void f5();
    virtual void f6();
    virtual void f7();
    virtual void f8();
    virtual void f9();
    virtual void f10();
    virtual void f11();
    virtual void f12();
    virtual void f13();
    virtual void f14();
    virtual void f15();
    virtual void f16();
    virtual void f17();
    virtual void f18();
    virtual void f19();
    virtual void f20();
    virtual void f21();
    virtual void f22();
    virtual void f23();
    virtual void f24();
    virtual void f25();
    virtual void getSize(void* out);
};

struct TextDisplay : GuiItem {
    char pad0[0x11c - sizeof(GuiItem)];
    char m_str1[0x10];
    char m_str2[0x10];
    int m_int;
    void construct(void* arg);
};

extern "C" void __stdcall sub_555600(TextDisplay* self, void* a, void* b, void* c, void* d, void* e);
extern "C" void __stdcall sub_77e6ac(void* p);

void TextDisplay::construct(void* arg)
{
    char buf[0x1c];
    getSize(buf);
    sub_555600(this, arg, buf, &m_str1[0], &m_str2[0], &m_int);
    sub_77e6ac(buf);
}
