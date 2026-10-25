// from server: 100% by colin
// roc 2008-06 00426680  unit: CSelectionTreeCtrl  size: 251 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426680
//
// 00426680  6aff                 push -1
// 00426682  6894ed7b00           push 0x7bed94
// 00426687  64a100000000         mov eax, dword ptr fs:[0]
// 0042668d  50                   push eax
// 0042668e  64892500000000       mov dword ptr fs:[0], esp
// 00426695  83ec10               sub esp, 0x10
// 00426698  53                   push ebx
// 00426699  56                   push esi
// 0042669a  33db                 xor ebx, ebx
// 0042669c  8bf1                 mov esi, ecx
// 0042669e  895c2408             mov dword ptr [esp + 8], ebx
// 004266a2  e899c4ffff           call 0x422b40
// 004266a7  399e24010000         cmp dword ptr [esi + 0x124], ebx
// 004266ad  0f84b7000000         je 0x42676a
// 004266b3  395e20               cmp dword ptr [esi + 0x20], ebx
// 004266b6  0f84ae000000         je 0x42676a
// 004266bc  688c000000           push 0x8c
// 004266c1  e85aa22700           call 0x6a0920
// 004266c6  83c404               add esp, 4
// 004266c9  8944240c             mov dword ptr [esp + 0xc], eax
// 004266cd  895c2420             mov dword ptr [esp + 0x20], ebx
// 004266d1  3bc3                 cmp eax, ebx
// 004266d3  7441                 je 0x426716
// 004266d5  8b8e24010000         mov ecx, dword ptr [esi + 0x124]
// 004266db  894c2410             mov dword ptr [esp + 0x10], ecx
// 004266df  8b8e28010000         mov ecx, dword ptr [esi + 0x128]
// 004266e5  894c2414             mov dword ptr [esp + 0x14], ecx
// 004266e9  3bcb                 cmp ecx, ebx
// 004266eb  740c                 je 0x4266f9
// 004266ed  83c104               add ecx, 4
// 004266f0  ba01000000           mov edx, 1
// 004266f5  f00fc111             lock xadd dword ptr [ecx], edx
// 004266f9  56                   push esi
// 004266fa  8d4c2414             lea ecx, [esp + 0x14]
// 004266fe  51                   push ecx
// 004266ff  bb01000000           mov ebx, 1
// 00426704  8bc8                 mov ecx, eax
// 00426706  c644242801           mov byte ptr [esp + 0x28], 1
// 0042670b  895c2410             mov dword ptr [esp + 0x10], ebx
// 0042670f  e8ccfeffff           call 0x4265e0
// 00426714  eb02                 jmp 0x426718
// 00426716  33c0                 xor eax, eax
// 00426718  898694000000         mov dword ptr [esi + 0x94], eax
// 0042671e  c7442420ffffffff     mov dword ptr [esp + 0x20], 0xffffffff
// 00426726  f6c301               test bl, 1
// 00426729  7409                 je 0x426734
// 0042672b  8d4c2410             lea ecx, [esp + 0x10]
// 0042672f  e82c9f1d00           call 0x600660
// 00426734  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 0042673a  8b11                 mov edx, dword ptr [ecx]
// 0042673c  8b420c               mov eax, dword ptr [edx + 0xc]
// 0042673f  ffd0                 call eax
// 00426741  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00426747  e874fbffff           call 0x4262c0
// 0042674c  8b8e94000000         mov ecx, dword ptr [esi + 0x94]
// 00426752  8b9180000000         mov edx, dword ptr [ecx + 0x80]
// 00426758  8b4620               mov eax, dword ptr [esi + 0x20]
// 0042675b  52                   push edx
// 0042675c  6a02                 push 2
// 0042675e  6802110000           push 0x1102
// 00426763  50                   push eax
// 00426764  ff15142e8000         call dword ptr [0x802e14]
// 0042676a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0042676e  5e                   pop esi
// 0042676f  5b                   pop ebx
// 00426770  64890d00000000       mov dword ptr fs:[0], ecx
// 00426777  83c41c               add esp, 0x1c
// 0042677a  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
#pragma intrinsic(_InterlockedDecrement)


void* __cdecl operator new(unsigned int);
void __cdecl operator delete(void*);

extern "C" long (__stdcall *SendMessageA)(void*, unsigned int, unsigned int, long);

struct RefCount {
    unsigned long reserved;
    volatile long strong;
};

struct Shared {
    void* object;
    RefCount* count;

    Shared(const Shared&);
    ~Shared();
};

struct S;

struct Tool {
    virtual void slot0();
    virtual void slot1();
    virtual void slot2();
    virtual void activate();

    unsigned char padding[0x7c];
    long item;
    unsigned char tail[8];

    Tool(const Shared&, S*);
    void setup();
};

struct S {
    unsigned char padding0[0x20];
    void* window;
    unsigned char padding1[0x70];
    Tool* tool;
    unsigned char padding2[0x8c];
    Shared selection;

    void prepare();
    void f();
};

__forceinline Shared::Shared(const Shared& other)
{
    object = other.object;
    count = other.count;
    if (count)
        _InterlockedIncrement(&count->strong);
}

void S::f()
{
    prepare();
    if (selection.object && window) {
        tool = new Tool(Shared(selection), this);
        tool->activate();
        tool->setup();
        SendMessageA(window, 0x1102, 2, tool->item);
    }
}
