// from server: 71% by colin
// from server: 70% by king_originala
// roc 2008-06 00492360  unit: RBX::Network::VPlayer::?$SignalDesc  size: 382 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00492360
//
// 00492360  64a100000000         mov eax, dword ptr fs:[0]
// 00492366  6aff                 push -1
// 00492368  68f8657c00           push 0x7c65f8
// 0049236d  50                   push eax
// 0049236e  64892500000000       mov dword ptr fs:[0], esp
// 00492375  56                   push esi
// 00492376  837c242401           cmp dword ptr [esp + 0x24], 1
// 0049237b  c744240c02000000     mov dword ptr [esp + 0xc], 2
// 00492383  7419                 je 0x49239e
// 00492385  8b742418             mov esi, dword ptr [esp + 0x18]
// 00492389  c644240c01           mov byte ptr [esp + 0xc], 1
// 0049238e  85f6                 test esi, esi
// 00492390  0f84c7000000         je 0x49245d
// 00492396  8d4604               lea eax, [esi + 4]
// 00492399  e998000000           jmp 0x492436
// 0049239e  8b542428             mov edx, dword ptr [esp + 0x28]
// 004923a2  83ec20               sub esp, 0x20
// 004923a5  89642444             mov dword ptr [esp + 0x44], esp
// 004923a9  8bf4                 mov esi, esp
// 004923ab  6a00                 push 0
// 004923ad  83ec14               sub esp, 0x14
// 004923b0  8964245c             mov dword ptr [esp + 0x5c], esp
// 004923b4  8bcc                 mov ecx, esp
// 004923b6  83ec08               sub esp, 8
// 004923b9  8bc4                 mov eax, esp
// 004923bb  8910                 mov dword ptr [eax], edx
// 004923bd  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 004923c1  895004               mov dword ptr [eax + 4], edx
// 004923c4  8b44246c             mov eax, dword ptr [esp + 0x6c]
// 004923c8  89642464             mov dword ptr [esp + 0x64], esp
// 004923cc  85c0                 test eax, eax
// 004923ce  740c                 je 0x4923dc
// 004923d0  83c004               add eax, 4
// 004923d3  ba01000000           mov edx, 1
// 004923d8  f00fc110             lock xadd dword ptr [eax], edx
// 004923dc  8b542454             mov edx, dword ptr [esp + 0x54]
// 004923e0  83ec08               sub esp, 8
// 004923e3  8bc4                 mov eax, esp
// 004923e5  8910                 mov dword ptr [eax], edx
// 004923e7  8b542460             mov edx, dword ptr [esp + 0x60]
// 004923eb  895004               mov dword ptr [eax + 4], edx
// 004923ee  8b442460             mov eax, dword ptr [esp + 0x60]
// 004923f2  8964246c             mov dword ptr [esp + 0x6c], esp
// 004923f6  85c0                 test eax, eax
// 004923f8  740c                 je 0x492406
// 004923fa  83c004               add eax, 4
// 004923fd  ba01000000           mov edx, 1
// 00492402  f00fc110             lock xadd dword ptr [eax], edx
// 00492406  6830d64800           push 0x48d630
// 0049240b  51                   push ecx
// 0049240c  e88fa6ffff           call 0x48caa0
// 00492411  83c418               add esp, 0x18
// 00492414  8bce                 mov ecx, esi
// 00492416  e885f9ffff           call 0x491da0
// 0049241b  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0049241f  e8dc340c00           call 0x555900
// 00492424  8b442418             mov eax, dword ptr [esp + 0x18]
// 00492428  c644240c01           mov byte ptr [esp + 0xc], 1
// 0049242d  85c0                 test eax, eax
// 0049242f  742c                 je 0x49245d
// 00492431  8bf0                 mov esi, eax
// 00492433  83c004               add eax, 4
// 00492436  83c9ff               or ecx, 0xffffffff
// 00492439  f00fc108             lock xadd dword ptr [eax], ecx
// 0049243d  751e                 jne 0x49245d
// 0049243f  8b16                 mov edx, dword ptr [esi]
// 00492441  8b4204               mov eax, dword ptr [edx + 4]
// 00492444  8bce                 mov ecx, esi
// 00492446  ffd0                 call eax
// 00492448  83caff               or edx, 0xffffffff
// 0049244b  8d4e08               lea ecx, [esi + 8]
// 0049244e  f00fc111             lock xadd dword ptr [ecx], edx
// 00492452  7509                 jne 0x49245d
// 00492454  8b06                 mov eax, dword ptr [esi]
// 00492456  8b5008               mov edx, dword ptr [eax + 8]
// 00492459  8bce                 mov ecx, esi
// 0049245b  ffd2                 call edx
// 0049245d  8b742420             mov esi, dword ptr [esp + 0x20]
// 00492461  c644240c00           mov byte ptr [esp + 0xc], 0
// 00492466  85f6                 test esi, esi
// 00492468  742a                 je 0x492494
// 0049246a  83c9ff               or ecx, 0xffffffff
// 0049246d  8d4604               lea eax, [esi + 4]
// 00492470  f00fc108             lock xadd dword ptr [eax], ecx
// 00492474  751e                 jne 0x492494
// 00492476  8b16                 mov edx, dword ptr [esi]
// 00492478  8b4204               mov eax, dword ptr [edx + 4]
// 0049247b  8bce                 mov ecx, esi
// 0049247d  ffd0                 call eax
// 0049247f  83caff               or edx, 0xffffffff
// 00492482  8d4e08               lea ecx, [esi + 8]
// 00492485  f00fc111             lock xadd dword ptr [ecx], edx
// 00492489  7509                 jne 0x492494
// 0049248b  8b06                 mov eax, dword ptr [esi]
// 0049248d  8b5008               mov edx, dword ptr [eax + 8]
// 00492490  8bce                 mov ecx, esi
// 00492492  ffd2                 call edx
// 00492494  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 00492498  c744240cffffffff     mov dword ptr [esp + 0xc], 0xffffffff
// 004924a0  85f6                 test esi, esi
// 004924a2  742a                 je 0x4924ce
// 004924a4  83c9ff               or ecx, 0xffffffff
// 004924a7  8d4604               lea eax, [esi + 4]
// 004924aa  f00fc108             lock xadd dword ptr [eax], ecx
// 004924ae  751e                 jne 0x4924ce
// 004924b0  8b16                 mov edx, dword ptr [esi]
// 004924b2  8b4204               mov eax, dword ptr [edx + 4]
// 004924b5  8bce                 mov ecx, esi
// 004924b7  ffd0                 call eax
// 004924b9  83caff               or edx, 0xffffffff
// 004924bc  8d4e08               lea ecx, [esi + 8]
// 004924bf  f00fc111             lock xadd dword ptr [ecx], edx
// 004924c3  7509                 jne 0x4924ce
// 004924c5  8b06                 mov eax, dword ptr [esi]
// 004924c7  8b5008               mov edx, dword ptr [eax + 8]
// 004924ca  8bce                 mov ecx, esi
// 004924cc  ffd2                 call edx
// 004924ce  8b4c2404             mov ecx, dword ptr [esp + 4]
// 004924d2  64890d00000000       mov dword ptr fs:[0], ecx
// 004924d9  5e                   pop esi
// 004924da  83c40c               add esp, 0xc
// 004924dd  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Control {
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control)
        _InterlockedExchangeAdd(&control->strong, 1);
}

inline Shared::~Shared() {
    Control* p = control;
    if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
        p->dispose();
        if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
            p->destroy();
    }
}

typedef void (__cdecl *Callback)();

struct Bound {
    Callback callback;
    Shared first;
    Shared second;
};

extern void __cdecl callback();
extern Bound __cdecl build(Callback, Shared, Shared);

struct Function {
    void* table;
    unsigned int reserved;
    unsigned int buffer[6];
    Function(Bound, int);
    Function(const Function&);
    __declspec(dllimport) ~Function() throw();
};

struct Receiver {
    void invoke(Function);
};

void __cdecl dispatch(Shared first, Shared receiver, int operation, Shared second) {
    if (operation == 1)
        static_cast<Receiver*>(receiver.pointer)->invoke(
            Function(build(callback, first, second), 0));
}
