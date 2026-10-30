// roc 2010-06 0076a270  unit: seg_00760000  size: 43 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0076a270
//
// 0076a270  8b542408             mov edx, dword ptr [esp + 8]
// 0076a274  8bc1                 mov eax, ecx
// 0076a276  33c9                 xor ecx, ecx
// 0076a278  894804               mov dword ptr [eax + 4], ecx
// 0076a27b  894808               mov dword ptr [eax + 8], ecx
// 0076a27e  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0076a282  894810               mov dword ptr [eax + 0x10], ecx
// 0076a285  83c9ff               or ecx, 0xffffffff
// 0076a288  c7400c03000000       mov dword ptr [eax + 0xc], 3
// 0076a28f  895014               mov dword ptr [eax + 0x14], edx
// 0076a292  894818               mov dword ptr [eax + 0x18], ecx
// 0076a295  89481c               mov dword ptr [eax + 0x1c], ecx
// 0076a298  c20800               ret 8
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