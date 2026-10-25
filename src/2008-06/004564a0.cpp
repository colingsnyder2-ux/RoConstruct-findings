// from server: 100% by king_originala
// roc 2008-06 004564a0  unit: CRobloxReportDocView  size: 197 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004564a0
//
// 004564a0  6aff                 push -1
// 004564a2  6813247c00           push 0x7c2413
// 004564a7  64a100000000         mov eax, dword ptr fs:[0]
// 004564ad  50                   push eax
// 004564ae  64892500000000       mov dword ptr fs:[0], esp
// 004564b5  83ec08               sub esp, 8
// 004564b8  56                   push esi
// 004564b9  8bf1                 mov esi, ecx
// 004564bb  57                   push edi
// 004564bc  89742408             mov dword ptr [esp + 8], esi
// 004564c0  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 004564c4  83ec08               sub esp, 8
// 004564c7  8bc4                 mov eax, esp
// 004564c9  8908                 mov dword ptr [eax], ecx
// 004564cb  8b542430             mov edx, dword ptr [esp + 0x30]
// 004564cf  895004               mov dword ptr [eax + 4], edx
// 004564d2  8b442430             mov eax, dword ptr [esp + 0x30]
// 004564d6  c744242000000000     mov dword ptr [esp + 0x20], 0
// 004564de  89642414             mov dword ptr [esp + 0x14], esp
// 004564e2  85c0                 test eax, eax
// 004564e4  740c                 je 0x4564f2
// 004564e6  83c004               add eax, 4
// 004564e9  b901000000           mov ecx, 1
// 004564ee  f00fc108             lock xadd dword ptr [eax], ecx
// 004564f2  8d4e7c               lea ecx, [esi + 0x7c]
// 004564f5  e816e30f00           call 0x554810
// 004564fa  8bce                 mov ecx, esi
// 004564fc  c644241801           mov byte ptr [esp + 0x18], 1
// 00456501  e83a0e2700           call 0x6c7340
// 00456506  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0045650a  8b542420             mov edx, dword ptr [esp + 0x20]
// 0045650e  c706a4848100         mov dword ptr [esi], 0x8184a4
// 00456514  899684000000         mov dword ptr [esi + 0x84], edx
// 0045651a  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 00456522  85ff                 test edi, edi
// 00456524  742a                 je 0x456550
// 00456526  8d4704               lea eax, [edi + 4]
// 00456529  83c9ff               or ecx, 0xffffffff
// 0045652c  f00fc108             lock xadd dword ptr [eax], ecx
// 00456530  751e                 jne 0x456550
// 00456532  8b17                 mov edx, dword ptr [edi]
// 00456534  8b4204               mov eax, dword ptr [edx + 4]
// 00456537  8bcf                 mov ecx, edi
// 00456539  ffd0                 call eax
// 0045653b  8d4f08               lea ecx, [edi + 8]
// 0045653e  83caff               or edx, 0xffffffff
// 00456541  f00fc111             lock xadd dword ptr [ecx], edx
// 00456545  7509                 jne 0x456550
// 00456547  8b07                 mov eax, dword ptr [edi]
// 00456549  8b5008               mov edx, dword ptr [eax + 8]
// 0045654c  8bcf                 mov ecx, edi
// 0045654e  ffd2                 call edx
// 00456550  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00456554  5f                   pop edi
// 00456555  8bc6                 mov eax, esi
// 00456557  64890d00000000       mov dword ptr fs:[0], ecx
// 0045655e  5e                   pop esi
// 0045655f  83c414               add esp, 0x14
// 00456562  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared
{
    void* object;
    Control* control;

    Shared(const Shared& other)
        : object(other.object), control(other.control)
    {
        if (control)
            _InterlockedIncrement(&control->strong);
    }

    ~Shared()
    {
        Control* p = control;
        if (p && _InterlockedDecrement(&p->strong) == 0)
        {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
};

struct Holder
{
    Shared value;
    Holder(Shared);
    ~Holder();
};

struct Base
{
    virtual void method();
    char storage[120];
    Base();
};

struct CRobloxReportDocView : Holder, Base
{
    int value;
    CRobloxReportDocView(int, Shared);
};

CRobloxReportDocView::CRobloxReportDocView(int n, Shared p)
    : Holder(p), Base(), value(n)
{
}
