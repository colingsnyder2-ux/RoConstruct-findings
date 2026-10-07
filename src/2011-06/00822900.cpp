// roc 2011-06 00822900  unit: KKPAVCXTPImageManagerResource::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00822900
//
// 00822900  83ec0c               sub esp, 0xc
// 00822903  53                   push ebx
// 00822904  8bd9                 mov ebx, ecx
// 00822906  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 00822909  f7d8                 neg eax
// 0082290b  1bc0                 sbb eax, eax
// 0082290d  89442404             mov dword ptr [esp + 4], eax
// 00822911  7440                 je 0x822953
// 00822913  56                   push esi
// 00822914  57                   push edi
// 00822915  8d7b20               lea edi, [ebx + 0x20]
// 00822918  eb06                 jmp 0x822920
// 0082291a  8d9b00000000         lea ebx, [ebx]
// 00822920  8d442410             lea eax, [esp + 0x10]
// 00822924  50                   push eax
// 00822925  8d4c2418             lea ecx, [esp + 0x18]
// 00822929  51                   push ecx
// 0082292a  8d542414             lea edx, [esp + 0x14]
// 0082292e  52                   push edx
// 0082292f  8bcf                 mov ecx, edi
// 00822931  e8aaad0a00           call 0x8cd6e0
// 00822936  8b742410             mov esi, dword ptr [esp + 0x10]
// 0082293a  6a01                 push 1
// 0082293c  8bce                 mov ecx, esi
// 0082293e  e8bdfeffff           call 0x822800
// 00822943  8bce                 mov ecx, esi
// 00822945  e8907cfeff           call 0x80a5da
// 0082294a  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0082294f  75cf                 jne 0x822920
// 00822951  5f                   pop edi
// 00822952  5e                   pop esi
// 00822953  8d4b20               lea ecx, [ebx + 0x20]
// 00822956  5b                   pop ebx
// 00822957  83c40c               add esp, 0xc
// 0082295a  e951690900           jmp 0x8b92b0
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerIconSet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
