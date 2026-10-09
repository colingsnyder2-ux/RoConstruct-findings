// from server: 23% by colin
// roc 2007-08 00491d10  unit: RBX::Network::VPlayer::?$Listener  size: 82 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00491d10
//
// 00491d10  55                   push ebp
// 00491d11  8bec                 mov ebp, esp
// 00491d13  6aff                 push -1
// 00491d15  68017c7400           push 0x747c01
// 00491d1a  64a100000000         mov eax, dword ptr fs:[0]
// 00491d20  50                   push eax
// 00491d21  83ec30               sub esp, 0x30
// 00491d24  a188518b00           mov eax, dword ptr [0x8b5188]
// 00491d29  33c5                 xor eax, ebp
// 00491d2b  8945ec               mov dword ptr [ebp - 0x14], eax
// 00491d2e  53                   push ebx
// 00491d2f  56                   push esi
// 00491d30  57                   push edi
// 00491d31  50                   push eax
// 00491d32  8d45f4               lea eax, [ebp - 0xc]
// 00491d35  64a300000000         mov dword ptr fs:[0], eax
// 00491d3b  8965f0               mov dword ptr [ebp - 0x10], esp
// 00491d3e  8bc1                 mov eax, ecx
// 00491d40  85c0                 test eax, eax
// 00491d42  8b4d0c               mov ecx, dword ptr [ebp + 0xc]
// 00491d45  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00491d4c  7407                 je 0x491d55
// 00491d4e  0500ffffff           add eax, 0xffffff00
// 00491d53  eb02                 jmp 0x491d57
// 00491d55  33c0                 xor eax, eax
// 00491d57  8b7508               mov esi, dword ptr [ebp + 8]
// 00491d5a  8b11                 mov edx, dword ptr [ecx]
// 00491d5c  56                   push esi
// 00491d5d  50                   push eax
// 00491d5e  8b02                 mov eax, dword ptr [edx]
// 00491d60  ffd0                 call eax

struct VPlayerListener {
    void evaluate(int a, int b);
};

void VPlayerListener::evaluate(int a, int b)
{
    VPlayerListener* p = this;
    if (p)
        p = (VPlayerListener*)((char*)p - 0x100);
    else
        p = 0;
    int* vtbl = *(int**)b;
    void (__stdcall* fn)(VPlayerListener*, int) = *(void (__stdcall**)(VPlayerListener*, int))vtbl;
    fn(p, a);
}
