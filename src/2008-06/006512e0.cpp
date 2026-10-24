// from server: 78% by colin
// from server: 76% by colin
// roc 2008-06 006512e0  unit: RBX::ScoreHud  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006512e0
//
// 006512e0  6aff                 push -1
// 006512e2  68e1517d00           push 0x7d51e1
// 006512e7  64a100000000         mov eax, dword ptr fs:[0]
// 006512ed  50                   push eax
// 006512ee  64892500000000       mov dword ptr fs:[0], esp
// 006512f5  83ec2c               sub esp, 0x2c
// 006512f8  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 006512fe  33c0                 xor eax, eax
// 00651300  53                   push ebx
// 00651301  33db                 xor ebx, ebx
// 00651303  89442408             mov dword ptr [esp + 8], eax
// 00651307  88442406             mov byte ptr [esp + 6], al
// 0065130b  88442407             mov byte ptr [esp + 7], al
// 0065130f  3bcb                 cmp ecx, ebx
// 00651311  0f84f7000000         je 0x65140e
// 00651317  55                   push ebp
// 00651318  56                   push esi
// 00651319  8d442414             lea eax, [esp + 0x14]
// 0065131d  50                   push eax
// 0065131e  e89d61e4ff           call 0x4974c0
// 00651323  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00651327  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0065132a  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 0065132d  895c2440             mov dword ptr [esp + 0x40], ebx
// 00651331  c1f903               sar ecx, 3
// 00651334  85c9                 test ecx, ecx
// 00651336  7669                 jbe 0x6513a1
// 00651338  57                   push edi
// 00651339  8da42400000000       lea esp, [esp]
// 00651340  53                   push ebx
// 00651341  8bcd                 mov ecx, ebp
// 00651343  e808ffffff           call 0x651250
// 00651348  8b30                 mov esi, dword ptr [eax]
// 0065134a  6818bd8400           push 0x84bd18
// 0065134f  8d4c2424             lea ecx, [esp + 0x24]
// 00651353  ff1558248000         call dword ptr [0x802458]
// 00651359  8d542420             lea edx, [esp + 0x20]
// 0065135d  52                   push edx
// 0065135e  8bce                 mov ecx, esi
// 00651360  c644244801           mov byte ptr [esp + 0x48], 1
// 00651365  e8e665f0ff           call 0x557950
// 0065136a  8d4c2420             lea ecx, [esp + 0x20]
// 0065136e  8bf8                 mov edi, eax
// 00651370  c644244400           mov byte ptr [esp + 0x44], 0
// 00651375  ff1568248000         call dword ptr [0x802468]
// 0065137b  85ff                 test edi, edi
// 0065137d  7405                 je 0x651384
// 0065137f  c644241201           mov byte ptr [esp + 0x12], 1
// 00651384  80be7c01000000       cmp byte ptr [esi + 0x17c], 0
// 0065138b  7505                 jne 0x651392
// 0065138d  c644241301           mov byte ptr [esp + 0x13], 1
// 00651392  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00651395  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00651398  43                   inc ebx
// 00651399  c1f803               sar eax, 3
// 0065139c  3bd8                 cmp ebx, eax
// 0065139e  72a0                 jb 0x651340
// 006513a0  5f                   pop edi
// 006513a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 006513a5  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 006513ad  85f6                 test esi, esi
// 006513af  742a                 je 0x6513db
// 006513b1  8d4e04               lea ecx, [esi + 4]
// 006513b4  83caff               or edx, 0xffffffff
// 006513b7  f00fc111             lock xadd dword ptr [ecx], edx
// 006513bb  751e                 jne 0x6513db
// 006513bd  8b06                 mov eax, dword ptr [esi]
// 006513bf  8b5004               mov edx, dword ptr [eax + 4]
// 006513c2  8bce                 mov ecx, esi
// 006513c4  ffd2                 call edx
// 006513c6  8d4608               lea eax, [esi + 8]
// 006513c9  83c9ff               or ecx, 0xffffffff
// 006513cc  f00fc108             lock xadd dword ptr [eax], ecx
// 006513d0  7509                 jne 0x6513db
// 006513d2  8b16                 mov edx, dword ptr [esi]
// 006513d4  8b4208               mov eax, dword ptr [edx + 8]
// 006513d7  8bce                 mov ecx, esi
// 006513d9  ffd0                 call eax
// 006513db  8a4c240e             mov cl, byte ptr [esp + 0xe]
// 006513df  5e                   pop esi
// 006513e0  5d                   pop ebp
// 006513e1  84c9                 test cl, cl
// 006513e3  7408                 je 0x6513ed
// 006513e5  c744240801000000     mov dword ptr [esp + 8], 1
// 006513ed  8a442407             mov al, byte ptr [esp + 7]
// 006513f1  84c0                 test al, al
// 006513f3  7408                 je 0x6513fd
// 006513f5  c744240803000000     mov dword ptr [esp + 8], 3
// 006513fd  84c9                 test cl, cl
// 006513ff  7409                 je 0x65140a
// 00651401  84c0                 test al, al
// 00651403  b802000000           mov eax, 2
// 00651408  7504                 jne 0x65140e
// 0065140a  8b442408             mov eax, dword ptr [esp + 8]
// 0065140e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00651412  5b                   pop ebx
// 00651413  64890d00000000       mov dword ptr fs:[0], ecx
// 0065141a  83c438               add esp, 0x38
// 0065141d  c3                   ret 

