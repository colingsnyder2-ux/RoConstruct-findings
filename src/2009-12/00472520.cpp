// from server: 86% by atomic.potato
struct S
{
    S(unsigned int, unsigned int, unsigned int);
};

S::S(unsigned int a, unsigned int b, unsigned int c)
{
    *(unsigned int*)this = b;
    *((unsigned int*)this + 1) = a;
    *((unsigned short*)this + 4) = 0;
    *((unsigned short*)this + 5) = 0;
    *((unsigned short*)this + 6) = 0;
    *((unsigned short*)this + 7) = 0;
    *((unsigned int*)this + 4) = c;
}
