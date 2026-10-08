// from server: 23% by colin
// roc 2007-08 005a93f0  unit: RBX::VHumanoid::?$SignalDesc  size: 56 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a93f0
//
// 005a93f0  55                   push ebp
// 005a93f1  8bec                 mov ebp, esp
// 005a93f3  6aff                 push -1
// 005a93f5  6871857500           push 0x758571
// 005a93fa  64a100000000         mov eax, dword ptr fs:[0]
// 005a9400  50                   push eax
// 005a9401  64892500000000       mov dword ptr fs:[0], esp
// 005a9408  83ec2c               sub esp, 0x2c
// 005a940b  8b450c               mov eax, dword ptr [ebp + 0xc]
// 005a940e  8b10                 mov edx, dword ptr [eax]
// 005a9410  53                   push ebx
// 005a9411  56                   push esi
// 005a9412  8b7508               mov esi, dword ptr [ebp + 8]
// 005a9415  57                   push edi
// 005a9416  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a9419  56                   push esi
// 005a941a  51                   push ecx
// 005a941b  8bc8                 mov ecx, eax
// 005a941d  8b02                 mov eax, dword ptr [edx]
// 005a941f  c745fc00000000       mov dword ptr [ebp - 4], 0
// 005a9426  ffd0                 call eax

struct SignalDesc {
    void construct(void*, void*);
};

void SignalDesc::construct(void* a, void* b) {
    int* p = (int*)b;
    int* q = (int*)*p;
    void (*fn)(void*, void*) = (void (*)(void*, void*))*q;
    fn(a, b);
}
