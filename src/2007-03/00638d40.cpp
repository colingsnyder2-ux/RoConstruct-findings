// roc 2007-03 00638d40  unit: seg_00630000  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00638d40
//
// 00638d40  e8cbffffff           call 0x638d10
// 00638d45  85c0                 test eax, eax
// 00638d47  7404                 je 0x638d4d
// 00638d49  8b405c               mov eax, dword ptr [eax + 0x5c]
// 00638d4c  c3                   ret 
// 00638d4d  33c0                 xor eax, eax
// 00638d4f  c3                   ret 
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
