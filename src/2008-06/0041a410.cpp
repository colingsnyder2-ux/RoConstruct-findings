// from server: 91% by colin
// from server: 90% by colin
// roc 2008-06 0041a410  unit: Marshaller  size: 203 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041a410
//
// 0041a410  55                   push ebp
// 0041a411  8bec                 mov ebp, esp
// 0041a413  6aff                 push -1
// 0041a415  6810df7b00           push 0x7bdf10
// 0041a41a  64a100000000         mov eax, dword ptr fs:[0]
// 0041a420  50                   push eax
// 0041a421  64892500000000       mov dword ptr fs:[0], esp
// 0041a428  83ec60               sub esp, 0x60
// 0041a42b  53                   push ebx
// 0041a42c  56                   push esi
// 0041a42d  33c0                 xor eax, eax
// 0041a42f  57                   push edi
// 0041a430  8965f0               mov dword ptr [ebp - 0x10], esp
// 0041a433  8bf1                 mov esi, ecx
// 0041a435  8945fc               mov dword ptr [ebp - 4], eax
// 0041a438  8945bc               mov dword ptr [ebp - 0x44], eax
// 0041a43b  8d5e4c               lea ebx, [esi + 0x4c]
// 0041a43e  8bcb                 mov ecx, ebx
// 0041a440  c645fc01             mov byte ptr [ebp - 4], 1
// 0041a444  895de4               mov dword ptr [ebp - 0x1c], ebx
// 0041a447  8845e8               mov byte ptr [ebp - 0x18], al
// 0041a44a  e891a81700           call 0x594ce0
// 0041a44f  c645e801             mov byte ptr [ebp - 0x18], 1
// 0041a453  8b7e44               mov edi, dword ptr [esi + 0x44]
// 0041a456  8b4648               mov eax, dword ptr [esi + 0x48]
// 0041a459  83c62c               add esi, 0x2c
// 0041a45c  03c7                 add eax, edi
// 0041a45e  c645fc02             mov byte ptr [ebp - 4], 2
// 0041a462  3bf8                 cmp edi, eax
// 0041a464  7606                 jbe 0x41a46c
// 0041a466  ff1590288000         call dword ptr [0x802890]
// 0041a46c  8b0e                 mov ecx, dword ptr [esi]
// 0041a46e  894ddc               mov dword ptr [ebp - 0x24], ecx
// 0041a471  8d4ddc               lea ecx, [ebp - 0x24]
// 0041a474  897de0               mov dword ptr [ebp - 0x20], edi
// 0041a477  e8a4bb0700           call 0x496020
// 0041a47c  50                   push eax
// 0041a47d  8d4dbc               lea ecx, [ebp - 0x44]
// 0041a480  e8eb9f1300           call 0x554470
// 0041a485  8bce                 mov ecx, esi
// 0041a487  e8e4ecffff           call 0x419170
// 0041a48c  8bcb                 mov ecx, ebx
// 0041a48e  c645fc01             mov byte ptr [ebp - 4], 1
// 0041a492  e869a81700           call 0x594d00
// 0041a497  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 0041a49a  85c0                 test eax, eax
// 0041a49c  7512                 jne 0x41a4b0
// 0041a49e  8d4d94               lea ecx, [ebp - 0x6c]
// 0041a4a1  e84afafeff           call 0x409ef0
// 0041a4a6  50                   push eax
// 0041a4a7  c645fc03             mov byte ptr [ebp - 4], 3
// 0041a4ab  e85000ffff           call 0x40a500
// 0041a4b0  8b4004               mov eax, dword ptr [eax + 4]
// 0041a4b3  8d55c4               lea edx, [ebp - 0x3c]
// 0041a4b6  52                   push edx
// 0041a4b7  ffd0                 call eax
// 0041a4b9  8b45bc               mov eax, dword ptr [ebp - 0x44]
// 0041a4bc  83c404               add esp, 4
// 0041a4bf  c645fc00             mov byte ptr [ebp - 4], 0
// 0041a4c3  85c0                 test eax, eax
// 0041a4c5  7414                 je 0x41a4db
// 0041a4c7  8b00                 mov eax, dword ptr [eax]
// 0041a4c9  85c0                 test eax, eax
// 0041a4cb  740e                 je 0x41a4db
// 0041a4cd  8d4dc4               lea ecx, [ebp - 0x3c]
// 0041a4d0  6a01                 push 1
// 0041a4d2  51                   push ecx
// 0041a4d3  8bd1                 mov edx, ecx
// 0041a4d5  52                   push edx
// 0041a4d6  ffd0                 call eax
// 0041a4d8  83c40c               add esp, 0xc
#include <intrin.h>

// from server: 87% by king_originala
extern "C" void (__cdecl *invalid_parameter_noinfo)();

struct Iterator
{
    void* owner;
    unsigned int position;
    void* get();
};

struct Queue
{
    void* owner;
    unsigned int data[5];
    void clear();
};

struct Mutex
{
    void lock();
    void unlock();
};

struct Lock
{
    Mutex* mutex;
    bool locked;
    unsigned int reserved;

    Lock(Mutex* p);
    ~Lock();
};

inline Lock::Lock(Mutex* p) : mutex(p), locked(false)
{
    mutex->lock();
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        mutex->unlock();
}

struct Function
{
    typedef void (__cdecl *Manager)(void*, void*, int);
    typedef void (__cdecl *Invoker)(void*);

    struct Table
    {
        Manager manager;
        Invoker invoke;
    };

    Table* table;
    unsigned int reserved;
    char buffer[24];

    Function();
    void assign(void* source);
    ~Function();
};

inline Function::Function() : table(0)
{
}

inline Function::~Function()
{
    if (table)
    {
        Manager manager = table->manager;
        if (manager)
            manager(buffer, buffer, 1);
    }
}

struct Exception
{
    char storage[40];
    Exception();
    ~Exception();
};

__declspec(noreturn) void __cdecl raise(const Exception& exception);

struct Marshaller
{
    char padding[0x2c];
    Queue queue;
    unsigned int first;
    unsigned int count;
    Mutex mutex;

    void execute();
};

void Marshaller::execute()
{
    try
    {
        Function function;
        {
            Lock lock(&mutex);
            unsigned int position = first;
            unsigned int length = count;
            Queue& q = queue;
            unsigned int end = position + length;

            if (position > end)
                invalid_parameter_noinfo();

            Iterator iterator;
            iterator.owner = q.owner;
            _ReadWriteBarrier();
            iterator.position = position;
            function.assign(iterator.get());
            q.clear();
        }

        if (!function.table)
            raise(Exception());

        Function::Invoker invoke = function.table->invoke;
        invoke(function.buffer);
    }
    catch (...)
    {
    }
}
