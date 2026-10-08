// from server: 100% by auto
// roc 2012-06 00a797f0  unit: CXTMemDC  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a797f0
//
// 00a797f0  8b4124               mov eax, dword ptr [ecx + 0x24]
// 00a797f3  8b5120               mov edx, dword ptr [ecx + 0x20]
// 00a797f6  53                   push ebx
// 00a797f7  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 00a797fa  56                   push esi
// 00a797fb  8b7110               mov esi, dword ptr [ecx + 0x10]
// 00a797fe  57                   push edi
// 00a797ff  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 00a79802  2bc7                 sub eax, edi
// 00a79804  2bd3                 sub edx, ebx
// 00a79806  85f6                 test esi, esi
// 00a79808  7403                 je 0xa7980d
// 00a7980a  8b7604               mov esi, dword ptr [esi + 4]
// 00a7980d  682000cc00           push 0xcc0020
// 00a79812  57                   push edi
// 00a79813  53                   push ebx
// 00a79814  56                   push esi
// 00a79815  50                   push eax
// 00a79816  8b4104               mov eax, dword ptr [ecx + 4]
// 00a79819  52                   push edx
// 00a7981a  6a00                 push 0
// 00a7981c  6a00                 push 0
// 00a7981e  50                   push eax
// 00a7981f  ff156421b200         call dword ptr [0xb22164]
// 00a79825  5f                   pop edi
// 00a79826  5e                   pop esi
// 00a79827  5b                   pop ebx
// 00a79828  c3                   ret 
// library xtp-15.2.1/Source\Controls\Deprecated\XTMemDC.cpp (function ?FromDC@CXTMemDC@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTMemDC.cpp
