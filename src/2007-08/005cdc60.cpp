// from server: 85% by colin
// roc 2007-08 005cdc60  unit: RBX::BlockBlockContact  size: 53 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005cdc60
//
// 005cdc60  56                   push esi
// 005cdc61  8bf1                 mov esi, ecx
// 005cdc63  8b460c               mov eax, dword ptr [esi + 0xc]
// 005cdc66  8b4e08               mov ecx, dword ptr [esi + 8]
// 005cdc69  50                   push eax
// 005cdc6a  51                   push ecx
// 005cdc6b  e800f2ffff           call 0x5cce70
// 005cdc70  83c408               add esp, 8
// 005cdc73  84c0                 test al, al
// 005cdc75  7418                 je 0x5cdc8f
// 005cdc77  d9442408             fld dword ptr [esp + 8]
// 005cdc7b  51                   push ecx
// 005cdc7c  8d44240c             lea eax, [esp + 0xc]
// 005cdc80  d91c24               fstp dword ptr [esp]
// 005cdc83  50                   push eax
// 005cdc84  8bce                 mov ecx, esi
// 005cdc86  e805f5ffff           call 0x5cd190
// 005cdc8b  5e                   pop esi
// 005cdc8c  c20400               ret 4
// 005cdc8f  32c0                 xor al, al
// 005cdc91  5e                   pop esi
// 005cdc92  c20400               ret 4

struct BlockBlockContact {
    char pad[8];
    int field8;
    int fieldC;
    bool computeIsColliding(float overlapIgnored);
    bool sub_5cd190(float* out);
};

bool sub_5cce70(int a, int b);

bool BlockBlockContact::computeIsColliding(float overlapIgnored)
{
    if (sub_5cce70(field8, fieldC)) {
        float tmp = overlapIgnored;
        sub_5cd190(&tmp);
        return true;
    }
    return false;
}
