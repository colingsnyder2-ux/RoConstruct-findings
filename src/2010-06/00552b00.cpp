// roc 2010-06 00552b00  unit: G3D::Log  size: 27 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00552b00
//
// 00552b00  8b442404             mov eax, dword ptr [esp + 4]
// 00552b04  8b4808               mov ecx, dword ptr [eax + 8]
// 00552b07  0faf4c240c           imul ecx, dword ptr [esp + 0xc]
// 00552b0c  8b5004               mov edx, dword ptr [eax + 4]
// 00552b0f  034c2408             add ecx, dword ptr [esp + 8]
// 00552b13  8b442410             mov eax, dword ptr [esp + 0x10]
// 00552b17  89048a               mov dword ptr [edx + ecx*4], eax
// 00552b1a  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000000@@YAXPAHHHH@Z)

namespace ns_ROCX000000 {
void __cdecl f(int *a, int b, int c, int value)
{
    ((int *)a[1])[a[2] * c + b] = value;
}
}