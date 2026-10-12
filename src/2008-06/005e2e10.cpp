// from server: 82% by king_originala
struct Base {
    unsigned int words[76];
    ~Base();
};

struct Member {
    unsigned int words[4];
    ~Member();
};

struct Element {
    unsigned int words[2];
    ~Element();
};

struct Object {
    virtual ~Object();
    char padding[28];
    int m_x;
    void f(int);
};

struct S : Base {
    Member member;
    Element elements[2];
    Object* object;

    void setPart(int, int);
    ~S();
};

S::~S()
{
    words[0] = 0x83e354;
    words[4] = 0x83e344;
    words[5] = 0x83e33c;
    words[8] = 0x83e334;
    words[9] = 0x83e324;
    words[17] = 0x83e314;
    words[25] = 0x83e304;
    words[33] = 0x83e2f4;
    words[41] = 0x83e2e4;
    words[49] = 0x83e2d4;
    member.words[0] = 0x83e2bc;

    setPart(0, 0);
    setPart(1, 0);
    object->f(0);
    if (object)
        delete object;
    object = 0;
}
