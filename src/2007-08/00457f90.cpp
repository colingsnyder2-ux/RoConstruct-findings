// roc 2007-08 00457f90  unit: RBX::Adorn  size: 178 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00457f90
//
// 00457f90  a1344c8c00           mov eax, dword ptr [0x8c4c34]
// 00457f95  83ec18               sub esp, 0x18
// 00457f98  85c0                 test eax, eax
// 00457f9a  56                   push esi
// 00457f9b  8bf1                 mov esi, ecx
// 00457f9d  0f849a000000         je 0x45803d
// 00457fa3  8b4e04               mov ecx, dword ptr [esi + 4]
// 00457fa6  53                   push ebx
// 00457fa7  55                   push ebp
// 00457fa8  57                   push edi
// 00457fa9  51                   push ecx
// 00457faa  50                   push eax
// 00457fab  ff1560d27700         call dword ptr [0x77d260]
// 00457fb1  8d542418             lea edx, [esp + 0x18]
// 00457fb5  52                   push edx
// 00457fb6  8d442414             lea eax, [esp + 0x14]
// 00457fba  50                   push eax
// 00457fbb  8d4e10               lea ecx, [esi + 0x10]
// 00457fbe  51                   push ecx
// 00457fbf  8d5608               lea edx, [esi + 8]
// 00457fc2  52                   push edx
// 00457fc3  ff155cd27700         call dword ptr [0x77d25c]
// 00457fc9  50                   push eax
// 00457fca  ff151cd37700         call dword ptr [0x77d31c]
// 00457fd0  8b5e18               mov ebx, dword ptr [esi + 0x18]
// 00457fd3  8b442410             mov eax, dword ptr [esp + 0x10]
// 00457fd7  8b6e1c               mov ebp, dword ptr [esi + 0x1c]
// 00457fda  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00457fde  8b542418             mov edx, dword ptr [esp + 0x18]
// 00457fe2  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 00457fe6  2bc3                 sub eax, ebx
// 00457fe8  1bcd                 sbb ecx, ebp
// 00457fea  2b5620               sub edx, dword ptr [esi + 0x20]
// 00457fed  8be8                 mov ebp, eax
// 00457fef  0fb64628             movzx eax, byte ptr [esi + 0x28]
// 00457ff3  1b7e24               sbb edi, dword ptr [esi + 0x24]
// 00457ff6  50                   push eax
// 00457ff7  57                   push edi
// 00457ff8  8bd9                 mov ebx, ecx
// 00457ffa  8b0e                 mov ecx, dword ptr [esi]
// 00457ffc  52                   push edx
// 00457ffd  53                   push ebx
// 00457ffe  55                   push ebp
// 00457fff  89542434             mov dword ptr [esp + 0x34], edx
// 00458003  e8a89a1300           call 0x591ab0
// 00458008  8b4e04               mov ecx, dword ptr [esi + 4]
// 0045800b  85c9                 test ecx, ecx
// 0045800d  742b                 je 0x45803a
// 0045800f  8b36                 mov esi, dword ptr [esi]
// 00458011  3bce                 cmp ecx, esi
// 00458013  7425                 je 0x45803a
// 00458015  3b8e38000200         cmp ecx, dword ptr [esi + 0x20038]
// 0045801b  741d                 je 0x45803a
// 0045801d  8b442420             mov eax, dword ptr [esp + 0x20]
// 00458021  f7d8                 neg eax
// 00458023  83d700               adc edi, 0
// 00458026  6a00                 push 0
// 00458028  f7df                 neg edi
// 0045802a  f7dd                 neg ebp
// 0045802c  57                   push edi
// 0045802d  83d300               adc ebx, 0
// 00458030  50                   push eax
// 00458031  f7db                 neg ebx
// 00458033  53                   push ebx
// 00458034  55                   push ebp
// 00458035  e8769a1300           call 0x591ab0
// 0045803a  5f                   pop edi
// 0045803b  5d                   pop ebp
// 0045803c  5b                   pop ebx
// 0045803d  5e                   pop esi
// 0045803e  83c418               add esp, 0x18
// 00458041  c3                   ret 
// library rbxgs/v8kernel\Kernel.cpp (function ??1Mark@Profiling@RBX@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8kernel/Kernel.cpp
