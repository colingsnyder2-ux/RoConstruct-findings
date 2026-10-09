// roc 2009-12 00804500  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00804500
//
// 00804500  e8cbffffff           call 0x8044d0
// 00804505  85c0                 test eax, eax
// 00804507  7404                 je 0x80450d
// 00804509  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0080450c  c3                   ret 
// 0080450d  33c0                 xor eax, eax
// 0080450f  c3                   ret 
// copied from an identical function in another client (function ?sub_006439b0@ns_ROCX000007@@YAHXZ)

namespace ns_ROCX000007 {
extern "C" void* sub_00643980();

int sub_006439b0()
{
    char* p = (char*)sub_00643980();
    if (p)
        return *(int*)(p + 0x5c);
    return 0;
}
}
