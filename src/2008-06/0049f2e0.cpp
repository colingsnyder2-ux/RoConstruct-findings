// from server: 96% by king_originala
typedef unsigned long DWORD;

extern char table000, table010, table014, table020, table024;
extern char table044, table064, table084, table0a4, table0c4;
extern char table130, table134, table144;

struct Endpoint
{
    virtual void f00();
    virtual void f01();
    virtual void f02();
    virtual void f03();
    virtual void f04();
    virtual void f05();
    virtual void f06();
    virtual void f07();
    virtual void f08();
    virtual void f09();
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
    virtual void release(DWORD, DWORD, int, int);
};

struct Base
{
    char storage[0x150];
    ~Base();
};

struct Client : Base
{
    ~Client();
};

Client::~Client()
{
    *reinterpret_cast<volatile DWORD*>(storage + 0x000) = reinterpret_cast<DWORD>(&table000);
    *reinterpret_cast<volatile DWORD*>(storage + 0x010) = reinterpret_cast<DWORD>(&table010);
    *reinterpret_cast<volatile DWORD*>(storage + 0x014) = reinterpret_cast<DWORD>(&table014);
    *reinterpret_cast<volatile DWORD*>(storage + 0x020) = reinterpret_cast<DWORD>(&table020);
    *reinterpret_cast<volatile DWORD*>(storage + 0x024) = reinterpret_cast<DWORD>(&table024);
    *reinterpret_cast<volatile DWORD*>(storage + 0x044) = reinterpret_cast<DWORD>(&table044);
    *reinterpret_cast<volatile DWORD*>(storage + 0x064) = reinterpret_cast<DWORD>(&table064);
    *reinterpret_cast<volatile DWORD*>(storage + 0x084) = reinterpret_cast<DWORD>(&table084);
    *reinterpret_cast<volatile DWORD*>(storage + 0x0a4) = reinterpret_cast<DWORD>(&table0a4);
    *reinterpret_cast<volatile DWORD*>(storage + 0x0c4) = reinterpret_cast<DWORD>(&table0c4);
    *reinterpret_cast<volatile DWORD*>(storage + 0x130) = reinterpret_cast<DWORD>(&table130);
    *reinterpret_cast<volatile DWORD*>(storage + 0x134) = reinterpret_cast<DWORD>(&table134);
    *reinterpret_cast<volatile DWORD*>(storage + 0x144) = reinterpret_cast<DWORD>(&table144);

    DWORD second = *reinterpret_cast<volatile DWORD*>(storage + 0x14c);
    Endpoint* endpoint = *reinterpret_cast<Endpoint* volatile*>(storage + 0x140);
    endpoint->release(
        *reinterpret_cast<volatile DWORD*>(storage + 0x148),
        second,
        1,
        0);
}
