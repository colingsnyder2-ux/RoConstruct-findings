// from server: 20% by colin
// roc 2007-08 005a94b0  unit: RBX::VHumanoid::?$SignalDesc  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005a94b0
//
// 005a94b0  55                   push ebp
// 005a94b1  8bec                 mov ebp, esp
// 005a94b3  6aff                 push -1
// 005a94b5  6891857500           push 0x758591
// 005a94ba  64a100000000         mov eax, dword ptr fs:[0]
// 005a94c0  50                   push eax
// 005a94c1  64892500000000       mov dword ptr fs:[0], esp
// 005a94c8  83ec2c               sub esp, 0x2c
// 005a94cb  53                   push ebx
// 005a94cc  56                   push esi
// 005a94cd  33c0                 xor eax, eax
// 005a94cf  3bc8                 cmp ecx, eax
// 005a94d1  57                   push edi
// 005a94d2  8965f0               mov dword ptr [ebp - 0x10], esp
// 005a94d5  8945fc               mov dword ptr [ebp - 4], eax
// 005a94d8  7403                 je 0x5a94dd
// 005a94da  8d41e8               lea eax, [ecx - 0x18]
// 005a94dd  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 005a94e0  8b7508               mov esi, dword ptr [ebp + 8]
// 005a94e3  8b11                 mov edx, dword ptr [ecx]
// 005a94e5  56                   push esi
// 005a94e6  50                   push eax
// 005a94e7  8b02                 mov eax, dword ptr [edx]
// 005a94e9  ffd0                 call eax

struct SignalDesc {
    void invoke(void* a, void* b);
};

void SignalDesc::invoke(void* a, void* b)
{
    void* self = this;
    if (self != 0) {
        self = (char*)self - 0x18;
    }
    void** vtbl = *(void***)b;
    void (*fn)(void*, void*) = (void (*)(void*, void*))vtbl[0];
    fn(self, a);
}
