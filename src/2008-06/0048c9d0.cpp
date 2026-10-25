// from server: 100% by king_originala
// roc 2008-06 0048c9d0  unit: RBX::Network::VPlayer::?$PropDescriptor  size: 153 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0048c9d0
//
// 0048c9d0  6aff                 push -1
// 0048c9d2  6818627c00           push 0x7c6218
// 0048c9d7  64a100000000         mov eax, dword ptr fs:[0]
// 0048c9dd  50                   push eax
// 0048c9de  64892500000000       mov dword ptr fs:[0], esp
// 0048c9e5  83ec0c               sub esp, 0xc
// 0048c9e8  56                   push esi
// 0048c9e9  6a00                 push 0
// 0048c9eb  8d442428             lea eax, [esp + 0x28]
// 0048c9ef  8d54240c             lea edx, [esp + 0xc]
// 0048c9f3  8944240c             mov dword ptr [esp + 0xc], eax
// 0048c9f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 0048c9fb  8d4c242c             lea ecx, [esp + 0x2c]
// 0048c9ff  52                   push edx
// 0048ca00  894c2414             mov dword ptr [esp + 0x14], ecx
// 0048ca04  c644240c00           mov byte ptr [esp + 0xc], 0
// 0048ca09  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0048ca0d  50                   push eax
// 0048ca0e  51                   push ecx
// 0048ca0f  8d4804               lea ecx, [eax + 4]
// 0048ca12  c744242800000000     mov dword ptr [esp + 0x28], 0
// 0048ca1a  e891edffff           call 0x48b7b0
// 0048ca1f  8b74242c             mov esi, dword ptr [esp + 0x2c]
// 0048ca23  c7442418ffffffff     mov dword ptr [esp + 0x18], 0xffffffff
// 0048ca2b  85f6                 test esi, esi
// 0048ca2d  742a                 je 0x48ca59
// 0048ca2f  8d5604               lea edx, [esi + 4]
// 0048ca32  83c8ff               or eax, 0xffffffff
// 0048ca35  f00fc102             lock xadd dword ptr [edx], eax
// 0048ca39  751e                 jne 0x48ca59
// 0048ca3b  8b16                 mov edx, dword ptr [esi]
// 0048ca3d  8b4204               mov eax, dword ptr [edx + 4]
// 0048ca40  8bce                 mov ecx, esi
// 0048ca42  ffd0                 call eax
// 0048ca44  8d4e08               lea ecx, [esi + 8]
// 0048ca47  83caff               or edx, 0xffffffff
// 0048ca4a  f00fc111             lock xadd dword ptr [ecx], edx
// 0048ca4e  7509                 jne 0x48ca59
// 0048ca50  8b06                 mov eax, dword ptr [esi]
// 0048ca52  8b5008               mov edx, dword ptr [eax + 8]
// 0048ca55  8bce                 mov ecx, esi
// 0048ca57  ffd2                 call edx
// 0048ca59  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0048ca5d  5e                   pop esi
// 0048ca5e  64890d00000000       mov dword ptr fs:[0], ecx
// 0048ca65  83c418               add esp, 0x18
// 0048ca68  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual void unused();
    virtual void dispose();
    virtual void destroy();

    volatile long strong;
    volatile long weak;

    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0)
    {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared
{
    void* pointer;
    Control* control;

    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

struct Tag
{
    char value;
};

struct Arguments
{
    int* key;
    Shared* value;
};

struct Tree
{
    void __thiscall insert(Tag, void*, Arguments*, int);
};

void __cdecl function(void* object, int key, Shared value)
{
    Tag tag = { 0 };
    Arguments arguments;
    arguments.key = &key;
    arguments.value = &value;
    reinterpret_cast<Tree*>(static_cast<char*>(object) + 4)
        ->insert(tag, object, &arguments, 0);
}
