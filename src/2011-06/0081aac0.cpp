// roc 2011-06 0081aac0  unit: CXTPCommandBar  size: 16 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0081aac0
//
// 0081aac0  e8cbffffff           call 0x81aa90
// 0081aac5  85c0                 test eax, eax
// 0081aac7  7404                 je 0x81aacd
// 0081aac9  8b405c               mov eax, dword ptr [eax + 0x5c]
// 0081aacc  c3                   ret 
// 0081aacd  33c0                 xor eax, eax
// 0081aacf  c3                   ret 
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
