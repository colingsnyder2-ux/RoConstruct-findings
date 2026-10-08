// from server: 78% by colin
// roc 2007-08 005e6130  unit: RBX::Flag  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005e6130
//
// 005e6130  8b542404             mov edx, dword ptr [esp + 4]
// 005e6134  80ba2401000000       cmp byte ptr [edx + 0x124], 0
// 005e613b  7405                 je 0x5e6142
// 005e613d  32c0                 xor al, al
// 005e613f  c20400               ret 4
// 005e6142  8b8140020000         mov eax, dword ptr [ecx + 0x240]
// 005e6148  398220010000         cmp dword ptr [edx + 0x120], eax
// 005e614e  0f95c0               setne al
// 005e6151  c20400               ret 4

struct Flag {
    char pad[0x240];
    int value;
    bool canBePickedUpByPlayer(void* p) const;
};

bool Flag::canBePickedUpByPlayer(void* p) const
{
    char* other = (char*)p;
    if (other[0x124] != 0)
        return false;
    return value != *(int*)(other + 0x120);
}
