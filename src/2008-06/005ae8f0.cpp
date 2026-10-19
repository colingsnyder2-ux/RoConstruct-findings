// from server: 88% by colin
// from server: 87% by king_originala
// roc 2008-06 005ae8f0  unit: RBX::ScriptContext  size: 506 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005ae8f0
//
// 005ae8f0  6aff                 push -1
// 005ae8f2  68e5347d00           push 0x7d34e5
// 005ae8f7  64a100000000         mov eax, dword ptr fs:[0]
// 005ae8fd  50                   push eax
// 005ae8fe  64892500000000       mov dword ptr fs:[0], esp
// 005ae905  83ec4c               sub esp, 0x4c
// 005ae908  53                   push ebx
// 005ae909  55                   push ebp
// 005ae90a  56                   push esi
// 005ae90b  8bf1                 mov esi, ecx
// 005ae90d  33db                 xor ebx, ebx
// 005ae90f  8d8ed0010000         lea ecx, [esi + 0x1d0]
// 005ae915  895c240c             mov dword ptr [esp + 0xc], ebx
// 005ae919  57                   push edi
// 005ae91a  33ed                 xor ebp, ebp
// 005ae91c  894c2414             mov dword ptr [esp + 0x14], ecx
// 005ae920  e8bb63feff           call 0x594ce0
// 005ae925  c644241801           mov byte ptr [esp + 0x18], 1
// 005ae92a  dd44246c             fld qword ptr [esp + 0x6c]
// 005ae92e  dd96b8010000         fst qword ptr [esi + 0x1b8]
// 005ae934  896c2464             mov dword ptr [esp + 0x64], ebp
// 005ae938  d9ee                 fldz 
// 005ae93a  d9c0                 fld st(0)
// 005ae93c  ddea                 fucomp st(2)
// 005ae93e  dfe0                 fnstsw ax
// 005ae940  ddd9                 fstp st(1)
// 005ae942  f6c444               test ah, 0x44
// 005ae945  0f8bc1000000         jnp 0x5aea0c
// 005ae94b  ddd8                 fstp st(0)
// 005ae94d  e8be9af5ff           call 0x508410
// 005ae952  dc86b8010000         fadd qword ptr [esi + 0x1b8]
// 005ae958  d9ee                 fldz 
// 005ae95a  d9c9                 fxch st(1)
// 005ae95c  dd9ec0010000         fstp qword ptr [esi + 0x1c0]
// 005ae962  dc9eb8010000         fcomp qword ptr [esi + 0x1b8]
// 005ae968  dfe0                 fnstsw ax
// 005ae96a  f6c444               test ah, 0x44
// 005ae96d  0f8b51010000         jnp 0x5aeac4
// 005ae973  39aecc010000         cmp dword ptr [esi + 0x1cc], ebp
// 005ae979  0f853a010000         jne 0x5aeab9
// 005ae97f  6a0c                 push 0xc
// 005ae981  e89a1f0f00           call 0x6a0920
// 005ae986  83c404               add esp, 4
// 005ae989  8944246c             mov dword ptr [esp + 0x6c], eax
// 005ae98d  c644246401           mov byte ptr [esp + 0x64], 1
// 005ae992  3bc5                 cmp eax, ebp
// 005ae994  747d                 je 0x5aea13
// 005ae996  55                   push ebp
// 005ae997  83ec10               sub esp, 0x10
// 005ae99a  89642424             mov dword ptr [esp + 0x24], esp
// 005ae99e  8bdc                 mov ebx, esp
// 005ae9a0  83ec08               sub esp, 8
// 005ae9a3  8bc4                 mov eax, esp
// 005ae9a5  8964242c             mov dword ptr [esp + 0x2c], esp
// 005ae9a9  56                   push esi
// 005ae9aa  50                   push eax
// 005ae9ab  bfb0b45a00           mov edi, 0x5ab4b0
// 005ae9b0  e88ba00600           call 0x618a40
// 005ae9b5  83c408               add esp, 8
// 005ae9b8  55                   push ebp
// 005ae9b9  57                   push edi
// 005ae9ba  53                   push ebx
// 005ae9bb  e810dbedff           call 0x48c4d0
// 005ae9c0  83c414               add esp, 0x14
// 005ae9c3  8d4c2450             lea ecx, [esp + 0x50]
// 005ae9c7  e874e7ffff           call 0x5ad140
// 005ae9cc  33ed                 xor ebp, ebp
// 005ae9ce  55                   push ebp
// 005ae9cf  683c488300           push 0x83483c
// 005ae9d4  8d4c2444             lea ecx, [esp + 0x44]
// 005ae9d8  51                   push ecx
// 005ae9d9  8d542428             lea edx, [esp + 0x28]
// 005ae9dd  52                   push edx
// 005ae9de  c644247402           mov byte ptr [esp + 0x74], 2
// 005ae9e3  c744242001000000     mov dword ptr [esp + 0x20], 1
// 005ae9eb  e82087feff           call 0x597110
// 005ae9f0  83c410               add esp, 0x10
// 005ae9f3  8b4c246c             mov ecx, dword ptr [esp + 0x6c]
// 005ae9f7  bb03000000           mov ebx, 3
// 005ae9fc  50                   push eax
// 005ae9fd  895c2468             mov dword ptr [esp + 0x68], ebx
// 005aea01  895c2414             mov dword ptr [esp + 0x14], ebx
// 005aea05  e87680ffff           call 0x5a6a80
// 005aea0a  eb09                 jmp 0x5aea15
// 005aea0c  d9c0                 fld st(0)
// 005aea0e  e949ffffff           jmp 0x5ae95c
// 005aea13  33c0                 xor eax, eax
// 005aea15  8bbecc010000         mov edi, dword ptr [esi + 0x1cc]
// 005aea1b  c744246405000000     mov dword ptr [esp + 0x64], 5
// 005aea23  8986cc010000         mov dword ptr [esi + 0x1cc], eax
// 005aea29  3bfd                 cmp edi, ebp
// 005aea2b  7410                 je 0x5aea3d
// 005aea2d  8bcf                 mov ecx, edi
// 005aea2f  e80c7effff           call 0x5a6840
// 005aea34  57                   push edi
// 005aea35  e8401c0f00           call 0x6a067a
// 005aea3a  83c404               add esp, 4
// 005aea3d  c744246404000000     mov dword ptr [esp + 0x64], 4
// 005aea45  f6c302               test bl, 2
// 005aea48  7428                 je 0x5aea72
// 005aea4a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005aea4e  83e3fd               and ebx, 0xfffffffd
// 005aea51  895c2410             mov dword ptr [esp + 0x10], ebx
// 005aea55  3bc5                 cmp eax, ebp
// 005aea57  7419                 je 0x5aea72
// 005aea59  8b00                 mov eax, dword ptr [eax]
// 005aea5b  3bc5                 cmp eax, ebp
// 005aea5d  740f                 je 0x5aea6e
// 005aea5f  8d4c2424             lea ecx, [esp + 0x24]
// 005aea63  6a01                 push 1
// 005aea65  51                   push ecx
// 005aea66  8bd1                 mov edx, ecx
// 005aea68  52                   push edx
// 005aea69  ffd0                 call eax
// 005aea6b  83c40c               add esp, 0xc
// 005aea6e  896c241c             mov dword ptr [esp + 0x1c], ebp
// 005aea72  896c2464             mov dword ptr [esp + 0x64], ebp
// 005aea76  f6c301               test bl, 1
// 005aea79  741d                 je 0x5aea98
// 005aea7b  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 005aea7f  3bc5                 cmp eax, ebp
// 005aea81  7415                 je 0x5aea98
// 005aea83  8b00                 mov eax, dword ptr [eax]
// 005aea85  3bc5                 cmp eax, ebp
// 005aea87  740f                 je 0x5aea98
// 005aea89  8d4c2444             lea ecx, [esp + 0x44]
// 005aea8d  6a01                 push 1
// 005aea8f  51                   push ecx
// 005aea90  8bd1                 mov edx, ecx
// 005aea92  52                   push edx
// 005aea93  ffd0                 call eax
// 005aea95  83c40c               add esp, 0xc
// 005aea98  8bb638010000         mov esi, dword ptr [esi + 0x138]
// 005aea9e  3bf5                 cmp esi, ebp
// 005aeaa0  7422                 je 0x5aeac4
// 005aeaa2  68e8030000           push 0x3e8
// 005aeaa7  6a08                 push 8
// 005aeaa9  6830e25a00           push 0x5ae230
// 005aeaae  56                   push esi
// 005aeaaf  e8cc410700           call 0x622c80
// 005aeab4  83c410               add esp, 0x10
// 005aeab7  eb0b                 jmp 0x5aeac4
// 005aeab9  8d8ed8010000         lea ecx, [esi + 0x1d8]
// 005aeabf  e86c320400           call 0x5f1d30
// 005aeac4  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005aeac8  c7442464ffffffff     mov dword ptr [esp + 0x64], 0xffffffff
// 005aead0  e82b62feff           call 0x594d00
// 005aead5  8b4c245c             mov ecx, dword ptr [esp + 0x5c]
// 005aead9  5f                   pop edi
// 005aeada  5e                   pop esi
// 005aeadb  5d                   pop ebp
// 005aeadc  64890d00000000       mov dword ptr fs:[0], ecx
// 005aeae3  5b                   pop ebx
// 005aeae4  83c458               add esp, 0x58
// 005aeae7  c20800               ret 8

