// roc 2007-08 00540d80  unit: RBX::VInstance::?$SignalDesc  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00540d80
//
// 00540d80  6aff                 push -1
// 00540d82  688e387500           push 0x75388e
// 00540d87  64a100000000         mov eax, dword ptr fs:[0]
// 00540d8d  50                   push eax
// 00540d8e  64892500000000       mov dword ptr fs:[0], esp
// 00540d95  51                   push ecx
// 00540d96  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00540d9a  56                   push esi
// 00540d9b  8bf1                 mov esi, ecx
// 00540d9d  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00540da1  50                   push eax
// 00540da2  51                   push ecx
// 00540da3  8974240c             mov dword ptr [esp + 0xc], esi
// 00540da7  e8e478edff           call 0x418690
// 00540dac  50                   push eax
// 00540dad  8bce                 mov ecx, esi
// 00540daf  e8fcff0200           call 0x570db0
// 00540db4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00540db8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00540dbc  8d4e30               lea ecx, [esi + 0x30]
// 00540dbf  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00540dc7  c70674667a00         mov dword ptr [esi], 0x7a6674
// 00540dcd  895628               mov dword ptr [esi + 0x28], edx
// 00540dd0  89462c               mov dword ptr [esi + 0x2c], eax
// 00540dd3  e8e8c50200           call 0x56d3c0
// 00540dd8  c644241001           mov byte ptr [esp + 0x10], 1
// 00540ddd  e85eca0200           call 0x56d840
// 00540de2  6a08                 push 8
// 00540de4  894638               mov dword ptr [esi + 0x38], eax
// 00540de7  e80af10e00           call 0x62fef6
// 00540dec  83c404               add esp, 4
// 00540def  85c0                 test eax, eax
// 00540df1  740f                 je 0x540e02
// 00540df3  8a4c242c             mov cl, byte ptr [esp + 0x2c]
// 00540df7  c700fca57800         mov dword ptr [eax], 0x78a5fc
// 00540dfd  884804               mov byte ptr [eax + 4], cl
// 00540e00  eb02                 jmp 0x540e04
// 00540e02  33c0                 xor eax, eax
// 00540e04  89463c               mov dword ptr [esi + 0x3c], eax
// 00540e07  8b542428             mov edx, dword ptr [esp + 0x28]
// 00540e0b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00540e0f  52                   push edx
// 00540e10  50                   push eax
// 00540e11  8bce                 mov ecx, esi
// 00540e13  c644241802           mov byte ptr [esp + 0x18], 2
// 00540e18  e8d3d4ffff           call 0x53e2f0
// 00540e1d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00540e21  8bc6                 mov eax, esi
// 00540e23  5e                   pop esi
// 00540e24  64890d00000000       mov dword ptr fs:[0], ecx
// 00540e2b  83c410               add esp, 0x10
// 00540e2e  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??0?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@QAE@P8Instance@2@AE?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@ZPBD331W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
