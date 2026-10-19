// from server: 74% by colin
// from server: 73% by king_originala
// roc 2008-06 0063ff50  unit: RBX::CloneTool  size: 497 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0063ff50
//
// 0063ff50  6aff                 push -1
// 0063ff52  64a100000000         mov eax, dword ptr fs:[0]
// 0063ff58  68dba97d00           push 0x7da9db
// 0063ff5d  50                   push eax
// 0063ff5e  64892500000000       mov dword ptr fs:[0], esp
// 0063ff65  83ec34               sub esp, 0x34
// 0063ff68  53                   push ebx
// 0063ff69  55                   push ebp
// 0063ff6a  56                   push esi
// 0063ff6b  57                   push edi
// 0063ff6c  8bf9                 mov edi, ecx
// 0063ff6e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0063ff71  85c9                 test ecx, ecx
// 0063ff73  0f84b1010000         je 0x64012a
// 0063ff79  e8328df5ff           call 0x598cb0
// 0063ff7e  8b4f1c               mov ecx, dword ptr [edi + 0x1c]
// 0063ff81  8d442424             lea eax, [esp + 0x24]
// 0063ff85  50                   push eax
// 0063ff86  e8c593f1ff           call 0x559350
// 0063ff8b  50                   push eax
// 0063ff8c  8d4c2420             lea ecx, [esp + 0x20]
// 0063ff90  51                   push ecx
// 0063ff91  e8ea16f6ff           call 0x5a1680
// 0063ff96  83c408               add esp, 8
// 0063ff99  8b442428             mov eax, dword ptr [esp + 0x28]
// 0063ff9d  c744244c00000000     mov dword ptr [esp + 0x4c], 0
// 0063ffa5  85c0                 test eax, eax
// 0063ffa7  742c                 je 0x63ffd5
// 0063ffa9  8bf0                 mov esi, eax
// 0063ffab  83c004               add eax, 4
// 0063ffae  83caff               or edx, 0xffffffff
// 0063ffb1  f00fc110             lock xadd dword ptr [eax], edx
// 0063ffb5  751e                 jne 0x63ffd5
// 0063ffb7  8b06                 mov eax, dword ptr [esi]
// 0063ffb9  8b5004               mov edx, dword ptr [eax + 4]
// 0063ffbc  8bce                 mov ecx, esi
// 0063ffbe  ffd2                 call edx
// 0063ffc0  8d4608               lea eax, [esi + 8]
// 0063ffc3  83c9ff               or ecx, 0xffffffff
// 0063ffc6  f00fc108             lock xadd dword ptr [eax], ecx
// 0063ffca  7509                 jne 0x63ffd5
// 0063ffcc  8b16                 mov edx, dword ptr [esi]
// 0063ffce  8b4208               mov eax, dword ptr [edx + 8]
// 0063ffd1  8bce                 mov ecx, esi
// 0063ffd3  ffd0                 call eax
// 0063ffd5  8d4c242c             lea ecx, [esp + 0x2c]
// 0063ffd9  e8f293deff           call 0x4293d0
// 0063ffde  8b742420             mov esi, dword ptr [esp + 0x20]
// 0063ffe2  8b5c241c             mov ebx, dword ptr [esp + 0x1c]
// 0063ffe6  895c2414             mov dword ptr [esp + 0x14], ebx
// 0063ffea  89742418             mov dword ptr [esp + 0x18], esi
// 0063ffee  85f6                 test esi, esi
// 0063fff0  740c                 je 0x63fffe
// 0063fff2  8d4e04               lea ecx, [esi + 4]
// 0063fff5  ba01000000           mov edx, 1
// 0063fffa  f00fc111             lock xadd dword ptr [ecx], edx
// 0063fffe  8d442414             lea eax, [esp + 0x14]
// 00640002  50                   push eax
// 00640003  8d4c2430             lea ecx, [esp + 0x30]
// 00640007  c644245002           mov byte ptr [esp + 0x50], 2
// 0064000c  e8ff00deff           call 0x420110
// 00640011  c644244c01           mov byte ptr [esp + 0x4c], 1
// 00640016  85f6                 test esi, esi
// 00640018  742a                 je 0x640044
// 0064001a  8d4e04               lea ecx, [esi + 4]
// 0064001d  83caff               or edx, 0xffffffff
// 00640020  f00fc111             lock xadd dword ptr [ecx], edx
// 00640024  751e                 jne 0x640044
// 00640026  8b06                 mov eax, dword ptr [esi]
// 00640028  8b5004               mov edx, dword ptr [eax + 4]
// 0064002b  8bce                 mov ecx, esi
// 0064002d  ffd2                 call edx
// 0064002f  8d4608               lea eax, [esi + 8]
// 00640032  83c9ff               or ecx, 0xffffffff
// 00640035  f00fc108             lock xadd dword ptr [eax], ecx
// 00640039  7509                 jne 0x640044
// 0064003b  8b16                 mov edx, dword ptr [esi]
// 0064003d  8b4208               mov eax, dword ptr [edx + 8]
// 00640040  8bce                 mov ecx, esi
// 00640042  ffd0                 call eax
// 00640044  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00640047  6a01                 push 1
// 00640049  6a01                 push 1
// 0064004b  51                   push ecx
// 0064004c  8d542438             lea edx, [esp + 0x38]
// 00640050  52                   push edx
// 00640051  e87a11f5ff           call 0x5911d0
// 00640056  8b4718               mov eax, dword ptr [edi + 0x18]
// 00640059  6a08                 push 8
// 0064005b  50                   push eax
// 0064005c  e84f07f4ff           call 0x5807b0
// 00640061  83c404               add esp, 4
// 00640064  8bc8                 mov ecx, eax
// 00640066  e8b5d7f7ff           call 0x5bd820
// 0064006b  6a44                 push 0x44
// 0064006d  e8ae080600           call 0x6a0920
// 00640072  8be8                 mov ebp, eax
// 00640074  83c404               add esp, 4
// 00640077  896c2410             mov dword ptr [esp + 0x10], ebp
// 0064007b  85ed                 test ebp, ebp
// 0064007d  7439                 je 0x6400b8
// 0064007f  83ec08               sub esp, 8
// 00640082  8bc4                 mov eax, esp
// 00640084  c70000000000         mov dword ptr [eax], 0
// 0064008a  8964241c             mov dword ptr [esp + 0x1c], esp
// 0064008e  c7400400000000       mov dword ptr [eax + 4], 0
// 00640095  8b4f18               mov ecx, dword ptr [edi + 0x18]
// 00640098  51                   push ecx
// 00640099  8bcb                 mov ecx, ebx
// 0064009b  c644245804           mov byte ptr [esp + 0x58], 4
// 006400a0  e80b8cf5ff           call 0x598cb0
// 006400a5  83c024               add eax, 0x24
// 006400a8  50                   push eax
// 006400a9  53                   push ebx
// 006400aa  8bcd                 mov ecx, ebp
// 006400ac  c644246003           mov byte ptr [esp + 0x60], 3
// 006400b1  e86a5e0200           call 0x665f20
// 006400b6  eb02                 jmp 0x6400ba
// 006400b8  33c0                 xor eax, eax
// 006400ba  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 006400be  8b10                 mov edx, dword ptr [eax]
// 006400c0  8b5204               mov edx, dword ptr [edx + 4]
// 006400c3  51                   push ecx
// 006400c4  8bc8                 mov ecx, eax
// 006400c6  c644245001           mov byte ptr [esp + 0x50], 1
// 006400cb  ffd2                 call edx
// 006400cd  8d4c242c             lea ecx, [esp + 0x2c]
// 006400d1  8bf8                 mov edi, eax
// 006400d3  c644244c00           mov byte ptr [esp + 0x4c], 0
// 006400d8  e8032ff6ff           call 0x5a2fe0
// 006400dd  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 006400e5  85f6                 test esi, esi
// 006400e7  742a                 je 0x640113
// 006400e9  8d4604               lea eax, [esi + 4]
// 006400ec  83c9ff               or ecx, 0xffffffff
// 006400ef  f00fc108             lock xadd dword ptr [eax], ecx
// 006400f3  751e                 jne 0x640113
// 006400f5  8b16                 mov edx, dword ptr [esi]
// 006400f7  8b4204               mov eax, dword ptr [edx + 4]
// 006400fa  8bce                 mov ecx, esi
// 006400fc  ffd0                 call eax
// 006400fe  8d4e08               lea ecx, [esi + 8]
// 00640101  83caff               or edx, 0xffffffff
// 00640104  f00fc111             lock xadd dword ptr [ecx], edx
// 00640108  7509                 jne 0x640113
// 0064010a  8b06                 mov eax, dword ptr [esi]
// 0064010c  8b5008               mov edx, dword ptr [eax + 8]
// 0064010f  8bce                 mov ecx, esi
// 00640111  ffd2                 call edx
// 00640113  8bc7                 mov eax, edi
// 00640115  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 00640119  64890d00000000       mov dword ptr fs:[0], ecx
// 00640120  5f                   pop edi
// 00640121  5e                   pop esi
// 00640122  5d                   pop ebp
// 00640123  5b                   pop ebx
// 00640124  83c440               add esp, 0x40
// 00640127  c20400               ret 4
// 0064012a  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0064012e  5f                   pop edi
// 0064012f  5e                   pop esi
// 00640130  5d                   pop ebp
// 00640131  33c0                 xor eax, eax
// 00640133  64890d00000000       mov dword ptr fs:[0], ecx
// 0064013a  5b                   pop ebx
// 0064013b  83c440               add esp, 0x40
// 0064013e  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct RefCount {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

