// from server: 100% by king_originala
// roc 2008-06 004689c0  unit: DxUserInput  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004689c0
//
// 004689c0  6aff                 push -1
// 004689c2  6868367c00           push 0x7c3668
// 004689c7  64a100000000         mov eax, dword ptr fs:[0]
// 004689cd  50                   push eax
// 004689ce  64892500000000       mov dword ptr fs:[0], esp
// 004689d5  83ec08               sub esp, 8
// 004689d8  53                   push ebx
// 004689d9  56                   push esi
// 004689da  8bf1                 mov esi, ecx
// 004689dc  57                   push edi
// 004689dd  8d5e08               lea ebx, [esi + 8]
// 004689e0  53                   push ebx
// 004689e1  895c2410             mov dword ptr [esp + 0x10], ebx
// 004689e5  ff15d4228000         call dword ptr [0x8022d4]
// 004689eb  c644241001           mov byte ptr [esp + 0x10], 1
// 004689f0  8d7ed4               lea edi, [esi - 0x2c]
// 004689f3  8bcf                 mov ecx, edi
// 004689f5  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 004689fd  e8eeedffff           call 0x4677f0
// 00468a02  80be6601000000       cmp byte ptr [esi + 0x166], 0
// 00468a09  7407                 je 0x468a12
// 00468a0b  8bcf                 mov ecx, edi
// 00468a0d  e89efbffff           call 0x4685b0
// 00468a12  8b8650010000         mov eax, dword ptr [esi + 0x150]
// 00468a18  85c0                 test eax, eax
// 00468a1a  7411                 je 0x468a2d
// 00468a1c  8b08                 mov ecx, dword ptr [eax]
// 00468a1e  8d563c               lea edx, [esi + 0x3c]
// 00468a21  52                   push edx
// 00468a22  6800010000           push 0x100
// 00468a27  50                   push eax
// 00468a28  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00468a2b  ffd0                 call eax
// 00468a2d  80be6701000000       cmp byte ptr [esi + 0x167], 0
// 00468a34  7407                 je 0x468a3d
// 00468a36  8bcf                 mov ecx, edi
// 00468a38  e873f7ffff           call 0x4681b0
// 00468a3d  53                   push ebx
// 00468a3e  ff15f4218000         call dword ptr [0x8021f4]
// 00468a44  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00468a48  5f                   pop edi
// 00468a49  5e                   pop esi
// 00468a4a  5b                   pop ebx
// 00468a4b  64890d00000000       mov dword ptr fs:[0], ecx
// 00468a52  83c414               add esp, 0x14
// 00468a55  c20c00               ret 0xc

extern "C" {
    extern void (__stdcall *EnterCriticalSection)(void*);
    extern void (__stdcall *LeaveCriticalSection)(void*);
}

struct Lock {
    void* section;
    bool held;

    inline Lock(void*);
    inline ~Lock();
};

inline Lock::Lock(void* p) : section(p), held(false)
{
    EnterCriticalSection(section);
    held = true;
}

inline Lock::~Lock()
{
    if (held)
        LeaveCriticalSection(section);
}

struct Device;

struct DeviceTable {
    void* unused[9];
    long (__stdcall *getState)(Device*, unsigned long, void*);
};

struct Device {
    DeviceTable* table;
};

struct Owner {
    void update();
    void updateFirst();
    void updateSecond();
};

struct S {
    char padding0[8];
    char section[24];
    char padding1[28];
    unsigned char state[256];
    char padding2[20];
    Device* device;
    char padding3[18];
    bool firstEnabled;
    bool secondEnabled;

    void f(int, int, int);
};

void S::f(int, int, int)
{
    Lock lock(section);
    Owner* owner = reinterpret_cast<Owner*>(
        reinterpret_cast<char*>(this) - 0x2c);

    owner->update();

    if (firstEnabled)
        owner->updateFirst();

    Device* current = device;
    if (current)
        current->table->getState(current, 0x100, state);

    if (secondEnabled)
        owner->updateSecond();

    LeaveCriticalSection(lock.section);
    lock.held = false;
}
