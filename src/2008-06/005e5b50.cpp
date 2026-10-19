// from server: 76% by colin
// from server: 73% by king_originala
// roc 2008-06 005e5b50  unit: RBX::JointsService  size: 156 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e5b50
//
// 005e5b50  56                   push esi
// 005e5b51  8bf1                 mov esi, ecx
// 005e5b53  85f6                 test esi, esi
// 005e5b55  7408                 je 0x5e5b5f
// 005e5b57  8d8630010000         lea eax, [esi + 0x130]
// 005e5b5d  eb02                 jmp 0x5e5b61
// 005e5b5f  33c0                 xor eax, eax
// 005e5b61  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005e5b67  85c9                 test ecx, ecx
// 005e5b69  7406                 je 0x5e5b71
// 005e5b6b  50                   push eax
// 005e5b6c  e80fffffff           call 0x5e5a80
// 005e5b71  85f6                 test esi, esi
// 005e5b73  7408                 je 0x5e5b7d
// 005e5b75  8d8e34010000         lea ecx, [esi + 0x134]
// 005e5b7b  eb02                 jmp 0x5e5b7f
// 005e5b7d  33c9                 xor ecx, ecx
// 005e5b7f  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 005e5b85  85c0                 test eax, eax
// 005e5b87  7409                 je 0x5e5b92
// 005e5b89  51                   push ecx
// 005e5b8a  8d4820               lea ecx, [eax + 0x20]
// 005e5b8d  e8eefeffff           call 0x5e5a80
// 005e5b92  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005e5b96  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 005e5ba0  85c9                 test ecx, ecx
// 005e5ba2  7415                 je 0x5e5bb9
// 005e5ba4  e847afeaff           call 0x490af0
// 005e5ba9  85c0                 test eax, eax
// 005e5bab  740c                 je 0x5e5bb9
// 005e5bad  8b80e4020000         mov eax, dword ptr [eax + 0x2e4]
// 005e5bb3  898650010000         mov dword ptr [esi + 0x150], eax
// 005e5bb9  8b8e50010000         mov ecx, dword ptr [esi + 0x150]
// 005e5bbf  8d8630010000         lea eax, [esi + 0x130]
// 005e5bc5  85c9                 test ecx, ecx
// 005e5bc7  7406                 je 0x5e5bcf
// 005e5bc9  50                   push eax
// 005e5bca  e8d1bce3ff           call 0x4218a0
// 005e5bcf  8d8634010000         lea eax, [esi + 0x134]
// 005e5bd5  8bb650010000         mov esi, dword ptr [esi + 0x150]
// 005e5bdb  85f6                 test esi, esi
// 005e5bdd  7409                 je 0x5e5be8
// 005e5bdf  50                   push eax
// 005e5be0  8d4e20               lea ecx, [esi + 0x20]
// 005e5be3  e8b8bce3ff           call 0x4218a0
// 005e5be8  5e                   pop esi
// 005e5be9  c20800               ret 8
#include <intrin.h>

struct ListenerList {
    char storage[0x20];
    void removeListener(void*);
    void addListener(void*);
};

struct World {
    char padding[0x2E4];
    ListenerList* listeners;
};

struct Parent {
    World* getWorld();
};

struct Prefix {
    char padding[0x130];
};

struct FirstListener {
    unsigned int value;
};

struct SecondListener {
    unsigned int value;
};

struct JointsService : Prefix, FirstListener, SecondListener {
    char padding[0x18];
    ListenerList* listeners;

    void setParent(void*, Parent*);
};

void JointsService::setParent(void*, Parent* parent)
{
    FirstListener* first = static_cast<FirstListener*>(this);
    if (listeners)
        listeners[0].removeListener(first);

    SecondListener* second = static_cast<SecondListener*>(this);
    _ReadWriteBarrier();
    if (listeners)
        listeners[1].removeListener(second);

    listeners = 0;
    if (parent) {
        World* world = parent->getWorld();
        if (world)
            listeners = world->listeners;
    }

    first = &static_cast<FirstListener&>(*this);
    if (listeners)
        listeners[0].addListener(first);

    second = &static_cast<SecondListener&>(*this);
    if (listeners)
        listeners[1].addListener(second);
}
