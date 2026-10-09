// roc 2008-06 0072df80  unit: CXTPControlGallery  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072df80
//
// 0072df80  56                   push esi
// 0072df81  8bf1                 mov esi, ecx
// 0072df83  e828feffff           call 0x72ddb0
// 0072df88  85c0                 test eax, eax
// 0072df8a  7404                 je 0x72df90
// 0072df8c  33c0                 xor eax, eax
// 0072df8e  5e                   pop esi
// 0072df8f  c3                   ret 
// 0072df90  8b06                 mov eax, dword ptr [esi]
// 0072df92  8b506c               mov edx, dword ptr [eax + 0x6c]
// 0072df95  8bce                 mov ecx, esi
// 0072df97  5e                   pop esi
// 0072df98  ffe2                 jmp edx
// copied from an identical function in another client (function ?fn_ROCX000038@CXTPControlGallery@ns_ROCX000038@@QAEHXZ)

namespace ns_ROCX000038 {
struct CXTPControlGallery
{
    int sub_006b3590();
    int fn_ROCX000038();
};

int CXTPControlGallery::fn_ROCX000038()
{
    if (sub_006b3590() != 0)
        return 0;
    return (*(int (__thiscall **)(CXTPControlGallery *))(*(int *)this + 0x6c))(this);
}
}
