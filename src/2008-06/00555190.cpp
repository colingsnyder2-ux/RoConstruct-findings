// from server: 100% by colin
// roc 2008-06 00555190  unit: RBX::VRunService::?$FactoryProduct  size: 437 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00555190
//
// 00555190  6aff                 push -1
// 00555192  6868617c00           push 0x7c6168
// 00555197  64a100000000         mov eax, dword ptr fs:[0]
// 0055519d  50                   push eax
// 0055519e  64892500000000       mov dword ptr fs:[0], esp
// 005551a5  83ec18               sub esp, 0x18
// 005551a8  56                   push esi
// 005551a9  57                   push edi
// 005551aa  8bf1                 mov esi, ecx
// 005551ac  d9ee                 fldz 
// 005551ae  dd5c2418             fstp qword ptr [esp + 0x18]
// 005551b2  c744242800000000     mov dword ptr [esp + 0x28], 0
// 005551ba  e841ce0900           call 0x5f2000
// 005551bf  dd5c2410             fstp qword ptr [esp + 0x10]
// 005551c3  803d9067940000       cmp byte ptr [0x946790], 0
// 005551ca  742c                 je 0x5551f8
// 005551cc  e82fce0900           call 0x5f2000
// 005551d1  d8a6c0010000         fsub dword ptr [esi + 0x1c0]
// 005551d7  dd542408             fst qword ptr [esp + 8]
// 005551db  dc5c2410             fcomp qword ptr [esp + 0x10]
// 005551df  dfe0                 fnstsw ax
// 005551e1  f6c441               test ah, 0x41
// 005551e4  8d442408             lea eax, [esp + 8]
// 005551e8  7404                 je 0x5551ee
// 005551ea  8d442410             lea eax, [esp + 0x10]
// 005551ee  d986c0010000         fld dword ptr [esi + 0x1c0]
// 005551f4  dc00                 fadd qword ptr [eax]
// 005551f6  eb05                 jmp 0x5551fd
// 005551f8  e803ce0900           call 0x5f2000
// 005551fd  80be4802000000       cmp byte ptr [esi + 0x248], 0
// 00555204  dd5c2410             fstp qword ptr [esp + 0x10]
// 00555208  0f85ce000000         jne 0x5552dc
// 0055520e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00555212  83ec08               sub esp, 8
// 00555215  8bc4                 mov eax, esp
// 00555217  8908                 mov dword ptr [eax], ecx
// 00555219  8b54243c             mov edx, dword ptr [esp + 0x3c]
// 0055521d  895004               mov dword ptr [eax + 4], edx
// 00555220  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00555224  89642410             mov dword ptr [esp + 0x10], esp
// 00555228  85c0                 test eax, eax
// 0055522a  740c                 je 0x555238
// 0055522c  83c004               add eax, 4
// 0055522f  b901000000           mov ecx, 1
// 00555234  f00fc108             lock xadd dword ptr [eax], ecx
// 00555238  8bce                 mov ecx, esi
// 0055523a  e841f6ffff           call 0x554880
// 0055523f  80be4802000000       cmp byte ptr [esi + 0x248], 0
// 00555246  0f85ac000000         jne 0x5552f8
// 0055524c  8bce                 mov ecx, esi
// 0055524e  e87dfcffff           call 0x554ed0
// 00555253  80be4802000000       cmp byte ptr [esi + 0x248], 0
// 0055525a  0f8598000000         jne 0x5552f8
// 00555260  e89bcd0900           call 0x5f2000
// 00555265  dc6c2410             fsubr qword ptr [esp + 0x10]
// 00555269  83ec08               sub esp, 8
// 0055526c  8bce                 mov ecx, esi
// 0055526e  dc442420             fadd qword ptr [esp + 0x20]
// 00555272  dc0d38e78100         fmul qword ptr [0x81e738]
// 00555278  dd542420             fst qword ptr [esp + 0x20]
// 0055527c  dd1c24               fstp qword ptr [esp]
// 0055527f  e81cfeffff           call 0x5550a0
// 00555284  d9ee                 fldz 
// 00555286  dd442418             fld qword ptr [esp + 0x18]
// 0055528a  d8d1                 fcom st(1)
// 0055528c  dfe0                 fnstsw ax
// 0055528e  ddd9                 fstp st(1)
// 00555290  f6c441               test ah, 0x41
// 00555293  750f                 jne 0x5552a4
// 00555295  83ec08               sub esp, 8
// 00555298  8bce                 mov ecx, esi
// 0055529a  dd1c24               fstp qword ptr [esp]
// 0055529d  e86efbffff           call 0x554e10
// 005552a2  eb02                 jmp 0x5552a6
// 005552a4  ddd8                 fstp st(0)
// 005552a6  80be4802000000       cmp byte ptr [esi + 0x248], 0
// 005552ad  7549                 jne 0x5552f8
// 005552af  8dbee8010000         lea edi, [esi + 0x1e8]
// 005552b5  8bcf                 mov ecx, edi
// 005552b7  e834cbfbff           call 0x511df0
// 005552bc  8bcf                 mov ecx, edi
// 005552be  e82dcafbff           call 0x511cf0
// 005552c3  dd86e0010000         fld qword ptr [esi + 0x1e0]
// 005552c9  dd9ed8010000         fstp qword ptr [esi + 0x1d8]
// 005552cf  d9ee                 fldz 
// 005552d1  dd9ee0010000         fstp qword ptr [esi + 0x1e0]
// 005552d7  e9e7feffff           jmp 0x5551c3
// 005552dc  8b742434             mov esi, dword ptr [esp + 0x34]
// 005552e0  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 005552e8  85f6                 test esi, esi
// 005552ea  7446                 je 0x555332
// 005552ec  8d5604               lea edx, [esi + 4]
// 005552ef  83c8ff               or eax, 0xffffffff
// 005552f2  f00fc102             lock xadd dword ptr [edx], eax
// 005552f6  eb1a                 jmp 0x555312
// 005552f8  8b742434             mov esi, dword ptr [esp + 0x34]
// 005552fc  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 00555304  85f6                 test esi, esi
// 00555306  742a                 je 0x555332
// 00555308  8d4604               lea eax, [esi + 4]
// 0055530b  83c9ff               or ecx, 0xffffffff
// 0055530e  f00fc108             lock xadd dword ptr [eax], ecx
// 00555312  751e                 jne 0x555332
// 00555314  8b16                 mov edx, dword ptr [esi]
// 00555316  8b4204               mov eax, dword ptr [edx + 4]
// 00555319  8bce                 mov ecx, esi
// 0055531b  ffd0                 call eax
// 0055531d  83caff               or edx, 0xffffffff
// 00555320  8d4e08               lea ecx, [esi + 8]
// 00555323  f00fc111             lock xadd dword ptr [ecx], edx
// 00555327  7509                 jne 0x555332
// 00555329  8b06                 mov eax, dword ptr [esi]
// 0055532b  8b5008               mov edx, dword ptr [eax + 8]
// 0055532e  8bce                 mov ecx, esi
// 00555330  ffd2                 call edx
// 00555332  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00555336  5f                   pop edi
// 00555337  64890d00000000       mov dword ptr fs:[0], ecx
// 0055533e  5e                   pop esi
// 0055533f  83c424               add esp, 0x24
// 00555342  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


