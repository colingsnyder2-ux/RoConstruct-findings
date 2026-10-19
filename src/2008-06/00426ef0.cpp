// from server: 80% by colin
// from server: 78% by colin
// roc 2008-06 00426ef0  unit: CSelectionTreeCtrl  size: 457 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426ef0
//
// 00426ef0  6aff                 push -1
// 00426ef2  64a100000000         mov eax, dword ptr fs:[0]
// 00426ef8  6870ee7b00           push 0x7bee70
// 00426efd  50                   push eax
// 00426efe  64892500000000       mov dword ptr fs:[0], esp
// 00426f05  83ec2c               sub esp, 0x2c
// 00426f08  53                   push ebx
// 00426f09  55                   push ebp
// 00426f0a  56                   push esi
// 00426f0b  57                   push edi
// 00426f0c  8bf1                 mov esi, ecx
// 00426f0e  e8559d2700           call 0x6a0c68
// 00426f13  8b862c010000         mov eax, dword ptr [esi + 0x12c]
// 00426f19  33ff                 xor edi, edi
// 00426f1b  3bc7                 cmp eax, edi
// 00426f1d  0f8481010000         je 0x4270a4
// 00426f23  8b4620               mov eax, dword ptr [esi + 0x20]
// 00426f26  50                   push eax
// 00426f27  e8fa992700           call 0x6a0926
// 00426f2c  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 00426f32  8b08                 mov ecx, dword ptr [eax]
// 00426f34  e8e7b2ffff           call 0x422220
// 00426f39  e8e8992700           call 0x6a0926
// 00426f3e  8b8894000000         mov ecx, dword ptr [eax + 0x94]
// 00426f44  8b09                 mov ecx, dword ptr [ecx]
// 00426f46  e8e5b0ffff           call 0x422030
// 00426f4b  ff15b42d8000         call dword ptr [0x802db4]
// 00426f51  8b8e2c010000         mov ecx, dword ptr [esi + 0x12c]
// 00426f57  3bcf                 cmp ecx, edi
// 00426f59  7409                 je 0x426f64
// 00426f5b  8b11                 mov edx, dword ptr [ecx]
// 00426f5d  8b4204               mov eax, dword ptr [edx + 4]
// 00426f60  6a01                 push 1
// 00426f62  ffd0                 call eax
// 00426f64  57                   push edi
// 00426f65  6a08                 push 8
// 00426f67  89be2c010000         mov dword ptr [esi + 0x12c], edi
// 00426f6d  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00426f70  680a110000           push 0x110a
// 00426f75  51                   push ecx
// 00426f76  ff15142e8000         call dword ptr [0x802e14]
// 00426f7c  3bc7                 cmp eax, edi
// 00426f7e  0f840d010000         je 0x427091
// 00426f84  50                   push eax
// 00426f85  8bce                 mov ecx, esi
// 00426f87  e8ca9f2700           call 0x6a0f56
// 00426f8c  3bc7                 cmp eax, edi
// 00426f8e  0f84fd000000         je 0x427091
// 00426f94  8b580c               mov ebx, dword ptr [eax + 0xc]
// 00426f97  8b4010               mov eax, dword ptr [eax + 0x10]
// 00426f9a  895c2418             mov dword ptr [esp + 0x18], ebx
// 00426f9e  8944241c             mov dword ptr [esp + 0x1c], eax
// 00426fa2  3bc7                 cmp eax, edi
// 00426fa4  740c                 je 0x426fb2
// 00426fa6  83c004               add eax, 4
// 00426fa9  ba01000000           mov edx, 1
// 00426fae  f00fc110             lock xadd dword ptr [eax], edx
// 00426fb2  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 00426fb8  83ec08               sub esp, 8
// 00426fbb  8bcc                 mov ecx, esp
// 00426fbd  8901                 mov dword ptr [ecx], eax
// 00426fbf  8b8628010000         mov eax, dword ptr [esi + 0x128]
// 00426fc5  897c244c             mov dword ptr [esp + 0x4c], edi
// 00426fc9  89642418             mov dword ptr [esp + 0x18], esp
// 00426fcd  894104               mov dword ptr [ecx + 4], eax
// 00426fd0  3bc7                 cmp eax, edi
// 00426fd2  740c                 je 0x426fe0
// 00426fd4  83c004               add eax, 4
// 00426fd7  b901000000           mov ecx, 1
// 00426fdc  f00fc108             lock xadd dword ptr [eax], ecx
// 00426fe0  8d4c2438             lea ecx, [esp + 0x38]
// 00426fe4  e857abfeff           call 0x411b40
// 00426fe9  c644244401           mov byte ptr [esp + 0x44], 1
// 00426fee  3bdf                 cmp ebx, edi
// 00426ff0  7454                 je 0x427046
// 00426ff2  8b06                 mov eax, dword ptr [esi]
// 00426ff4  8d542410             lea edx, [esp + 0x10]
// 00426ff8  52                   push edx
// 00426ff9  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 00426fff  8bce                 mov ecx, esi
// 00427001  bdb06d4200           mov ebp, 0x426db0
// 00427006  ffd2                 call edx
// 00427008  8bc8                 mov ecx, eax
// 0042700a  e831cdfeff           call 0x413d40
// 0042700f  8b16                 mov edx, dword ptr [esi]
// 00427011  8bf8                 mov edi, eax
// 00427013  8d442420             lea eax, [esp + 0x20]
// 00427017  50                   push eax
// 00427018  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 0042701e  8bce                 mov ecx, esi
// 00427020  ffd0                 call eax
// 00427022  8bc8                 mov ecx, eax
// 00427024  e8e7ccfeff           call 0x413d10
// 00427029  8b4f04               mov ecx, dword ptr [edi + 4]
// 0042702c  8b17                 mov edx, dword ptr [edi]
// 0042702e  53                   push ebx
// 0042702f  55                   push ebp
// 00427030  51                   push ecx
// 00427031  8b4804               mov ecx, dword ptr [eax + 4]
// 00427034  52                   push edx
// 00427035  8b10                 mov edx, dword ptr [eax]
// 00427037  51                   push ecx
// 00427038  52                   push edx
// 00427039  8d442440             lea eax, [esp + 0x40]
// 0042703d  50                   push eax
// 0042703e  e85dcbffff           call 0x423ba0
// 00427043  83c41c               add esp, 0x1c
// 00427046  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0042704c  50                   push eax
// 0042704d  687c008100           push 0x81007c
// 00427052  e869551600           call 0x58c5c0
// 00427057  8b8624010000         mov eax, dword ptr [esi + 0x124]
// 0042705d  8b90f0010000         mov edx, dword ptr [eax + 0x1f0]
// 00427063  8d88f0010000         lea ecx, [eax + 0x1f0]
// 00427069  8b02                 mov eax, dword ptr [edx]
// 0042706b  83c408               add esp, 8
// 0042706e  6a01                 push 1
// 00427070  ffd0                 call eax
// 00427072  8d4c2430             lea ecx, [esp + 0x30]
// 00427076  c644244400           mov byte ptr [esp + 0x44], 0
// 0042707b  e840031500           call 0x5773c0
// 00427080  8d4c2418             lea ecx, [esp + 0x18]
// 00427084  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 0042708c  e8cf951d00           call 0x600660
// 00427091  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 00427094  6a00                 push 0
// 00427096  6a08                 push 8
// 00427098  680b110000           push 0x110b
// 0042709d  51                   push ecx
// 0042709e  ff15142e8000         call dword ptr [0x802e14]
// 004270a4  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 004270a8  5f                   pop edi
// 004270a9  5e                   pop esi
// 004270aa  5d                   pop ebp
// 004270ab  64890d00000000       mov dword ptr fs:[0], ecx
// 004270b2  5b                   pop ebx
// 004270b3  83c438               add esp, 0x38
// 004270b6  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" int __stdcall ReleaseCapture();
extern "C" long __stdcall SendMessageA(void*, unsigned int, unsigned int, long);

