// from server: 100% by king_originala
// roc 2008-06 005c9c70  unit: RBX::Stats::TypedMemItem  size: 193 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c9c70
//
// 005c9c70  6aff                 push -1
// 005c9c72  68e1517d00           push 0x7d51e1
// 005c9c77  64a100000000         mov eax, dword ptr fs:[0]
// 005c9c7d  50                   push eax
// 005c9c7e  64892500000000       mov dword ptr fs:[0], esp
// 005c9c85  83ec24               sub esp, 0x24
// 005c9c88  56                   push esi
// 005c9c89  8d442404             lea eax, [esp + 4]
// 005c9c8d  57                   push edi
// 005c9c8e  50                   push eax
// 005c9c8f  8bf1                 mov esi, ecx
// 005c9c91  e8bab1eeff           call 0x4b4e50
// 005c9c96  83c404               add esp, 4
// 005c9c99  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 005c9c9d  51                   push ecx
// 005c9c9e  8d4c2414             lea ecx, [esp + 0x14]
// 005c9ca2  c744243800000000     mov dword ptr [esp + 0x38], 0
// 005c9caa  ff1558248000         call dword ptr [0x802458]
// 005c9cb0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c9cb4  8b11                 mov edx, dword ptr [ecx]
// 005c9cb6  8b5204               mov edx, dword ptr [edx + 4]
// 005c9cb9  8d442410             lea eax, [esp + 0x10]
// 005c9cbd  50                   push eax
// 005c9cbe  c644243801           mov byte ptr [esp + 0x38], 1
// 005c9cc3  ffd2                 call edx
// 005c9cc5  8d4c2410             lea ecx, [esp + 0x10]
// 005c9cc9  c644243400           mov byte ptr [esp + 0x34], 0
// 005c9cce  ff1568248000         call dword ptr [0x802468]
// 005c9cd4  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c9cd8  56                   push esi
// 005c9cd9  e8120cf9ff           call 0x55a8f0
// 005c9cde  8b74240c             mov esi, dword ptr [esp + 0xc]
// 005c9ce2  8b7c2408             mov edi, dword ptr [esp + 8]
// 005c9ce6  c7442434ffffffff     mov dword ptr [esp + 0x34], 0xffffffff
// 005c9cee  85f6                 test esi, esi
// 005c9cf0  742a                 je 0x5c9d1c
// 005c9cf2  8d4604               lea eax, [esi + 4]
// 005c9cf5  83c9ff               or ecx, 0xffffffff
// 005c9cf8  f00fc108             lock xadd dword ptr [eax], ecx
// 005c9cfc  751e                 jne 0x5c9d1c
// 005c9cfe  8b16                 mov edx, dword ptr [esi]
// 005c9d00  8b4204               mov eax, dword ptr [edx + 4]
// 005c9d03  8bce                 mov ecx, esi
// 005c9d05  ffd0                 call eax
// 005c9d07  8d4e08               lea ecx, [esi + 8]
// 005c9d0a  83caff               or edx, 0xffffffff
// 005c9d0d  f00fc111             lock xadd dword ptr [ecx], edx
// 005c9d11  7509                 jne 0x5c9d1c
// 005c9d13  8b06                 mov eax, dword ptr [esi]
// 005c9d15  8b5008               mov edx, dword ptr [eax + 8]
// 005c9d18  8bce                 mov ecx, esi
// 005c9d1a  ffd2                 call edx
// 005c9d1c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 005c9d20  8bc7                 mov eax, edi
// 005c9d22  5f                   pop edi
// 005c9d23  5e                   pop esi
// 005c9d24  64890d00000000       mov dword ptr fs:[0], ecx
// 005c9d2b  83c430               add esp, 0x30
// 005c9d2e  c20400               ret 4

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Text;
extern void (__thiscall *constructText)(Text*, const char*);
extern void (__thiscall *destroyText)(Text*);

struct Text {
    unsigned char storage[28];
    Text(const char*);
    ~Text();
};

inline Text::Text(const char* value)
{
    constructText(this, value);
}

inline Text::~Text()
{
    destroyText(this);
}

struct Item;

struct Object {
    virtual void reserved();
    virtual void setName(const Text&);
    void attach(Item*);
};

struct Control {
    virtual void reserved();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
    void release();
};

inline void Control::release()
{
    if (_InterlockedDecrement(&strong) == 0) {
        dispose();
        if (_InterlockedDecrement(&weak) == 0)
            destroy();
    }
}

struct Shared {
    Object* object;
    Control* control;
    ~Shared();
};

inline Shared::~Shared()
{
    if (control)
        control->release();
}

extern Shared __cdecl createObject();

struct Item {
    Object* create(const char*);
};

Object* Item::create(const char* name)
{
    Shared result = createObject();
    {
        Text text(name);
        result.object->setName(text);
    }
    result.object->attach(this);
    return result.object;
}
