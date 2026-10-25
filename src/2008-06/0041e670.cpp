// from server: 100% by king_originala
// roc 2008-06 0041e670  unit: InsertTexture  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0041e670
//
// 0041e670  6aff                 push -1
// 0041e672  68a9677c00           push 0x7c67a9
// 0041e677  64a100000000         mov eax, dword ptr fs:[0]
// 0041e67d  50                   push eax
// 0041e67e  64892500000000       mov dword ptr fs:[0], esp
// 0041e685  83ec0c               sub esp, 0xc
// 0041e688  56                   push esi
// 0041e689  8d442408             lea eax, [esp + 8]
// 0041e68d  57                   push edi
// 0041e68e  50                   push eax
// 0041e68f  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 0041e697  e8b4feffff           call 0x41e550
// 0041e69c  8b08                 mov ecx, dword ptr [eax]
// 0041e69e  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 0041e6a2  890f                 mov dword ptr [edi], ecx
// 0041e6a4  8b4004               mov eax, dword ptr [eax + 4]
// 0041e6a7  83c404               add esp, 4
// 0041e6aa  894704               mov dword ptr [edi + 4], eax
// 0041e6ad  85c0                 test eax, eax
// 0041e6af  740c                 je 0x41e6bd
// 0041e6b1  83c004               add eax, 4
// 0041e6b4  ba01000000           mov edx, 1
// 0041e6b9  f00fc110             lock xadd dword ptr [eax], edx
// 0041e6bd  8b742410             mov esi, dword ptr [esp + 0x10]
// 0041e6c1  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 0041e6c9  c744240801000000     mov dword ptr [esp + 8], 1
// 0041e6d1  85f6                 test esi, esi
// 0041e6d3  742a                 je 0x41e6ff
// 0041e6d5  8d4604               lea eax, [esi + 4]
// 0041e6d8  83c9ff               or ecx, 0xffffffff
// 0041e6db  f00fc108             lock xadd dword ptr [eax], ecx
// 0041e6df  751e                 jne 0x41e6ff
// 0041e6e1  8b16                 mov edx, dword ptr [esi]
// 0041e6e3  8b4204               mov eax, dword ptr [edx + 4]
// 0041e6e6  8bce                 mov ecx, esi
// 0041e6e8  ffd0                 call eax
// 0041e6ea  8d4e08               lea ecx, [esi + 8]
// 0041e6ed  83caff               or edx, 0xffffffff
// 0041e6f0  f00fc111             lock xadd dword ptr [ecx], edx
// 0041e6f4  7509                 jne 0x41e6ff
// 0041e6f6  8b06                 mov eax, dword ptr [esi]
// 0041e6f8  8b5008               mov edx, dword ptr [eax + 8]
// 0041e6fb  8bce                 mov ecx, esi
// 0041e6fd  ffd2                 call edx
// 0041e6ff  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0041e703  8bc7                 mov eax, edi
// 0041e705  5f                   pop edi
// 0041e706  5e                   pop esi
// 0041e707  64890d00000000       mov dword ptr fs:[0], ecx
// 0041e70e  83c418               add esp, 0x18
// 0041e711  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control
{
    virtual ~Control();
    virtual void dispose() = 0;
    virtual void destroy() = 0;

    volatile long strong;
    volatile long weak;

    void release();
    void releaseWeak();
};

inline void Control::releaseWeak()
{
    if (_InterlockedDecrement(&weak) == 0)
        destroy();
}

inline void Control::release()
{
    volatile long* count = &strong;
    if (_InterlockedDecrement(count) == 0)
    {
        dispose();
        releaseWeak();
    }
}

struct Temporary
{
    void* pointer;
    Control* control;

    ~Temporary();
};

inline Temporary::~Temporary()
{
    if (control)
        control->release();
}

struct Result
{
    void* pointer;
    Control* control;

    Result(const Temporary&);
    ~Result();
};

inline Result::Result(const Temporary& other)
    : pointer(other.pointer), control(other.control)
{
    if (control)
    {
        volatile long* count = &control->strong;
        _InterlockedExchangeAdd(count, 1);
    }
}

inline Result::~Result()
{
    if (control)
        control->release();
}

Temporary __cdecl makeTemporary();

struct InsertTexture
{
    Result get();
};

Result InsertTexture::get()
{
    return Result(makeTemporary());
}
