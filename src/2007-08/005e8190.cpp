// from server: 57% by colin
// roc 2007-08 005e8190  unit: RBX::VInstance::$$A6AXV?$shared_ptr::V?$function::?$holder  size: 89 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e8190
//
// 005e8190  6aff                 push -1
// 005e8192  681bb67500           push 0x75b61b
// 005e8197  64a100000000         mov eax, dword ptr fs:[0]
// 005e819d  50                   push eax
// 005e819e  64892500000000       mov dword ptr fs:[0], esp
// 005e81a5  51                   push ecx
// 005e81a6  56                   push esi
// 005e81a7  6a10                 push 0x10
// 005e81a9  8bf1                 mov esi, ecx
// 005e81ab  e8467d0400           call 0x62fef6
// 005e81b0  83c404               add esp, 4
// 005e81b3  89442404             mov dword ptr [esp + 4], eax
// 005e81b7  85c0                 test eax, eax
// 005e81b9  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005e81c1  740e                 je 0x5e81d1
// 005e81c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 005e81c7  51                   push ecx
// 005e81c8  8bc8                 mov ecx, eax
// 005e81ca  e8e1feffff           call 0x5e80b0
// 005e81cf  eb02                 jmp 0x5e81d3
// 005e81d1  33c0                 xor eax, eax
// 005e81d3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005e81d7  8906                 mov dword ptr [esi], eax
// 005e81d9  8bc6                 mov eax, esi
// 005e81db  5e                   pop esi
// 005e81dc  64890d00000000       mov dword ptr fs:[0], ecx
// 005e81e3  83c410               add esp, 0x10
// 005e81e6  c20400               ret 4

struct EventInstance;

struct BridgeBase
{
    void* ptr;
};

struct EventBridge
{
    void* ptr;
    EventBridge(const EventInstance& e);
};

struct EventInstance
{
    void* descriptor;
    void* weak;
};

struct Holder
{
    EventBridge* bridge;
};

struct S
{
    Holder* field;
    S(const EventInstance& e);
};

extern "C" void* __cdecl operator_new(unsigned int size);

S::S(const EventInstance& e)
{
    Holder* h = (Holder*)operator_new(0x10);
    if (h)
    {
        h->bridge = new EventBridge(e);
    }
    else
    {
        h = 0;
    }
    this->field = h;
}