extern double clockTime();
extern unsigned char timingEnabled;
extern const double timeScale;

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* pointer;
    Control* control;

    __forceinline Shared(const Shared& other);
    __forceinline ~Shared();
};

__forceinline Shared::Shared(const Shared& other)
    : pointer(other.pointer), control(other.control) {
    if (control) {
        volatile long* count = &control->strong;
        _InterlockedIncrement(count);
    }
}

__forceinline Shared::~Shared() {
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Stopwatch {
    char storage[0x60];
    void stop();
    void start();
};

struct S {
    char padding[0x1c0];
    float interval;
    char padding2[0x14];
    double previous;
    double current;
    Stopwatch stopwatch;
    unsigned char stopped;

    void run(Shared owner);
    void update(Shared owner);
    void advance();
    void adjust(double value);
    void wait(double value);
};

void S::run(Shared owner) {
    double remaining = 0.0;
    double deadline = clockTime();

    for (;;) {
        if (timingEnabled) {
            double candidate = clockTime() - interval;
            const double& selected = candidate > deadline ? candidate : deadline;
            deadline = interval + selected;
        } else {
            deadline = clockTime();
        }

        if (stopped)
            return;

        update(owner);
        if (stopped)
            break;

        advance();
        if (stopped)
            break;

        remaining = (deadline - clockTime() + remaining) * timeScale;
        adjust(remaining);

        if (remaining > 0.0)
            wait(remaining);

        if (stopped)
            break;

        stopwatch.stop();
        stopwatch.start();
        previous = current;
        current = 0.0;
    }
}
