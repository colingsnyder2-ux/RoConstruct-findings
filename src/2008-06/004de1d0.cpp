// from server: 47% by king_originala
struct Level {
    void append(const unsigned int* value);
    void __cdecl addQuad(unsigned int a, unsigned int b,
                         unsigned int c, unsigned int d);
};

void __cdecl Level::addQuad(unsigned int a, unsigned int b,
                           unsigned int c, unsigned int d)
{
    unsigned int first = a;

    a = (unsigned short)first;
    append(&a);

    a = (unsigned short)b;
    append(&a);

    a = (unsigned short)c;
    append(&a);

    a = (unsigned short)first;
    append(&a);

    a = (unsigned short)c;
    append(&a);

    a = (unsigned short)d;
    append(&a);
}
