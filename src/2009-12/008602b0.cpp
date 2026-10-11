// from server: 55% by atomic.potato
typedef int RECT;

extern "C" void __stdcall SetRectEmpty(RECT *);

typedef void (__stdcall *SetRectEmptyType)(RECT *);

SetRectEmptyType g_SetRectEmpty;
extern "C" void __cdecl ExternalCall();

struct S
{
    int a;
    int b;
    RECT c;
    int d;
    int e;
    RECT f;

    void Reset();
};

void S::Reset()
{
    ExternalCall();
    a = 0;
    d = 0;
    c = 0;
    e = -1;
    g_SetRectEmpty(&c);
    g_SetRectEmpty((RECT *)((char *)this + 0x28));
}
