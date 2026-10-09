// from server: 18% by colin
// roc 2007-08 0045dab0  unit: HH::?$CArray  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0045dab0
//
// 0045dab0  55                   push ebp
// 0045dab1  8dac24fcfdffff       lea ebp, [esp - 0x204]
// 0045dab8  81ec04020000         sub esp, 0x204
// 0045dabe  6aff                 push -1
// 0045dac0  6849257400           push 0x742549
// 0045dac5  64a100000000         mov eax, dword ptr fs:[0]
// 0045dacb  50                   push eax
// 0045dacc  83ec0c               sub esp, 0xc
// 0045dacf  a188518b00           mov eax, dword ptr [0x8b5188]
// 0045dad4  33c5                 xor eax, ebp
// 0045dad6  898500020000         mov dword ptr [ebp + 0x200], eax
// 0045dadc  53                   push ebx
// 0045dadd  56                   push esi
// 0045dade  57                   push edi
// 0045dadf  50                   push eax
// 0045dae0  8d45f4               lea eax, [ebp - 0xc]
// 0045dae3  64a300000000         mov dword ptr fs:[0], eax
// 0045dae9  8965f0               mov dword ptr [ebp - 0x10], esp
// 0045daec  c745fc00000000       mov dword ptr [ebp - 4], 0
// 0045daf3  e80a241d00           call 0x62ff02
// 0045daf8  8b4804               mov ecx, dword ptr [eax + 4]
// 0045dafb  e85e2e1d00           call 0x63095e

struct CArrayBase {
    int f();
};

extern "C" int __cdecl sub_0062FF02();
extern "C" int __cdecl sub_0063095E(int);

int CArrayBase::f()
{
    int v = sub_0062FF02();
    return sub_0063095E(*(int*)(v + 4));
}
