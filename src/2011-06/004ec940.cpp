// from server: 80% by atomic.potato
struct S {
    int a;
    int padding;
    int b;
    S();
};

S::S()
{
    a = 0;
    b = 0;
}
