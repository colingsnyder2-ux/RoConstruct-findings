// from server: 61% by colin
// from server: 58% by king_originala
// roc 2008-06 00426900  unit: CSelectionTreeCtrl  size: 371 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426900
//
// 00426900  55                   push ebp
// 00426901  8bec                 mov ebp, esp
// 00426903  83e4f8               and esp, 0xfffffff8
// 00426906  6aff                 push -1
// 00426908  68d0ed7b00           push 0x7bedd0
// 0042690d  64a100000000         mov eax, dword ptr fs:[0]
// 00426913  50                   push eax
// 00426914  64892500000000       mov dword ptr fs:[0], esp
// 0042691b  83ec2c               sub esp, 0x2c
// 0042691e  53                   push ebx
// 0042691f  55                   push ebp
// 00426920  56                   push esi
// 00426921  33ed                 xor ebp, ebp
// 00426923  57                   push edi
// 00426924  894c2410             mov dword ptr [esp + 0x10], ecx
// 00426928  896c2414             mov dword ptr [esp + 0x14], ebp
// 0042692c  8db1e4000000         lea esi, [ecx + 0xe4]
// 00426932  eb06                 jmp 0x42693a
// 00426934  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00426938  33ed                 xor ebp, ebp
// 0042693a  896c2418             mov dword ptr [esp + 0x18], ebp
// 0042693e  896c241c             mov dword ptr [esp + 0x1c], ebp
// 00426942  81c1c4000000         add ecx, 0xc4
// 00426948  896c2444             mov dword ptr [esp + 0x44], ebp
// 0042694c  894c2420             mov dword ptr [esp + 0x20], ecx
// 00426950  e83bc71300           call 0x563090
// 00426955  c644242401           mov byte ptr [esp + 0x24], 1
// 0042695a  8b4618               mov eax, dword ptr [esi + 0x18]
// 0042695d  8b3e                 mov edi, dword ptr [esi]
// 0042695f  8b18                 mov ebx, dword ptr [eax]
// 00426961  8944242c             mov dword ptr [esp + 0x2c], eax
// 00426965  c644244401           mov byte ptr [esp + 0x44], 1
// 0042696a  8bc7                 mov eax, edi
// 0042696c  85ff                 test edi, edi
// 0042696e  7404                 je 0x426974
// 00426970  3bf8                 cmp edi, eax
// 00426972  7406                 je 0x42697a
// 00426974  ff1590288000         call dword ptr [0x802890]
// 0042697a  3b5c242c             cmp ebx, dword ptr [esp + 0x2c]
// 0042697e  0f84ce000000         je 0x426a52
// 00426984  85ff                 test edi, edi
// 00426986  0f85bf000000         jne 0x426a4b
// 0042698c  ff1590288000         call dword ptr [0x802890]
// 00426992  33c0                 xor eax, eax
// 00426994  3b5818               cmp ebx, dword ptr [eax + 0x18]
// 00426997  7506                 jne 0x42699f
// 00426999  ff1590288000         call dword ptr [0x802890]
// 0042699f  8b4310               mov eax, dword ptr [ebx + 0x10]
// 004269a2  8b4b0c               mov ecx, dword ptr [ebx + 0xc]
// 004269a5  894c2418             mov dword ptr [esp + 0x18], ecx
// 004269a9  85c0                 test eax, eax
// 004269ab  7412                 je 0x4269bf
// 004269ad  8d5004               lea edx, [eax + 4]
// 004269b0  b901000000           mov ecx, 1
// 004269b5  f00fc10a             lock xadd dword ptr [edx], ecx
// 004269b9  8be8                 mov ebp, eax
// 004269bb  896c241c             mov dword ptr [esp + 0x1c], ebp
// 004269bf  53                   push ebx
// 004269c0  57                   push edi
// 004269c1  8d542438             lea edx, [esp + 0x38]
// 004269c5  52                   push edx
// 004269c6  8bce                 mov ecx, esi
// 004269c8  e863d7ffff           call 0x424130
// 004269cd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004269d1  c644244400           mov byte ptr [esp + 0x44], 0
// 004269d6  e805c71300           call 0x5630e0
// 004269db  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004269df  8d442418             lea eax, [esp + 0x18]
// 004269e3  50                   push eax
// 004269e4  c644242800           mov byte ptr [esp + 0x28], 0
// 004269e9  e892fdffff           call 0x426780
// 004269ee  c7442444ffffffff     mov dword ptr [esp + 0x44], 0xffffffff
// 004269f6  85ed                 test ebp, ebp
// 004269f8  742c                 je 0x426a26
// 004269fa  8d4d04               lea ecx, [ebp + 4]
// 004269fd  83caff               or edx, 0xffffffff
// 00426a00  f00fc111             lock xadd dword ptr [ecx], edx
// 00426a04  7520                 jne 0x426a26
// 00426a06  8b4500               mov eax, dword ptr [ebp]
// 00426a09  8b5004               mov edx, dword ptr [eax + 4]
// 00426a0c  8bcd                 mov ecx, ebp
// 00426a0e  ffd2                 call edx
// 00426a10  8d4508               lea eax, [ebp + 8]
// 00426a13  83c9ff               or ecx, 0xffffffff
// 00426a16  f00fc108             lock xadd dword ptr [eax], ecx
// 00426a1a  750a                 jne 0x426a26
// 00426a1c  8b5500               mov edx, dword ptr [ebp]
// 00426a1f  8b4208               mov eax, dword ptr [edx + 8]
// 00426a22  8bcd                 mov ecx, ebp
// 00426a24  ffd0                 call eax
// 00426a26  8b442414             mov eax, dword ptr [esp + 0x14]
// 00426a2a  40                   inc eax
// 00426a2b  83f80a               cmp eax, 0xa
// 00426a2e  89442414             mov dword ptr [esp + 0x14], eax
// 00426a32  0f8cfcfeffff         jl 0x426934
// 00426a38  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00426a3c  64890d00000000       mov dword ptr fs:[0], ecx
// 00426a43  5f                   pop edi
// 00426a44  5e                   pop esi
// 00426a45  5d                   pop ebp
// 00426a46  5b                   pop ebx
// 00426a47  8be5                 mov esp, ebp
// 00426a49  5d                   pop ebp
// 00426a4a  c3                   ret 
// 00426a4b  8b07                 mov eax, dword ptr [edi]
// 00426a4d  e942ffffff           jmp 0x426994
// 00426a52  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00426a56  c644244400           mov byte ptr [esp + 0x44], 0
// 00426a5b  e880c61300           call 0x5630e0
// 00426a60  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 00426a64  5f                   pop edi
// 00426a65  64890d00000000       mov dword ptr fs:[0], ecx
// 00426a6c  5e                   pop esi
// 00426a6d  5d                   pop ebp
// 00426a6e  5b                   pop ebx
// 00426a6f  8be5                 mov esp, ebp
// 00426a71  5d                   pop ebp
// 00426a72  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern "C" void __cdecl _invalid_parameter_noinfo();

