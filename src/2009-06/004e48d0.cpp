// from server: 100% by tester
// roc 2009-06 004e48d0  unit: CRobloxWnd::UserInputJob  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e48d0
//
// 004e48d0  8b4918               mov ecx, dword ptr [ecx + 0x18]
// 004e48d3  8b542408             mov edx, dword ptr [esp + 8]
// 004e48d7  8b01                 mov eax, dword ptr [ecx]
// 004e48d9  8b4008               mov eax, dword ptr [eax + 8]
// 004e48dc  56                   push esi
// 004e48dd  8b742408             mov esi, dword ptr [esp + 8]
// 004e48e1  52                   push edx
// 004e48e2  56                   push esi
// 004e48e3  ffd0                 call eax
// 004e48e5  8bc6                 mov eax, esi
// 004e48e7  5e                   pop esi
// 004e48e8  c20800               ret 8

struct S
{
    int f(int a, int b);
};

int S::f(int a, int b)
{
    struct V
    {
        int **vtable;
    };

    V *p = *(V **)((char *)this + 0x18);
    typedef int (__thiscall *Fn)(V *, int, int);
    Fn fn = (Fn)p->vtable[2];
    fn(p, a, b);
    return a;
}