// from server: 100% by king_originala
// roc 2008-06 005e2a70  unit: RBX::RotatePJoint  size: 81 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005e2a70
//
// 005e2a70  83ec08               sub esp, 8
// 005e2a73  56                   push esi
// 005e2a74  57                   push edi
// 005e2a75  8d442408             lea eax, [esp + 8]
// 005e2a79  50                   push eax
// 005e2a7a  81c148010000         add ecx, 0x148
// 005e2a80  e87b80feff           call 0x5cab00
// 005e2a85  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005e2a89  8b38                 mov edi, dword ptr [eax]
// 005e2a8b  85f6                 test esi, esi
// 005e2a8d  742a                 je 0x5e2ab9
// 005e2a8f  8d4e04               lea ecx, [esi + 4]
// 005e2a92  83caff               or edx, 0xffffffff
// 005e2a95  f00fc111             lock xadd dword ptr [ecx], edx
// 005e2a99  751e                 jne 0x5e2ab9
// 005e2a9b  8b06                 mov eax, dword ptr [esi]
// 005e2a9d  8b5004               mov edx, dword ptr [eax + 4]
// 005e2aa0  8bce                 mov ecx, esi
// 005e2aa2  ffd2                 call edx
// 005e2aa4  8d4608               lea eax, [esi + 8]
// 005e2aa7  83c9ff               or ecx, 0xffffffff
// 005e2aaa  f00fc108             lock xadd dword ptr [eax], ecx
// 005e2aae  7509                 jne 0x5e2ab9
// 005e2ab0  8b16                 mov edx, dword ptr [esi]
// 005e2ab2  8b4208               mov eax, dword ptr [edx + 8]
// 005e2ab5  8bce                 mov ecx, esi
// 005e2ab7  ffd0                 call eax
// 005e2ab9  8bc7                 mov eax, edi
// 005e2abb  5f                   pop edi
// 005e2abc  5e                   pop esi
// 005e2abd  83c408               add esp, 8
// 005e2ac0  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct ControlBlock {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strongCount;
    volatile long weakCount;
};

struct SharedResult {
    void* object;
    ControlBlock* control;
};

struct WeakReference {
    SharedResult* lock(SharedResult* result);
};

struct RotatePJoint {
    char padding[0x148];
    WeakReference reference;

    void* get();
};

void* RotatePJoint::get() {
    SharedResult result;
    SharedResult* locked = reference.lock(&result);
    ControlBlock* control = result.control;
    void* object = locked->object;

    if (control) {
        if (_InterlockedDecrement(&control->strongCount) == 0) {
            control->dispose();
            if (_InterlockedDecrement(&control->weakCount) == 0)
                control->destroy();
        }
    }

    return object;
}
