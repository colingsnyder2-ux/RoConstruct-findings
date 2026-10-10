// from server: 55% by atomic.potato
extern "C" void __cdecl sub_40A950(int);

struct S
{
    int value;
    char padding[36];
    int status;
    int f(int);
};

int S::f(int statusCode)
{
    sub_40A950(statusCode);
    value = 0xA8DE48;
    status = statusCode;
    return (int)this;
}
