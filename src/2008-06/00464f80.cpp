// from server: 100% by king_originala
// roc 2008-06 00464f80  unit: RBX::VRunService::?$MarshaledListener  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00464f80
//
// 00464f80  56                   push esi
// 00464f81  57                   push edi
// 00464f82  6a14                 push 0x14
// 00464f84  8bf9                 mov edi, ecx
// 00464f86  e895b92300           call 0x6a0920
// 00464f8b  83c404               add esp, 4
// 00464f8e  85c0                 test eax, eax
// 00464f90  7416                 je 0x464fa8
// 00464f92  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00464f96  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00464f9a  51                   push ecx
// 00464f9b  52                   push edx
// 00464f9c  57                   push edi
// 00464f9d  8bc8                 mov ecx, eax
// 00464f9f  e8bcfbffff           call 0x464b60
// 00464fa4  8bf0                 mov esi, eax
// 00464fa6  eb02                 jmp 0x464faa
// 00464fa8  33f6                 xor esi, esi
// 00464faa  8d442410             lea eax, [esp + 0x10]
// 00464fae  50                   push eax
// 00464faf  8d4f04               lea ecx, [edi + 4]
// 00464fb2  89742414             mov dword ptr [esp + 0x14], esi
// 00464fb6  e8e5c3fbff           call 0x4213a0
// 00464fbb  8b4f20               mov ecx, dword ptr [edi + 0x20]
// 00464fbe  56                   push esi
// 00464fbf  e88cd9fcff           call 0x432950
// 00464fc4  5f                   pop edi
// 00464fc5  5e                   pop esi
// 00464fc6  c20800               ret 8

extern "C" void* __cdecl allocate(unsigned int size);

struct Listener;

struct Task
{
    Task* initialize(Listener*, void*, Task*);
};

struct Pending
{
    char storage[28];
    void insert(Task**);
};

struct Dispatcher
{
    void method(int);
};

struct Listener
{
    void* vtable;
    Pending pending;
    Dispatcher* dispatcher;

    void f(void*, Task*);
};

void Listener::f(void* a, Task* b)
{
    Task* task = (Task*)allocate(0x14);
    if (task)
        task = task->initialize(this, a, b);
    else
        task = 0;

    b = task;
    pending.insert(&b);
    dispatcher->method((int)task);
}
