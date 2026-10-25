// from server: 100% by king_originala
// roc 2008-06 00457590  unit: RBX::VInstance::?$MarshaledListener  size: 183 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00457590
//
// 00457590  6aff                 push -1
// 00457592  6883327c00           push 0x7c3283
// 00457597  64a100000000         mov eax, dword ptr fs:[0]
// 0045759d  50                   push eax
// 0045759e  64892500000000       mov dword ptr fs:[0], esp
// 004575a5  51                   push ecx
// 004575a6  56                   push esi
// 004575a7  8bf1                 mov esi, ecx
// 004575a9  57                   push edi
// 004575aa  89742408             mov dword ptr [esp + 8], esi
// 004575ae  c70658888100         mov dword ptr [esi], 0x818858
// 004575b4  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004575b7  c744241401000000     mov dword ptr [esp + 0x14], 1
// 004575bf  85c9                 test ecx, ecx
// 004575c1  7406                 je 0x4575c9
// 004575c3  56                   push esi
// 004575c4  e8e7feffff           call 0x4574b0
// 004575c9  8b7e14               mov edi, dword ptr [esi + 0x14]
// 004575cc  85ff                 test edi, edi
// 004575ce  742a                 je 0x4575fa
// 004575d0  8d4704               lea eax, [edi + 4]
// 004575d3  83c9ff               or ecx, 0xffffffff
// 004575d6  f00fc108             lock xadd dword ptr [eax], ecx
// 004575da  751e                 jne 0x4575fa
// 004575dc  8b17                 mov edx, dword ptr [edi]
// 004575de  8b4204               mov eax, dword ptr [edx + 4]
// 004575e1  8bcf                 mov ecx, edi
// 004575e3  ffd0                 call eax
// 004575e5  8d4f08               lea ecx, [edi + 8]
// 004575e8  83caff               or edx, 0xffffffff
// 004575eb  f00fc111             lock xadd dword ptr [ecx], edx
// 004575ef  7509                 jne 0x4575fa
// 004575f1  8b07                 mov eax, dword ptr [edi]
// 004575f3  8b5008               mov edx, dword ptr [eax + 8]
// 004575f6  8bcf                 mov ecx, edi
// 004575f8  ffd2                 call edx
// 004575fa  8b7e08               mov edi, dword ptr [esi + 8]
// 004575fd  c644241400           mov byte ptr [esp + 0x14], 0
// 00457602  85ff                 test edi, edi
// 00457604  742a                 je 0x457630
// 00457606  8d4704               lea eax, [edi + 4]
// 00457609  83c9ff               or ecx, 0xffffffff
// 0045760c  f00fc108             lock xadd dword ptr [eax], ecx
// 00457610  751e                 jne 0x457630
// 00457612  8b17                 mov edx, dword ptr [edi]
// 00457614  8b4204               mov eax, dword ptr [edx + 4]
// 00457617  8bcf                 mov ecx, edi
// 00457619  ffd0                 call eax
// 0045761b  8d4f08               lea ecx, [edi + 8]
// 0045761e  83caff               or edx, 0xffffffff
// 00457621  f00fc111             lock xadd dword ptr [ecx], edx
// 00457625  7509                 jne 0x457630
// 00457627  8b07                 mov eax, dword ptr [edi]
// 00457629  8b5008               mov edx, dword ptr [eax + 8]
// 0045762c  8bcf                 mov ecx, edi
// 0045762e  ffd2                 call edx
// 00457630  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00457634  c70660f88000         mov dword ptr [esi], 0x80f860
// 0045763a  5f                   pop edi
// 0045763b  5e                   pop esi
// 0045763c  64890d00000000       mov dword ptr fs:[0], ecx
// 00457643  83c410               add esp, 0x10
// 00457646  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
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

struct Base {
    virtual void unused() = 0;
    ~Base();
};

inline Base::~Base()
{
}

struct Listener;

struct Owner {
    void detach(Listener*);
};

struct Listener : Base {
    Shared first;
    Owner* owner;
    void* object;
    Control* control;
    virtual ~Listener();
};

Listener::~Listener()
{
    if (owner)
        owner->detach(this);

    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}
