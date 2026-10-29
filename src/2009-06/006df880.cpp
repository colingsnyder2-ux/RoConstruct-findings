// roc 2009-06 006df880  unit: RBX::Effect  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 006df880
//
// 006df880  8b542408             mov edx, dword ptr [esp + 8]
// 006df884  8bc1                 mov eax, ecx
// 006df886  33c9                 xor ecx, ecx
// 006df888  894804               mov dword ptr [eax + 4], ecx
// 006df88b  894808               mov dword ptr [eax + 8], ecx
// 006df88e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 006df892  894810               mov dword ptr [eax + 0x10], ecx
// 006df895  83c9ff               or ecx, 0xffffffff
// 006df898  c7400c03000000       mov dword ptr [eax + 0xc], 3
// 006df89f  895014               mov dword ptr [eax + 0x14], edx
// 006df8a2  894818               mov dword ptr [eax + 0x18], ecx
// 006df8a5  89481c               mov dword ptr [eax + 0x1c], ecx
// 006df8a8  c20800               ret 8
// copied from an identical function in another client (function ??0FilterStairs@ns_ROCX000018@@QAE@HH@Z)

namespace ns_ROCX000018 {
// from server: 100% by atomic.potato
struct FilterStairs
{
    FilterStairs(int, int);
};

FilterStairs::FilterStairs(int a, int b)
{
    *(int*)((char*)this + 4) = 0;
    *(int*)((char*)this + 8) = 0;
    *(int*)((char*)this + 0x10) = a;
    *(int*)((char*)this + 0xc) = 3;
    *(int*)((char*)this + 0x14) = b;
    *(int*)((char*)this + 0x18) = -1;
    *(int*)((char*)this + 0x1c) = -1;
}
}
