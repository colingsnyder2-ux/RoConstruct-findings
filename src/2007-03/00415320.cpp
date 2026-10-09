// roc 2007-03 00415320  unit: seg_00410000  size: 12 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00415320
//
// 00415320  8b442404             mov eax, dword ptr [esp + 4]
// 00415324  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00415328  8b10                 mov edx, dword ptr [eax]
// 0041532a  ffe2                 jmp edx
// copied from an identical function in another client (function ?fn_ROCX000012@ns_ROCX000012@@YAXPAX0@Z)

namespace ns_ROCX000012 {
typedef void (__thiscall *Fn)(void*);

void fn_ROCX000012(void* a, void* b)
{
    (*(Fn*)a)(b);
}
}
