// from server: 100% by king_originala
// roc 2008-06 004547b0  unit: CRobloxDoc  size: 366 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004547b0
//
// 004547b0  6aff                 push -1
// 004547b2  6858207c00           push 0x7c2058
// 004547b7  64a100000000         mov eax, dword ptr fs:[0]
// 004547bd  50                   push eax
// 004547be  64892500000000       mov dword ptr fs:[0], esp
// 004547c5  83ec3c               sub esp, 0x3c
// 004547c8  56                   push esi
// 004547c9  57                   push edi
// 004547ca  8bf9                 mov edi, ecx
// 004547cc  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 004547d2  8d442410             lea eax, [esp + 0x10]
// 004547d6  50                   push eax
// 004547d7  e864610100           call 0x46a940
// 004547dc  8b10                 mov edx, dword ptr [eax]
// 004547de  83ec08               sub esp, 8
// 004547e1  8bcc                 mov ecx, esp
// 004547e3  8911                 mov dword ptr [ecx], edx
// 004547e5  8b4004               mov eax, dword ptr [eax + 4]
// 004547e8  c744245400000000     mov dword ptr [esp + 0x54], 0
// 004547f0  89642410             mov dword ptr [esp + 0x10], esp
// 004547f4  894104               mov dword ptr [ecx + 4], eax
// 004547f7  85c0                 test eax, eax
// 004547f9  740c                 je 0x454807
// 004547fb  83c004               add eax, 4
// 004547fe  b901000000           mov ecx, 1
// 00454803  f00fc108             lock xadd dword ptr [eax], ecx
// 00454807  8d4c2420             lea ecx, [esp + 0x20]
// 0045480b  e830d3fbff           call 0x411b40
// 00454810  8b742414             mov esi, dword ptr [esp + 0x14]
// 00454814  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00454819  85f6                 test esi, esi
// 0045481b  742a                 je 0x454847
// 0045481d  8d5604               lea edx, [esi + 4]
// 00454820  83c8ff               or eax, 0xffffffff
// 00454823  f00fc102             lock xadd dword ptr [edx], eax
// 00454827  751e                 jne 0x454847
// 00454829  8b16                 mov edx, dword ptr [esi]
// 0045482b  8b4204               mov eax, dword ptr [edx + 4]
// 0045482e  8bce                 mov ecx, esi
// 00454830  ffd0                 call eax
// 00454832  8d4e08               lea ecx, [esi + 8]
// 00454835  83caff               or edx, 0xffffffff
// 00454838  f00fc111             lock xadd dword ptr [ecx], edx
// 0045483c  7509                 jne 0x454847
// 0045483e  8b06                 mov eax, dword ptr [esi]
// 00454840  8b5008               mov edx, dword ptr [eax + 8]
// 00454843  8bce                 mov ecx, esi
// 00454845  ffd2                 call edx
// 00454847  8d442408             lea eax, [esp + 8]
// 0045484b  50                   push eax
// 0045484c  8bcf                 mov ecx, edi
// 0045484e  e8ede7faff           call 0x403040
// 00454853  8b08                 mov ecx, dword ptr [eax]
// 00454855  c644244c03           mov byte ptr [esp + 0x4c], 3
// 0045485a  85c9                 test ecx, ecx
// 0045485c  7409                 je 0x454867
// 0045485e  e82d96fdff           call 0x42de90
// 00454863  8bf8                 mov edi, eax
// 00454865  eb02                 jmp 0x454869
// 00454867  33ff                 xor edi, edi
// 00454869  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0045486d  c644244c02           mov byte ptr [esp + 0x4c], 2
// 00454872  85f6                 test esi, esi
// 00454874  742a                 je 0x4548a0
// 00454876  8d4e04               lea ecx, [esi + 4]
// 00454879  83caff               or edx, 0xffffffff
// 0045487c  f00fc111             lock xadd dword ptr [ecx], edx
// 00454880  751e                 jne 0x4548a0
// 00454882  8b06                 mov eax, dword ptr [esi]
// 00454884  8b5004               mov edx, dword ptr [eax + 4]
// 00454887  8bce                 mov ecx, esi
// 00454889  ffd2                 call edx
// 0045488b  8d4608               lea eax, [esi + 8]
// 0045488e  83c9ff               or ecx, 0xffffffff
// 00454891  f00fc108             lock xadd dword ptr [eax], ecx
// 00454895  7509                 jne 0x4548a0
// 00454897  8b16                 mov edx, dword ptr [esi]
// 00454899  8b4208               mov eax, dword ptr [edx + 8]
// 0045489c  8bce                 mov ecx, esi
// 0045489e  ffd0                 call eax
// 004548a0  85ff                 test edi, edi
// 004548a2  743a                 je 0x4548de
// 004548a4  83bff001000000       cmp dword ptr [edi + 0x1f0], 0
// 004548ab  7431                 je 0x4548de
// 004548ad  8bcf                 mov ecx, edi
// 004548af  e86c481500           call 0x5a9120
// 004548b4  50                   push eax
// 004548b5  8d4c2428             lea ecx, [esp + 0x28]
// 004548b9  68dc7e8100           push 0x817edc
// 004548be  51                   push ecx
// 004548bf  ff1530288000         call dword ptr [0x802830]
// 004548c5  8b742460             mov esi, dword ptr [esp + 0x60]
// 004548c9  8b16                 mov edx, dword ptr [esi]
// 004548cb  8b520c               mov edx, dword ptr [edx + 0xc]
// 004548ce  83c40c               add esp, 0xc
// 004548d1  8d442424             lea eax, [esp + 0x24]
// 004548d5  50                   push eax
// 004548d6  8bce                 mov ecx, esi
// 004548d8  ffd2                 call edx
// 004548da  6a01                 push 1
// 004548dc  eb14                 jmp 0x4548f2
// 004548de  8b742454             mov esi, dword ptr [esp + 0x54]
// 004548e2  8b06                 mov eax, dword ptr [esi]
// 004548e4  8b500c               mov edx, dword ptr [eax + 0xc]
// 004548e7  6816b78000           push 0x80b716
// 004548ec  8bce                 mov ecx, esi
// 004548ee  ffd2                 call edx
// 004548f0  6a00                 push 0
// 004548f2  8b06                 mov eax, dword ptr [esi]
// 004548f4  8b10                 mov edx, dword ptr [eax]
// 004548f6  8bce                 mov ecx, esi
// 004548f8  ffd2                 call edx
// 004548fa  8d4c2418             lea ecx, [esp + 0x18]
// 004548fe  c744244cffffffff     mov dword ptr [esp + 0x4c], 0xffffffff
// 00454906  e8b52a1200           call 0x5773c0
// 0045490b  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0045490f  5f                   pop edi
// 00454910  64890d00000000       mov dword ptr fs:[0], ecx
// 00454917  5e                   pop esi
// 00454918  83c448               add esp, 0x48
// 0045491b  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)

