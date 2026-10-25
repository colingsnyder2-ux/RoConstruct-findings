// from server: 100% by tester
// roc 2011-06 00664270  unit: RBX::VCamera::?$FactoryProduct  size: 44 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00664270
//
// 00664270  83b94001000000       cmp dword ptr [ecx + 0x140], 0
// 00664277  7420                 je 0x664299
// 00664279  8b813c010000         mov eax, dword ptr [ecx + 0x13c]
// 0066427f  83f804               cmp eax, 4
// 00664282  740f                 je 0x664293
// 00664284  83f801               cmp eax, 1
// 00664287  740a                 je 0x664293
// 00664289  83f803               cmp eax, 3
// 0066428c  7405                 je 0x664293
// 0066428e  83f805               cmp eax, 5
// 00664291  7506                 jne 0x664299
// 00664293  b801000000           mov eax, 1
// 00664298  c3                   ret 
// 00664299  33c0                 xor eax, eax
// 0066429b  c3                   ret 

struct S
{
    int f();
};

int S::f()
{
    if (*(int*)((char*)this + 0x140) != 0)
    {
        int value = *(int*)((char*)this + 0x13c);
        if (value == 4 || value == 1 || value == 3 || value == 5)
            return 1;
    }
    return 0;
}