typedef unsigned int size_t;

extern void* __cdecl operator new(size_t);
extern void __cdecl operator delete(void*);
extern double __cdecl clockSeconds();

struct Mutex {
    void* handle;
    unsigned char kind;
    void lock();
    void unlock();
};

struct Lock {
    Mutex* mutex;
    bool locked;
    Lock(Mutex*);
    ~Lock();
};

inline Lock::Lock(Mutex* p) : mutex(p), locked(false) {
    mutex->lock();
    locked = true;
}

inline Lock::~Lock() {
    if (locked)
        mutex->unlock();
}

struct ScriptContext;

struct Ref {
    void* object;
    void* control;
    Ref(const Ref&);
};

struct Bound {
    unsigned char data[16];
    Bound(const Bound&);
};

extern Ref __cdecl getReference(ScriptContext*);
extern Bound __cdecl bindTask(void (__cdecl *)(ScriptContext*), int, Ref);
extern void __cdecl timeoutTask(ScriptContext*);
extern void __cdecl interruptTask(void*);
extern void __cdecl setInterrupt(void*, void (__cdecl *)(void*), int, int);

struct Callable {
    typedef void (__cdecl *Manager)(void*, void*, int);
    Manager* manager;
    void* invoker;
    unsigned char data[24];

    Callable(Bound, int);
    ~Callable();
};