// from server: 74% by colin
// roc 2008-06 006512e0  unit: RBX::ScoreHud  size: 318 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006512e0
//
// 006512e0  6aff                 push -1
// 006512e2  68e1517d00           push 0x7d51e1
// 006512e7  64a100000000         mov eax, dword ptr fs:[0]
// 006512ed  50                   push eax
// 006512ee  64892500000000       mov dword ptr fs:[0], esp
// 006512f5  83ec2c               sub esp, 0x2c
// 006512f8  8b8950010000         mov ecx, dword ptr [ecx + 0x150]
// 006512fe  33c0                 xor eax, eax
// 00651300  53                   push ebx
// 00651301  33db                 xor ebx, ebx
// 00651303  89442408             mov dword ptr [esp + 8], eax
// 00651307  88442406             mov byte ptr [esp + 6], al
// 0065130b  88442407             mov byte ptr [esp + 7], al
// 0065130f  3bcb                 cmp ecx, ebx
// 00651311  0f84f7000000         je 0x65140e
// 00651317  55                   push ebp
// 00651318  56                   push esi
// 00651319  8d442414             lea eax, [esp + 0x14]
// 0065131d  50                   push eax
// 0065131e  e89d61e4ff           call 0x4974c0
// 00651323  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 00651327  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0065132a  2b4d0c               sub ecx, dword ptr [ebp + 0xc]
// 0065132d  895c2440             mov dword ptr [esp + 0x40], ebx
// 00651331  c1f903               sar ecx, 3
// 00651334  85c9                 test ecx, ecx
// 00651336  7669                 jbe 0x6513a1
// 00651338  57                   push edi
// 00651339  8da42400000000       lea esp, [esp]
// 00651340  53                   push ebx
// 00651341  8bcd                 mov ecx, ebp
// 00651343  e808ffffff           call 0x651250
// 00651348  8b30                 mov esi, dword ptr [eax]
// 0065134a  6818bd8400           push 0x84bd18
// 0065134f  8d4c2424             lea ecx, [esp + 0x24]
// 00651353  ff1558248000         call dword ptr [0x802458]
// 00651359  8d542420             lea edx, [esp + 0x20]
// 0065135d  52                   push edx
// 0065135e  8bce                 mov ecx, esi
// 00651360  c644244801           mov byte ptr [esp + 0x48], 1
// 00651365  e8e665f0ff           call 0x557950
// 0065136a  8d4c2420             lea ecx, [esp + 0x20]
// 0065136e  8bf8                 mov edi, eax
// 00651370  c644244400           mov byte ptr [esp + 0x44], 0
// 00651375  ff1568248000         call dword ptr [0x802468]
// 0065137b  85ff                 test edi, edi
// 0065137d  7405                 je 0x651384
// 0065137f  c644241201           mov byte ptr [esp + 0x12], 1
// 00651384  80be7c01000000       cmp byte ptr [esi + 0x17c], 0
// 0065138b  7505                 jne 0x651392
// 0065138d  c644241301           mov byte ptr [esp + 0x13], 1
// 00651392  8b4510               mov eax, dword ptr [ebp + 0x10]
// 00651395  2b450c               sub eax, dword ptr [ebp + 0xc]
// 00651398  43                   inc ebx
// 00651399  c1f803               sar eax, 3
// 0065139c  3bd8                 cmp ebx, eax
// 0065139e  72a0                 jb 0x651340
// 006513a0  5f                   pop edi
// 006513a1  8b742418             mov esi, dword ptr [esp + 0x18]
// 006513a5  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 006513ad  85f6                 test esi, esi
// 006513af  742a                 je 0x6513db
// 006513b1  8d4e04               lea ecx, [esi + 4]
// 006513b4  83caff               or edx, 0xffffffff
// 006513b7  f00fc111             lock xadd dword ptr [ecx], edx
// 006513bb  751e                 jne 0x6513db
// 006513bd  8b06                 mov eax, dword ptr [esi]
// 006513bf  8b5004               mov edx, dword ptr [eax + 4]
// 006513c2  8bce                 mov ecx, esi
// 006513c4  ffd2                 call edx
// 006513c6  8d4608               lea eax, [esi + 8]
// 006513c9  83c9ff               or ecx, 0xffffffff
// 006513cc  f00fc108             lock xadd dword ptr [eax], ecx
// 006513d0  7509                 jne 0x6513db
// 006513d2  8b16                 mov edx, dword ptr [esi]
// 006513d4  8b4208               mov eax, dword ptr [edx + 8]
// 006513d7  8bce                 mov ecx, esi
// 006513d9  ffd0                 call eax
// 006513db  8a4c240e             mov cl, byte ptr [esp + 0xe]
// 006513df  5e                   pop esi
// 006513e0  5d                   pop ebp
// 006513e1  84c9                 test cl, cl
// 006513e3  7408                 je 0x6513ed
// 006513e5  c744240801000000     mov dword ptr [esp + 8], 1
// 006513ed  8a442407             mov al, byte ptr [esp + 7]
// 006513f1  84c0                 test al, al
// 006513f3  7408                 je 0x6513fd
// 006513f5  c744240803000000     mov dword ptr [esp + 8], 3
// 006513fd  84c9                 test cl, cl
// 006513ff  7409                 je 0x65140a
// 00651401  84c0                 test al, al
// 00651403  b802000000           mov eax, 2
// 00651408  7504                 jne 0x65140e
// 0065140a  8b442408             mov eax, dword ptr [esp + 8]
// 0065140e  8b4c2430             mov ecx, dword ptr [esp + 0x30]
// 00651412  5b                   pop ebx
// 00651413  64890d00000000       mov dword ptr fs:[0], ecx
// 0065141a  83c438               add esp, 0x38
// 0065141d  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct String {
    char storage[28];
    String(const char*);
    __declspec(dllimport) ~String() throw();
};

struct Control {
    virtual void dispose();
    virtual void destroy();
    volatile long references;
    volatile long weakReferences;
};

struct Entry {
    char padding[0x17c];
    bool enabled;
    void* find(const String&);
};

struct Pair {
    Entry* object;
    Control* control;
};

struct Collection {
    char padding[12];
    Pair* first;
    Pair* last;
    Pair& operator[](unsigned int);
};

struct Shared {
    Collection* object;
    Control* control;

    ~Shared() {
        Control* p = control;
        if (p) {
            if (_InterlockedDecrement(&p->references) == 0) {
                p->dispose();
                if (_InterlockedDecrement(&p->weakReferences) == 0)
                    p->destroy();
            }
        }
    }
};

struct Owner {
    Shared get();
};

struct S {
    char padding[0x150];
    Owner* owner;
    int f();
};

int S::f()
{
    int result = 0;
    bool hasStats = false;
    bool hasDisabled = false;

    if (owner) {
        {
            Shared objects = owner->get();
            Collection* collection = objects.object;
            unsigned int count = (unsigned int)((reinterpret_cast<char*>(collection->last) -
                                                 reinterpret_cast<char*>(collection->first)) >> 3);
            for (unsigned int i = 0; i < count; ++i) {
                Entry* entry = collection->operator[](i).object;
                void* found;
                {
                    String name("leaderstats");
                    found = entry->find(name);
                }
                if (found)
                    hasStats = true;
                if (!entry->enabled)
                    hasDisabled = true;
            }
        }

        if (hasStats)
            result = 1;
        if (hasDisabled)
            result = 3;
        if (hasStats && hasDisabled)
            result = 2;
    }

    return result;
}
