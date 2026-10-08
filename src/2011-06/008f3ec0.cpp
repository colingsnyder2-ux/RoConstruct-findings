// from server: 100% by auto
// roc 2011-06 008f3ec0  unit: CXTPScrollBase  size: 134 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3ec0
//
// 008f3ec0  55                   push ebp
// 008f3ec1  8be9                 mov ebp, ecx
// 008f3ec3  56                   push esi
// 008f3ec4  8b7560               mov esi, dword ptr [ebp + 0x60]
// 008f3ec7  85f6                 test esi, esi
// 008f3ec9  7476                 je 0x8f3f41
// 008f3ecb  53                   push ebx
// 008f3ecc  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 008f3ed0  3b5e20               cmp ebx, dword ptr [esi + 0x20]
// 008f3ed3  746b                 je 0x8f3f40
// 008f3ed5  57                   push edi
// 008f3ed6  8b7e34               mov edi, dword ptr [esi + 0x34]
// 008f3ed9  53                   push ebx
// 008f3eda  57                   push edi
// 008f3edb  e870ffffff           call 0x8f3e50
// 008f3ee0  83c408               add esp, 8
// 008f3ee3  894628               mov dword ptr [esi + 0x28], eax
// 008f3ee6  3b4624               cmp eax, dword ptr [esi + 0x24]
// 008f3ee9  743c                 je 0x8f3f27
// 008f3eeb  eb03                 jmp 0x8f3ef0
// 008f3eed  8d4900               lea ecx, [ecx]
// 008f3ef0  8b4e28               mov ecx, dword ptr [esi + 0x28]
// 008f3ef3  8b4500               mov eax, dword ptr [ebp]
// 008f3ef6  8b5018               mov edx, dword ptr [eax + 0x18]
// 008f3ef9  51                   push ecx
// 008f3efa  6a05                 push 5
// 008f3efc  8bcd                 mov ecx, ebp
// 008f3efe  ffd2                 call edx
// 008f3f00  8b4628               mov eax, dword ptr [esi + 0x28]
// 008f3f03  894624               mov dword ptr [esi + 0x24], eax
// 008f3f06  8b4f40               mov ecx, dword ptr [edi + 0x40]
// 008f3f09  8b573c               mov edx, dword ptr [edi + 0x3c]
// 008f3f0c  8d0411               lea eax, [ecx + edx]
// 008f3f0f  3bd8                 cmp ebx, eax
// 008f3f11  7c14                 jl 0x8f3f27
// 008f3f13  8bd8                 mov ebx, eax
// 008f3f15  53                   push ebx
// 008f3f16  57                   push edi
// 008f3f17  e834ffffff           call 0x8f3e50
// 008f3f1c  83c408               add esp, 8
// 008f3f1f  894628               mov dword ptr [esi + 0x28], eax
// 008f3f22  3b4624               cmp eax, dword ptr [esi + 0x24]
// 008f3f25  75c9                 jne 0x8f3ef0
// 008f3f27  8b4720               mov eax, dword ptr [edi + 0x20]
// 008f3f2a  03c3                 add eax, ebx
// 008f3f2c  894730               mov dword ptr [edi + 0x30], eax
// 008f3f2f  895f34               mov dword ptr [edi + 0x34], ebx
// 008f3f32  895e20               mov dword ptr [esi + 0x20], ebx
// 008f3f35  8b5500               mov edx, dword ptr [ebp]
// 008f3f38  8b421c               mov eax, dword ptr [edx + 0x1c]
// 008f3f3b  8bcd                 mov ecx, ebp
// 008f3f3d  ffd0                 call eax
// 008f3f3f  5f                   pop edi
// 008f3f40  5b                   pop ebx
// 008f3f41  5e                   pop esi
// 008f3f42  5d                   pop ebp
// 008f3f43  c20400               ret 4
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?MoveThumb@CXTPScrollBase@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
