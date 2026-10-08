// roc 2008-06 00559cb0  unit: RBX::VInstance::?$SignalDesc  size: 177 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559cb0
//
// 00559cb0  6aff                 push -1
// 00559cb2  689ee37c00           push 0x7ce39e
// 00559cb7  64a100000000         mov eax, dword ptr fs:[0]
// 00559cbd  50                   push eax
// 00559cbe  64892500000000       mov dword ptr fs:[0], esp
// 00559cc5  51                   push ecx
// 00559cc6  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00559cca  56                   push esi
// 00559ccb  8bf1                 mov esi, ecx
// 00559ccd  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00559cd1  50                   push eax
// 00559cd2  51                   push ecx
// 00559cd3  8974240c             mov dword ptr [esp + 0xc], esi
// 00559cd7  e8a410ebff           call 0x40ad80
// 00559cdc  50                   push eax
// 00559cdd  8bce                 mov ecx, esi
// 00559cdf  e8acba0300           call 0x595790
// 00559ce4  8b542418             mov edx, dword ptr [esp + 0x18]
// 00559ce8  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00559cec  8d4e40               lea ecx, [esi + 0x40]
// 00559cef  c744241000000000     mov dword ptr [esp + 0x10], 0
// 00559cf7  c706c4d78200         mov dword ptr [esi], 0x82d7c4
// 00559cfd  895638               mov dword ptr [esi + 0x38], edx
// 00559d00  89463c               mov dword ptr [esi + 0x3c], eax
// 00559d03  e8b8ad0300           call 0x594ac0
// 00559d08  c644241001           mov byte ptr [esp + 0x10], 1
// 00559d0d  e81e2f0100           call 0x56cc30
// 00559d12  6a08                 push 8
// 00559d14  894648               mov dword ptr [esi + 0x48], eax
// 00559d17  e8046c1400           call 0x6a0920
// 00559d1c  83c404               add esp, 4
// 00559d1f  85c0                 test eax, eax
// 00559d21  740f                 je 0x559d32
// 00559d23  8a4c242c             mov cl, byte ptr [esp + 0x2c]
// 00559d27  c70084ba8000         mov dword ptr [eax], 0x80ba84
// 00559d2d  884804               mov byte ptr [eax + 4], cl
// 00559d30  eb02                 jmp 0x559d34
// 00559d32  33c0                 xor eax, eax
// 00559d34  89464c               mov dword ptr [esi + 0x4c], eax
// 00559d37  8b542428             mov edx, dword ptr [esp + 0x28]
// 00559d3b  8b442424             mov eax, dword ptr [esp + 0x24]
// 00559d3f  52                   push edx
// 00559d40  50                   push eax
// 00559d41  8bce                 mov ecx, esi
// 00559d43  c644241802           mov byte ptr [esp + 0x18], 2
// 00559d48  e883d8ffff           call 0x5575d0
// 00559d4d  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00559d51  8bc6                 mov eax, esi
// 00559d53  5e                   pop esi
// 00559d54  64890d00000000       mov dword ptr fs:[0], ecx
// 00559d5b  83c410               add esp, 0x10
// 00559d5e  c21c00               ret 0x1c
// library rbxgs/v8tree\Instance.cpp (function ??0?$BoundFuncDesc@VInstance@RBX@@$$A6A?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z$01@Reflection@RBX@@QAE@P8Instance@2@AE?AV?$shared_ptr@VInstance@RBX@@@boost@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@ZPBD331W4Security@FunctionDescriptor@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8tree/Instance.cpp
