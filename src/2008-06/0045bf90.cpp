// from server: 100% by colin
// roc 2008-06 0045bf90  unit: CRobloxWnd  size: 338 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045bf90
//
// 0045bf90  6aff                 push -1
// 0045bf92  682b2c7c00           push 0x7c2c2b
// 0045bf97  64a100000000         mov eax, dword ptr fs:[0]
// 0045bf9d  50                   push eax
// 0045bf9e  64892500000000       mov dword ptr fs:[0], esp
// 0045bfa5  83ec7c               sub esp, 0x7c
// 0045bfa8  53                   push ebx
// 0045bfa9  55                   push ebp
// 0045bfaa  56                   push esi
// 0045bfab  57                   push edi
// 0045bfac  8bf9                 mov edi, ecx
// 0045bfae  8b8784000000         mov eax, dword ptr [edi + 0x84]
// 0045bfb4  83c034               add eax, 0x34
// 0045bfb7  50                   push eax
// 0045bfb8  89442418             mov dword ptr [esp + 0x18], eax
// 0045bfbc  ff15d4228000         call dword ptr [0x8022d4]
// 0045bfc2  c644241801           mov byte ptr [esp + 0x18], 1
// 0045bfc7  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0045bfcd  8a8193010000         mov al, byte ptr [ecx + 0x193]
// 0045bfd3  33db                 xor ebx, ebx
// 0045bfd5  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 0045bfdc  88442413             mov byte ptr [esp + 0x13], al
// 0045bfe0  3ac3                 cmp al, bl
// 0045bfe2  7406                 je 0x45bfea
// 0045bfe4  53                   push ebx
// 0045bfe5  e866c00000           call 0x468050
// 0045bfea  8b351c2d8000         mov esi, dword ptr [0x802d1c]
// 0045bff0  53                   push ebx
// 0045bff1  bd01000000           mov ebp, 1
// 0045bff6  6a12                 push 0x12
// 0045bff8  896c2424             mov dword ptr [esp + 0x24], ebp
// 0045bffc  c744242812000000     mov dword ptr [esp + 0x28], 0x12
// 0045c004  ffd6                 call esi
// 0045c006  53                   push ebx
// 0045c007  6a2a                 push 0x2a
// 0045c009  8944242c             mov dword ptr [esp + 0x2c], eax
// 0045c00d  895c2430             mov dword ptr [esp + 0x30], ebx
// 0045c011  895c2434             mov dword ptr [esp + 0x34], ebx
// 0045c015  895c2438             mov dword ptr [esp + 0x38], ebx
// 0045c019  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0045c01d  896c2440             mov dword ptr [esp + 0x40], ebp
// 0045c021  c74424442c000000     mov dword ptr [esp + 0x44], 0x2c
// 0045c029  ffd6                 call esi
// 0045c02b  53                   push ebx
// 0045c02c  6a2a                 push 0x2a
// 0045c02e  89442448             mov dword ptr [esp + 0x48], eax
// 0045c032  895c244c             mov dword ptr [esp + 0x4c], ebx
// 0045c036  895c2450             mov dword ptr [esp + 0x50], ebx
// 0045c03a  895c2454             mov dword ptr [esp + 0x54], ebx
// 0045c03e  895c2458             mov dword ptr [esp + 0x58], ebx
// 0045c042  896c245c             mov dword ptr [esp + 0x5c], ebp
// 0045c046  c74424602c000000     mov dword ptr [esp + 0x60], 0x2c
// 0045c04e  ffd6                 call esi
// 0045c050  53                   push ebx
// 0045c051  6a12                 push 0x12
// 0045c053  89442464             mov dword ptr [esp + 0x64], eax
// 0045c057  c744246802000000     mov dword ptr [esp + 0x68], 2
// 0045c05f  895c246c             mov dword ptr [esp + 0x6c], ebx
// 0045c063  895c2470             mov dword ptr [esp + 0x70], ebx
// 0045c067  895c2474             mov dword ptr [esp + 0x74], ebx
// 0045c06b  896c2478             mov dword ptr [esp + 0x78], ebp
// 0045c06f  c744247c12000000     mov dword ptr [esp + 0x7c], 0x12
// 0045c077  ffd6                 call esi
// 0045c079  89442478             mov dword ptr [esp + 0x78], eax
// 0045c07d  6a1c                 push 0x1c
// 0045c07f  8d442420             lea eax, [esp + 0x20]
// 0045c083  50                   push eax
// 0045c084  6a04                 push 4
// 0045c086  c784248800000002000000 mov dword ptr [esp + 0x88], 2
// 0045c091  899c248c000000       mov dword ptr [esp + 0x8c], ebx
// 0045c098  899c2490000000       mov dword ptr [esp + 0x90], ebx
// 0045c09f  899c2494000000       mov dword ptr [esp + 0x94], ebx
// 0045c0a6  ff15202d8000         call dword ptr [0x802d20]
// 0045c0ac  385c2413             cmp byte ptr [esp + 0x13], bl
// 0045c0b0  740c                 je 0x45c0be
// 0045c0b2  8b8f84000000         mov ecx, dword ptr [edi + 0x84]
// 0045c0b8  55                   push ebp
// 0045c0b9  e892bf0000           call 0x468050
// 0045c0be  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0045c0c2  51                   push ecx
// 0045c0c3  ff15f4218000         call dword ptr [0x8021f4]
// 0045c0c9  8b8c248c000000       mov ecx, dword ptr [esp + 0x8c]
// 0045c0d0  5f                   pop edi
// 0045c0d1  5e                   pop esi
// 0045c0d2  5d                   pop ebp
// 0045c0d3  5b                   pop ebx
// 0045c0d4  64890d00000000       mov dword ptr fs:[0], ecx
// 0045c0db  81c488000000         add esp, 0x88
// 0045c0e1  c3                   ret 