__forceinline void RefCount::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Count {
    RefCount *value;
    Count();
    Count(const Count&);
    ~Count();
};

__forceinline Count::Count() : value(0)
{
}

__forceinline Count::Count(const Count& other) : value(other.value)
{
    if (value)
        _InterlockedIncrement(&value->strong);
}

__forceinline Count::~Count()
{
    if (value)
        value->release();
}

struct Object;

struct RawShared {
    Object *object;
    RefCount *count;
};

struct Shared {
    Object *object;
    Count count;
    Shared();
    Shared(const Shared&);
};

__forceinline Shared::Shared() : object(0), count()
{
}

__forceinline Shared::Shared(const Shared& other)
    : object(other.object), count(other.count)
{
}

struct Transform {
    char data[36];
};

struct Object {
    Transform *transform();
    RawShared *clone(RawShared *);
};

extern Shared __cdecl convert(const RawShared *);

struct Collection {
    char data[24];
    Collection();
    ~Collection();
    void insert(const Shared&);
};

extern void __stdcall apply(Collection *, Object *, int, int);

struct Service {
    void notify(int);
};

extern Service *__cdecl findService(Object *);
extern void *__cdecl operator new(unsigned int);
extern void __cdecl operator delete(void *);

struct Tool {
    virtual void unused();
    virtual int run(void *);
    Tool(Object *, void *, Object *, Shared);
    char data[64];
};

struct CloneTool {
    char padding[24];
    Object *context;
    Object *source;
    int execute(void *);
};

int CloneTool::execute(void *argument)
{
    if (source) {
        source->transform();

        RawShared temporary;
        Shared copy = convert(source->clone(&temporary));
        RefCount *p = temporary.count;
        if (p)
            p->release();

        Collection collection;
        Object *cloned = copy.object;
        collection.insert(Shared(copy));
        apply(&collection, context, 1, 1);
        findService(context)->notify(8);

        Tool *tool = new Tool(
            cloned,
            reinterpret_cast<char *>(cloned->transform()) + 36,
            context,
            Shared());
        return tool->run(argument);
    }
    return 0;
}
