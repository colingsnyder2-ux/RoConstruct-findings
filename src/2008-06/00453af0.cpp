// from server: 100% by colin
// roc 2008-06 00453af0  unit: CRobloxDoc  size: 314 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00453af0
//
// 00453af0  6aff                 push -1
// 00453af2  68f8217c00           push 0x7c21f8
// 00453af7  64a100000000         mov eax, dword ptr fs:[0]
// 00453afd  50                   push eax
// 00453afe  64892500000000       mov dword ptr fs:[0], esp
// 00453b05  83ec1c               sub esp, 0x1c
// 00453b08  56                   push esi
// 00453b09  57                   push edi
// 00453b0a  8bf9                 mov edi, ecx
// 00453b0c  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00453b12  8d442410             lea eax, [esp + 0x10]
// 00453b16  50                   push eax
// 00453b17  e8246e0100           call 0x46a940
// 00453b1c  8b10                 mov edx, dword ptr [eax]
// 00453b1e  83ec08               sub esp, 8
// 00453b21  8bcc                 mov ecx, esp
// 00453b23  8911                 mov dword ptr [ecx], edx
// 00453b25  8b4004               mov eax, dword ptr [eax + 4]
// 00453b28  c744243400000000     mov dword ptr [esp + 0x34], 0
// 00453b30  89642410             mov dword ptr [esp + 0x10], esp
// 00453b34  894104               mov dword ptr [ecx + 4], eax
// 00453b37  85c0                 test eax, eax
// 00453b39  740c                 je 0x453b47
// 00453b3b  83c004               add eax, 4
// 00453b3e  b901000000           mov ecx, 1
// 00453b43  f00fc108             lock xadd dword ptr [eax], ecx
// 00453b47  8d4c2420             lea ecx, [esp + 0x20]
// 00453b4b  e8f0dffbff           call 0x411b40
// 00453b50  8b742414             mov esi, dword ptr [esp + 0x14]
// 00453b54  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00453b59  85f6                 test esi, esi
// 00453b5b  742a                 je 0x453b87
// 00453b5d  8d5604               lea edx, [esi + 4]
// 00453b60  83c8ff               or eax, 0xffffffff
// 00453b63  f00fc102             lock xadd dword ptr [edx], eax
// 00453b67  751e                 jne 0x453b87
// 00453b69  8b16                 mov edx, dword ptr [esi]
// 00453b6b  8b4204               mov eax, dword ptr [edx + 4]
// 00453b6e  8bce                 mov ecx, esi
// 00453b70  ffd0                 call eax
// 00453b72  8d4e08               lea ecx, [esi + 8]
// 00453b75  83caff               or edx, 0xffffffff
// 00453b78  f00fc111             lock xadd dword ptr [ecx], edx
// 00453b7c  7509                 jne 0x453b87
// 00453b7e  8b06                 mov eax, dword ptr [esi]
// 00453b80  8b5008               mov edx, dword ptr [eax + 8]
// 00453b83  8bce                 mov ecx, esi
// 00453b85  ffd2                 call edx
// 00453b87  8b8f94000000         mov ecx, dword ptr [edi + 0x94]
// 00453b8d  8d442408             lea eax, [esp + 8]
// 00453b91  50                   push eax
// 00453b92  e8a96d0100           call 0x46a940
// 00453b97  8b08                 mov ecx, dword ptr [eax]
// 00453b99  c644242c03           mov byte ptr [esp + 0x2c], 3
// 00453b9e  85c9                 test ecx, ecx
// 00453ba0  7409                 je 0x453bab
// 00453ba2  e80918fcff           call 0x4153b0
// 00453ba7  8bf8                 mov edi, eax
// 00453ba9  eb02                 jmp 0x453bad
// 00453bab  33ff                 xor edi, edi
// 00453bad  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00453bb1  c644242c02           mov byte ptr [esp + 0x2c], 2
// 00453bb6  85f6                 test esi, esi
// 00453bb8  742a                 je 0x453be4
// 00453bba  8d4e04               lea ecx, [esi + 4]
// 00453bbd  83caff               or edx, 0xffffffff
// 00453bc0  f00fc111             lock xadd dword ptr [ecx], edx
// 00453bc4  751e                 jne 0x453be4
// 00453bc6  8b06                 mov eax, dword ptr [esi]
// 00453bc8  8b5004               mov edx, dword ptr [eax + 4]
// 00453bcb  8bce                 mov ecx, esi
// 00453bcd  ffd2                 call edx
// 00453bcf  8d4608               lea eax, [esi + 8]
// 00453bd2  83c9ff               or ecx, 0xffffffff
// 00453bd5  f00fc108             lock xadd dword ptr [eax], ecx
// 00453bd9  7509                 jne 0x453be4
// 00453bdb  8b16                 mov edx, dword ptr [esi]
// 00453bdd  8b4208               mov eax, dword ptr [edx + 8]
// 00453be0  8bce                 mov ecx, esi
// 00453be2  ffd0                 call eax
// 00453be4  8b8754010000         mov eax, dword ptr [edi + 0x154]
// 00453bea  8b7010               mov esi, dword ptr [eax + 0x10]
// 00453bed  2b700c               sub esi, dword ptr [eax + 0xc]
// 00453bf0  8b4c2434             mov ecx, dword ptr [esp + 0x34]
// 00453bf4  8b11                 mov edx, dword ptr [ecx]
// 00453bf6  8b12                 mov edx, dword ptr [edx]
// 00453bf8  33c0                 xor eax, eax
// 00453bfa  c1fe03               sar esi, 3
// 00453bfd  3bc6                 cmp eax, esi
// 00453bff  1bc0                 sbb eax, eax
// 00453c01  f7d8                 neg eax
// 00453c03  50                   push eax
// 00453c04  ffd2                 call edx
// 00453c06  8d4c2418             lea ecx, [esp + 0x18]
// 00453c0a  c744242cffffffff     mov dword ptr [esp + 0x2c], 0xffffffff
// 00453c12  e8a9371200           call 0x5773c0
// 00453c17  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00453c1b  5f                   pop edi
// 00453c1c  64890d00000000       mov dword ptr fs:[0], ecx
// 00453c23  5e                   pop esi
// 00453c24  83c428               add esp, 0x28
// 00453c27  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedExchangeAdd)
#pragma intrinsic(_InterlockedDecrement)
#pragma intrinsic(_InterlockedIncrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    long use_count;
    long weak_count;
    void add_ref();
    void release();
};

