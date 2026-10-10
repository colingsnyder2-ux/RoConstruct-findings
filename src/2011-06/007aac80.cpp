// from server: 91% by atomic.potato
extern "C" void* __cdecl sub_7aaba0();
extern "C" void __stdcall EnterCriticalSection(void*);
extern "C" void __stdcall LeaveCriticalSection(void*);

struct S
{
    int pad[6];
    int value;
};

void __cdecl f(int* p)
{
    S* s = (S*)sub_7aaba0();
    EnterCriticalSection(s);
    *p = s->value;
    s->value = (int)p;
    LeaveCriticalSection(s);
}
