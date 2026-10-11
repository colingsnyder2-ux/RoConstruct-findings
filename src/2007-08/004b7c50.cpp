// roc 2007-08 004b7c50  unit: Exposer  size: 158 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004b7c50
//
// 004b7c50  6aff                 push -1
// 004b7c52  6893b47400           push 0x74b493
// 004b7c57  64a100000000         mov eax, dword ptr fs:[0]
// 004b7c5d  50                   push eax
// 004b7c5e  83ec0c               sub esp, 0xc
// 004b7c61  53                   push ebx
// 004b7c62  56                   push esi
// 004b7c63  a188518b00           mov eax, dword ptr [0x8b5188]
// 004b7c68  33c4                 xor eax, esp
// 004b7c6a  50                   push eax
// 004b7c6b  8d442418             lea eax, [esp + 0x18]
// 004b7c6f  64a300000000         mov dword ptr fs:[0], eax
// 004b7c75  8bf1                 mov esi, ecx
// 004b7c77  89742414             mov dword ptr [esp + 0x14], esi
// 004b7c7b  33db                 xor ebx, ebx
// 004b7c7d  895e08               mov dword ptr [esi + 8], ebx
// 004b7c80  891e                 mov dword ptr [esi], ebx
// 004b7c82  895e04               mov dword ptr [esi + 4], ebx
// 004b7c85  885e14               mov byte ptr [esi + 0x14], bl
// 004b7c88  6804080000           push 0x804
// 004b7c8d  895c2424             mov dword ptr [esp + 0x24], ebx
// 004b7c91  e860821700           call 0x62fef6
// 004b7c96  83c404               add esp, 4
// 004b7c99  89442410             mov dword ptr [esp + 0x10], eax
// 004b7c9d  3bc3                 cmp eax, ebx
// 004b7c9f  c644242001           mov byte ptr [esp + 0x20], 1
// 004b7ca4  7409                 je 0x4b7caf
// 004b7ca6  8bc8                 mov ecx, eax
// 004b7ca8  e893820100           call 0x4cff40
// 004b7cad  eb02                 jmp 0x4b7cb1
// 004b7caf  33c0                 xor eax, eax
// 004b7cb1  68d02a8900           push 0x892ad0
// 004b7cb6  8bc8                 mov ecx, eax
// 004b7cb8  885c2424             mov byte ptr [esp + 0x24], bl
// 004b7cbc  89442410             mov dword ptr [esp + 0x10], eax
// 004b7cc0  e83bc60000           call 0x4c4300
// 004b7cc5  8d44240c             lea eax, [esp + 0xc]
// 004b7cc9  50                   push eax
// 004b7cca  8d4c2414             lea ecx, [esp + 0x14]
// 004b7cce  51                   push ecx
// 004b7ccf  8bce                 mov ecx, esi
// 004b7cd1  895c2418             mov dword ptr [esp + 0x18], ebx
// 004b7cd5  e8d6feffff           call 0x4b7bb0
// 004b7cda  8bc6                 mov eax, esi
// 004b7cdc  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 004b7ce0  64890d00000000       mov dword ptr fs:[0], ecx
// 004b7ce7  59                   pop ecx
// 004b7ce8  5e                   pop esi
// 004b7ce9  5b                   pop ebx
// 004b7cea  83c418               add esp, 0x18
// 004b7ced  c3                   ret 
// library openrbx-raknet/StringCompressor.cpp (function ??0StringCompressor@@AAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /EHsc /MD
// roc-lib: openrbx-raknet StringCompressor.cpp
