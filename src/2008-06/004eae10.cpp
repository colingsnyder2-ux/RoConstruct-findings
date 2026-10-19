// from server: 75% by colin
// from server: 67% by king_originala
// roc 2008-06 004eae10  unit: RBX::ViewNew::Part  size: 442 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004eae10
//
// 004eae10  6aff                 push -1
// 004eae12  68aaa97c00           push 0x7ca9aa
// 004eae17  64a100000000         mov eax, dword ptr fs:[0]
// 004eae1d  50                   push eax
// 004eae1e  64892500000000       mov dword ptr fs:[0], esp
// 004eae25  83ec44               sub esp, 0x44
// 004eae28  8b442458             mov eax, dword ptr [esp + 0x58]
// 004eae2c  53                   push ebx
// 004eae2d  55                   push ebp
// 004eae2e  56                   push esi
// 004eae2f  57                   push edi
// 004eae30  8bf1                 mov esi, ecx
// 004eae32  50                   push eax
// 004eae33  8d4c2418             lea ecx, [esp + 0x18]
// 004eae37  51                   push ecx
// 004eae38  89742418             mov dword ptr [esp + 0x18], esi
// 004eae3c  e8ffdb1200           call 0x618a40
// 004eae41  83c408               add esp, 8
// 004eae44  d905c8d18200         fld dword ptr [0x82d1c8]
// 004eae4a  8b54246c             mov edx, dword ptr [esp + 0x6c]
// 004eae4e  52                   push edx
// 004eae4f  50                   push eax
// 004eae50  51                   push ecx
// 004eae51  33ed                 xor ebp, ebp
// 004eae53  d91c24               fstp dword ptr [esp]
// 004eae56  8bce                 mov ecx, esi
// 004eae58  896c2468             mov dword ptr [esp + 0x68], ebp
// 004eae5c  e87ffcffff           call 0x4eaae0
// 004eae61  8b7c2418             mov edi, dword ptr [esp + 0x18]
// 004eae65  c644245c02           mov byte ptr [esp + 0x5c], 2
// 004eae6a  3bfd                 cmp edi, ebp
// 004eae6c  742a                 je 0x4eae98
// 004eae6e  8d4704               lea eax, [edi + 4]
// 004eae71  83c9ff               or ecx, 0xffffffff
// 004eae74  f00fc108             lock xadd dword ptr [eax], ecx
// 004eae78  751e                 jne 0x4eae98
// 004eae7a  8b17                 mov edx, dword ptr [edi]
// 004eae7c  8b4204               mov eax, dword ptr [edx + 4]
// 004eae7f  8bcf                 mov ecx, edi
// 004eae81  ffd0                 call eax
// 004eae83  8d4f08               lea ecx, [edi + 8]
// 004eae86  83caff               or edx, 0xffffffff
// 004eae89  f00fc111             lock xadd dword ptr [ecx], edx
// 004eae8d  7509                 jne 0x4eae98
// 004eae8f  8b07                 mov eax, dword ptr [edi]
// 004eae91  8b5008               mov edx, dword ptr [eax + 8]
// 004eae94  8bcf                 mov ecx, edi
// 004eae96  ffd2                 call edx
// 004eae98  8b5c2464             mov ebx, dword ptr [esp + 0x64]
// 004eae9c  8d86d8000000         lea eax, [esi + 0xd8]
// 004eaea2  53                   push ebx
// 004eaea3  50                   push eax
// 004eaea4  c706f86e8200         mov dword ptr [esi], 0x826ef8
// 004eaeaa  e891db1200           call 0x618a40
// 004eaeaf  83c408               add esp, 8
// 004eaeb2  8dbee0000000         lea edi, [esi + 0xe0]
// 004eaeb8  896f04               mov dword ptr [edi + 4], ebp
// 004eaebb  896f08               mov dword ptr [edi + 8], ebp
// 004eaebe  c6470c00             mov byte ptr [edi + 0xc], 0
// 004eaec2  c6471000             mov byte ptr [edi + 0x10], 0
// 004eaec6  8daef4000000         lea ebp, [esi + 0xf4]
// 004eaecc  33c0                 xor eax, eax
// 004eaece  894504               mov dword ptr [ebp + 4], eax
// 004eaed1  894508               mov dword ptr [ebp + 8], eax
// 004eaed4  88450c               mov byte ptr [ebp + 0xc], al
// 004eaed7  884510               mov byte ptr [ebp + 0x10], al
// 004eaeda  8d4c2414             lea ecx, [esp + 0x14]
// 004eaede  51                   push ecx
// 004eaedf  8d4c2430             lea ecx, [esp + 0x30]
// 004eaee3  c644246005           mov byte ptr [esp + 0x60], 5
// 004eaee8  c7442418b0834e00     mov dword ptr [esp + 0x18], 0x4e83b0
// 004eaef0  8974241c             mov dword ptr [esp + 0x1c], esi
// 004eaef4  e867f9ffff           call 0x4ea860
// 004eaef9  c644245c06           mov byte ptr [esp + 0x5c], 6
// 004eaefe  85db                 test ebx, ebx
// 004eaf00  7405                 je 0x4eaf07
// 004eaf02  8d4314               lea eax, [ebx + 0x14]
// 004eaf05  eb02                 jmp 0x4eaf09
// 004eaf07  33c0                 xor eax, eax
// 004eaf09  6a0a                 push 0xa
// 004eaf0b  8d542430             lea edx, [esp + 0x30]
// 004eaf0f  52                   push edx
// 004eaf10  50                   push eax
// 004eaf11  8d442428             lea eax, [esp + 0x28]
// 004eaf15  50                   push eax
// 004eaf16  b9383c9700           mov ecx, 0x973c38
// 004eaf1b  e82084fbff           call 0x4a3340
// 004eaf20  50                   push eax
// 004eaf21  8bcf                 mov ecx, edi
// 004eaf23  c644246007           mov byte ptr [esp + 0x60], 7
// 004eaf28  e813a60a00           call 0x595540
// 004eaf2d  8d4c241c             lea ecx, [esp + 0x1c]
// 004eaf31  c644245c06           mov byte ptr [esp + 0x5c], 6
// 004eaf36  e835a40a00           call 0x595370
// 004eaf3b  8d4c242c             lea ecx, [esp + 0x2c]
// 004eaf3f  c644245c05           mov byte ptr [esp + 0x5c], 5
// 004eaf44  e8c747fbff           call 0x49f710
// 004eaf49  8d4c2414             lea ecx, [esp + 0x14]
// 004eaf4d  51                   push ecx
// 004eaf4e  8d4c2430             lea ecx, [esp + 0x30]
// 004eaf52  c7442418906b4e00     mov dword ptr [esp + 0x18], 0x4e6b90
// 004eaf5a  8974241c             mov dword ptr [esp + 0x1c], esi
// 004eaf5e  e89df9ffff           call 0x4ea900
// 004eaf63  c644245c08           mov byte ptr [esp + 0x5c], 8
// 004eaf68  85db                 test ebx, ebx
// 004eaf6a  7405                 je 0x4eaf71
// 004eaf6c  8d4314               lea eax, [ebx + 0x14]
// 004eaf6f  eb02                 jmp 0x4eaf73
// 004eaf71  33c0                 xor eax, eax
// 004eaf73  6a0a                 push 0xa
// 004eaf75  8d542430             lea edx, [esp + 0x30]
// 004eaf79  52                   push edx
// 004eaf7a  50                   push eax
// 004eaf7b  8d442428             lea eax, [esp + 0x28]
// 004eaf7f  50                   push eax
// 004eaf80  b9483f9700           mov ecx, 0x973f48
// 004eaf85  e8f606f4ff           call 0x42b680
// 004eaf8a  50                   push eax
// 004eaf8b  8bcd                 mov ecx, ebp
// 004eaf8d  c644246009           mov byte ptr [esp + 0x60], 9
// 004eaf92  e8a9a50a00           call 0x595540
// 004eaf97  8d4c241c             lea ecx, [esp + 0x1c]
// 004eaf9b  c644245c08           mov byte ptr [esp + 0x5c], 8
// 004eafa0  e8cba30a00           call 0x595370
// 004eafa5  8d4c242c             lea ecx, [esp + 0x2c]
// 004eafa9  c644245c05           mov byte ptr [esp + 0x5c], 5
// 004eafae  e85d47fbff           call 0x49f710
// 004eafb3  8b4c2454             mov ecx, dword ptr [esp + 0x54]
// 004eafb7  5f                   pop edi
// 004eafb8  8bc6                 mov eax, esi
// 004eafba  5e                   pop esi
// 004eafbb  5d                   pop ebp
// 004eafbc  64890d00000000       mov dword ptr fs:[0], ecx
// 004eafc3  5b                   pop ebx
// 004eafc4  83c450               add esp, 0x50
// 004eafc7  c20c00               ret 0xc

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)

