// from server: 87% by colin
// roc 2007-08 00491980  unit: RBX::Network::VPlayer::?$Listener  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491980
//
// 00491980  83b91c01000000       cmp dword ptr [ecx + 0x11c], 0
// 00491987  7512                 jne 0x49199b
// 00491989  6a01                 push 1
// 0049198b  51                   push ecx
// 0049198c  e89f950000           call 0x49af30
// 00491991  83c408               add esp, 8
// 00491994  84c0                 test al, al
// 00491996  7503                 jne 0x49199b
// 00491998  33c0                 xor eax, eax
// 0049199a  c3                   ret 
// 0049199b  b801000000           mov eax, 1
// 004919a0  c3                   ret 

struct VPlayerListener {
    char pad[0x11c];
    int field_0x11c;
    int check();
};

extern "C" int __cdecl sub_0049af30(VPlayerListener*, int);

int VPlayerListener::check()
{
    if (field_0x11c == 0)
    {
        if (!sub_0049af30(this, 1))
            return 0;
    }
    return 1;
}
