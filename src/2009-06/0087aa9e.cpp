// from server: 53% by atomic.potato
extern "C" void __cdecl sub_0071a57a(int);

struct S {
    void f(void* p);
};

void S::f(void* p)
{
    int v = *(int*)((char*)p - 4);
    sub_0071a57a(v ^ (int)p);
}