struct RefCount {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void *object;
    RefCount *count;

    Shared() : object(0), count(0) {}
    ~Shared()
    {
        if (count) {
            if (_InterlockedDecrement(&count->strong) == 0) {
                count->dispose();
                if (_InterlockedDecrement(&count->weak) == 0)
                    count->destroy();
            }
        }
    }
};

struct Mutex {
    void *handle;
    bool criticalSection;
    unsigned int count;
    void lock();
    void unlock();
};

struct Guard {
    Mutex *mutex;
    bool locked;

    Guard(Mutex& m) : mutex(&m)
    {
        mutex->lock();
        locked = true;
    }

    ~Guard()
    {
        if (locked)
            mutex->unlock();
    }

    void release()
    {
        mutex->unlock();
        locked = false;
    }
};

struct List;

struct Proxy {
    List *owner;
};

struct Node {
    Node *next;
    Node *previous;
    void *proxy;
    void *object;
    RefCount *count;
};

struct Iterator {
    Proxy *proxy;
    Node *node;
};

struct List {
    Proxy *proxy;
    char padding[20];
    Node *head;

    Iterator erase(Iterator position);
};

struct CSelectionTreeCtrl {
    char padding[0xc4];
    Mutex mutex;
    char gap[0x14];
    List list;

    void process(Shared *);
    void f();
};

void CSelectionTreeCtrl::f()
{
    for (int i = 0; i < 10; ++i) {
        Shared value;
        Guard guard(mutex);

        Iterator first;
        first.proxy = list.proxy;
        first.node = list.head->next;

        Iterator last;
        last.proxy = list.proxy;
        last.node = list.head;

        if (!first.proxy || first.proxy != last.proxy)
            _invalid_parameter_noinfo();

        if (first.node == last.node)
            return;

        List *owner;
        if (!first.proxy) {
            _invalid_parameter_noinfo();
            owner = 0;
        } else {
            owner = first.proxy->owner;
        }

        if (first.node == owner->head)
            _invalid_parameter_noinfo();

        value.object = first.node->object;
        if (first.node->count) {
            _InterlockedIncrement(&first.node->count->strong);
            value.count = first.node->count;
        }

        list.erase(first);
        guard.release();
        process(&value);
    }
}
