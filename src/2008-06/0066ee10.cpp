// from server: 98% by EspClaude
// from server: 88% by king_originala
// roc 2008-06 0066ee10  unit: RBX::HUMAN::VHumanoidState::?$Named  size: 255 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0066ee10
//
// 0066ee10  6aff                 push -1
// 0066ee12  68c2c67d00           push 0x7dc6c2
// 0066ee17  64a100000000         mov eax, dword ptr fs:[0]
// 0066ee1d  50                   push eax
// 0066ee1e  64892500000000       mov dword ptr fs:[0], esp
// 0066ee25  51                   push ecx
// 0066ee26  56                   push esi
// 0066ee27  8bf1                 mov esi, ecx
// 0066ee29  89742404             mov dword ptr [esp + 4], esi
// 0066ee2d  c70668d18400         mov dword ptr [esi], 0x84d168
// 0066ee33  c7460460d18400       mov dword ptr [esi + 4], 0x84d160
// 0066ee3a  c786a000000050d18400 mov dword ptr [esi + 0xa0], 0x84d150
// 0066ee44  8b86c4000000         mov eax, dword ptr [esi + 0xc4]
// 0066ee4a  c744241003000000     mov dword ptr [esp + 0x10], 3
// 0066ee52  85c0                 test eax, eax
// 0066ee54  7405                 je 0x66ee5b
// 0066ee56  e8f5feffff           call 0x66ed50
// 0066ee5b  57                   push edi
// 0066ee5c  8d8ed0000000         lea ecx, [esi + 0xd0]
// 0066ee62  c644241402           mov byte ptr [esp + 0x14], 2
// 0066ee67  e84466f2ff           call 0x5954b0
// 0066ee6c  8bbec8000000         mov edi, dword ptr [esi + 0xc8]
// 0066ee72  c644241401           mov byte ptr [esp + 0x14], 1
// 0066ee77  85ff                 test edi, edi
// 0066ee79  742a                 je 0x66eea5
// 0066ee7b  8d4704               lea eax, [edi + 4]
// 0066ee7e  83c9ff               or ecx, 0xffffffff
// 0066ee81  f00fc108             lock xadd dword ptr [eax], ecx
// 0066ee85  751e                 jne 0x66eea5
// 0066ee87  8b17                 mov edx, dword ptr [edi]
// 0066ee89  8b4204               mov eax, dword ptr [edx + 4]
// 0066ee8c  8bcf                 mov ecx, edi
// 0066ee8e  ffd0                 call eax
// 0066ee90  8d4f08               lea ecx, [edi + 8]
// 0066ee93  83caff               or edx, 0xffffffff
// 0066ee96  f00fc111             lock xadd dword ptr [ecx], edx
// 0066ee9a  7509                 jne 0x66eea5
// 0066ee9c  8b07                 mov eax, dword ptr [edi]
// 0066ee9e  8b5008               mov edx, dword ptr [eax + 8]
// 0066eea1  8bcf                 mov ecx, edi
// 0066eea3  ffd2                 call edx
// 0066eea5  c786a00000002cf78300 mov dword ptr [esi + 0xa0], 0x83f72c
// 0066eeaf  8b86b0000000         mov eax, dword ptr [esi + 0xb0]
// 0066eeb5  5f                   pop edi
// 0066eeb6  85c0                 test eax, eax
// 0066eeb8  7409                 je 0x66eec3
// 0066eeba  50                   push eax
// 0066eebb  e8ba170300           call 0x6a067a
// 0066eec0  83c404               add esp, 4
// 0066eec3  8b86a4000000         mov eax, dword ptr [esi + 0xa4]
// 0066eec9  50                   push eax
// 0066eeca  c786b000000000000000 mov dword ptr [esi + 0xb0], 0
// 0066eed4  c786b400000000000000 mov dword ptr [esi + 0xb4], 0
// 0066eede  c786b800000000000000 mov dword ptr [esi + 0xb8], 0
// 0066eee8  e88d170300           call 0x6a067a
// 0066eeed  83c404               add esp, 4
// 0066eef0  8bce                 mov ecx, esi
// 0066eef2  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0066eefa  e8c146fdff           call 0x6435c0
// 0066eeff  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0066ef03  5e                   pop esi
// 0066ef04  64890d00000000       mov dword ptr fs:[0], ecx
// 0066ef0b  83c410               add esp, 0x10
// 0066ef0e  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

extern void __cdecl alignedFree(void*) throw();

struct Control
{
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Primary
{
    virtual ~Primary();
};

struct Secondary
{
    virtual ~Secondary();
    char storage[0x98];
};

struct Base : Primary, Secondary
{
    virtual ~Base();
};

struct Buffer
{
    virtual ~Buffer();
    void* allocation;
    unsigned long reserved[2];
    void* volatile extra;
    unsigned long size;
    unsigned long capacity;
    unsigned long last;
};

struct Shared
{
    void* pointer;
    Control* control;
    void* get() const { return pointer; }
    ~Shared();
};

struct Tail
{
    unsigned long storage;
    ~Tail();
};

struct S : Base, Buffer
{
    unsigned long reserved;
    Shared shared;
    unsigned long pad;
    Tail tail;
    void releaseHook();
    virtual ~S();
};

inline Buffer::~Buffer()
{
    void* p = extra;
    if (p)
        alignedFree(p);
    extra = 0;
    size = 0;
    capacity = 0;
    alignedFree(allocation);
}

inline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0)
    {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

S::~S()
{
    if (shared.get())
        releaseHook();
}
