// roc 2007-03 00541710  unit: seg_00540000  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00541710
//
// 00541710  6aff                 push -1
// 00541712  689e437500           push 0x75439e
// 00541717  64a100000000         mov eax, dword ptr fs:[0]
// 0054171d  50                   push eax
// 0054171e  64892500000000       mov dword ptr fs:[0], esp
// 00541725  51                   push ecx
// 00541726  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 0054172a  56                   push esi
// 0054172b  8bf1                 mov esi, ecx
// 0054172d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00541731  50                   push eax
// 00541732  51                   push ecx
// 00541733  8974240c             mov dword ptr [esp + 0xc], esi
// 00541737  e82484edff           call 0x419b60
// 0054173c  50                   push eax
// 0054173d  8bce                 mov ecx, esi
// 0054173f  e84cf80200           call 0x570f90
// 00541744  8b542418             mov edx, dword ptr [esp + 0x18]
// 00541748  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0054174c  8d4e30               lea ecx, [esi + 0x30]
// 0054174f  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00541757  c70678677a00         mov dword ptr [esi], 0x7a6778
// 0054175d  895628               mov dword ptr [esi + 0x28], edx
// 00541760  89462c               mov dword ptr [esi + 0x2c], eax
// 00541763  e8e8b60200           call 0x56ce50
// 00541768  c644241001           mov byte ptr [esp + 0x10], 1
// 0054176d  e8ceba0200           call 0x56d240
// 00541772  6a08                 push 8
// 00541774  894638               mov dword ptr [esi + 0x38], eax
// 00541777  e88cc90d00           call 0x61e108
// 0054177c  83c404               add esp, 4
// 0054177f  85c0                 test eax, eax
// 00541781  740f                 je 0x541792
// 00541783  8a4c242c             mov cl, byte ptr [esp + 0x2c]
// 00541787  c7003c987800         mov dword ptr [eax], 0x78983c
// 0054178d  884804               mov byte ptr [eax + 4], cl
// 00541790  eb02                 jmp 0x541794
// 00541792  33c0                 xor eax, eax
// 00541794  89463c               mov dword ptr [esi + 0x3c], eax
// 00541797  8b542428             mov edx, dword ptr [esp + 0x28]
// 0054179b  8b442424             mov eax, dword ptr [esp + 0x24]
// 0054179f  52                   push edx
// 005417a0  50                   push eax
// 005417a1  8bce                 mov ecx, esi
// 005417a3  c644241802           mov byte ptr [esp + 0x18], 2
// 005417a8  e893d7ffff           call 0x53ef40
// 005417ad  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005417b1  8bc6                 mov eax, esi
// 005417b3  5e                   pop esi
// 005417b4  64890d00000000       mov dword ptr fs:[0], ecx
// 005417bb  83c410               add esp, 0x10
// 005417be  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??0?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@QAE@P8Instance@2@AE?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@ZPBD331W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
