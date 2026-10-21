// from server: 71% by EspClaude
// roc 2008-06 005b0710  unit: RBX::ScriptContext  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0710
//
// 005b0710  d9ee                 fldz 
// 005b0712  83ec18               sub esp, 0x18
// 005b0715  53                   push ebx
// 005b0716  55                   push ebp
// 005b0717  56                   push esi
// 005b0718  8bf1                 mov esi, ecx
// 005b071a  dc9e84000000         fcomp qword ptr [esi + 0x84]
// 005b0720  57                   push edi
// 005b0721  dfe0                 fnstsw ax
// 005b0723  f6c405               test ah, 5
// 005b0726  7a11                 jp 0x5b0739
// 005b0728  e8e37cf5ff           call 0x508410
// 005b072d  dc8684000000         fadd qword ptr [esi + 0x84]
// 005b0733  dd9e8c000000         fstp qword ptr [esi + 0x8c]
// 005b0739  6a00                 push 0
// 005b073b  8d8694000000         lea eax, [esi + 0x94]
// 005b0741  50                   push eax
// 005b0742  ff1584228000         call dword ptr [0x802284]
// 005b0748  83f801               cmp eax, 1
// 005b074b  750b                 jne 0x5b0758
// 005b074d  68786b9700           push 0x976b78
// 005b0752  ff15ac218000         call dword ptr [0x8021ac]
// 005b0758  8b2d08288000         mov ebp, dword ptr [0x802808]
// 005b075e  8d4c2418             lea ecx, [esp + 0x18]
// 005b0762  51                   push ecx
// 005b0763  ffd5                 call ebp
// 005b0765  8d54241c             lea edx, [esp + 0x1c]
// 005b0769  52                   push edx
// 005b076a  ff15e8278000         call dword ptr [0x8027e8]
// 005b0770  50                   push eax
// 005b0771  8d44241c             lea eax, [esp + 0x1c]
// 005b0775  50                   push eax
// 005b0776  e855e0faff           call 0x55e7d0
// 005b077b  8b4650               mov eax, dword ptr [esi + 0x50]
// 005b077e  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b0782  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 005b0785  83c410               add esp, 0x10
// 005b0788  3bd0                 cmp edx, eax
// 005b078a  7c60                 jl 0x5b07ec
// 005b078c  7f08                 jg 0x5b0796
// 005b078e  8b442410             mov eax, dword ptr [esp + 0x10]
// 005b0792  3bc1                 cmp eax, ecx
// 005b0794  7256                 jb 0x5b07ec
// 005b0796  8d8eccfeffff         lea ecx, [esi - 0x134]
// 005b079c  e8effdffff           call 0x5b0590
// 005b07a1  8d4c2418             lea ecx, [esp + 0x18]
// 005b07a5  51                   push ecx
// 005b07a6  bf40420f00           mov edi, 0xf4240
// 005b07ab  33db                 xor ebx, ebx
// 005b07ad  ffd5                 call ebp
// 005b07af  8d54241c             lea edx, [esp + 0x1c]
// 005b07b3  52                   push edx
// 005b07b4  ff15e8278000         call dword ptr [0x8027e8]
// 005b07ba  50                   push eax
// 005b07bb  8d44241c             lea eax, [esp + 0x1c]
// 005b07bf  50                   push eax
// 005b07c0  e80be0faff           call 0x55e7d0
// 005b07c5  83c408               add esp, 8
// 005b07c8  8bc4                 mov eax, esp
// 005b07ca  8d4c2418             lea ecx, [esp + 0x18]
// 005b07ce  51                   push ecx
// 005b07cf  8d54242c             lea edx, [esp + 0x2c]
// 005b07d3  52                   push edx
// 005b07d4  8938                 mov dword ptr [eax], edi
// 005b07d6  895804               mov dword ptr [eax + 4], ebx
// 005b07d9  e8a2cffaff           call 0x55d780
// 005b07de  8b08                 mov ecx, dword ptr [eax]
// 005b07e0  894e4c               mov dword ptr [esi + 0x4c], ecx
// 005b07e3  8b5004               mov edx, dword ptr [eax + 4]
// 005b07e6  83c410               add esp, 0x10
// 005b07e9  895650               mov dword ptr [esi + 0x50], edx
// 005b07ec  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 005b07ef  85c9                 test ecx, ecx
// 005b07f1  740f                 je 0x5b0802
// 005b07f3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005b07f7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b07fb  50                   push eax
// 005b07fc  52                   push edx
// 005b07fd  e88e0d0700           call 0x621590
// 005b0802  8b7604               mov esi, dword ptr [esi + 4]
// 005b0805  85f6                 test esi, esi
// 005b0807  740d                 je 0x5b0816
// 005b0809  6a01                 push 1
// 005b080b  6a05                 push 5
// 005b080d  56                   push esi
// 005b080e  e86d220600           call 0x612a80
// 005b0813  83c40c               add esp, 0xc
// 005b0816  5f                   pop edi
// 005b0817  5e                   pop esi
// 005b0818  5d                   pop ebp
// 005b0819  5b                   pop ebx
// 005b081a  83c418               add esp, 0x18
// 005b081d  c20c00               ret 0xc