inline Callable::~Callable() {
    if (manager) {
        Manager f = *manager;
        if (f)
            f(data, data, 1);
        manager = 0;
    }
}

extern Callable __cdecl nameTask(const Callable*, const char*, int);

struct Thread {
    unsigned char data[12];
    Thread(const Callable&);
    __declspec(dllimport) ~Thread() throw();
};

struct Owner {
    Thread* pointer;
    explicit Owner(Thread*);
    ~Owner();
    void reset(Thread*);
};

inline Owner::Owner(Thread* p) : pointer(p) {}

inline Owner::~Owner() {
    if (pointer)
        delete pointer;
}

inline void Owner::reset(Thread* p) {
    Owner replacement(p);
    Thread* old = pointer;
    pointer = replacement.pointer;
    replacement.pointer = old;
}

struct Event {
    unsigned char data[8];
    void signal();
};

struct ScriptContext {
    unsigned char pad0[0x138];
    void* state;
    unsigned char pad13c[0x7c];
    double timeout;
    double deadline;
    unsigned char pad1c8[4];
    Owner thread;
    Mutex mutex;
    Event event;
    void setTimeout(double);
};

void ScriptContext::setTimeout(double value) {
    Lock guard(&mutex);
    timeout = value;
    deadline = value != 0.0 ? clockSeconds() + timeout : 0.0;

    if (timeout != 0.0) {
        if (!thread.pointer) {
            thread.reset(new Thread(nameTask(
                &Callable(bindTask(timeoutTask, 0, getReference(this)), 0),
                "ScriptContext Timeout", 0)));
            if (state)
                setInterrupt(state, interruptTask, 8, 1000);
        } else {
            event.signal();
        }
    }
}
