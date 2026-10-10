// from server: 61% by atomic.potato
struct S
{
    unsigned char field_158;
    void f();
};

extern "C" unsigned char sub_42afc0(unsigned char *);
extern "C" void sub_5c9170(S *, unsigned char *);

void S::f()
{
    unsigned char value = sub_42afc0(&field_158);
    sub_5c9170(this, &value);
}
