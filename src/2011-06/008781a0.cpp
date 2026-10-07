// roc 2011-06 008781a0  unit: CXTPPropertyGridView  size: 154 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008781a0
//
// 008781a0  8b442404             mov eax, dword ptr [esp + 4]
// 008781a4  83ec10               sub esp, 0x10
// 008781a7  53                   push ebx
// 008781a8  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 008781ac  55                   push ebp
// 008781ad  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 008781b1  56                   push esi
// 008781b2  57                   push edi
// 008781b3  8b7c2430             mov edi, dword ptr [esp + 0x30]
// 008781b7  c70700000000         mov dword ptr [edi], 0
// 008781bd  c70300000000         mov dword ptr [ebx], 0
// 008781c3  8bf1                 mov esi, ecx
// 008781c5  c7450000000000       mov dword ptr [ebp], 0
// 008781cc  c70000000000         mov dword ptr [eax], 0
// 008781d2  8d46ac               lea eax, [esi - 0x54]
// 008781d5  85c0                 test eax, eax
// 008781d7  7455                 je 0x87822e
// 008781d9  83782000             cmp dword ptr [eax + 0x20], 0
// 008781dd  744f                 je 0x87822e
// 008781df  8b56cc               mov edx, dword ptr [esi - 0x34]
// 008781e2  8d4c2410             lea ecx, [esp + 0x10]
// 008781e6  51                   push ecx
// 008781e7  52                   push edx
// 008781e8  ff155c1ca400         call dword ptr [0xa41c5c]
// 008781ee  8d442434             lea eax, [esp + 0x34]
// 008781f2  50                   push eax
// 008781f3  8bce                 mov ecx, esi
// 008781f5  e83691fdff           call 0x851330
// 008781fa  85c0                 test eax, eax
// 008781fc  740f                 je 0x87820d
// 008781fe  5f                   pop edi
// 008781ff  5e                   pop esi
// 00878200  5d                   pop ebp
// 00878201  b857000780           mov eax, 0x80070057
// 00878206  5b                   pop ebx
// 00878207  83c410               add esp, 0x10
// 0087820a  c22000               ret 0x20
// 0087820d  8b442410             mov eax, dword ptr [esp + 0x10]
// 00878211  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00878215  8b542418             mov edx, dword ptr [esp + 0x18]
// 00878219  8901                 mov dword ptr [ecx], eax
// 0087821b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0087821f  2bd0                 sub edx, eax
// 00878221  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00878225  894d00               mov dword ptr [ebp], ecx
// 00878228  2bc1                 sub eax, ecx
// 0087822a  8913                 mov dword ptr [ebx], edx
// 0087822c  8907                 mov dword ptr [edi], eax
// 0087822e  5f                   pop edi
// 0087822f  5e                   pop esi
// 00878230  5d                   pop ebp
// 00878231  33c0                 xor eax, eax
// 00878233  5b                   pop ebx
// 00878234  83c410               add esp, 0x10
// 00878237  c22000               ret 0x20
// library xtp-15.2.1/Source\PropertyGrid\XTPPropertyGridView.cpp (function ?AccessibleLocation@CXTPPropertyGridView@@MAEJPAJ000UtagVARIANT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/PropertyGrid/XTPPropertyGridView.cpp
