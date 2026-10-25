// from server: 100% by colin
// roc 2008-06 005571b0  unit: RBX::VRunService::?$BoundFuncDesc  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005571b0
//
// 005571b0  83ec0c               sub esp, 0xc
// 005571b3  d9442410             fld dword ptr [esp + 0x10]
// 005571b7  56                   push esi
// 005571b8  8bf1                 mov esi, ecx
// 005571ba  d9c0                 fld st(0)
// 005571bc  dc86b8010000         fadd qword ptr [esi + 0x1b8]
// 005571c2  dd96b8010000         fst qword ptr [esi + 0x1b8]
// 005571c8  d9542404             fst dword ptr [esp + 4]
// 005571cc  d95c2408             fstp dword ptr [esp + 8]
// 005571d0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005571d4  d95c240c             fstp dword ptr [esp + 0xc]
// 005571d8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 005571dc  50                   push eax
// 005571dd  51                   push ecx
// 005571de  8d8e50010000         lea ecx, [esi + 0x150]
// 005571e4  e8f7d7ffff           call 0x5549e0
// 005571e9  8d4614               lea eax, [esi + 0x14]
// 005571ec  50                   push eax
// 005571ed  b9b83b9700           mov ecx, 0x973bb8
// 005571f2  e829440100           call 0x56b620
// 005571f7  5e                   pop esi
// 005571f8  85c0                 test eax, eax
// 005571fa  741f                 je 0x55721b
// 005571fc  d9442410             fld dword ptr [esp + 0x10]
// 00557200  83ec08               sub esp, 8
// 00557203  d95c2404             fstp dword ptr [esp + 4]
// 00557207  8d542418             lea edx, [esp + 0x18]
// 0055720b  d9442408             fld dword ptr [esp + 8]
// 0055720f  8d4810               lea ecx, [eax + 0x10]
// 00557212  d91c24               fstp dword ptr [esp]
// 00557215  52                   push edx
// 00557216  e895fcffff           call 0x556eb0
// 0055721b  83c40c               add esp, 0xc
// 0055721e  c20400               ret 4

// from server: 97% by colin
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD /fp:fast
struct StepEvent {
    float time;
    float delta;

    StepEvent(float t, float d) : time(t), delta(d) {}
};

struct StepSignal {
    unsigned char storage[0x68];
    void fire(StepEvent event);
};

struct UpdateSignal {
    void fire(const float& delta, float time, float step);
};

struct Receiver {
    unsigned char padding[0x10];
    UpdateSignal signal;
};

struct Registry {
    Receiver* find(void* key);
};

extern Registry registry;

struct Pad { unsigned char padding0[0x14]; };
struct Key { unsigned char data[0x13C]; };
struct S : Pad, Key {
    StepSignal signal;
    double elapsed;

    void step(float delta);
};

void S::step(float delta)
{
    float time = (float)(elapsed += delta);
    signal.fire(StepEvent(time, delta));

    Receiver* receiver = registry.find(static_cast<Key*>(this));
    if (receiver)
        receiver->signal.fire(delta, time, delta);
}
