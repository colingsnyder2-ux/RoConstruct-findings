// from server: 74% by king_originala
// roc 2008-06 006142d0  unit: RBX::RevoluteLink  size: 164 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006142d0
//
// 006142d0  8bd1                 mov edx, ecx
// 006142d2  8b4234               mov eax, dword ptr [edx + 0x34]
// 006142d5  85c0                 test eax, eax
// 006142d7  740e                 je 0x6142e7
// 006142d9  c7400400000000       mov dword ptr [eax + 4], 0
// 006142e0  c7423400000000       mov dword ptr [edx + 0x34], 0
// 006142e7  837a1400             cmp dword ptr [edx + 0x14], 0
// 006142eb  0f8480000000         je 0x614371
// 006142f1  55                   push ebp
// 006142f2  8b6c2408             mov ebp, dword ptr [esp + 8]
// 006142f6  56                   push esi
// 006142f7  8d4238               lea eax, [edx + 0x38]
// 006142fa  57                   push edi
// 006142fb  8bf5                 mov esi, ebp
// 006142fd  8bf8                 mov edi, eax
// 006142ff  b909000000           mov ecx, 9
// 00614304  f3a5                 rep movsd dword ptr es:[edi], dword ptr [esi]
// 00614306  d94524               fld dword ptr [ebp + 0x24]
// 00614309  d95824               fstp dword ptr [eax + 0x24]
// 0061430c  d94528               fld dword ptr [ebp + 0x28]
// 0061430f  d95828               fstp dword ptr [eax + 0x28]
// 00614312  d9452c               fld dword ptr [ebp + 0x2c]
// 00614315  d9582c               fstp dword ptr [eax + 0x2c]
// 00614318  8b4228               mov eax, dword ptr [edx + 0x28]
// 0061431b  5f                   pop edi
// 0061431c  5e                   pop esi
// 0061431d  5d                   pop ebp
// 0061431e  85c0                 test eax, eax
// 00614320  7406                 je 0x614328
// 00614322  80780400             cmp byte ptr [eax + 4], 0
// 00614326  7524                 jne 0x61434c
// 00614328  8b4a14               mov ecx, dword ptr [edx + 0x14]
// 0061432b  85c9                 test ecx, ecx
// 0061432d  7407                 je 0x614336
// 0061432f  e83cfcffff           call 0x613f70
// 00614334  eb0b                 jmp 0x614341
// 00614336  8b422c               mov eax, dword ptr [edx + 0x2c]
// 00614339  85c0                 test eax, eax
// 0061433b  7404                 je 0x614341
// 0061433d  c6400801             mov byte ptr [eax + 8], 1
// 00614341  8b4228               mov eax, dword ptr [edx + 0x28]
// 00614344  85c0                 test eax, eax
// 00614346  7404                 je 0x61434c
// 00614348  c6400401             mov byte ptr [eax + 4], 1
// 0061434c  a198a89500           mov eax, dword ptr [0x95a898]
// 00614351  8b5210               mov edx, dword ptr [edx + 0x10]
// 00614354  40                   inc eax
// 00614355  a398a89500           mov dword ptr [0x95a898], eax
// 0061435a  3dffffff7f           cmp eax, 0x7fffffff
// 0061435f  750a                 jne 0x61436b
// 00614361  b801000000           mov eax, 1
// 00614366  a398a89500           mov dword ptr [0x95a898], eax
// 0061436b  898290000000         mov dword ptr [edx + 0x90], eax
// 00614371  c20400               ret 4

extern "C" void* __cdecl memcpy(void*, const void*, unsigned int);
#pragma intrinsic(memcpy)

struct Matrix {
    float elements[9];
};

struct Transform {
    Matrix rotation;
    float x;
    float y;
    float z;
};

struct Owner {
    unsigned char padding[0x90];
    int stamp;
};

struct UpdateTarget {
    void update();
};

struct DirtyFlag {
    unsigned char padding[4];
    unsigned char dirty;
};

struct PendingFlag {
    unsigned char padding[8];
    unsigned char pending;
};

struct Link {
    unsigned char padding[4];
    int value;
};

extern int updateCounter;

struct S {
    unsigned char padding0[0x10];
    Owner* owner;
    UpdateTarget* target;
    unsigned char padding1[0x10];
    DirtyFlag* dirtyFlag;
    PendingFlag* pendingFlag;
    unsigned char padding2[4];
    Link* link;
    Transform transform;

    void setTransform(const Transform& value);
};

void S::setTransform(const Transform& value)
{
    if (link) {
        link->value = 0;
        link = 0;
    }

    if (target) {
        Transform* destination = &transform;
        memcpy(&destination->rotation, &value.rotation, 36);
        destination->x = value.x;
        destination->y = value.y;
        destination->z = value.z;

        if (!dirtyFlag || !dirtyFlag->dirty) {
            if (target)
                target->update();
            else if (pendingFlag)
                pendingFlag->pending = 1;

            if (dirtyFlag)
                dirtyFlag->dirty = 1;
        }

        int stamp = ++updateCounter;
        Owner* destinationOwner = owner;
        if (stamp == 0x7fffffff) {
            stamp = 1;
            updateCounter = stamp;
        }
        destinationOwner->stamp = stamp;
    }
}
