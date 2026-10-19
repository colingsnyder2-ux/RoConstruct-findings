// from server: 75% by colin
// from server: 74% by king_originala
// roc 2008-06 004230f0  unit: CRobloxTreeCtrl  size: 334 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004230f0
//
// 004230f0  6aff                 push -1
// 004230f2  64a100000000         mov eax, dword ptr fs:[0]
// 004230f8  6880e97b00           push 0x7be980
// 004230fd  50                   push eax
// 004230fe  8b442410             mov eax, dword ptr [esp + 0x10]
// 00423102  64892500000000       mov dword ptr fs:[0], esp
// 00423109  83ec24               sub esp, 0x24
// 0042310c  83780400             cmp dword ptr [eax + 4], 0
// 00423110  53                   push ebx
// 00423111  55                   push ebp
// 00423112  56                   push esi
// 00423113  57                   push edi
// 00423114  8bf1                 mov esi, ecx
// 00423116  0f840d010000         je 0x423229
// 0042311c  8b4024               mov eax, dword ptr [eax + 0x24]
// 0042311f  85c0                 test eax, eax
// 00423121  0f8402010000         je 0x423229
// 00423127  8b7810               mov edi, dword ptr [eax + 0x10]
// 0042312a  8b680c               mov ebp, dword ptr [eax + 0xc]
// 0042312d  896c2410             mov dword ptr [esp + 0x10], ebp
// 00423131  897c2414             mov dword ptr [esp + 0x14], edi
// 00423135  85ff                 test edi, edi
// 00423137  740c                 je 0x423145
// 00423139  8d4704               lea eax, [edi + 4]
// 0042313c  b901000000           mov ecx, 1
// 00423141  f00fc108             lock xadd dword ptr [eax], ecx
// 00423145  c744243c00000000     mov dword ptr [esp + 0x3c], 0
// 0042314d  85ed                 test ebp, ebp
// 0042314f  0f849e000000         je 0x4231f3
// 00423155  8b16                 mov edx, dword ptr [esi]
// 00423157  8b9254010000         mov edx, dword ptr [edx + 0x154]
// 0042315d  8d442418             lea eax, [esp + 0x18]
// 00423161  50                   push eax
// 00423162  8bce                 mov ecx, esi
// 00423164  ffd2                 call edx
// 00423166  8b10                 mov edx, dword ptr [eax]
// 00423168  83ec08               sub esp, 8
// 0042316b  8bcc                 mov ecx, esp
// 0042316d  8911                 mov dword ptr [ecx], edx
// 0042316f  8b4004               mov eax, dword ptr [eax + 4]
// 00423172  c644244401           mov byte ptr [esp + 0x44], 1
// 00423177  8964244c             mov dword ptr [esp + 0x4c], esp
// 0042317b  894104               mov dword ptr [ecx + 4], eax
// 0042317e  85c0                 test eax, eax
// 00423180  740c                 je 0x42318e
// 00423182  83c004               add eax, 4
// 00423185  b901000000           mov ecx, 1
// 0042318a  f00fc108             lock xadd dword ptr [eax], ecx
// 0042318e  8d4c2430             lea ecx, [esp + 0x30]
// 00423192  e8a9e9feff           call 0x411b40
// 00423197  8d4c2418             lea ecx, [esp + 0x18]
// 0042319b  c644243c03           mov byte ptr [esp + 0x3c], 3
// 004231a0  e8bbd41d00           call 0x600660
// 004231a5  8b16                 mov edx, dword ptr [esi]
// 004231a7  8b8250010000         mov eax, dword ptr [edx + 0x150]
// 004231ad  8bce                 mov ecx, esi
// 004231af  ffd0                 call eax
// 004231b1  8a9ee2000000         mov bl, byte ptr [esi + 0xe2]
// 004231b7  81c6e2000000         add esi, 0xe2
// 004231bd  8bc8                 mov ecx, eax
// 004231bf  89742420             mov dword ptr [esp + 0x20], esi
// 004231c3  885c2424             mov byte ptr [esp + 0x24], bl
// 004231c7  c60601               mov byte ptr [esi], 1
// 004231ca  807c244800           cmp byte ptr [esp + 0x48], 0
// 004231cf  c644243c04           mov byte ptr [esp + 0x3c], 4
// 004231d4  55                   push ebp
// 004231d5  7407                 je 0x4231de
// 004231d7  e844421400           call 0x567420
// 004231dc  eb05                 jmp 0x4231e3
// 004231de  e82d4a1400           call 0x567c10
// 004231e3  8d4c2428             lea ecx, [esp + 0x28]
// 004231e7  881e                 mov byte ptr [esi], bl
// 004231e9  c644243c00           mov byte ptr [esp + 0x3c], 0
// 004231ee  e8cd411500           call 0x5773c0
// 004231f3  c744243cffffffff     mov dword ptr [esp + 0x3c], 0xffffffff
// 004231fb  85ff                 test edi, edi
// 004231fd  742a                 je 0x423229
// 004231ff  8d4f04               lea ecx, [edi + 4]
// 00423202  83caff               or edx, 0xffffffff
// 00423205  f00fc111             lock xadd dword ptr [ecx], edx
// 00423209  751e                 jne 0x423229
// 0042320b  8b07                 mov eax, dword ptr [edi]
// 0042320d  8b5004               mov edx, dword ptr [eax + 4]
// 00423210  8bcf                 mov ecx, edi
// 00423212  ffd2                 call edx
// 00423214  8d4708               lea eax, [edi + 8]
// 00423217  83c9ff               or ecx, 0xffffffff
// 0042321a  f00fc108             lock xadd dword ptr [eax], ecx
// 0042321e  7509                 jne 0x423229
// 00423220  8b17                 mov edx, dword ptr [edi]
// 00423222  8b4208               mov eax, dword ptr [edx + 8]
// 00423225  8bcf                 mov ecx, edi
// 00423227  ffd0                 call eax
// 00423229  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 0042322d  5f                   pop edi
// 0042322e  5e                   pop esi
// 0042322f  5d                   pop ebp
// 00423230  64890d00000000       mov dword ptr fs:[0], ecx
// 00423237  5b                   pop ebx
// 00423238  83c430               add esp, 0x30
// 0042323b  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Pair {
    void* object;
    Control* control;

    Pair(const Pair& other);
    ~Pair();
};

