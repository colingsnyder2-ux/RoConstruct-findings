// from server: 42% by atomic.potato
struct S {
    char pad[176];
    void* m_p;
    int f();
};

extern "C" void __stdcall OffsetRect(void*, int, int);

extern "C" void __cdecl f_7f3e30();
extern "C" void __cdecl f_84b270();
extern "C" void __cdecl f_926484();
extern "C" void __cdecl f_92648a();

struct T {
    char pad[4];
    int a;
    int b;
};

int S::f()
{
    f_7f3e30();
    T t1;
    f_92648a();
    T t2;
    f_84b270();
    int x = t2.a;
    int y = t2.b;
    OffsetRect(&t1, -y, -x);
    int* p = (int*)((char*)this + 176);
    int* q = (int*)*p;
    int (*fn)(void*, void*, int*) = (int (*)(void*, void*, int*))q[6];
    fn(q, &t1, 0);
    f_926484();
    return 0;
}
