// from server: 73% by atomic.potato
extern "C" void __cdecl sub_0071C120(void*, void*, unsigned int, unsigned int, unsigned int);
extern "C" void __cdecl sub_007F4929(void*);

void* const g_00B95960 = (void*)0x00B95960;
void* const g_009DF8C8 = (void*)0x009DF8C8;
void* const g_009D1FDC = (void*)0x009D1FDC;
void* const g_00987EE0 = (void*)0x00987EE0;

struct S
{
    void f();
};

void S::f()
{
    sub_0071C120(g_00B95960, g_009DF8C8, (unsigned int)0x94, 0x0f, 0);
    sub_007F4929(g_00987EE0);
}
