// roc 2010-06 0061f5c0  unit: RBX::DropperTool  size: 209 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0061f5c0
//
// 0061f5c0  6aff                 push -1
// 0061f5c2  685cad9900           push 0x99ad5c
// 0061f5c7  64a100000000         mov eax, dword ptr fs:[0]
// 0061f5cd  50                   push eax
// 0061f5ce  64892500000000       mov dword ptr fs:[0], esp
// 0061f5d5  83ec20               sub esp, 0x20
// 0061f5d8  53                   push ebx
// 0061f5d9  56                   push esi
// 0061f5da  57                   push edi
// 0061f5db  8b7c2440             mov edi, dword ptr [esp + 0x40]
// 0061f5df  33db                 xor ebx, ebx
// 0061f5e1  895c240c             mov dword ptr [esp + 0xc], ebx
// 0061f5e5  8b74243c             mov esi, dword ptr [esp + 0x3c]
// 0061f5e9  57                   push edi
// 0061f5ea  56                   push esi
// 0061f5eb  895c243c             mov dword ptr [esp + 0x3c], ebx
// 0061f5ef  e87ca90000           call 0x629f70
// 0061f5f4  83c408               add esp, 8
// 0061f5f7  68e06ea000           push 0xa06ee0
// 0061f5fc  8bce                 mov ecx, esi
// 0061f5fe  895c2438             mov dword ptr [esp + 0x38], ebx
// 0061f602  c744241001000000     mov dword ptr [esp + 0x10], 1
// 0061f60a  ff1520a49e00         call dword ptr [0x9ea420]
// 0061f610  8d4704               lea eax, [edi + 4]
// 0061f613  50                   push eax
// 0061f614  8d4c2414             lea ecx, [esp + 0x14]
// 0061f618  51                   push ecx
// 0061f619  e852a90000           call 0x629f70
// 0061f61e  83c408               add esp, 8
// 0061f621  50                   push eax
// 0061f622  8bce                 mov ecx, esi
// 0061f624  c744243801000000     mov dword ptr [esp + 0x38], 1
// 0061f62c  ff1518a49e00         call dword ptr [0x9ea418]
// 0061f632  8d4c2410             lea ecx, [esp + 0x10]
// 0061f636  885c2434             mov byte ptr [esp + 0x34], bl
// 0061f63a  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f640  68e06ea000           push 0xa06ee0
// 0061f645  8bce                 mov ecx, esi
// 0061f647  ff1520a49e00         call dword ptr [0x9ea420]
// 0061f64d  83c708               add edi, 8
// 0061f650  8d542410             lea edx, [esp + 0x10]
// 0061f654  57                   push edi
// 0061f655  52                   push edx
// 0061f656  e815a90000           call 0x629f70
// 0061f65b  83c408               add esp, 8
// 0061f65e  50                   push eax
// 0061f65f  8bce                 mov ecx, esi
// 0061f661  c744243802000000     mov dword ptr [esp + 0x38], 2
// 0061f669  ff1518a49e00         call dword ptr [0x9ea418]
// 0061f66f  8d4c2410             lea ecx, [esp + 0x10]
// 0061f673  885c2434             mov byte ptr [esp + 0x34], bl
// 0061f677  ff1500a49e00         call dword ptr [0x9ea400]
// 0061f67d  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 0061f681  5f                   pop edi
// 0061f682  8bc6                 mov eax, esi
// 0061f684  5e                   pop esi
// 0061f685  5b                   pop ebx
// 0061f686  64890d00000000       mov dword ptr fs:[0], ecx
// 0061f68d  83c42c               add esp, 0x2c
// 0061f690  c3                   ret 
// library openrbx-client/App\util\Utilities.cpp (function ?convertToString@?$StringConverter@VVector3@G3D@@@RBX@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@ABVVector3@G3D@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Utilities.cpp
