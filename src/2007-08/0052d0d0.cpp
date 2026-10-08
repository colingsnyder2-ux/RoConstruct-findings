// from server: 30% by colin
// roc 2007-08 0052d0d0  unit: RBX::VRunService::?$FactoryProduct  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0052d0d0
//
// 0052d0d0  55                   push ebp
// 0052d0d1  8bec                 mov ebp, esp
// 0052d0d3  6aff                 push -1
// 0052d0d5  6831037500           push 0x750331
// 0052d0da  64a100000000         mov eax, dword ptr fs:[0]
// 0052d0e0  50                   push eax
// 0052d0e1  64892500000000       mov dword ptr fs:[0], esp
// 0052d0e8  83ec24               sub esp, 0x24
// 0052d0eb  53                   push ebx
// 0052d0ec  56                   push esi
// 0052d0ed  33c0                 xor eax, eax
// 0052d0ef  3bc8                 cmp ecx, eax
// 0052d0f1  57                   push edi
// 0052d0f2  8965f0               mov dword ptr [ebp - 0x10], esp
// 0052d0f5  8945fc               mov dword ptr [ebp - 4], eax
// 0052d0f8  7406                 je 0x52d100
// 0052d0fa  8d81e8feffff         lea eax, [ecx - 0x118]
// 0052d100  8b750c               mov esi, dword ptr [ebp + 0xc]
// 0052d103  8b4d10               mov ecx, dword ptr [ebp + 0x10]
// 0052d106  8b11                 mov edx, dword ptr [ecx]
// 0052d108  56                   push esi
// 0052d109  8b7508               mov esi, dword ptr [ebp + 8]
// 0052d10c  56                   push esi
// 0052d10d  50                   push eax
// 0052d10e  8b02                 mov eax, dword ptr [edx]
// 0052d110  ffd0                 call eax

struct FactoryProduct {
    void construct(int a, int b, int c);
};

void FactoryProduct::construct(int a, int b, int c) {
    int* p = (int*)c;
    int (*fn)(void*, int, int) = (int (*)(void*, int, int))*(int*)*p;
    fn(this ? (void*)((char*)this - 0x118) : 0, a, b);
}