inline Pair::Pair(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

struct Owner {
    void* object;
    Control* control;

    Owner(const Pair& other);
    ~Owner();
};

inline Owner::Owner(const Pair& other)
    : object(other.object), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

inline Owner::~Owner()
{
    if (control && _InterlockedExchangeAdd(&control->strong, -1) == 1) {
        control->dispose();
        if (_InterlockedExchangeAdd(&control->weak, -1) == 1)
            control->destroy();
    }
}

struct Lock {
    unsigned char storage[8];

    Lock(Pair value);
    ~Lock();
};

struct FlagGuard {
    unsigned char* address;
    unsigned char previous;

    FlagGuard(unsigned char& flag);
    ~FlagGuard();
};

inline FlagGuard::FlagGuard(unsigned char& flag)
    : address(&flag), previous(flag)
{
    flag = 1;
}

inline FlagGuard::~FlagGuard()
{
    *address = previous;
}

struct Selection {
    void select(void* object);
    void deselect(void* object);
};

struct Item {
    unsigned char padding[12];
    Pair value;
};

struct Notification {
    unsigned char padding0[4];
    int valid;
    unsigned char padding1[28];
    Item* item;
};

struct Tree;

struct TreeVTable {
    void* padding[84];
    Selection* (__thiscall* selection)(Tree*);
    Pair (__thiscall* context)(Tree*);
};

struct Tree {
    TreeVTable* vtable;
    unsigned char padding[222];
    unsigned char changing;

    void f(Notification* notification, unsigned char select);
};

void Tree::f(Notification* notification, unsigned char select)
{
    if (notification->valid && notification->item) {
        Owner object(notification->item->value);
        if (object.object) {
            Lock lock(vtable->context(this));
            Selection* selection = vtable->selection(this);
            FlagGuard guard(changing);
            if (select)
                selection->select(object.object);
            else
                selection->deselect(object.object);
        }
    }
}
