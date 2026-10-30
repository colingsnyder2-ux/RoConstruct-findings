// roc 2009-12 007f7f40  unit: IIHH::?$CMap  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007f7f40
//
// 007f7f40  6aff                 push -1
// 007f7f42  681a889500           push 0x95881a
// 007f7f47  64a100000000         mov eax, dword ptr fs:[0]
// 007f7f4d  50                   push eax
// 007f7f4e  56                   push esi
// 007f7f4f  57                   push edi
// 007f7f50  a10052b600           mov eax, dword ptr [0xb65200]
// 007f7f55  33c4                 xor eax, esp
// 007f7f57  50                   push eax
// 007f7f58  8d44240c             lea eax, [esp + 0xc]
// 007f7f5c  64a300000000         mov dword ptr fs:[0], eax
// 007f7f62  8bf1                 mov esi, ecx
// 007f7f64  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007f7f68  57                   push edi
// 007f7f69  e862e6ffff           call 0x7f65d0
// 007f7f6e  85c0                 test eax, eax
// 007f7f70  7537                 jne 0x7f7fa9
// 007f7f72  6a74                 push 0x74
// 007f7f74  e8e7b8ffff           call 0x7f3860
// 007f7f79  83c404               add esp, 4
// 007f7f7c  8944241c             mov dword ptr [esp + 0x1c], eax
// 007f7f80  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007f7f88  85c0                 test eax, eax
// 007f7f8a  740a                 je 0x7f7f96
// 007f7f8c  56                   push esi
// 007f7f8d  8bc8                 mov ecx, eax
// 007f7f8f  e82cfaffff           call 0x7f79c0
// 007f7f94  eb02                 jmp 0x7f7f98
// 007f7f96  33c0                 xor eax, eax
// 007f7f98  50                   push eax
// 007f7f99  57                   push edi
// 007f7f9a  8bce                 mov ecx, esi
// 007f7f9c  c744241cffffffff     mov dword ptr [esp + 0x1c], 0xffffffff
// 007f7fa4  e8f7feffff           call 0x7f7ea0
// 007f7fa9  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007f7fad  64890d00000000       mov dword ptr fs:[0], ecx
// 007f7fb4  59                   pop ecx
// 007f7fb5  5f                   pop edi
// 007f7fb6  5e                   pop esi
// 007f7fb7  83c40c               add esp, 0xc
// 007f7fba  c20400               ret 4
// copied from an identical function in another client (function ?Add@CXTPControlActions@@QAEPAVCXTPControlAction@@H@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source\CommandBars\XTPControl.cpp