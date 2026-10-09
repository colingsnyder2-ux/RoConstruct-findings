// roc 2009-06 0072d3c0  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0072d3c0
//
// 0072d3c0  e8cbffffff           call 0x72d390
// 0072d3c5  85c0                 test eax, eax
// 0072d3c7  7404                 je 0x72d3cd
// 0072d3c9  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0072d3cc  c3                   ret 
// 0072d3cd  33c0                 xor eax, eax
// 0072d3cf  c3                   ret 
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
