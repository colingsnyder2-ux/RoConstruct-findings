// from server: 100% by king_originala
// roc 2008-06 005fc450  unit: RBX::LocalBackpack  size: 508 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005fc450
//
// 005fc450  6aff                 push -1
// 005fc452  681e7e7d00           push 0x7d7e1e
// 005fc457  64a100000000         mov eax, dword ptr fs:[0]
// 005fc45d  50                   push eax
// 005fc45e  64892500000000       mov dword ptr fs:[0], esp
// 005fc465  51                   push ecx
// 005fc466  56                   push esi
// 005fc467  8bf1                 mov esi, ecx
// 005fc469  57                   push edi
// 005fc46a  89742408             mov dword ptr [esp + 8], esi
// 005fc46e  c70664138400         mov dword ptr [esi], 0x841364
// 005fc474  c7461054138400       mov dword ptr [esi + 0x10], 0x841354
// 005fc47b  c746144c138400       mov dword ptr [esi + 0x14], 0x84134c
// 005fc482  c7462044138400       mov dword ptr [esi + 0x20], 0x841344
// 005fc489  c7462434138400       mov dword ptr [esi + 0x24], 0x841334
// 005fc490  c7464424138400       mov dword ptr [esi + 0x44], 0x841324
// 005fc497  c7466414138400       mov dword ptr [esi + 0x64], 0x841314
// 005fc49e  c7868400000004138400 mov dword ptr [esi + 0x84], 0x841304
// 005fc4a8  c786a4000000f4128400 mov dword ptr [esi + 0xa4], 0x8412f4
// 005fc4b2  c786c4000000e4128400 mov dword ptr [esi + 0xc4], 0x8412e4
// 005fc4bc  c78630010000dc128400 mov dword ptr [esi + 0x130], 0x8412dc
// 005fc4c6  c78668010000d0128400 mov dword ptr [esi + 0x168], 0x8412d0
// 005fc4d0  c7866c010000c4128400 mov dword ptr [esi + 0x16c], 0x8412c4
// 005fc4da  c78670010000b8128400 mov dword ptr [esi + 0x170], 0x8412b8
// 005fc4e4  c78674010000ac128400 mov dword ptr [esi + 0x174], 0x8412ac
// 005fc4ee  c78678010000a0128400 mov dword ptr [esi + 0x178], 0x8412a0
// 005fc4f8  c7867c01000094128400 mov dword ptr [esi + 0x17c], 0x841294
// 005fc502  c744241405000000     mov dword ptr [esp + 0x14], 5
// 005fc50a  e8a1feffff           call 0x5fc3b0
// 005fc50f  8bbea4010000         mov edi, dword ptr [esi + 0x1a4]
// 005fc515  c644241404           mov byte ptr [esp + 0x14], 4
// 005fc51a  85ff                 test edi, edi
// 005fc51c  742a                 je 0x5fc548
// 005fc51e  8d4704               lea eax, [edi + 4]
// 005fc521  83c9ff               or ecx, 0xffffffff
// 005fc524  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc528  751e                 jne 0x5fc548
// 005fc52a  8b17                 mov edx, dword ptr [edi]
// 005fc52c  8b4204               mov eax, dword ptr [edx + 4]
// 005fc52f  8bcf                 mov ecx, edi
// 005fc531  ffd0                 call eax
// 005fc533  8d4f08               lea ecx, [edi + 8]
// 005fc536  83caff               or edx, 0xffffffff
// 005fc539  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc53d  7509                 jne 0x5fc548
// 005fc53f  8b07                 mov eax, dword ptr [edi]
// 005fc541  8b5008               mov edx, dword ptr [eax + 8]
// 005fc544  8bcf                 mov ecx, edi
// 005fc546  ffd2                 call edx
// 005fc548  8bbe9c010000         mov edi, dword ptr [esi + 0x19c]
// 005fc54e  c644241403           mov byte ptr [esp + 0x14], 3
// 005fc553  85ff                 test edi, edi
// 005fc555  742a                 je 0x5fc581
// 005fc557  8d4704               lea eax, [edi + 4]
// 005fc55a  83c9ff               or ecx, 0xffffffff
// 005fc55d  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc561  751e                 jne 0x5fc581
// 005fc563  8b17                 mov edx, dword ptr [edi]
// 005fc565  8b4204               mov eax, dword ptr [edx + 4]
// 005fc568  8bcf                 mov ecx, edi
// 005fc56a  ffd0                 call eax
// 005fc56c  8d4f08               lea ecx, [edi + 8]
// 005fc56f  83caff               or edx, 0xffffffff
// 005fc572  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc576  7509                 jne 0x5fc581
// 005fc578  8b07                 mov eax, dword ptr [edi]
// 005fc57a  8b5008               mov edx, dword ptr [eax + 8]
// 005fc57d  8bcf                 mov ecx, edi
// 005fc57f  ffd2                 call edx
// 005fc581  8bbe94010000         mov edi, dword ptr [esi + 0x194]
// 005fc587  c644241402           mov byte ptr [esp + 0x14], 2
// 005fc58c  85ff                 test edi, edi
// 005fc58e  742a                 je 0x5fc5ba
// 005fc590  8d4704               lea eax, [edi + 4]
// 005fc593  83c9ff               or ecx, 0xffffffff
// 005fc596  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc59a  751e                 jne 0x5fc5ba
// 005fc59c  8b17                 mov edx, dword ptr [edi]
// 005fc59e  8b4204               mov eax, dword ptr [edx + 4]
// 005fc5a1  8bcf                 mov ecx, edi
// 005fc5a3  ffd0                 call eax
// 005fc5a5  8d4f08               lea ecx, [edi + 8]
// 005fc5a8  83caff               or edx, 0xffffffff
// 005fc5ab  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc5af  7509                 jne 0x5fc5ba
// 005fc5b1  8b07                 mov eax, dword ptr [edi]
// 005fc5b3  8b5008               mov edx, dword ptr [eax + 8]
// 005fc5b6  8bcf                 mov ecx, edi
// 005fc5b8  ffd2                 call edx
// 005fc5ba  8bbe8c010000         mov edi, dword ptr [esi + 0x18c]
// 005fc5c0  c644241401           mov byte ptr [esp + 0x14], 1
// 005fc5c5  85ff                 test edi, edi
// 005fc5c7  742a                 je 0x5fc5f3
// 005fc5c9  8d4704               lea eax, [edi + 4]
// 005fc5cc  83c9ff               or ecx, 0xffffffff
// 005fc5cf  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc5d3  751e                 jne 0x5fc5f3
// 005fc5d5  8b17                 mov edx, dword ptr [edi]
// 005fc5d7  8b4204               mov eax, dword ptr [edx + 4]
// 005fc5da  8bcf                 mov ecx, edi
// 005fc5dc  ffd0                 call eax
// 005fc5de  8d4f08               lea ecx, [edi + 8]
// 005fc5e1  83caff               or edx, 0xffffffff
// 005fc5e4  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc5e8  7509                 jne 0x5fc5f3
// 005fc5ea  8b07                 mov eax, dword ptr [edi]
// 005fc5ec  8b5008               mov edx, dword ptr [eax + 8]
// 005fc5ef  8bcf                 mov ecx, edi
// 005fc5f1  ffd2                 call edx
// 005fc5f3  8bbe84010000         mov edi, dword ptr [esi + 0x184]
// 005fc5f9  c644241400           mov byte ptr [esp + 0x14], 0
// 005fc5fe  85ff                 test edi, edi
// 005fc600  742a                 je 0x5fc62c
// 005fc602  8d4704               lea eax, [edi + 4]
// 005fc605  83c9ff               or ecx, 0xffffffff
// 005fc608  f00fc108             lock xadd dword ptr [eax], ecx
// 005fc60c  751e                 jne 0x5fc62c
// 005fc60e  8b17                 mov edx, dword ptr [edi]
// 005fc610  8b4204               mov eax, dword ptr [edx + 4]
// 005fc613  8bcf                 mov ecx, edi
// 005fc615  ffd0                 call eax
// 005fc617  8d4f08               lea ecx, [edi + 8]
// 005fc61a  83caff               or edx, 0xffffffff
// 005fc61d  f00fc111             lock xadd dword ptr [ecx], edx
// 005fc621  7509                 jne 0x5fc62c
// 005fc623  8b07                 mov eax, dword ptr [edi]
// 005fc625  8b5008               mov edx, dword ptr [eax + 8]
// 005fc628  8bcf                 mov ecx, edi
// 005fc62a  ffd2                 call edx
// 005fc62c  8bce                 mov ecx, esi
// 005fc62e  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 005fc636  e875f1ffff           call 0x5fb7b0
// 005fc63b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 005fc63f  5f                   pop edi
// 005fc640  5e                   pop esi
// 005fc641  64890d00000000       mov dword ptr fs:[0], ecx
// 005fc648  83c410               add esp, 0x10
// 005fc64b  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused() = 0;
    virtual void dispose() = 0;
    virtual void destroy() = 0;
    volatile long strong;
    volatile long weak;
};

