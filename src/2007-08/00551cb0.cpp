// from server: 22% by colin
// roc 2007-08 00551cb0  unit: std::D::V?$allocator::V?$basic_gzip_compressor::?$stream_buffer  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00551cb0
//
// 00551cb0  55                   push ebp
// 00551cb1  8bec                 mov ebp, esp
// 00551cb3  6aff                 push -1
// 00551cb5  68482b7500           push 0x752b48
// 00551cba  64a100000000         mov eax, dword ptr fs:[0]
// 00551cc0  50                   push eax
// 00551cc1  64892500000000       mov dword ptr fs:[0], esp
// 00551cc8  83ec08               sub esp, 8
// 00551ccb  53                   push ebx
// 00551ccc  56                   push esi
// 00551ccd  57                   push edi
// 00551cce  8bf1                 mov esi, ecx
// 00551cd0  8965f0               mov dword ptr [ebp - 0x10], esp
// 00551cd3  8975ec               mov dword ptr [ebp - 0x14], esi
// 00551cd6  c745fc00000000       mov dword ptr [ebp - 4], 0
// 00551cdd  c645fc01             mov byte ptr [ebp - 4], 1
// 00551ce1  e82af6ffff           call 0x551310
// 00551ce6  8bce                 mov ecx, esi
// 00551ce8  e8739dffff           call 0x54ba60
// 00551ced  eb09                 jmp 0x551cf8

struct S {
    void m();
};

void S::m()
{
    char *p = (char *)this;
    p[4] = 1;
    ((void (__thiscall *)(S *))0x551310)(this);
    ((void (__thiscall *)(S *))0x54ba60)(this);
}
