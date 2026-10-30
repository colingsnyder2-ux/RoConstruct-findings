// roc 2012-06 004b70c0  unit: RBX::DS::CVideoStream  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004b70c0
//
// 004b70c0  8b442404             mov eax, dword ptr [esp + 4]
// 004b70c4  dd442418             fld qword ptr [esp + 0x18]
// 004b70c8  8b4c2408             mov ecx, dword ptr [esp + 8]
// 004b70cc  8b54240c             mov edx, dword ptr [esp + 0xc]
// 004b70d0  894874               mov dword ptr [eax + 0x74], ecx
// 004b70d3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 004b70d7  895078               mov dword ptr [eax + 0x78], edx
// 004b70da  8b542414             mov edx, dword ptr [esp + 0x14]
// 004b70de  89487c               mov dword ptr [eax + 0x7c], ecx
// 004b70e1  899080000000         mov dword ptr [eax + 0x80], edx
// 004b70e7  dd9884000000         fstp qword ptr [eax + 0x84]
// 004b70ed  33c0                 xor eax, eax
// 004b70ef  c21c00               ret 0x1c
// copied from an identical function in another client (function ?f@CVideoStream_004a11b0@@QAEHHHHHHN@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct CVideoStream_004a11b0
{
    int f(int a1, int a2, int a3, int a4, int a5, double a6);
};

int CVideoStream_004a11b0::f(int a1, int a2, int a3, int a4, int a5, double a6)
{
    *(int *)(a1 + 0x74) = a2;
    *(int *)(a1 + 0x78) = a3;
    *(int *)(a1 + 0x7c) = a4;
    *(int *)(a1 + 0x80) = a5;
    *(volatile double *)(a1 + 0x84) = a6;
    return 0;
}