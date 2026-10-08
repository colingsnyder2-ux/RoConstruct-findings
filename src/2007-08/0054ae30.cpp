// from server: 18% by colin
// roc 2007-08 0054ae30  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ae30
//
// 0054ae30  55                   push ebp
// 0054ae31  8bec                 mov ebp, esp
// 0054ae33  6aff                 push -1
// 0054ae35  6820247500           push 0x752420
// 0054ae3a  64a100000000         mov eax, dword ptr fs:[0]
// 0054ae40  50                   push eax
// 0054ae41  64892500000000       mov dword ptr fs:[0], esp
// 0054ae48  83ec08               sub esp, 8
// 0054ae4b  53                   push ebx
// 0054ae4c  56                   push esi
// 0054ae4d  8bf1                 mov esi, ecx
// 0054ae4f  8b06                 mov eax, dword ptr [esi]
// 0054ae51  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0054ae54  57                   push edi
// 0054ae55  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054ae58  33db                 xor ebx, ebx
// 0054ae5a  6a01                 push 1
// 0054ae5c  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054ae5f  895dfc               mov dword ptr [ebp - 4], ebx
// 0054ae62  ffd2                 call edx
// 0054ae64  eb0b                 jmp 0x54ae71

struct S {
    void f();
};

void S::f() {
    int* p = (int*)this;
    void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))((*(void***)this)[15]);
    fn(this, 1);
}
