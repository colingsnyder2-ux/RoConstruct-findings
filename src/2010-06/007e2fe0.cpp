// from server: 34% by atomic.potato
typedef unsigned int DWORD;

extern "C" void sub_7e2fc0(void *);

struct S
{
    int value;
    S();
};

S::S()
{
    sub_7e2fc0(this);
}
