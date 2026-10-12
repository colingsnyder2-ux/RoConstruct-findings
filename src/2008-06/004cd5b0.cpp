// from server: 73% by king_originala
struct Base
{
    unsigned int words[78];
    Base();
    ~Base();
};

struct Member
{
    unsigned int storage[3];
    Member(const char&, const char&);
    ~Member();
};

struct String
{
    unsigned char storage[28];

    String(const char* text)
    {
        typedef void (__thiscall *Constructor)(String*, const char*);
        ((Constructor*)0x802458)[0](this, text);
    }

    ~String()
    {
        typedef void (__thiscall *Destructor)(String*);
        ((Destructor*)0x802468)[0](this);
    }
};

struct Sender : Base
{
    Member member;

    Sender();
    void setName(const String&);
};

Sender::Sender()
    : Base(),
      member(
          (words[0] = 0x826aac,
           words[4] = 0x826aa0,
           words[5] = 0x826a98,
           words[8] = 0x826a90,
           words[9] = 0x826a80,
           words[17] = 0x826a70,
           words[25] = 0x826a60,
           words[33] = 0x826a50,
           words[41] = 0x826a40,
           words[49] = 0x826a30,
           words[76] = 0x826a24,
           words[77] = 0x826a18,
           char()),
          char())
{
    String name((const char*)0x826a04);
    setName(name);
}
