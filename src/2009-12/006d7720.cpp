// roc 2009-12 006d7720  unit: RBX::LaserTool  size: 38 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006d7720
//
// 006d7720  8b01                 mov eax, dword ptr [ecx]
// 006d7722  8b542404             mov edx, dword ptr [esp + 4]
// 006d7726  8902                 mov dword ptr [edx], eax
// 006d7728  8b4104               mov eax, dword ptr [ecx + 4]
// 006d772b  8b542408             mov edx, dword ptr [esp + 8]
// 006d772f  8902                 mov dword ptr [edx], eax
// 006d7731  8b4108               mov eax, dword ptr [ecx + 8]
// 006d7734  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006d7738  8902                 mov dword ptr [edx], eax
// 006d773a  8b410c               mov eax, dword ptr [ecx + 0xc]
// 006d773d  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 006d7741  8901                 mov dword ptr [ecx], eax
// 006d7743  c21000               ret 0x10
// copied from an identical function in another client (function ?func@S_func_00596520@ns_ROCX000002@@QAEXPAH000@Z)

namespace ns_ROCX000002 {
struct S_func_00596520 {
    int field0;
    int field4;
    int field8;
    int fieldC;
    void func(int* a, int* b, int* c, int* d);
};

void S_func_00596520::func(int* a, int* b, int* c, int* d)
{
    *a = field0;
    *b = field4;
    *c = field8;
    *d = fieldC;
}
}
