// from server: 18% by colin
// roc 2007-08 0054cb50  unit: std::D::V?$allocator::V?$zlib_decompressor_impl::?$symmetric_filter::Uimpl::?$sp_counted_impl_p  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054cb50
//
// 0054cb50  55                   push ebp
// 0054cb51  8bec                 mov ebp, esp
// 0054cb53  6aff                 push -1
// 0054cb55  6820267500           push 0x752620
// 0054cb5a  64a100000000         mov eax, dword ptr fs:[0]
// 0054cb60  50                   push eax
// 0054cb61  64892500000000       mov dword ptr fs:[0], esp
// 0054cb68  83ec08               sub esp, 8
// 0054cb6b  53                   push ebx
// 0054cb6c  56                   push esi
// 0054cb6d  8bf1                 mov esi, ecx
// 0054cb6f  8b06                 mov eax, dword ptr [esi]
// 0054cb71  8b503c               mov edx, dword ptr [eax + 0x3c]
// 0054cb74  57                   push edi
// 0054cb75  8965f0               mov dword ptr [ebp - 0x10], esp
// 0054cb78  33db                 xor ebx, ebx
// 0054cb7a  6a01                 push 1
// 0054cb7c  8975ec               mov dword ptr [ebp - 0x14], esi
// 0054cb7f  895dfc               mov dword ptr [ebp - 4], ebx
// 0054cb82  ffd2                 call edx
// 0054cb84  eb0b                 jmp 0x54cb91

struct S {
    void f();
};

void S::f() {
    int (__stdcall *fn)(int);
    fn = *(int (__stdcall **)(int))((*(char**)this) + 0x3c);
    fn(1);
}
