// roc 2008-06 0056a7f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 115 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056a7f0
//
// 0056a7f0  64a100000000         mov eax, dword ptr fs:[0]
// 0056a7f6  6aff                 push -1
// 0056a7f8  68c8f97c00           push 0x7cf9c8
// 0056a7fd  50                   push eax
// 0056a7fe  64892500000000       mov dword ptr fs:[0], esp
// 0056a805  56                   push esi
// 0056a806  57                   push edi
// 0056a807  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 0056a80b  897c241c             mov dword ptr [esp + 0x1c], edi
// 0056a80f  8b742418             mov esi, dword ptr [esp + 0x18]
// 0056a813  8a4604               mov al, byte ptr [esi + 4]
// 0056a816  c744241000000000     mov dword ptr [esp + 0x10], 0
// 0056a81e  a802                 test al, 2
// 0056a820  7523                 jne 0x56a845
// 0056a822  833e00               cmp dword ptr [esi], 0
// 0056a825  7e07                 jle 0x56a82e
// 0056a827  0c01                 or al, 1
// 0056a829  884604               mov byte ptr [esi + 4], al
// 0056a82c  eb17                 jmp 0x56a845
// 0056a82e  83ec1c               sub esp, 0x1c
// 0056a831  8bcc                 mov ecx, esp
// 0056a833  89642434             mov dword ptr [esp + 0x34], esp
// 0056a837  57                   push edi
// 0056a838  e85300eaff           call 0x40a890
// 0056a83d  8d4e08               lea ecx, [esi + 8]
// 0056a840  e89b6b0000           call 0x5713e0
// 0056a845  85ff                 test edi, edi
// 0056a847  7409                 je 0x56a852
// 0056a849  57                   push edi
// 0056a84a  e82b5e1300           call 0x6a067a
// 0056a84f  83c404               add esp, 4
// 0056a852  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0056a856  5f                   pop edi
// 0056a857  64890d00000000       mov dword ptr fs:[0], ecx
// 0056a85e  5e                   pop esi
// 0056a85f  83c40c               add esp, 0xc
// 0056a862  c3                   ret 
// library boost-1.34.1/libs\signals\src\signal_base.cpp (function ?slot_disconnected@signal_base_impl@detail@signals@boost@@SAXPAX0@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: boost-1.34.1 libs/signals/src/signal_base.cpp
