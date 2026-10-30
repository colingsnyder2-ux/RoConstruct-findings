// roc 2009-12 007fa6c0  unit: CPatchedControlComboBox  size: 225 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 007fa6c0
//
// 007fa6c0  6aff                 push -1
// 007fa6c2  68fb0d9600           push 0x960dfb
// 007fa6c7  64a100000000         mov eax, dword ptr fs:[0]
// 007fa6cd  50                   push eax
// 007fa6ce  56                   push esi
// 007fa6cf  57                   push edi
// 007fa6d0  a10052b600           mov eax, dword ptr [0xb65200]
// 007fa6d5  33c4                 xor eax, esp
// 007fa6d7  50                   push eax
// 007fa6d8  8d44240c             lea eax, [esp + 0xc]
// 007fa6dc  64a300000000         mov dword ptr fs:[0], eax
// 007fa6e2  8bf1                 mov esi, ecx
// 007fa6e4  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 007fa6ea  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 007fa6ee  89beb4010000         mov dword ptr [esi + 0x1b4], edi
// 007fa6f4  85c9                 test ecx, ecx
// 007fa6f6  7412                 je 0x7fa70a
// 007fa6f8  8b01                 mov eax, dword ptr [ecx]
// 007fa6fa  8b10                 mov edx, dword ptr [eax]
// 007fa6fc  6a01                 push 1
// 007fa6fe  ffd2                 call edx
// 007fa700  c786d001000000000000 mov dword ptr [esi + 0x1d0], 0
// 007fa70a  8b8684010000         mov eax, dword ptr [esi + 0x184]
// 007fa710  85c0                 test eax, eax
// 007fa712  7479                 je 0x7fa78d
// 007fa714  83782000             cmp dword ptr [eax + 0x20], 0
// 007fa718  7473                 je 0x7fa78d
// 007fa71a  85ff                 test edi, edi
// 007fa71c  746f                 je 0x7fa78d
// 007fa71e  6a10                 push 0x10
// 007fa720  e83b91ffff           call 0x7f3860
// 007fa725  83c404               add esp, 4
// 007fa728  8944241c             mov dword ptr [esp + 0x1c], eax
// 007fa72c  c744241400000000     mov dword ptr [esp + 0x14], 0
// 007fa734  85c0                 test eax, eax
// 007fa736  7409                 je 0x7fa741
// 007fa738  8bc8                 mov ecx, eax
// 007fa73a  e881e9ffff           call 0x7f90c0
// 007fa73f  eb02                 jmp 0x7fa743
// 007fa741  33c0                 xor eax, eax
// 007fa743  8b9684010000         mov edx, dword ptr [esi + 0x184]
// 007fa749  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 007fa751  8986d0010000         mov dword ptr [esi + 0x1d0], eax
// 007fa757  85d2                 test edx, edx
// 007fa759  7403                 je 0x7fa75e
// 007fa75b  8b5220               mov edx, dword ptr [edx + 0x20]
// 007fa75e  8b8eb4010000         mov ecx, dword ptr [esi + 0x1b4]
// 007fa764  51                   push ecx
// 007fa765  52                   push edx
// 007fa766  8bc8                 mov ecx, eax
// 007fa768  e803eaffff           call 0x7f9170
// 007fa76d  85c0                 test eax, eax
// 007fa76f  7d1c                 jge 0x7fa78d
// 007fa771  8b8ed0010000         mov ecx, dword ptr [esi + 0x1d0]
// 007fa777  85c9                 test ecx, ecx
// 007fa779  7412                 je 0x7fa78d
// 007fa77b  8b11                 mov edx, dword ptr [ecx]
// 007fa77d  8b02                 mov eax, dword ptr [edx]
// 007fa77f  6a01                 push 1
// 007fa781  ffd0                 call eax
// 007fa783  c786d001000000000000 mov dword ptr [esi + 0x1d0], 0
// 007fa78d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007fa791  64890d00000000       mov dword ptr fs:[0], ecx
// 007fa798  59                   pop ecx
// 007fa799  5f                   pop edi
// 007fa79a  5e                   pop esi
// 007fa79b  83c40c               add esp, 0xc
// 007fa79e  c20400               ret 4
// copied from an identical function in another client (function ?EnableShellAutoComplete@CXTPControlComboBox@@QAEXK@Z)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\CommandBars\XTPControlComboBox.cpp