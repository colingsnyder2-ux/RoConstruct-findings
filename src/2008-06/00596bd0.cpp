// from server: 100% by king_originala
// roc 2008-06 00596bd0  unit: RBX::worker_thread::Udata::?$sp_counted_impl_p  size: 180 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00596bd0
//
// 00596bd0  6aff                 push -1
// 00596bd2  682bf57b00           push 0x7bf52b
// 00596bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00596bdd  50                   push eax
// 00596bde  64892500000000       mov dword ptr fs:[0], esp
// 00596be5  83ec08               sub esp, 8
// 00596be8  53                   push ebx
// 00596be9  55                   push ebp
// 00596bea  56                   push esi
// 00596beb  57                   push edi
// 00596bec  6a20                 push 0x20
// 00596bee  8be9                 mov ebp, ecx
// 00596bf0  e82b9d1000           call 0x6a0920
// 00596bf5  8bd8                 mov ebx, eax
// 00596bf7  83c404               add esp, 4
// 00596bfa  895c2410             mov dword ptr [esp + 0x10], ebx
// 00596bfe  c744242000000000     mov dword ptr [esp + 0x20], 0
// 00596c06  85db                 test ebx, ebx
// 00596c08  7453                 je 0x596c5d
// 00596c0a  6a00                 push 0
// 00596c0c  83ec20               sub esp, 0x20
// 00596c0f  8bf4                 mov esi, esp
// 00596c11  c70600000000         mov dword ptr [esi], 0
// 00596c17  a104238300           mov eax, dword ptr [0x832304]
// 00596c1c  89642438             mov dword ptr [esp + 0x38], esp
// 00596c20  8d7e08               lea edi, [esi + 8]
// 00596c23  85c0                 test eax, eax
// 00596c25  7409                 je 0x596c30
// 00596c27  6a01                 push 1
// 00596c29  57                   push edi
// 00596c2a  57                   push edi
// 00596c2b  ffd0                 call eax
// 00596c2d  83c40c               add esp, 0xc
// 00596c30  b8705b5900           mov eax, 0x595b70
// 00596c35  85c0                 test eax, eax
// 00596c37  7415                 je 0x596c4e
// 00596c39  c707705b5900         mov dword ptr [edi], 0x595b70
// 00596c3f  8bcb                 mov ecx, ebx
// 00596c41  c70604238300         mov dword ptr [esi], 0x832304
// 00596c47  e8e4feffff           call 0x596b30
// 00596c4c  eb11                 jmp 0x596c5f
// 00596c4e  8bcb                 mov ecx, ebx
// 00596c50  c70600000000         mov dword ptr [esi], 0
// 00596c56  e8d5feffff           call 0x596b30
// 00596c5b  eb02                 jmp 0x596c5f
// 00596c5d  33c0                 xor eax, eax
// 00596c5f  50                   push eax
// 00596c60  8bcd                 mov ecx, ebp
// 00596c62  c7442424ffffffff     mov dword ptr [esp + 0x24], 0xffffffff
// 00596c6a  e89125e9ff           call 0x429200
// 00596c6f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00596c73  5f                   pop edi
// 00596c74  5e                   pop esi
// 00596c75  8bc5                 mov eax, ebp
// 00596c77  5d                   pop ebp
// 00596c78  64890d00000000       mov dword ptr fs:[0], ecx
// 00596c7f  5b                   pop ebx
// 00596c80  83c414               add esp, 0x14
// 00596c83  c3                   ret 

typedef void (__cdecl *Task)();

union FunctionBuffer
{
    Task function;
    double storage[3];
};

typedef void (__cdecl *Manager)(FunctionBuffer *, FunctionBuffer *, int);

struct FunctionTable
{
    Manager manager;
};

extern FunctionTable taskTable;
extern void __cdecl taskEntry();

void *__cdecl operator new(unsigned int);
void __cdecl operator delete(void *);

struct Callback
{
    FunctionTable *table;
    FunctionBuffer buffer;

    Callback(Task);
    Callback(const Callback &);
};

inline Callback::Callback(Task task)
{
    table = 0;
    FunctionBuffer *destination = &buffer;
    if (taskTable.manager)
        taskTable.manager(destination, destination, 1);

    if (task)
    {
        destination->function = task;
        table = &taskTable;
    }
    else
    {
        table = 0;
    }
}

struct Thread
{
    unsigned char storage[32];

    Thread(Callback, unsigned int);
};

struct S
{
    void reset(Thread *);
    S &f();
};

S &S::f()
{
    reset(new Thread(Callback(taskEntry), 0));
    return *this;
}
