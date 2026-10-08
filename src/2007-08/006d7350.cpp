// from server: 100% by auto
// roc 2007-08 006d7350  unit: CXTMemDC  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006d7350
//
// 006d7350  8b4124               mov eax, dword ptr [ecx + 0x24]
// 006d7353  8b5120               mov edx, dword ptr [ecx + 0x20]
// 006d7356  53                   push ebx
// 006d7357  8b5918               mov ebx, dword ptr [ecx + 0x18]
// 006d735a  56                   push esi
// 006d735b  8b7110               mov esi, dword ptr [ecx + 0x10]
// 006d735e  57                   push edi
// 006d735f  8b791c               mov edi, dword ptr [ecx + 0x1c]
// 006d7362  2bc7                 sub eax, edi
// 006d7364  2bd3                 sub edx, ebx
// 006d7366  85f6                 test esi, esi
// 006d7368  7403                 je 0x6d736d
// 006d736a  8b7604               mov esi, dword ptr [esi + 4]
// 006d736d  682000cc00           push 0xcc0020
// 006d7372  57                   push edi
// 006d7373  53                   push ebx
// 006d7374  56                   push esi
// 006d7375  50                   push eax
// 006d7376  8b4104               mov eax, dword ptr [ecx + 4]
// 006d7379  52                   push edx
// 006d737a  6a00                 push 0
// 006d737c  6a00                 push 0
// 006d737e  50                   push eax
// 006d737f  ff153cd17700         call dword ptr [0x77d13c]
// 006d7385  5f                   pop edi
// 006d7386  5e                   pop esi
// 006d7387  5b                   pop ebx
// 006d7388  c3                   ret 
// library xtp-11.2.2-vc8/Source\Controls\XTMemDC.cpp (function ?FromDC@CXTMemDC@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTMemDC.cpp
