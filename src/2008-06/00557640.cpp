// from server: 100% by colin
// roc 2008-06 00557640  unit: RBX::VInstance::?$NonFactoryProduct  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00557640
//
// 00557640  64a100000000         mov eax, dword ptr fs:[0]
// 00557646  6aff                 push -1
// 00557648  6868617c00           push 0x7c6168
// 0055764d  50                   push eax
// 0055764e  64892500000000       mov dword ptr fs:[0], esp
// 00557655  53                   push ebx
// 00557656  56                   push esi
// 00557657  8b442418             mov eax, dword ptr [esp + 0x18]
// 0055765b  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00557663  85c0                 test eax, eax
// 00557665  7504                 jne 0x55766b
// 00557667  32db                 xor bl, bl
// 00557669  eb16                 jmp 0x557681
// 0055766b  8b8004010000         mov eax, dword ptr [eax + 0x104]
// 00557671  3bc1                 cmp eax, ecx
// 00557673  7504                 jne 0x557679
// 00557675  b301                 mov bl, 1
// 00557677  eb08                 jmp 0x557681
// 00557679  50                   push eax
// 0055767a  e8d125f7ff           call 0x4c9c50
// 0055767f  8ad8                 mov bl, al
// 00557681  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 00557685  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 0055768d  85f6                 test esi, esi
// 0055768f  742a                 je 0x5576bb
// 00557691  8d4604               lea eax, [esi + 4]
// 00557694  83c9ff               or ecx, 0xffffffff
// 00557697  f00fc108             lock xadd dword ptr [eax], ecx
// 0055769b  751e                 jne 0x5576bb
// 0055769d  8b16                 mov edx, dword ptr [esi]
// 0055769f  8b4204               mov eax, dword ptr [edx + 4]
// 005576a2  8bce                 mov ecx, esi
// 005576a4  ffd0                 call eax
// 005576a6  8d4e08               lea ecx, [esi + 8]
// 005576a9  83caff               or edx, 0xffffffff
// 005576ac  f00fc111             lock xadd dword ptr [ecx], edx
// 005576b0  7509                 jne 0x5576bb
// 005576b2  8b06                 mov eax, dword ptr [esi]
// 005576b4  8b5008               mov edx, dword ptr [eax + 8]
// 005576b7  8bce                 mov ecx, esi
// 005576b9  ffd2                 call edx
// 005576bb  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005576bf  5e                   pop esi
// 005576c0  8ac3                 mov al, bl
// 005576c2  64890d00000000       mov dword ptr fs:[0], ecx
// 005576c9  5b                   pop ebx
// 005576ca  83c40c               add esp, 0xc
// 005576cd  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual ~Control();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct S;

struct Shared {
    S* object;
    Control* control;
    ~Shared();
};

struct S {
    char padding[0x104];
    S* parent;

    bool ancestor(S* object);
    bool f(Shared object);
};

__forceinline Shared::~Shared()
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

bool S::f(Shared object)
{
    bool result;
    if (!object.object) {
        result = false;
    } else {
        S* p = object.object->parent;
        if (p == this)
            result = true;
        else
            result = ancestor(p);
    }
    return result;
}

Control::~Control()
{
}
