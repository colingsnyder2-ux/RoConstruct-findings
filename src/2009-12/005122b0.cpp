// roc 2009-12 005122b0  unit: boost::detail::thread_data_base  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 005122b0
//
// 005122b0  8b442404             mov eax, dword ptr [esp + 4]
// 005122b4  85c0                 test eax, eax
// 005122b6  740b                 je 0x5122c3
// 005122b8  8b404c               mov eax, dword ptr [eax + 0x4c]
// 005122bb  3bc1                 cmp eax, ecx
// 005122bd  7409                 je 0x5122c8
// 005122bf  85c0                 test eax, eax
// 005122c1  75f5                 jne 0x5122b8
// 005122c3  32c0                 xor al, al
// 005122c5  c20400               ret 4
// 005122c8  b001                 mov al, 1
// 005122ca  c20400               ret 4
// copied from an identical function in another client (function ?f@S@ns_ROCX000005@@QAE_NPAX@Z)

namespace ns_ROCX000005 {
// from server: 100% by atomic.potato
struct S
{
    bool f(void* p);
};

bool S::f(void* p)
{
    while (p != 0)
    {
        p = *(void**)((char*)p + 0x4c);
        if (p == this)
            return true;
    }
    return false;
}
}