extern "C" int (__cdecl *sprintf)(char*, const char*, ...);
extern const char text_0080b716[];

struct Count
{
    virtual ~Count();
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Count::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Editor
{
    char padding[0x1f0];
    int active;
    int get();
};

struct Object
{
    Editor* getEditor();
};

struct ReturnedShared
{
    Object* object;
    Count* count;
    ~ReturnedShared();
};

struct Shared
{
    Object* object;
    Count* count;
    Shared(const ReturnedShared&);
    ~Shared();
    Editor* getEditor() const;
};

inline ReturnedShared::~ReturnedShared()
{
    if (count)
        count->release();
}

inline Shared::Shared(const ReturnedShared& other)
    : object(other.object), count(other.count)
{
    if (count)
        _InterlockedIncrement(&count->strong);
}

inline Shared::~Shared()
{
    if (count)
        count->release();
}

inline Editor* Shared::getEditor() const
{
    return object ? object->getEditor() : 0;
}

struct Provider
{
    ReturnedShared get();
};

struct Guard
{
    char storage[12];
    Guard(Shared);
    ~Guard();
};

struct UI
{
    virtual void enable(int) = 0;
    virtual void slot1() = 0;
    virtual void slot2() = 0;
    virtual void setText(const char*) = 0;
};

struct S
{
    char padding[0x94];
    Provider* provider;
    Shared getObject();
    void f(UI*);
};

void S::f(UI* ui)
{
    Guard guard(provider->get());
    Editor* editor = getObject().getEditor();

    if (editor && editor->active)
    {
        char text[32];
        sprintf(text, "%d threads", editor->get());
        ui->setText(text);
        ui->enable(1);
    }
    else
    {
        ui->setText(text_0080b716);
        ui->enable(0);
    }
}
