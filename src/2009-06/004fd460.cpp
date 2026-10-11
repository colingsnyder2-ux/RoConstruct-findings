// from server: 75% by atomic.potato
extern "C" unsigned long __stdcall inet_addr(const char*);

struct NetworkOwnerJob {
    void sub_004fd3e0(int, int, int, int, int, int);
    void f(int, int, int, int, int, int);
};

void NetworkOwnerJob::f(int a, int b, int c, int d, int e, int f)
{
    unsigned long r = inet_addr((const char*)f);
    sub_004fd3e0(a, b, c, d, e, (int)r);
}
