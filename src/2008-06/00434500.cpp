// from server: 89% by king_originala
struct Base
{
    char storage[0xF4];
    Base();
};

struct S : Base
{
    unsigned int fields[8];
    S();
};

S::S()
{
    *(unsigned int*)this = 0x00812BC4;
    fields[0] = 0;
    fields[1] = 0;
    fields[2] = 0;
    fields[3] = 0;
    fields[4] = 0;
    fields[5] = 0;
    fields[6] = 0;
    fields[7] = 0;
}