struct Shared {
    void* object;
    Control* control;
    ~Shared();
};

__forceinline Shared::~Shared()
{
    Control* p = control;
    if (p && _InterlockedDecrement(&p->strong) == 0) {
        p->dispose();
        if (_InterlockedDecrement(&p->weak) == 0)
            p->destroy();
    }
}

template<int Size, int Id> struct Part {
    virtual void slot();
    char padding[Size - 4];
};

template<int Id> struct Part<4, Id> {
    virtual void slot();
};

struct Base :
    Part<16, 0>,
    Part<4, 1>,
    Part<12, 2>,
    Part<4, 3>,
    Part<32, 4>,
    Part<32, 5>,
    Part<32, 6>,
    Part<32, 7>,
    Part<32, 8>,
    Part<108, 9>,
    Part<56, 10>,
    Part<4, 11>,
    Part<4, 12>,
    Part<4, 13>,
    Part<4, 14>,
    Part<4, 15>,
    Part<4, 16>
{
    ~Base();
};

struct LocalBackpack : Base {
    Shared first;
    Shared second;
    Shared third;
    Shared fourth;
    Shared fifth;

    virtual void slot();
    void cleanup();
    ~LocalBackpack();
};

LocalBackpack::~LocalBackpack()
{
    cleanup();
}
