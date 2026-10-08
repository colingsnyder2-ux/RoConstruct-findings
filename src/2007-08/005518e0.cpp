// from server: 18% by colin
// roc 2007-08 005518e0  unit: std::D::V?$allocator::V?$basic_gzip_decompressor::?$stream_buffer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005518e0
//
// 005518e0  55                   push ebp
// 005518e1  8bec                 mov ebp, esp
// 005518e3  6aff                 push -1
// 005518e5  68f02a7500           push 0x752af0
// 005518ea  64a100000000         mov eax, dword ptr fs:[0]
// 005518f0  50                   push eax
// 005518f1  64892500000000       mov dword ptr fs:[0], esp
// 005518f8  83ec08               sub esp, 8
// 005518fb  53                   push ebx
// 005518fc  56                   push esi
// 005518fd  8bf1                 mov esi, ecx
// 005518ff  8b06                 mov eax, dword ptr [esi]
// 00551901  8b503c               mov edx, dword ptr [eax + 0x3c]
// 00551904  57                   push edi
// 00551905  8965f0               mov dword ptr [ebp - 0x10], esp
// 00551908  33db                 xor ebx, ebx
// 0055190a  6a01                 push 1
// 0055190c  8975ec               mov dword ptr [ebp - 0x14], esi
// 0055190f  895dfc               mov dword ptr [ebp - 4], ebx
// 00551912  ffd2                 call edx
// 00551914  eb0b                 jmp 0x551921

struct S {
    void f();
};

void S::f()
{
    int* p = (int*)this;
    int* vt = (int*)*p;
    void (__stdcall *fn)(int) = (void (__stdcall *)(int))vt[0x3c / 4];
    fn(1);
}
