// from server: 85% by king_originala
extern float initialValue;

struct S {
    int count;
    int reserved;
    struct Record {
        float value;
        unsigned int a, b, c, d;
    } records[100];

    S();
};

S::S()
{
    float value = initialValue;
    count = 0;
    Record* p = records;
    int n = 99;
    do {
        p->value = value;
        p->a = 0xbf800000;
        p->b = 0xbf800000;
        p->c = 0xbf800000;
        p->d = 0xbf800000;
        ++p;
    } while (--n >= 0);
}
