// from server: 100% by king_originala
// roc 2008-06 005b1620  unit: RBX::Accoutrement  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005b1620
//
// 005b1620  64a100000000         mov eax, dword ptr fs:[0]
// 005b1626  6aff                 push -1
// 005b1628  6868617c00           push 0x7c6168
// 005b162d  50                   push eax
// 005b162e  64892500000000       mov dword ptr fs:[0], esp
// 005b1635  56                   push esi
// 005b1636  57                   push edi
// 005b1637  8bf9                 mov edi, ecx
// 005b1639  83bf5401000002       cmp dword ptr [edi + 0x154], 2
// 005b1640  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005b1648  7535                 jne 0x5b167f
// 005b164a  8b442418             mov eax, dword ptr [esp + 0x18]
// 005b164e  8bb004010000         mov esi, dword ptr [eax + 0x104]
// 005b1654  56                   push esi
// 005b1655  e8c6830200           call 0x5d9a20
// 005b165a  83c404               add esp, 4
// 005b165d  85c0                 test eax, eax
// 005b165f  741e                 je 0x5b167f
// 005b1661  8bc8                 mov ecx, eax
// 005b1663  e8a8740200           call 0x5d8b10
// 005b1668  85c0                 test eax, eax
// 005b166a  7413                 je 0x5b167f
// 005b166c  8bce                 mov ecx, esi
// 005b166e  e8adfeffff           call 0x5b1520
// 005b1673  85c0                 test eax, eax
// 005b1675  7508                 jne 0x5b167f
// 005b1677  56                   push esi
// 005b1678  8bcf                 mov ecx, edi
// 005b167a  e87192faff           call 0x55a8f0
// 005b167f  8b74241c             mov esi, dword ptr [esp + 0x1c]
// 005b1683  c7442410ffffffff     mov dword ptr [esp + 0x10], 0xffffffff
// 005b168b  85f6                 test esi, esi
// 005b168d  742a                 je 0x5b16b9
// 005b168f  8d4e04               lea ecx, [esi + 4]
// 005b1692  83caff               or edx, 0xffffffff
// 005b1695  f00fc111             lock xadd dword ptr [ecx], edx
// 005b1699  751e                 jne 0x5b16b9
// 005b169b  8b06                 mov eax, dword ptr [esi]
// 005b169d  8b5004               mov edx, dword ptr [eax + 4]
// 005b16a0  8bce                 mov ecx, esi
// 005b16a2  ffd2                 call edx
// 005b16a4  8d4608               lea eax, [esi + 8]
// 005b16a7  83c9ff               or ecx, 0xffffffff
// 005b16aa  f00fc108             lock xadd dword ptr [eax], ecx
// 005b16ae  7509                 jne 0x5b16b9
// 005b16b0  8b16                 mov edx, dword ptr [esi]
// 005b16b2  8b4208               mov eax, dword ptr [edx + 8]
// 005b16b5  8bce                 mov ecx, esi
// 005b16b7  ffd0                 call eax
// 005b16b9  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005b16bd  5f                   pop edi
// 005b16be  64890d00000000       mov dword ptr fs:[0], ecx
// 005b16c5  5e                   pop esi
// 005b16c6  83c40c               add esp, 0xc
// 005b16c9  c20800               ret 8

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Ref {
    virtual ~Ref();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct S;

struct Shared {
    S* ptr;
    Ref* ref;

    ~Shared()
    {
        Ref* r = ref;
        if (r && _InterlockedDecrement(&r->strong) == 0) {
            r->dispose();
            if (_InterlockedDecrement(&r->weak) == 0)
                r->destroy();
        }
    }
};

struct Controller {
    void* check();
};

extern Controller* __cdecl resolve(S*);

struct S {
    char padding0[0x104];
    S* parent;
    char padding1[0x4C];
    int state;

    int has();
    void setParent(S*);
    void f(Shared);
};

void S::f(Shared value)
{
    if (state == 2) {
        S* parentObject = value.ptr->parent;
        Controller* controller = resolve(parentObject);
        if (controller && controller->check() && !parentObject->has())
            setParent(parentObject);
    }
}