struct Count {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Count* count;
    ~Shared()
    {
        Count* p = count;
        if (p && _InterlockedExchangeAdd(&p->strong, -1) == 0) {
            p->dispose();
            if (_InterlockedExchangeAdd(&p->weak, -1) == 0)
                p->destroy();
        }
    }
};

Shared __cdecl makeShared(void*);
extern const float initialValue;

struct Base {
    virtual void virtualFunction();
    unsigned char storage[212];
    Base(float, const Shared&, void*);
    ~Base();
};

struct Result {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    bool flag;
    __declspec(dllimport) ~Result() throw();
};

struct Connection {
    unsigned int reserved;
    unsigned int first;
    unsigned int second;
    bool flag;
    unsigned char padding[3];
    bool blocked;

    Connection() : first(0), second(0), flag(false), blocked(false) {}
    ~Connection();
    Connection& operator=(const Result&);
};

struct S : Base {
    Shared owner;
    Connection firstConnection;
    Connection secondConnection;

    S(void*, void*, void*);
    virtual void virtualFunction();
    void firstCallback();
    void secondCallback();
};

struct PairA {
    void (S::*callback)();
    S* object;
};

struct PairB {
    void (S::*callback)();
    S* object;
};

struct Function {
    unsigned char storage[40];
    Function(const PairA*);
    Function(const PairB*);
    ~Function();
};

struct ManagerA {
    Result connect(void*, const Function&, int);
};

struct ManagerB {
    Result connect(void*, const Function&, int);
};

extern ManagerA managerA;
extern ManagerB managerB;

S::S(void* object, void* baseObject, void* argument)
    : Base(initialValue, makeShared(baseObject), argument),
      owner(makeShared(object))
{
    {
        PairA pair;
        pair.callback = &S::firstCallback;
        pair.object = this;
        Function function(&pair);
        firstConnection = managerA.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            function, 10);
    }
    {
        PairB pair;
        pair.callback = &S::secondCallback;
        pair.object = this;
        Function function(&pair);
        secondConnection = managerB.connect(
            object ? static_cast<unsigned char*>(object) + 20 : 0,
            function, 10);
    }
}
