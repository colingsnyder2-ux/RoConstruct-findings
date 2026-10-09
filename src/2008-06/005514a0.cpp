// roc 2008-06 005514a0  unit: seg_00550000  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005514a0
//
// 005514a0  55                   push ebp
// 005514a1  8bec                 mov ebp, esp
// 005514a3  b806140000           mov eax, 0x1406
// 005514a8  5d                   pop ebp
// 005514a9  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000009@ns_ROCX000009@@YAPADXZ)

namespace ns_ROCX000009 {
extern char G;

char* fn_ROCX000009()
{
    return &G;
}
}
