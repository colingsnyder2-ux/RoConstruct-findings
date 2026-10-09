// from server: 39% by colin
// roc 2007-08 0053e860  unit: RBX::VInstance::?$AbstractFactoryProduct  size: 102 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0053e860
//
// 0053e860  55                   push ebp
// 0053e861  8bec                 mov ebp, esp
// 0053e863  6aff                 push -1
// 0053e865  68e9127500           push 0x7512e9
// 0053e86a  64a100000000         mov eax, dword ptr fs:[0]
// 0053e870  50                   push eax
// 0053e871  64892500000000       mov dword ptr fs:[0], esp
// 0053e878  83ec2c               sub esp, 0x2c
// 0053e87b  53                   push ebx
// 0053e87c  56                   push esi
// 0053e87d  57                   push edi
// 0053e87e  8965f0               mov dword ptr [ebp - 0x10], esp
// 0053e881  85c9                 test ecx, ecx
// 0053e883  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0053e88a  c645fc01             mov byte ptr [ebp - 4], 1
// 0053e88e  7405                 je 0x53e895
// 0053e890  8d51ec               lea edx, [ecx - 0x14]
// 0053e893  eb02                 jmp 0x53e897
// 0053e895  33d2                 xor edx, edx
// 0053e897  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0053e89a  8b4d08               mov ecx, dword ptr [ebp + 8]
// 0053e89d  83ec08               sub esp, 8
// 0053e8a0  85f6                 test esi, esi
// 0053e8a2  8bc4                 mov eax, esp
// 0053e8a4  8908                 mov dword ptr [eax], ecx
// 0053e8a6  8965ec               mov dword ptr [ebp - 0x14], esp
// 0053e8a9  897004               mov dword ptr [eax + 4], esi
// 0053e8ac  740c                 je 0x53e8ba
// 0053e8ae  8d4604               lea eax, [esi + 4]
// 0053e8b1  b901000000           mov ecx, 1
// 0053e8b6  f00fc108             lock xadd dword ptr [eax], ecx
// 0053e8ba  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0053e8bd  8b01                 mov eax, dword ptr [ecx]
// 0053e8bf  52                   push edx
// 0053e8c0  8b10                 mov edx, dword ptr [eax]
// 0053e8c2  ffd2                 call edx
// 0053e8c4  eb69                 jmp 0x53e92f

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct BridgeBase {
    void* vptr;
};

struct EventInstance {
    const void* descriptor;
    void* source;
};

struct Bridge {
    void* vptr;
    void* ptr;
};

struct EventBridge {
    void* vptr;
    void* ptr;
    void connect(const EventInstance* inst);
};

void EventBridge::connect(const EventInstance* inst)
{
    Bridge* b = 0;
    if (this) {
        b = (Bridge*)((char*)this - 0x14);
    }
    EventInstance local;
    local.descriptor = *(const void**)inst;
    local.source = (void*)*((void**)inst + 1);
    if (local.source) {
        _InterlockedExchangeAdd((volatile long*)((char*)local.source + 4), 1);
    }
    void** vt = *(void***)b;
    void (*fn)(void*, const EventInstance*) = (void (*)(void*, const EventInstance*))vt[0];
    fn(b, &local);
}
