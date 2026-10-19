// from server: 91% by colin
// from server: 83% by colin
// roc 2008-06 00426010  unit: CRobloxTreeCtrlNode  size: 239 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00426010
//
// 00426010  6aff                 push -1
// 00426012  6820eb7b00           push 0x7beb20
// 00426017  64a100000000         mov eax, dword ptr fs:[0]
// 0042601d  50                   push eax
// 0042601e  64892500000000       mov dword ptr fs:[0], esp
// 00426025  83ec18               sub esp, 0x18
// 00426028  56                   push esi
// 00426029  8bf1                 mov esi, ecx
// 0042602b  8b06                 mov eax, dword ptr [esi]
// 0042602d  8b5018               mov edx, dword ptr [eax + 0x18]
// 00426030  57                   push edi
// 00426031  ffd2                 call edx
// 00426033  898680000000         mov dword ptr [esi + 0x80], eax
// 00426039  8b06                 mov eax, dword ptr [esi]
// 0042603b  8b5008               mov edx, dword ptr [eax + 8]
// 0042603e  8bce                 mov ecx, esi
// 00426040  ffd2                 call edx
// 00426042  8b4e58               mov ecx, dword ptr [esi + 0x58]
// 00426045  8b01                 mov eax, dword ptr [ecx]
// 00426047  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0042604d  8d54240c             lea edx, [esp + 0xc]
// 00426051  52                   push edx
// 00426052  ffd0                 call eax
// 00426054  8b10                 mov edx, dword ptr [eax]
// 00426056  83ec08               sub esp, 8
// 00426059  8bcc                 mov ecx, esp
// 0042605b  8911                 mov dword ptr [ecx], edx
// 0042605d  8b4004               mov eax, dword ptr [eax + 4]
// 00426060  c744243000000000     mov dword ptr [esp + 0x30], 0
// 00426068  89642410             mov dword ptr [esp + 0x10], esp
// 0042606c  894104               mov dword ptr [ecx + 4], eax
// 0042606f  85c0                 test eax, eax
// 00426071  740c                 je 0x42607f
// 00426073  83c004               add eax, 4
// 00426076  b901000000           mov ecx, 1
// 0042607b  f00fc108             lock xadd dword ptr [eax], ecx
// 0042607f  8d4c241c             lea ecx, [esp + 0x1c]
// 00426083  e8b8bafeff           call 0x411b40
// 00426088  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0042608c  c644242802           mov byte ptr [esp + 0x28], 2
// 00426091  85ff                 test edi, edi
// 00426093  742a                 je 0x4260bf
// 00426095  8d5704               lea edx, [edi + 4]
// 00426098  83c8ff               or eax, 0xffffffff
// 0042609b  f00fc102             lock xadd dword ptr [edx], eax
// 0042609f  751e                 jne 0x4260bf
// 004260a1  8b17                 mov edx, dword ptr [edi]
// 004260a3  8b4204               mov eax, dword ptr [edx + 4]
// 004260a6  8bcf                 mov ecx, edi
// 004260a8  ffd0                 call eax
// 004260aa  8d4f08               lea ecx, [edi + 8]
// 004260ad  83caff               or edx, 0xffffffff
// 004260b0  f00fc111             lock xadd dword ptr [ecx], edx
// 004260b4  7509                 jne 0x4260bf
// 004260b6  8b07                 mov eax, dword ptr [edi]
// 004260b8  8b5008               mov edx, dword ptr [eax + 8]
// 004260bb  8bcf                 mov ecx, edi
// 004260bd  ffd2                 call edx
// 004260bf  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 004260c2  8d4604               lea eax, [esi + 4]
// 004260c5  50                   push eax
// 004260c6  83c124               add ecx, 0x24
// 004260c9  e8d2b7ffff           call 0x4218a0
// 004260ce  8d4608               lea eax, [esi + 8]
// 004260d1  8b760c               mov esi, dword ptr [esi + 0xc]
// 004260d4  50                   push eax
// 004260d5  8d4e44               lea ecx, [esi + 0x44]
// 004260d8  e8c3b7ffff           call 0x4218a0
// 004260dd  8d4c2414             lea ecx, [esp + 0x14]
// 004260e1  c7442428ffffffff     mov dword ptr [esp + 0x28], 0xffffffff
// 004260e9  e8d2121500           call 0x5773c0
// 004260ee  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 004260f2  5f                   pop edi
// 004260f3  64890d00000000       mov dword ptr fs:[0], ecx
// 004260fa  5e                   pop esi
// 004260fb  83c424               add esp, 0x24
// 004260fe  c3                   ret 

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

struct Handle {
    void* pointer;
    Control* control;

    Handle(const Handle&);
    ~Handle();
};

__forceinline Handle::Handle(const Handle& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
        _InterlockedIncrement(&control->strong);
}

__forceinline Handle::~Handle()
{
    Control* p = control;
    if (p) {
        if (_InterlockedDecrement(&p->strong) == 0) {
            p->dispose();
            if (_InterlockedDecrement(&p->weak) == 0)
                p->destroy();
        }
    }
}

struct Owner;

struct OwnerTable {
    char padding[0x154];
    Handle (__thiscall* acquire)(Owner*);
};

struct Owner {
    OwnerTable* table;
};

struct Guard {
    char storage[12];
    Guard(Handle);
    ~Guard();
};

struct Listener {
    char storage[0x20];
    void remove(void**);
};

struct Parent {
    char padding[0x24];
    Listener first;
    Listener second;
};

struct S {
    virtual void reserved0();
    virtual void reserved1();
    virtual void refresh();
    virtual void reserved3();
    virtual void reserved4();
    virtual void reserved5();
    virtual int query();

    void* firstLink;
    void* secondLink;
    Parent* parent;
    char padding10[0x48];
    Owner* owner;
    char padding5C[0x24];
    int value;

    void f();
};

void S::f()
{
    value = query();
    refresh();
    Owner* o = owner;
    Guard guard(o->table->acquire(o));
    Parent* p = parent;
    p->first.remove(&firstLink);
    p->second.remove(&secondLink);
}