inline void Control::add_ref()
{
    _InterlockedIncrement(&use_count);
}

inline void Control::release()
{
    if (_InterlockedDecrement(&use_count) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak_count) == 0)
            destroy();
    }
}

struct World;

struct Object {
    World* getWorld();
};

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
    World* getWorld() const;
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

inline World* Shared::getWorld() const
{
    return object ? object->getWorld() : 0;
}

struct GuardShared {
    Object* object;
    Control* control;
    GuardShared(const Shared& other);
    ~GuardShared();
};

inline GuardShared::GuardShared(const Shared& other)
    : object(other.object), control(other.control)
{
    if (control)
        control->add_ref();
}

inline GuardShared::~GuardShared()
{
    if (control)
        control->release();
}

struct Holder {
    Shared get();
};

struct Guard {
    char storage[12];
    Guard(GuardShared value);
    ~Guard();
};

struct Entry {
    void* first;
    void* second;
};

struct Entries {
    char padding[12];
    Entry* begin;
    Entry* end;
};

struct World {
    char padding[0x154];
    Entries* entries;
};

struct Command {
    virtual void enable(int value);
};

struct CRobloxDoc {
    char padding[0x94];
    Holder* holder;
    void update(Command* command);
};

void CRobloxDoc::update(Command* command)
{
    Guard guard(holder->get());
    World* world = holder->get().getWorld();
    command->enable((unsigned int)(world->entries->end -
                                  world->entries->begin) > 0);
}
