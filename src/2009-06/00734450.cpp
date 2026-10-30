// roc 2009-06 00734450  unit: CXTPImageManagerResource::CBitmapDC  size: 447 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00734450
//
// 00734450  6aff                 push -1
// 00734452  68c8598700           push 0x8759c8
// 00734457  64a100000000         mov eax, dword ptr fs:[0]
// 0073445d  50                   push eax
// 0073445e  83ec24               sub esp, 0x24
// 00734461  53                   push ebx
// 00734462  55                   push ebp
// 00734463  56                   push esi
// 00734464  57                   push edi
// 00734465  a1304fa200           mov eax, dword ptr [0xa24f30]
// 0073446a  33c4                 xor eax, esp
// 0073446c  50                   push eax
// 0073446d  8d442438             lea eax, [esp + 0x38]
// 00734471  64a300000000         mov dword ptr fs:[0], eax
// 00734477  8d4c2428             lea ecx, [esp + 0x28]
// 0073447b  e8c87a1100           call 0x84bf48
// 00734480  33ed                 xor ebp, ebp
// 00734482  55                   push ebp
// 00734483  896c2444             mov dword ptr [esp + 0x44], ebp
// 00734487  ff1520e18900         call dword ptr [0x89e120]
// 0073448d  50                   push eax
// 0073448e  8d4c242c             lea ecx, [esp + 0x2c]
// 00734492  e89f7a1100           call 0x84bf36
// 00734497  8d442424             lea eax, [esp + 0x24]
// 0073449b  50                   push eax
// 0073449c  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 007344a0  8d4c2420             lea ecx, [esp + 0x20]
// 007344a4  51                   push ecx
// 007344a5  8d542428             lea edx, [esp + 0x28]
// 007344a9  52                   push edx
// 007344aa  50                   push eax
// 007344ab  8d4c2438             lea ecx, [esp + 0x38]
// 007344af  51                   push ecx
// 007344b0  896c2430             mov dword ptr [esp + 0x30], ebp
// 007344b4  896c2434             mov dword ptr [esp + 0x34], ebp
// 007344b8  e873f3ffff           call 0x733830
// 007344bd  83c414               add esp, 0x14
// 007344c0  85c0                 test eax, eax
// 007344c2  7527                 jne 0x7344eb
// 007344c4  8d4c2428             lea ecx, [esp + 0x28]
// 007344c8  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 007344d0  e86d7a1100           call 0x84bf42
// 007344d5  33c0                 xor eax, eax
// 007344d7  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007344db  64890d00000000       mov dword ptr fs:[0], ecx
// 007344e2  59                   pop ecx
// 007344e3  5f                   pop edi
// 007344e4  5e                   pop esi
// 007344e5  5d                   pop ebp
// 007344e6  5b                   pop ebx
// 007344e7  83c430               add esp, 0x30
// 007344ea  c3                   ret 
// 007344eb  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007344ef  55                   push ebp
// 007344f0  55                   push ebp
// 007344f1  896c2420             mov dword ptr [esp + 0x20], ebp
// 007344f5  8d442420             lea eax, [esp + 0x20]
// 007344f9  50                   push eax
// 007344fa  ba18000000           mov edx, 0x18
// 007344ff  6689570e             mov word ptr [edi + 0xe], dx
// 00734503  896f14               mov dword ptr [edi + 0x14], ebp
// 00734506  55                   push ebp
// 00734507  896f10               mov dword ptr [edi + 0x10], ebp
// 0073450a  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0073450e  57                   push edi
// 0073450f  51                   push ecx
// 00734510  ff155ce18900         call dword ptr [0x89e15c]
// 00734516  8b742418             mov esi, dword ptr [esp + 0x18]
// 0073451a  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 0073451e  89442424             mov dword ptr [esp + 0x24], eax
// 00734522  3bf5                 cmp esi, ebp
// 00734524  0f84a4000000         je 0x7345ce
// 0073452a  3bcd                 cmp ecx, ebp
// 0073452c  0f84aa000000         je 0x7345dc
// 00734532  3bc5                 cmp eax, ebp
// 00734534  0f8494000000         je 0x7345ce
// 0073453a  8b44244c             mov eax, dword ptr [esp + 0x4c]
// 0073453e  8bd8                 mov ebx, eax
// 00734540  c1e810               shr eax, 0x10
// 00734543  88442417             mov byte ptr [esp + 0x17], al
// 00734547  8b4708               mov eax, dword ptr [edi + 8]
// 0073454a  0faf4704             imul eax, dword ptr [edi + 4]
// 0073454e  c1eb08               shr ebx, 8
// 00734551  3bc5                 cmp eax, ebp
// 00734553  7479                 je 0x7345ce
// 00734555  41                   inc ecx
// 00734556  0fb65102             movzx edx, byte ptr [ecx + 2]
// 0073455a  48                   dec eax
// 0073455b  83fa78               cmp edx, 0x78
// 0073455e  7d22                 jge 0x734582
// 00734560  8a54244c             mov dl, byte ptr [esp + 0x4c]
// 00734564  8816                 mov byte ptr [esi], dl
// 00734566  8b542418             mov edx, dword ptr [esp + 0x18]
// 0073456a  885a01               mov byte ptr [edx + 1], bl
// 0073456d  8b542418             mov edx, dword ptr [esp + 0x18]
// 00734571  89442420             mov dword ptr [esp + 0x20], eax
// 00734575  8a442417             mov al, byte ptr [esp + 0x17]
// 00734579  884202               mov byte ptr [edx + 2], al
// 0073457c  8b442420             mov eax, dword ptr [esp + 0x20]
// 00734580  eb36                 jmp 0x7345b8
// 00734582  0fb651ff             movzx edx, byte ptr [ecx - 1]
// 00734586  69d2ff000000         imul edx, edx, 0xff
// 0073458c  c1fa08               sar edx, 8
// 0073458f  8816                 mov byte ptr [esi], dl
// 00734591  0fb611               movzx edx, byte ptr [ecx]
// 00734594  8b742418             mov esi, dword ptr [esp + 0x18]
// 00734598  69d2ff000000         imul edx, edx, 0xff
// 0073459e  c1fa08               sar edx, 8
// 007345a1  885601               mov byte ptr [esi + 1], dl
// 007345a4  0fb65101             movzx edx, byte ptr [ecx + 1]
// 007345a8  8b742418             mov esi, dword ptr [esp + 0x18]
// 007345ac  69d2ff000000         imul edx, edx, 0xff
// 007345b2  c1fa08               sar edx, 8
// 007345b5  885602               mov byte ptr [esi + 2], dl
// 007345b8  8b742418             mov esi, dword ptr [esp + 0x18]
// 007345bc  83c603               add esi, 3
// 007345bf  83c104               add ecx, 4
// 007345c2  89742418             mov dword ptr [esp + 0x18], esi
// 007345c6  3bc5                 cmp eax, ebp
// 007345c8  758c                 jne 0x734556
// 007345ca  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 007345ce  3bcd                 cmp ecx, ebp
// 007345d0  740a                 je 0x7345dc
// 007345d2  51                   push ecx
// 007345d3  ff15cce98900         call dword ptr [0x89e9cc]
// 007345d9  83c404               add esp, 4
// 007345dc  57                   push edi
// 007345dd  ff15cce98900         call dword ptr [0x89e9cc]
// 007345e3  83c404               add esp, 4
// 007345e6  8d4c2428             lea ecx, [esp + 0x28]
// 007345ea  c7442440ffffffff     mov dword ptr [esp + 0x40], 0xffffffff
// 007345f2  e84b791100           call 0x84bf42
// 007345f7  8b442424             mov eax, dword ptr [esp + 0x24]
// 007345fb  8b4c2438             mov ecx, dword ptr [esp + 0x38]
// 007345ff  64890d00000000       mov dword ptr fs:[0], ecx
// 00734606  59                   pop ecx
// 00734607  5f                   pop edi
// 00734608  5e                   pop esi
// 00734609  5d                   pop ebp
// 0073460a  5b                   pop ebx
// 0073460b  83c430               add esp, 0x30
// 0073460e  c3                   ret 
// copied from an identical function in another client (function ?ResampleAlphaLayer@CXTPImageManager@@SAPAUHBITMAP__@@PAU2@K@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp