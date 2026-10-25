// from server: 95% by Espeon
// roc 2008-06 00582860  unit: RBX::GroupSelectionVerb  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582860
//
// 00582860  64a100000000         mov eax, dword ptr fs:[0]
// 00582866  6aff                 push -1
// 00582868  6818117d00           push 0x7d1118
// 0058286d  50                   push eax
// 0058286e  64892500000000       mov dword ptr fs:[0], esp
// 00582875  83ec0c               sub esp, 0xc
// 00582878  56                   push esi
// 00582879  8bf1                 mov esi, ecx
// 0058287b  6a01                 push 1
// 0058287d  8d4e14               lea ecx, [esi + 0x14]
// 00582880  e83bf4ffff           call 0x581cc0
// 00582885  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0058288b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0058288e  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582891  c1f903               sar ecx, 3
// 00582894  85c9                 test ecx, ecx
// 00582896  7712                 ja 0x5828aa
// 00582898  32c0                 xor al, al
// 0058289a  5e                   pop esi
// 0058289b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058289f  64890d00000000       mov dword ptr fs:[0], ecx
// 005828a6  83c418               add esp, 0x18
// 005828a9  c3                   ret 
// 005828aa  8b5620               mov edx, dword ptr [esi + 0x20]
// 005828ad  53                   push ebx
// 005828ae  89542408             mov dword ptr [esp + 8], edx
// 005828b2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005828ba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005828c2  6a01                 push 1
// 005828c4  8d4c240c             lea ecx, [esp + 0xc]
// 005828c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005828d0  e8ebf3ffff           call 0x581cc0
// 005828d5  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 005828db  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005828de  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005828e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005828e5  c1f903               sar ecx, 3
// 005828e8  83f901               cmp ecx, 1
// 005828eb  0f97c3               seta bl
// 005828ee  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005828f6  85f6                 test esi, esi
// 005828f8  742a                 je 0x582924
// 005828fa  8d5604               lea edx, [esi + 4]
// 005828fd  83c8ff               or eax, 0xffffffff
// 00582900  f00fc102             lock xadd dword ptr [edx], eax
// 00582904  751e                 jne 0x582924
// 00582906  8b16                 mov edx, dword ptr [esi]
// 00582908  8b4204               mov eax, dword ptr [edx + 4]
// 0058290b  8bce                 mov ecx, esi
// 0058290d  ffd0                 call eax
// 0058290f  8d4e08               lea ecx, [esi + 8]
// 00582912  83caff               or edx, 0xffffffff
// 00582915  f00fc111             lock xadd dword ptr [ecx], edx
// 00582919  7509                 jne 0x582924
// 0058291b  8b06                 mov eax, dword ptr [esi]
// 0058291d  8b5008               mov edx, dword ptr [eax + 8]
// 00582920  8bce                 mov ecx, esi
// 00582922  ffd2                 call edx
// 00582924  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00582928  8ac3                 mov al, bl
// 0058292a  5b                   pop ebx
// 0058292b  5e                   pop esi
// 0058292c  64890d00000000       mov dword ptr fs:[0], ecx
// 00582933  83c418               add esp, 0x18
// 00582936  c3                   ret 

// from server: 94% by colin
// roc 2008-06 00582860  unit: RBX::GroupSelectionVerb  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582860
//
// 00582860  64a100000000         mov eax, dword ptr fs:[0]
// 00582866  6aff                 push -1
// 00582868  6818117d00           push 0x7d1118
// 0058286d  50                   push eax
// 0058286e  64892500000000       mov dword ptr fs:[0], esp
// 00582875  83ec0c               sub esp, 0xc
// 00582878  56                   push esi
// 00582879  8bf1                 mov esi, ecx
// 0058287b  6a01                 push 1
// 0058287d  8d4e14               lea ecx, [esi + 0x14]
// 00582880  e83bf4ffff           call 0x581cc0
// 00582885  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0058288b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0058288e  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582891  c1f903               sar ecx, 3
// 00582894  85c9                 test ecx, ecx
// 00582896  7712                 ja 0x5828aa
// 00582898  32c0                 xor al, al
// 0058289a  5e                   pop esi
// 0058289b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058289f  64890d00000000       mov dword ptr fs:[0], ecx
// 005828a6  83c418               add esp, 0x18
// 005828a9  c3                   ret 
// 005828aa  8b5620               mov edx, dword ptr [esi + 0x20]
// 005828ad  53                   push ebx
// 005828ae  89542408             mov dword ptr [esp + 8], edx
// 005828b2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005828ba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005828c2  6a01                 push 1
// 005828c4  8d4c240c             lea ecx, [esp + 0xc]
// 005828c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005828d0  e8ebf3ffff           call 0x581cc0
// 005828d5  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 005828db  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005828de  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005828e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005828e5  c1f903               sar ecx, 3
// 005828e8  83f901               cmp ecx, 1
// 005828eb  0f97c3               seta bl
// 005828ee  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005828f6  85f6                 test esi, esi
// 005828f8  742a                 je 0x582924
// 005828fa  8d5604               lea edx, [esi + 4]
// 005828fd  83c8ff               or eax, 0xffffffff
// 00582900  f00fc102             lock xadd dword ptr [edx], eax
// 00582904  751e                 jne 0x582924
// 00582906  8b16                 mov edx, dword ptr [esi]
// 00582908  8b4204               mov eax, dword ptr [edx + 4]
// 0058290b  8bce                 mov ecx, esi
// 0058290d  ffd0                 call eax
// 0058290f  8d4e08               lea ecx, [esi + 8]
// 00582912  83caff               or edx, 0xffffffff
// 00582915  f00fc111             lock xadd dword ptr [ecx], edx
// 00582919  7509                 jne 0x582924
// 0058291b  8b06                 mov eax, dword ptr [esi]
// 0058291d  8b5008               mov edx, dword ptr [eax + 8]
// 00582920  8bce                 mov ecx, esi
// 00582922  ffd2                 call edx
// 00582924  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00582928  8ac3                 mov al, bl
// 0058292a  5b                   pop ebx
// 0058292b  5e                   pop esi
// 0058292c  64890d00000000       mov dword ptr fs:[0], ecx
// 00582933  83c418               add esp, 0x18
// 00582936  c3                   ret 

// from server: 89% by colin
// roc 2008-06 00582860  unit: RBX::GroupSelectionVerb  size: 215 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00582860
//
// 00582860  64a100000000         mov eax, dword ptr fs:[0]
// 00582866  6aff                 push -1
// 00582868  6818117d00           push 0x7d1118
// 0058286d  50                   push eax
// 0058286e  64892500000000       mov dword ptr fs:[0], esp
// 00582875  83ec0c               sub esp, 0xc
// 00582878  56                   push esi
// 00582879  8bf1                 mov esi, ecx
// 0058287b  6a01                 push 1
// 0058287d  8d4e14               lea ecx, [esi + 0x14]
// 00582880  e83bf4ffff           call 0x581cc0
// 00582885  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 0058288b  8b4810               mov ecx, dword ptr [eax + 0x10]
// 0058288e  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00582891  c1f903               sar ecx, 3
// 00582894  85c9                 test ecx, ecx
// 00582896  7712                 ja 0x5828aa
// 00582898  32c0                 xor al, al
// 0058289a  5e                   pop esi
// 0058289b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0058289f  64890d00000000       mov dword ptr fs:[0], ecx
// 005828a6  83c418               add esp, 0x18
// 005828a9  c3                   ret 
// 005828aa  8b5620               mov edx, dword ptr [esi + 0x20]
// 005828ad  53                   push ebx
// 005828ae  89542408             mov dword ptr [esp + 8], edx
// 005828b2  c744240c00000000     mov dword ptr [esp + 0xc], 0
// 005828ba  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005828c2  6a01                 push 1
// 005828c4  8d4c240c             lea ecx, [esp + 0xc]
// 005828c8  c744242000000000     mov dword ptr [esp + 0x20], 0
// 005828d0  e8ebf3ffff           call 0x581cc0
// 005828d5  8b8054010000         mov eax, dword ptr [eax + 0x154]
// 005828db  8b4810               mov ecx, dword ptr [eax + 0x10]
// 005828de  2b480c               sub ecx, dword ptr [eax + 0xc]
// 005828e1  8b742410             mov esi, dword ptr [esp + 0x10]
// 005828e5  c1f903               sar ecx, 3
// 005828e8  83f901               cmp ecx, 1
// 005828eb  0f97c3               seta bl
// 005828ee  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 005828f6  85f6                 test esi, esi
// 005828f8  742a                 je 0x582924
// 005828fa  8d5604               lea edx, [esi + 4]
// 005828fd  83c8ff               or eax, 0xffffffff
// 00582900  f00fc102             lock xadd dword ptr [edx], eax
// 00582904  751e                 jne 0x582924
// 00582906  8b16                 mov edx, dword ptr [esi]
// 00582908  8b4204               mov eax, dword ptr [edx + 4]
// 0058290b  8bce                 mov ecx, esi
// 0058290d  ffd0                 call eax
// 0058290f  8d4e08               lea ecx, [esi + 8]
// 00582912  83caff               or edx, 0xffffffff
// 00582915  f00fc111             lock xadd dword ptr [ecx], edx
// 00582919  7509                 jne 0x582924
// 0058291b  8b06                 mov eax, dword ptr [esi]
// 0058291d  8b5008               mov edx, dword ptr [eax + 8]
// 00582920  8bce                 mov ecx, esi
// 00582922  ffd2                 call edx
// 00582924  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00582928  8ac3                 mov al, bl
// 0058292a  5b                   pop ebx
// 0058292b  5e                   pop esi
// 0058292c  64890d00000000       mov dword ptr fs:[0], ecx
// 00582933  83c418               add esp, 0x18
// 00582936  c3                   ret 

extern "C" long __cdecl _InterlockedExchangeAdd(volatile long*, long);
#pragma intrinsic(_InterlockedExchangeAdd)
extern "C" long __cdecl _InterlockedIncrement(volatile long*);
#pragma intrinsic(_InterlockedIncrement)
extern "C" long __cdecl _InterlockedDecrement(volatile long*);
#pragma intrinsic(_InterlockedDecrement)

struct Control {
    virtual void unused();
    virtual void dispose();
    virtual void destroy();
    volatile long strong;
    volatile long weak;
};

struct Entry {
    void* object;
    Control* control;
};

struct Selection {
    char padding[12];
    Entry* first;
    Entry* last;
};

struct Root {
    char padding[0x154];
    Selection* selection;
};

struct Handle {
    void* object;
    void* cached;
    Control* control;

    Root* get(int);
    ~Handle();
};

inline Handle::~Handle()
{
    Control* c = control;
    if (c) {
        if (_InterlockedDecrement(&c->strong) == 0) {
            c->dispose();
            if (_InterlockedDecrement(&c->weak) == 0)
                c->destroy();
        }
    }
}

struct GroupSelectionVerb {
    char padding[0x14];
    Handle context;
    void* source;

    bool enabled();
};

bool GroupSelectionVerb::enabled()
{
    Selection* selection = context.get(1)->selection;
    unsigned int count = (unsigned int)(((char*)selection->last - (char*)selection->first) >> 3);
    if (count <= 0)
        return false;

    Handle temporary = { source, 0, 0 };
    selection = temporary.get(1)->selection;
    unsigned int count2 = (unsigned int)(((char*)selection->last - (char*)selection->first) >> 3);
    return count2 > 1;
}