// from server: 100% by king_originala
// roc 2008-06 0045bf80  unit: CRobloxWnd  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0045bf80
//
// 0045bf80  56                   push esi
// 0045bf81  8bf1                 mov esi, ecx
// 0045bf83  e828ffffff           call 0x45beb0
// 0045bf88  8bce                 mov ecx, esi
// 0045bf8a  5e                   pop esi
// 0045bf8b  e9d84c2400           jmp 0x6a0c68

typedef unsigned long DWORD;

extern "C" {
    extern void (__stdcall *const EnterCriticalSection)(void *);
    extern void (__stdcall *const LeaveCriticalSection)(void *);
    extern unsigned int (__stdcall *MapVirtualKeyA)(unsigned int, unsigned int);
    extern unsigned int (__stdcall *const SendInput)(unsigned int, void *, int);
}

struct Lock {
    void *section;
    bool locked;
    Lock(void *);
    ~Lock();
    void unlock();
};

inline Lock::Lock(void *p) : section(p)
{
    EnterCriticalSection(section);
    locked = true;
}

inline Lock::~Lock()
{
    if (locked)
        LeaveCriticalSection(section);
}

inline void Lock::unlock()
{
    LeaveCriticalSection(*(void* volatile*)&section);
    locked = false;
}

struct State {
    char padding0[0x34];
    char section[0x18];
    char padding1[0x147];
    bool enabled;
    void setEnabled(bool);
};

struct Input {
    DWORD type;
    DWORD key;
    DWORD scan;
    DWORD flags;
    DWORD time;
    DWORD extra;
    DWORD padding;
};

struct S {
    char padding[0x84];
    State *state;
    void f();
    void cleanup();
    void finish();
    void sendKeys();
};

void S::f()
{
    cleanup();
    finish();
}

void S::sendKeys()
{
    Lock lock(state->section);
    bool enabled = state->enabled;
    if (enabled)
        state->setEnabled(false);

    Input inputs[4];
    unsigned int (__stdcall *map)(unsigned int, unsigned int) = MapVirtualKeyA;

    inputs[0].type = 1;
    inputs[0].key = 0x12;
    inputs[0].scan = map(0x12, 0);
    inputs[0].flags = 0;
    inputs[0].time = 0;
    inputs[0].extra = 0;
    inputs[0].padding = 0;

    inputs[1].type = 1;
    inputs[1].key = 0x2c;
    inputs[1].scan = map(0x2a, 0);
    inputs[1].flags = 0;
    inputs[1].time = 0;
    inputs[1].extra = 0;
    inputs[1].padding = 0;

    inputs[2].type = 1;
    inputs[2].key = 0x2c;
    inputs[2].scan = map(0x2a, 0);
    inputs[2].flags = 2;
    inputs[2].time = 0;
    inputs[2].extra = 0;
    inputs[2].padding = 0;

    inputs[3].type = 1;
    inputs[3].key = 0x12;
    inputs[3].scan = map(0x12, 0);
    inputs[3].flags = 2;
    inputs[3].time = 0;
    inputs[3].extra = 0;
    inputs[3].padding = 0;

    SendInput(4, inputs, 28);

    if (enabled)
        state->setEnabled(true);

    lock.unlock();
}
