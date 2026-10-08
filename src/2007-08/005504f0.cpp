// from server: 18% by colin
// roc 2007-08 005504f0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005504f0
//
// 005504f0  55                   push ebp
// 005504f1  8bec                 mov ebp, esp
// 005504f3  6aff                 push -1
// 005504f5  68b0297500           push 0x7529b0
// 005504fa  64a100000000         mov eax, dword ptr fs:[0]
// 00550500  50                   push eax
// 00550501  64892500000000       mov dword ptr fs:[0], esp
// 00550508  83ec08               sub esp, 8
// 0055050b  53                   push ebx
// 0055050c  56                   push esi
// 0055050d  8bf1                 mov esi, ecx
// 0055050f  8b06                 mov eax, dword ptr [esi]
// 00550511  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00550514  57                   push edi
// 00550515  8965f0               mov dword ptr [ebp - 0x10], esp
// 00550518  33db                 xor ebx, ebx
// 0055051a  6a01                 push 1
// 0055051c  8975ec               mov dword ptr [ebp - 0x14], esi
// 0055051f  895dfc               mov dword ptr [ebp - 4], ebx
// 00550522  ffd2                 call edx
// 00550524  eb0b                 jmp 0x550531

struct S {
    void f();
};

void S::f()
{
    int* p = (int*)this;
    void (__stdcall *fn)(int);
    fn = (void (__stdcall *)(int))(*(int**)(*p))[0x3c / 4];
    fn(1);
}
