// roc 2008-06 00590300  unit: RBX::RootInstance  size: 144 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00590300
//
// 00590300  53                   push ebx
// 00590301  55                   push ebp
// 00590302  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 00590306  33c0                 xor eax, eax
// 00590308  57                   push edi
// 00590309  894500               mov dword ptr [ebp], eax
// 0059030c  8bd9                 mov ebx, ecx
// 0059030e  894504               mov dword ptr [ebp + 4], eax
// 00590311  33ff                 xor edi, edi
// 00590313  e808abefff           call 0x48ae20
// 00590318  85c0                 test eax, eax
// 0059031a  766c                 jbe 0x590388
// 0059031c  56                   push esi
// 0059031d  8d4900               lea ecx, [ecx]
// 00590320  8bb308010000         mov esi, dword ptr [ebx + 0x108]
// 00590326  8b4610               mov eax, dword ptr [esi + 0x10]
// 00590329  2b460c               sub eax, dword ptr [esi + 0xc]
// 0059032c  c1f803               sar eax, 3
// 0059032f  3bf8                 cmp edi, eax
// 00590331  7206                 jb 0x590339
// 00590333  ff1590288000         call dword ptr [0x802890]
// 00590339  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059033c  8b04f9               mov eax, dword ptr [ecx + edi*8]
// 0059033f  6a00                 push 0
// 00590341  681c7f9400           push 0x947f1c
// 00590346  687c909200           push 0x92907c
// 0059034b  6a00                 push 0
// 0059034d  50                   push eax
// 0059034e  e873141100           call 0x6a17c6
// 00590353  8bf0                 mov esi, eax
// 00590355  83c414               add esp, 0x14
// 00590358  85f6                 test esi, esi
// 0059035a  741f                 je 0x59037b
// 0059035c  8b9630010000         mov edx, dword ptr [esi + 0x130]
// 00590362  8b4204               mov eax, dword ptr [edx + 4]
// 00590365  8d8e30010000         lea ecx, [esi + 0x130]
// 0059036b  ffd0                 call eax
// 0059036d  84c0                 test al, al
// 0059036f  740a                 je 0x59037b
// 00590371  8b8e94010000         mov ecx, dword ptr [esi + 0x194]
// 00590377  c6042901             mov byte ptr [ecx + ebp], 1
// 0059037b  8bcb                 mov ecx, ebx
// 0059037d  47                   inc edi
// 0059037e  e89daaefff           call 0x48ae20
// 00590383  3bf8                 cmp edi, eax
// 00590385  7299                 jb 0x590320
// 00590387  5e                   pop esi
// 00590388  5f                   pop edi
// 00590389  8bc5                 mov eax, ebp
// 0059038b  5d                   pop ebp
// 0059038c  5b                   pop ebx
// 0059038d  c20400               ret 4
// library openrbx-client/App\v8datamodel\RootInstance.cpp (function ?computeControllersUsed@RootInstance@RBX@@ABE?AVControllerTypeArray@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/RootInstance.cpp