struct Control {
    unsigned int reserved;
    volatile long references;
};

struct Object;

struct Shared {
    Object* object;
    Control* control;
    Shared(const Shared&);
    ~Shared();
};

inline Shared::Shared(const Shared& other)
    : object(other.object), control(other.control) {
    if (control)
        _InterlockedIncrement(&control->references);
}

struct Event {
    virtual void invoke(int);
};

struct Object {
    char padding[0x1f0];
    Event event;
};

struct Selection {
    virtual void reserved();
    virtual void destroy(int);
};

struct Map {
    void remove(void*);
    void clean();
};

struct State {
    char padding[0x94];
    Map** map;
};

State* __cdecl state();

struct Item {
    char padding[12];
    Shared value;
};

struct Pair {
    void* data;
    unsigned int position;
};

struct CopyVerb {
    unsigned int storage[2];
    Pair* get();
    Pair* f();
};

struct Guard {
    unsigned int storage[3];
    Guard(Shared);
    ~Guard();
};

void __cdecl callback();

struct Predicate {
    void (__cdecl *function)();
    Object* object;
    Predicate(void (__cdecl*)(), Object*);
};

inline Predicate::Predicate(void (__cdecl *fn)(), Object* obj)
    : function(fn), object(obj) {
}

void __cdecl search(Pair*, Pair, Pair, Predicate);
void __cdecl notify(const char*, Object*);
extern const char drop[];

#define V(N) virtual void slot##N();
#define V10(N) V(N##0) V(N##1) V(N##2) V(N##3) V(N##4) \
               V(N##5) V(N##6) V(N##7) V(N##8) V(N##9)

struct S {
    V10(0)
    V10(1)
    V10(2)
    V10(3)
    V10(4)
    V10(5)
    V10(6)
    V10(7)
    V(80) V(81) V(82) V(83)
    virtual CopyVerb range();

    char padding0[0x1c];
    void* window;
    char padding1[0x100];
    Shared owner;
    Selection* volatile selection;

    void prepare();
    Item* item(long);
    void finish(unsigned int, unsigned int, long);
};

#undef V10
#undef V

void S::finish(unsigned int, unsigned int, long) {
    prepare();
    if (selection) {
        (*state()->map)->remove(window);
        (*state()->map)->clean();
        ReleaseCapture();

        Selection* current = selection;
        if (current)
            current->destroy(1);
        selection = 0;

        long handle = SendMessageA(window, 0x110a, 8, 0);
        if (handle) {
            Item* selected = item(handle);
            if (selected) {
                Object* object = selected->value.object;
                Shared value(selected->value);
                Guard guard(owner);

                if (object) {
                    Pair result;
                    search(&result, *range().get(), *range().f(),
                           Predicate(callback, object));
                }

                notify(drop, owner.object);
                owner.object->event.invoke(1);
            }
        }

        SendMessageA(window, 0x110b, 8, 0);
    }
}
