// from server: 90% by atomic.potato
struct S
{
    int a;
    int b;
    int pad[4];
    int c;
    int d;
    int pad2[28];
    int e;
    int f;
    void set();
};

void S::set()
{
    a = 0x9e6994;
    b = 0x9e6988;
    c = 0x9e697c;
    d = 0x9e6974;
    e = 0x9e6964;
    f = 0x9e694c;
}
