// from server: 100% by king_originala
// roc 2008-06 00585380  unit: RBX::Network::VPlayer::?$RefPropDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00585380
//
// 00585380  6aff                 push -1
// 00585382  6868917d00           push 0x7d9168
// 00585387  64a100000000         mov eax, dword ptr fs:[0]
// 0058538d  50                   push eax
// 0058538e  64892500000000       mov dword ptr fs:[0], esp
// 00585395  83ec08               sub esp, 8
// 00585398  56                   push esi
// 00585399  8d442404             lea eax, [esp + 4]
// 0058539d  8bf1                 mov esi, ecx
// 0058539f  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 005853a3  50                   push eax
// 005853a4  e807c2f0ff           call 0x4915b0
// 005853a9  8b4c2404             mov ecx, dword ptr [esp + 4]
// 005853ad  894c2420             mov dword ptr [esp + 0x20], ecx
// 005853b1  8b4e04               mov ecx, dword ptr [esi + 4]
// 005853b4  8b11                 mov edx, dword ptr [ecx]
// 005853b6  8b520c               mov edx, dword ptr [edx + 0xc]
// 005853b9  8d442420             lea eax, [esp + 0x20]
// 005853bd  50                   push eax
// 005853be  8b442420             mov eax, dword ptr [esp + 0x20]
// 005853c2  50                   push eax
// 005853c3  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 005853cb  ffd2                 call edx
// 005853cd  8b742408             mov esi, dword ptr [esp + 8]
// 005853d1  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005853d9  85f6                 test esi, esi
// 005853db  742a                 je 0x585407
// 005853dd  8d4604               lea eax, [esi + 4]
// 005853e0  83c9ff               or ecx, 0xffffffff
// 005853e3  f00fc108             lock xadd dword ptr [eax], ecx
// 005853e7  751e                 jne 0x585407
// 005853e9  8b16                 mov edx, dword ptr [esi]
// 005853eb  8b4204               mov eax, dword ptr [edx + 4]
// 005853ee  8bce                 mov ecx, esi
// 005853f0  ffd0                 call eax
// 005853f2  8d4e08               lea ecx, [esi + 8]
// 005853f5  83caff               or edx, 0xffffffff
// 005853f8  f00fc111             lock xadd dword ptr [ecx], edx
// 005853fc  7509                 jne 0x585407
// 005853fe  8b06                 mov eax, dword ptr [esi]
// 00585400  8b5008               mov edx, dword ptr [eax + 8]
// 00585403  8bce                 mov ecx, esi
// 00585405  ffd2                 call edx
// 00585407  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058540b  5e                   pop esi
// 0058540c  64890d00000000       mov dword ptr fs:[0], ecx
// 00585413  83c414               add esp, 0x14
// 00585416  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release() {
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    void* pointer;
    Control* control;
    ~Shared();
};

inline Shared::~Shared() {
    if (control)
        control->release();
}

struct Holder {
    Shared get();
};

struct Property {
    virtual void reserved0();
    virtual void reserved1();
    virtual void reserved2();
    virtual void set(void*, void**);
};

struct S {
    void* vtable;
    Property* property;
    void f(void*, void*);
};

void S::f(void* object, void* value) {
    Shared temporary = static_cast<Holder*>(value)->get();
    value = temporary.pointer;
    property->set(object, &value);
}
