// roc 2008-06 006b4e40  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006b4e40
//
// 006b4e40  e8cbffffff           call 0x6b4e10
// 006b4e45  85c0                 test eax, eax
// 006b4e47  7404                 je 0x6b4e4d
// 006b4e49  8b405c               mov eax, dword ptr [eax + 0x5c]
// 006b4e4c  c3                   ret 
// 006b4e4d  33c0                 xor eax, eax
// 006b4e4f  c3                   ret 
// copied from an identical function in another client (function ?sub_006439b0@ns_ROCX000001@@YAHXZ)

namespace ns_ROCX000001 {
extern "C" void* sub_00643980();

int sub_006439b0()
{
    char* p = (char*)sub_00643980();
    if (p)
        return *(int*)(p + 0x5c);
    return 0;
}
}
