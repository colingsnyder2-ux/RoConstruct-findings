// from server: 100% by king_originala
// roc 2008-06 0057b170  unit: RBX::DataModel  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0057b170
//
// 0057b170  8b442404             mov eax, dword ptr [esp + 4]
// 0057b174  56                   push esi
// 0057b175  8bf1                 mov esi, ecx
// 0057b177  8906                 mov dword ptr [esi], eax
// 0057b179  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057b17d  894604               mov dword ptr [esi + 4], eax
// 0057b180  85c0                 test eax, eax
// 0057b182  7410                 je 0x57b194
// 0057b184  83c004               add eax, 4
// 0057b187  b901000000           mov ecx, 1
// 0057b18c  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b190  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0057b194  8b542410             mov edx, dword ptr [esp + 0x10]
// 0057b198  895608               mov dword ptr [esi + 8], edx
// 0057b19b  85c0                 test eax, eax
// 0057b19d  7434                 je 0x57b1d3
// 0057b19f  57                   push edi
// 0057b1a0  8bf8                 mov edi, eax
// 0057b1a2  83c004               add eax, 4
// 0057b1a5  83c9ff               or ecx, 0xffffffff
// 0057b1a8  f00fc108             lock xadd dword ptr [eax], ecx
// 0057b1ac  751e                 jne 0x57b1cc
// 0057b1ae  8b17                 mov edx, dword ptr [edi]
// 0057b1b0  8b4204               mov eax, dword ptr [edx + 4]
// 0057b1b3  8bcf                 mov ecx, edi
// 0057b1b5  ffd0                 call eax
// 0057b1b7  8d4f08               lea ecx, [edi + 8]
// 0057b1ba  83caff               or edx, 0xffffffff
// 0057b1bd  f00fc111             lock xadd dword ptr [ecx], edx
// 0057b1c1  7509                 jne 0x57b1cc
// 0057b1c3  8b07                 mov eax, dword ptr [edi]
// 0057b1c5  8b5008               mov edx, dword ptr [eax + 8]
// 0057b1c8  8bcf                 mov ecx, edi
// 0057b1ca  ffd2                 call edx
// 0057b1cc  5f                   pop edi
// 0057b1cd  8bc6                 mov eax, esi
// 0057b1cf  5e                   pop esi
// 0057b1d0  c20c00               ret 0xc
// 0057b1d3  8bc6                 mov eax, esi
// 0057b1d5  5e                   pop esi
// 0057b1d6  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;
};

struct Pointer
{
    void* object;
    Control* control;

    ~Pointer();
};

inline Pointer::~Pointer()
{
    if (control)
    {
        Control* c = control;
        if (_InterlockedDecrement(&c->strong) == 0)
        {
            c->dispose();
            if (_InterlockedDecrement(&c->weak) == 0)
                c->destroy();
        }
    }
}

struct S
{
    void* object;
    Control* control;
    void* extra;

    S(Pointer p, void* e);
};

S::S(Pointer p, void* e)
{
    object = p.object;
    control = p.control;
    if (p.control)
        _InterlockedIncrement(&p.control->strong);
    extra = e;
}
