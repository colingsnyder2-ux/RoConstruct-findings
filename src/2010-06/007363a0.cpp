// roc 2010-06 007363a0  unit: seg_00730000  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007363a0
//
// 007363a0  53                   push ebx
// 007363a1  55                   push ebp
// 007363a2  8b6c240c             mov ebp, dword ptr [esp + 0xc]
// 007363a6  56                   push esi
// 007363a7  8bf0                 mov esi, eax
// 007363a9  8b5e0c               mov ebx, dword ptr [esi + 0xc]
// 007363ac  57                   push edi
// 007363ad  85db                 test ebx, ebx
// 007363af  7509                 jne 0x7363ba
// 007363b1  85ed                 test ebp, ebp
// 007363b3  7405                 je 0x7363ba
// 007363b5  bb01000000           mov ebx, 1
// 007363ba  8b4608               mov eax, dword ptr [esi + 8]
// 007363bd  6890e3a400           push 0xa4e390
// 007363c2  53                   push ebx
// 007363c3  50                   push eax
// 007363c4  e867c1feff           call 0x722530
// 007363c9  83c40c               add esp, 0xc
// 007363cc  33ff                 xor edi, edi
// 007363ce  85db                 test ebx, ebx
// 007363d0  7e10                 jle 0x7363e2
// 007363d2  8b442418             mov eax, dword ptr [esp + 0x18]
// 007363d6  8bcd                 mov ecx, ebp
// 007363d8  e843ffffff           call 0x736320
// 007363dd  47                   inc edi
// 007363de  3bfb                 cmp edi, ebx
// 007363e0  7cf0                 jl 0x7363d2
// 007363e2  5f                   pop edi
// 007363e3  5e                   pop esi
// 007363e4  5d                   pop ebp
// 007363e5  8bc3                 mov eax, ebx
// 007363e7  5b                   pop ebx
// 007363e8  c3                   ret 
// library lua-5.1.4/lstrlib.c (function _push_captures)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lstrlib.c
