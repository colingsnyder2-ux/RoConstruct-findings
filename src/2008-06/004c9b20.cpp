// from server: 100% by colin
// roc 2008-06 004c9b20  unit: RBX::Network::InterpolatingPhysicsReceiver  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c9b20
//
// 004c9b20  8b442404             mov eax, dword ptr [esp + 4]
// 004c9b24  85c0                 test eax, eax
// 004c9b26  7410                 je 0x4c9b38
// 004c9b28  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c9b2c  8b11                 mov edx, dword ptr [ecx]
// 004c9b2e  83c070               add eax, 0x70
// 004c9b31  8910                 mov dword ptr [eax], edx
// 004c9b33  8901                 mov dword ptr [ecx], eax
// 004c9b35  c20800               ret 8
// 004c9b38  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004c9b3c  8b11                 mov edx, dword ptr [ecx]
// 004c9b3e  33c0                 xor eax, eax
// 004c9b40  8910                 mov dword ptr [eax], edx
// 004c9b42  8901                 mov dword ptr [ecx], eax
// 004c9b44  c20800               ret 8

struct S
{
    void f(void*, void*);
};

void S::f(void* a, void* b)
{
    void** head = (void**)b;
    void* node;
    if (a)
    {
        node = (char*)a + 0x70;
    }
    else
    {
        node = 0;
    }
    *(void**)node = *head;
    *head = node;
}
