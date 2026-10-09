// from server: 34% by colin
// roc 2007-08 0053e980  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e980
//
// 0053e980  55                   push ebp
// 0053e981  8bec                 mov ebp, esp
// 0053e983  6aff                 push -1
// 0053e985  6819137500           push 0x751319
// 0053e98a  64a100000000         mov eax, dword ptr fs:[0]
// 0053e990  50                   push eax
// 0053e991  64892500000000       mov dword ptr fs:[0], esp
// 0053e998  83ec2c               sub esp, 0x2c
// 0053e99b  53                   push ebx
// 0053e99c  56                   push esi
// 0053e99d  57                   push edi
// 0053e99e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0053e9a1  85c9                 test ecx, ecx
// 0053e9a3  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0053e9aa  c645fc01             mov byte ptr [ebp - 4], 1
// 0053e9ae  7405                 je 0x53e9b5
// 0053e9b0  8d51d4               lea edx, [ecx - 0x2c]
// 0053e9b3  eb02                 jmp 0x53e9b7
// 0053e9b5  33d2                 xor edx, edx
// 0053e9b7  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0053e9ba  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0053e9bd  83ec08               sub esp, 8
// 0053e9c0  85f6                 test esi, esi
// 0053e9c2  8bc4                 mov eax, esp
// 0053e9c4  8908                 mov dword ptr [eax], ecx
// 0053e9c6  8965ec               mov dword ptr [ebp - 0x14], esp
// 0053e9c9  897004               mov dword ptr [eax + 4], esi
// 0053e9cc  740c                 je 0x53e9da
// 0053e9ce  8d4604               lea eax, [esi + 4]
// 0053e9d1  b901000000           mov ecx, 1
// 0053e9d6  f00fc108             lock xadd dword ptr [eax], ecx
// 0053e9da  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0053e9dd  8b01                 mov eax, dword ptr [ecx]
// 0053e9df  52                   push edx
// 0053e9e0  8b10                 mov edx, dword ptr [eax]
// 0053e9e2  ffd2                 call edx
// 0053e9e4  eb69                 jmp 0x53ea4f

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BridgeBase {
    void* vptr;
};

struct EventInstance {
    const void* descriptor;
    void* source;
};

struct EventBridge {
    void* vptr;
    EventInstance instance;
};

struct SignalConnectionBridge {
    void* vptr;
    void* connection;
};

struct BridgeHolder {
    void* vptr;
    void* ptr;
};

struct Target {
    void invoke(void* a, void* b, void* c);
};

void Target::invoke(void* a, void* b, void* c)
{
    BridgeHolder* holder = (BridgeHolder*)a;
    EventBridge* bridge = (EventBridge*)b;
    void* conn = c;

    if (holder) {
        holder = (BridgeHolder*)((char*)holder - 0x2c);
    } else {
        holder = 0;
    }

    if (bridge) {
        _InterlockedExchangeAdd((volatile long*)((char*)bridge + 4), 1);
    }

    void** vtbl = *(void***)conn;
    void (*fn)(void*, void*, void*) = (void (*)(void*, void*, void*))vtbl[0];
    fn(conn, holder, bridge);
}
