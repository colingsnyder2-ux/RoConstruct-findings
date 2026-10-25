// from server: 100% by colin
// roc 2008-06 00432bd0  unit: RBX::CMarshalWindow  size: 118 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00432bd0
//
// 00432bd0  6aff                 push -1
// 00432bd2  6868367c00           push 0x7c3668
// 00432bd7  64a100000000         mov eax, dword ptr fs:[0]
// 00432bdd  50                   push eax
// 00432bde  64892500000000       mov dword ptr fs:[0], esp
// 00432be5  83ec08               sub esp, 8
// 00432be8  56                   push esi
// 00432be9  687cd19600           push 0x96d17c
// 00432bee  c74424087cd19600     mov dword ptr [esp + 8], 0x96d17c
// 00432bf6  ff15d4228000         call dword ptr [0x8022d4]
// 00432bfc  c644240801           mov byte ptr [esp + 8], 1
// 00432c01  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00432c05  834624ff             add dword ptr [esi + 0x24], -1
// 00432c09  c744241400000000     mov dword ptr [esp + 0x14], 0
// 00432c11  7518                 jne 0x432c2b
// 00432c13  8d4628               lea eax, [esi + 0x28]
// 00432c16  50                   push eax
// 00432c17  b95cd19600           mov ecx, 0x96d15c
// 00432c1c  e8bf30fdff           call 0x405ce0
// 00432c21  8b4e04               mov ecx, dword ptr [esi + 4]
// 00432c24  51                   push ecx
// 00432c25  ff15cc2d8000         call dword ptr [0x802dcc]
// 00432c2b  687cd19600           push 0x96d17c
// 00432c30  ff15f4218000         call dword ptr [0x8021f4]
// 00432c36  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00432c3a  5e                   pop esi
// 00432c3b  64890d00000000       mov dword ptr fs:[0], ecx
// 00432c42  83c414               add esp, 0x14
// 00432c45  c3                   ret 

extern "C" __declspec(dllimport) void __stdcall EnterCriticalSection(void *);
extern "C" __declspec(dllimport) void __stdcall LeaveCriticalSection(void *);
extern "C" __declspec(dllimport) int __stdcall DestroyWindow(void *);

struct CriticalSection {
    unsigned char data[24];
};

struct Registry {
    void remove(void *);
};

extern CriticalSection marshalLock;
extern Registry marshalRegistry;

struct MarshalWindow {
    unsigned char reserved0[4];
    void *window;
    unsigned char reserved1[28];
    int references;
    unsigned long key;
};

struct ScopedLock {
    CriticalSection *section;
    bool locked;

    ScopedLock(CriticalSection &);
    ~ScopedLock();
};

__forceinline ScopedLock::ScopedLock(CriticalSection &value)
    : section(&value), locked(false)
{
    EnterCriticalSection(section);
    locked = true;
}

__forceinline ScopedLock::~ScopedLock()
{
    if (locked)
        LeaveCriticalSection(section);
}

void __cdecl releaseMarshalWindow(MarshalWindow *value)
{
    ScopedLock lock(marshalLock);
    if (--value->references == 0) {
        marshalRegistry.remove(&value->key);
        DestroyWindow(value->window);
    }
}
