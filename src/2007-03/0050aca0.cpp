// roc 2007-03 0050aca0  unit: seg_00500000  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0050aca0
//
// 0050aca0  8b442404             mov eax, dword ptr [esp + 4]
// 0050aca4  85c0                 test eax, eax
// 0050aca6  7501                 jne 0x50aca9
// 0050aca8  c3                   ret 
// 0050aca9  8b8844020000         mov ecx, dword ptr [eax + 0x244]
// 0050acaf  8b9048020000         mov edx, dword ptr [eax + 0x248]
// 0050acb5  51                   push ecx
// 0050acb6  52                   push edx
// 0050acb7  6a02                 push 2
// 0050acb9  e8c2e00000           call 0x518d80
// 0050acbe  83c40c               add esp, 0xc
// 0050acc1  85c0                 test eax, eax
// 0050acc3  89442404             mov dword ptr [esp + 4], eax
// 0050acc7  7416                 je 0x50acdf
// 0050acc9  8d442404             lea eax, [esp + 4]
// 0050accd  6820010000           push 0x120
// 0050acd2  50                   push eax
// 0050acd3  e868faffff           call 0x50a740
// 0050acd8  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0050acdc  83c408               add esp, 8
// 0050acdf  c3                   ret 
// copied from an identical function in another client (function ?sub_515490@ns_ROCX000000@@YAHPAUDialogTemplate@1@@Z)

namespace ns_ROCX000000 {
struct DialogTemplate
{
    char pad[0x244];
    int field244;
    int field248;
};

extern "C" int __cdecl sub_51EA60(int a, int b, int c);
extern "C" void __cdecl sub_514F30(int* p, int n);

int __cdecl sub_515490(DialogTemplate* p)
{
    if (p == 0)
        return 0;

    int v = sub_51EA60(2, p->field248, p->field244);
    if (v != 0)
    {
        sub_514F30(&v, 0x120);
    }
    return v;
}
}