// from server: 67% by king_originala
// roc 2008-06 005b0710  unit: RBX::ScriptContext  size: 272 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b0710
// 005b0710  d9ee                 fldz 
// 005b0712  83ec18               sub esp, 0x18
// 005b0715  53                   push ebx
// 005b0716  55                   push ebp
// 005b0717  56                   push esi
// 005b0718  8bf1                 mov esi, ecx
// 005b071a  dc9e84000000         fcomp qword ptr [esi + 0x84]
// 005b0720  57                   push edi
// 005b0721  dfe0                 fnstsw ax
// 005b0723  f6c405               test ah, 5
// 005b0726  7a11                 jp 0x5b0739
// 005b0728  e8e37cf5ff           call 0x508410
// 005b072d  dc8684000000         fadd qword ptr [esi + 0x84]
// 005b0733  dd9e8c000000         fstp qword ptr [esi + 0x8c]
// 005b0739  6a00                 push 0
// 005b073b  8d8694000000         lea eax, [esi + 0x94]
// 005b0741  50                   push eax
// 005b0742  ff1584228000         call dword ptr [0x802284]
// 005b0748  83f801               cmp eax, 1
// 005b074b  750b                 jne 0x5b0758
// 005b074d  68786b9700           push 0x976b78
// 005b0752  ff15ac218000         call dword ptr [0x8021ac]
// 005b0758  8b2d08288000         mov ebp, dword ptr [0x802808]
// 005b075e  8d4c2418             lea ecx, [esp + 0x18]
// 005b0762  51                   push ecx
// 005b0763  ffd5                 call ebp
// 005b0765  8d54241c             lea edx, [esp + 0x1c]
// 005b0769  52                   push edx
// 005b076a  ff15e8278000         call dword ptr [0x8027e8]
// 005b0770  50                   push eax
// 005b0771  8d44241c             lea eax, [esp + 0x1c]
// 005b0775  50                   push eax
// 005b0776  e855e0faff           call 0x55e7d0
// 005b077b  8b4650               mov eax, dword ptr [esi + 0x50]
// 005b077e  8b542424             mov edx, dword ptr [esp + 0x24]
// 005b0782  8b4e4c               mov ecx, dword ptr [esi + 0x4c]
// 005b0785  83c410               add esp, 0x10
// 005b0788  3bd0                 cmp edx, eax
// 005b078a  7c60                 jl 0x5b07ec
// 005b078c  7f08                 jg 0x5b0796
// 005b078e  8b442410             mov eax, dword ptr [esp + 0x10]
// 005b0792  3bc1                 cmp eax, ecx
// 005b0794  7256                 jb 0x5b07ec
// 005b0796  8d8eccfeffff         lea ecx, [esi - 0x134]
// 005b079c  e8effdffff           call 0x5b0590
// 005b07a1  8d4c2418             lea ecx, [esp + 0x18]
// 005b07a5  51                   push ecx
// 005b07a6  bf40420f00           mov edi, 0xf4240
// 005b07ab  33db                 xor ebx, ebx
// 005b07ad  ffd5                 call ebp
// 005b07af  8d54241c             lea edx, [esp + 0x1c]
// 005b07b3  52                   push edx
// 005b07b4  ff15e8278000         call dword ptr [0x8027e8]
// 005b07ba  50                   push eax
// 005b07bb  8d44241c             lea eax, [esp + 0x1c]
// 005b07bf  50                   push eax
// 005b07c0  e80be0faff           call 0x55e7d0
// 005b07c5  83c408               add esp, 8
// 005b07c8  8bc4                 mov eax, esp
// 005b07ca  8d4c2418             lea ecx, [esp + 0x18]
// 005b07ce  51                   push ecx
// 005b07cf  8d54242c             lea edx, [esp + 0x2c]
// 005b07d3  52                   push edx
// 005b07d4  8938                 mov dword ptr [eax], edi
// 005b07d6  895804               mov dword ptr [eax + 4], ebx
// 005b07d9  e8a2cffaff           call 0x55d780
// 005b07de  8b08                 mov ecx, dword ptr [eax]
// 005b07e0  894e4c               mov dword ptr [esi + 0x4c], ecx
// 005b07e3  8b5004               mov edx, dword ptr [eax + 4]
// 005b07e6  83c410               add esp, 0x10
// 005b07e9  895650               mov dword ptr [esi + 0x50], edx
// 005b07ec  8b4e74               mov ecx, dword ptr [esi + 0x74]
// 005b07ef  85c9                 test ecx, ecx
// 005b07f1  740f                 je 0x5b0802
// 005b07f3  8b442434             mov eax, dword ptr [esp + 0x34]
// 005b07f7  8b542430             mov edx, dword ptr [esp + 0x30]
// 005b07fb  50                   push eax
// 005b07fc  52                   push edx
// 005b07fd  e88e0d0700           call 0x621590
// 005b0802  8b7604               mov esi, dword ptr [esi + 4]
// 005b0805  85f6                 test esi, esi
// 005b0807  740d                 je 0x5b0816
// 005b0809  6a01                 push 1
// 005b080b  6a05                 push 5
// 005b080d  56                   push esi
// 005b080e  e86d220600           call 0x612a80
// 005b0813  83c40c               add esp, 0xc
// 005b0816  5f                   pop edi
// 005b0817  5e                   pop esi
// 005b0818  5d                   pop ebp
// 005b0819  5b                   pop ebx
// 005b081a  83c418               add esp, 0x18
// 005b081d  c20c00               ret 0xc
typedef __int64 TimeValue;

