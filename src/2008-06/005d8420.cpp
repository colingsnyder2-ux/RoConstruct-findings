// from server: 100% by king_originala
// roc 2008-06 005d8420  unit: RBX::Humanoid  size: 250 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005d8420
//
// 005d8420  6aff                 push -1
// 005d8422  68c15d7d00           push 0x7d5dc1
// 005d8427  64a100000000         mov eax, dword ptr fs:[0]
// 005d842d  50                   push eax
// 005d842e  64892500000000       mov dword ptr fs:[0], esp
// 005d8435  83ec14               sub esp, 0x14
// 005d8438  807c242800           cmp byte ptr [esp + 0x28], 0
// 005d843d  56                   push esi
// 005d843e  57                   push edi
// 005d843f  c744240800000000     mov dword ptr [esp + 8], 0
// 005d8447  744e                 je 0x5d8497
// 005d8449  8d44240c             lea eax, [esp + 0xc]
// 005d844d  50                   push eax
// 005d844e  e8fdadedff           call 0x4b3250
// 005d8453  d90504e78100         fld dword ptr [0x81e704]
// 005d8459  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 005d845d  d91c24               fstp dword ptr [esp]
// 005d8460  be01000000           mov esi, 1
// 005d8465  89742428             mov dword ptr [esp + 0x28], esi
// 005d8469  e872cb0000           call 0x5e4fe0
// 005d846e  8b7c242c             mov edi, dword ptr [esp + 0x2c]
// 005d8472  8b442410             mov eax, dword ptr [esp + 0x10]
// 005d8476  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005d847a  890f                 mov dword ptr [edi], ecx
// 005d847c  894704               mov dword ptr [edi + 4], eax
// 005d847f  85c0                 test eax, eax
// 005d8481  740d                 je 0x5d8490
// 005d8483  83c004               add eax, 4
// 005d8486  8bd6                 mov edx, esi
// 005d8488  f00fc110             lock xadd dword ptr [eax], edx
// 005d848c  8b442410             mov eax, dword ptr [esp + 0x10]
// 005d8490  c644242400           mov byte ptr [esp + 0x24], 0
// 005d8495  eb3c                 jmp 0x5d84d3
// 005d8497  8d442414             lea eax, [esp + 0x14]
// 005d849b  50                   push eax
// 005d849c  e80f9fedff           call 0x4b23b0
// 005d84a1  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 005d84a5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005d84a9  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005d84ad  83c404               add esp, 4
// 005d84b0  890f                 mov dword ptr [edi], ecx
// 005d84b2  894704               mov dword ptr [edi + 4], eax
// 005d84b5  be01000000           mov esi, 1
// 005d84ba  85c0                 test eax, eax
// 005d84bc  740d                 je 0x5d84cb
// 005d84be  83c004               add eax, 4
// 005d84c1  8bd6                 mov edx, esi
// 005d84c3  f00fc110             lock xadd dword ptr [eax], edx
// 005d84c7  8b442418             mov eax, dword ptr [esp + 0x18]
// 005d84cb  c744242400000000     mov dword ptr [esp + 0x24], 0
// 005d84d3  89742408             mov dword ptr [esp + 8], esi
// 005d84d7  85c0                 test eax, eax
// 005d84d9  742c                 je 0x5d8507
// 005d84db  8bf0                 mov esi, eax
// 005d84dd  83c9ff               or ecx, 0xffffffff
// 005d84e0  83c004               add eax, 4
// 005d84e3  f00fc108             lock xadd dword ptr [eax], ecx
// 005d84e7  751e                 jne 0x5d8507
// 005d84e9  8b16                 mov edx, dword ptr [esi]
// 005d84eb  8b4204               mov eax, dword ptr [edx + 4]
// 005d84ee  8bce                 mov ecx, esi
// 005d84f0  ffd0                 call eax
// 005d84f2  83caff               or edx, 0xffffffff
// 005d84f5  8d4e08               lea ecx, [esi + 8]
// 005d84f8  f00fc111             lock xadd dword ptr [ecx], edx
// 005d84fc  7509                 jne 0x5d8507
// 005d84fe  8b06                 mov eax, dword ptr [esi]
// 005d8500  8b5008               mov edx, dword ptr [eax + 8]
// 005d8503  8bce                 mov ecx, esi
// 005d8505  ffd2                 call edx
// 005d8507  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005d850b  8bc7                 mov eax, edi
// 005d850d  5f                   pop edi
// 005d850e  5e                   pop esi
// 005d850f  64890d00000000       mov dword ptr fs:[0], ecx
// 005d8516  83c420               add esp, 0x20
// 005d8519  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Object {
    void setValue(float);
};

struct Count {
    Control* control;

    Count(const Count&);
    ~Count();
};

inline Count::Count(const Count& other)
    : control(other.control)
{
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Count::~Count()
{
    if (control) {
        Control* p = control;
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Shared {
    Object* object;
    Count count;

    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

inline Shared::~Shared()
{
}

extern Shared __cdecl createRotate();
extern Shared __cdecl createLighting();
extern const float initialValue;

Shared __cdecl makeState(bool rotate)
{
    if (rotate) {
        Shared result = createRotate();
        result.object->setValue(initialValue);
        return result;
    } else {
        Shared result = createLighting();
        return result;
    }
}
