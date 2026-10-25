// from server: 100% by king_originala
// roc 2008-06 00457330  unit: RBX::VInstance::?$MarshaledListener  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457330
//
// 00457330  6aff                 push -1
// 00457332  6883327c00           push 0x7c3283
// 00457337  64a100000000         mov eax, dword ptr fs:[0]
// 0045733d  50                   push eax
// 0045733e  64892500000000       mov dword ptr fs:[0], esp
// 00457345  51                   push ecx
// 00457346  56                   push esi
// 00457347  8bf1                 mov esi, ecx
// 00457349  57                   push edi
// 0045734a  89742408             mov dword ptr [esp + 8], esi
// 0045734e  c7064c888100         mov dword ptr [esi], 0x81884c
// 00457354  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 00457357  c744241401000000     mov dword ptr [esp + 0x14], 1
// 0045735f  85c9                 test ecx, ecx
// 00457361  7406                 je 0x457369
// 00457363  56                   push esi
// 00457364  e847010000           call 0x4574b0
// 00457369  8b7e14               mov edi, dword ptr [esi + 0x14]
// 0045736c  85ff                 test edi, edi
// 0045736e  742a                 je 0x45739a
// 00457370  8d4704               lea eax, [edi + 4]
// 00457373  83c9ff               or ecx, 0xffffffff
// 00457376  f00fc108             lock xadd dword ptr [eax], ecx
// 0045737a  751e                 jne 0x45739a
// 0045737c  8b17                 mov edx, dword ptr [edi]
// 0045737e  8b4204               mov eax, dword ptr [edx + 4]
// 00457381  8bcf                 mov ecx, edi
// 00457383  ffd0                 call eax
// 00457385  8d4f08               lea ecx, [edi + 8]
// 00457388  83caff               or edx, 0xffffffff
// 0045738b  f00fc111             lock xadd dword ptr [ecx], edx
// 0045738f  7509                 jne 0x45739a
// 00457391  8b07                 mov eax, dword ptr [edi]
// 00457393  8b5008               mov edx, dword ptr [eax + 8]
// 00457396  8bcf                 mov ecx, edi
// 00457398  ffd2                 call edx
// 0045739a  8b7e08               mov edi, dword ptr [esi + 8]
// 0045739d  c644241400           mov byte ptr [esp + 0x14], 0
// 004573a2  85ff                 test edi, edi
// 004573a4  742a                 je 0x4573d0
// 004573a6  8d4704               lea eax, [edi + 4]
// 004573a9  83c9ff               or ecx, 0xffffffff
// 004573ac  f00fc108             lock xadd dword ptr [eax], ecx
// 004573b0  751e                 jne 0x4573d0
// 004573b2  8b17                 mov edx, dword ptr [edi]
// 004573b4  8b4204               mov eax, dword ptr [edx + 4]
// 004573b7  8bcf                 mov ecx, edi
// 004573b9  ffd0                 call eax
// 004573bb  8d4f08               lea ecx, [edi + 8]
// 004573be  83caff               or edx, 0xffffffff
// 004573c1  f00fc111             lock xadd dword ptr [ecx], edx
// 004573c5  7509                 jne 0x4573d0
// 004573c7  8b07                 mov eax, dword ptr [edi]
// 004573c9  8b5008               mov edx, dword ptr [eax + 8]
// 004573cc  8bcf                 mov ecx, edi
// 004573ce  ffd2                 call edx
// 004573d0  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004573d4  c70660f88000         mov dword ptr [esi], 0x80f860
// 004573da  5f                   pop edi
// 004573db  5e                   pop esi
// 004573dc  64890d00000000       mov dword ptr fs:[0], ecx
// 004573e3  83c410               add esp, 0x10
// 004573e6  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

struct Listener;

struct Owner {
    void detach(Listener*);
};

struct Base {
    virtual ~Base();
};

inline Base::~Base()
{
}

struct Listener : Base {
    Shared first;
    Owner* owner;
    void* secondObject;
    Control* secondControl;
    virtual ~Listener();
};

Listener::~Listener()
{
    if (owner)
        owner->detach(this);

    Control* p = secondControl;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}
