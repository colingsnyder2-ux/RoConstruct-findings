// from server: 92% by king_originala
struct String {
    unsigned char storage[28];
};

extern void (__thiscall *construct_string)(String *);

struct Base {
    unsigned char storage[32];
    Base(int *, int *);
    ~Base();
};

struct S : Base {
    int value;
    String text;
    S(int);
};

S::S(int argument)
    : Base(&argument, &argument), value(argument)
{
    construct_string(&text);
}
