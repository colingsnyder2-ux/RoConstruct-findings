// roc 2010-06 007b8600  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007b8600
//
// 007b8600  e8cbffffff           call 0x7b85d0
// 007b8605  85c0                 test eax, eax
// 007b8607  7404                 je 0x7b860d
// 007b8609  8b405c               mov eax, dword ptr [eax + 0x5c]
// 007b860c  c3                   ret 
// 007b860d  33c0                 xor eax, eax
// 007b860f  c3                   ret 
// copied from an identical function in another client (function ?sub_006439b0@ns_ROCX000003@@YAHXZ)

namespace ns_ROCX000003 {
extern "C" void* sub_00643980();

int sub_006439b0()
{
    char* p = (char*)sub_00643980();
    if (p)
        return *(int*)(p + 0x5c);
    return 0;
}
}
