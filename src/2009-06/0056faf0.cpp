// roc 2009-06 0056faf0  unit: G3D::Log  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0056faf0
//
// 0056faf0  8b442404             mov eax, dword ptr [esp + 4]
// 0056faf4  8b4808               mov ecx, dword ptr [eax + 8]
// 0056faf7  0faf4c240c           imul ecx, dword ptr [esp + 0xc]
// 0056fafc  8b5004               mov edx, dword ptr [eax + 4]
// 0056faff  034c2408             add ecx, dword ptr [esp + 8]
// 0056fb03  8b442410             mov eax, dword ptr [esp + 0x10]
// 0056fb07  89048a               mov dword ptr [edx + ecx*4], eax
// 0056fb0a  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000000@@YAXPAHHHH@Z)

namespace ns_ROCX000000 {
void __cdecl f(int *a, int b, int c, int value)
{
    ((int *)a[1])[a[2] * c + b] = value;
}
}