struct Duration {
    TimeValue value;
    Duration(TimeValue v) : value(v) {}
    Duration(const Duration &o) : value(o.value) {}
};

struct Time {
    TimeValue value;
    Time() {}
    Time(const Time &o) : value(o.value) {}
    bool operator>=(const Time &o) const { return !(value < o.value); }
};

extern "C" {
    __declspec(dllimport) long __stdcall InterlockedExchange(volatile long *, long);
    __declspec(dllimport) long __stdcall InterlockedDecrement(volatile long *);
    __declspec(dllimport) TimeValue __cdecl _time64(TimeValue *);
    __declspec(dllimport) void *__cdecl _localtime64(const TimeValue *);
}

extern volatile long sharedCounter;
extern double __cdecl currentTime();
extern Time __cdecl createTime(const void *);
extern Time __cdecl operator+(const Time &, Duration);
extern void __cdecl updateState(void *, int, int);

inline Time localTime()
{
    TimeValue t;
    _time64(&t);
    return createTime(_localtime64(&t));
}

struct Owner {
    void refresh();
};

struct Callback {
    void invoke(int, int);
};

#pragma pack(push, 4)
struct S {
    unsigned char padding0[4];
    void *state;
    unsigned char padding1[0x44];
    Time nextUpdate;
    unsigned char padding2[0x20];
    Callback *callback;
    unsigned char padding3[0x0c];
    double interval;
    double deadline;
    volatile long counter;

    void run(int, int, int);
};
#pragma pack(pop)

void S::run(int unused, int first, int second)
{
    if (interval > 0.0)
        deadline = currentTime() + interval;

    if (InterlockedExchange(&counter, 0) == 1)
        InterlockedDecrement(&sharedCounter);

    Time now = localTime();
    if (now >= nextUpdate) {
        reinterpret_cast<Owner *>(reinterpret_cast<char *>(this) - 0x134)->refresh();
        nextUpdate = localTime() + Duration(1000000);
    }

    if (callback)
        callback->invoke(first, second);

    if (state)
        updateState(state, 5, 1);
}
