// from server: 100% by auto
// roc 2008-06 0072b240  unit: CXTPRibbonTheme  size: 333 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0072b240
//
// 0072b240  83ec30               sub esp, 0x30
// 0072b243  53                   push ebx
// 0072b244  8b5c243c             mov ebx, dword ptr [esp + 0x3c]
// 0072b248  55                   push ebp
// 0072b249  56                   push esi
// 0072b24a  57                   push edi
// 0072b24b  8d442410             lea eax, [esp + 0x10]
// 0072b24f  8bf9                 mov edi, ecx
// 0072b251  8b4b20               mov ecx, dword ptr [ebx + 0x20]
// 0072b254  50                   push eax
// 0072b255  51                   push ecx
// 0072b256  ff15842d8000         call dword ptr [0x802d84]
// 0072b25c  bd05000000           mov ebp, 5
// 0072b261  8bcf                 mov ecx, edi
// 0072b263  39ab00010000         cmp dword ptr [ebx + 0x100], ebp
// 0072b269  7527                 jne 0x72b292
// 0072b26b  68801e8600           push 0x861e80
// 0072b270  e87ba40000           call 0x7356f0
// 0072b275  8bf0                 mov esi, eax
// 0072b277  85f6                 test esi, esi
// 0072b279  0f8404010000         je 0x72b383
// 0072b27f  6a01                 push 1
// 0072b281  6a00                 push 0
// 0072b283  8d542438             lea edx, [esp + 0x38]
// 0072b287  bd04000000           mov ebp, 4
// 0072b28c  52                   push edx
// 0072b28d  e9a4000000           jmp 0x72b336
// 0072b292  53                   push ebx
// 0072b293  e8c837f8ff           call 0x6aea60
// 0072b298  85c0                 test eax, eax
// 0072b29a  7417                 je 0x72b2b3
// 0072b29c  8b442444             mov eax, dword ptr [esp + 0x44]
// 0072b2a0  53                   push ebx
// 0072b2a1  50                   push eax
// 0072b2a2  8bcf                 mov ecx, edi
// 0072b2a4  e8f7ed0000           call 0x73a0a0
// 0072b2a9  5f                   pop edi
// 0072b2aa  5e                   pop esi
// 0072b2ab  5d                   pop ebp
// 0072b2ac  5b                   pop ebx
// 0072b2ad  83c430               add esp, 0x30
// 0072b2b0  c20800               ret 8
// 0072b2b3  8b8300010000         mov eax, dword ptr [ebx + 0x100]
// 0072b2b9  85c0                 test eax, eax
// 0072b2bb  745a                 je 0x72b317
// 0072b2bd  83f801               cmp eax, 1
// 0072b2c0  7455                 je 0x72b317
// 0072b2c2  83f802               cmp eax, 2
// 0072b2c5  741c                 je 0x72b2e3
// 0072b2c7  83f803               cmp eax, 3
// 0072b2ca  7417                 je 0x72b2e3
// 0072b2cc  8b4c2444             mov ecx, dword ptr [esp + 0x44]
// 0072b2d0  53                   push ebx
// 0072b2d1  51                   push ecx
// 0072b2d2  8bcf                 mov ecx, edi
// 0072b2d4  e8c7ed0000           call 0x73a0a0
// 0072b2d9  5f                   pop edi
// 0072b2da  5e                   pop esi
// 0072b2db  5d                   pop ebp
// 0072b2dc  5b                   pop ebx
// 0072b2dd  83c430               add esp, 0x30
// 0072b2e0  c20800               ret 8
// 0072b2e3  68f81e8600           push 0x861ef8
// 0072b2e8  8bcf                 mov ecx, edi
// 0072b2ea  e801a40000           call 0x7356f0
// 0072b2ef  8bf0                 mov esi, eax
// 0072b2f1  85f6                 test esi, esi
// 0072b2f3  7517                 jne 0x72b30c
// 0072b2f5  8b542444             mov edx, dword ptr [esp + 0x44]
// 0072b2f9  53                   push ebx
// 0072b2fa  52                   push edx
// 0072b2fb  8bcf                 mov ecx, edi
// 0072b2fd  e89eed0000           call 0x73a0a0
// 0072b302  5f                   pop edi
// 0072b303  5e                   pop esi
// 0072b304  5d                   pop ebp
// 0072b305  5b                   pop ebx
// 0072b306  83c430               add esp, 0x30
// 0072b309  c20800               ret 8
// 0072b30c  6a01                 push 1
// 0072b30e  6a00                 push 0
// 0072b310  8d442438             lea eax, [esp + 0x38]
// 0072b314  50                   push eax
// 0072b315  eb1f                 jmp 0x72b336
// 0072b317  68e01e8600           push 0x861ee0
// 0072b31c  8bcf                 mov ecx, edi
// 0072b31e  e8cda30000           call 0x7356f0
// 0072b323  8bf0                 mov esi, eax
// 0072b325  85f6                 test esi, esi
// 0072b327  0f846fffffff         je 0x72b29c
// 0072b32d  6a01                 push 1
// 0072b32f  6a00                 push 0
// 0072b331  8d4c2438             lea ecx, [esp + 0x38]
// 0072b335  51                   push ecx
// 0072b336  8bce                 mov ecx, esi
// 0072b338  8bfd                 mov edi, ebp
// 0072b33a  8bdd                 mov ebx, ebp
// 0072b33c  896c2438             mov dword ptr [esp + 0x38], ebp
// 0072b340  e8eb230600           call 0x78d730
// 0072b345  83ec10               sub esp, 0x10
// 0072b348  8bcc                 mov ecx, esp
// 0072b34a  8939                 mov dword ptr [ecx], edi
// 0072b34c  895904               mov dword ptr [ecx + 4], ebx
// 0072b34f  896908               mov dword ptr [ecx + 8], ebp
// 0072b352  83ec10               sub esp, 0x10
// 0072b355  8bd5                 mov edx, ebp
// 0072b357  89510c               mov dword ptr [ecx + 0xc], edx
// 0072b35a  8b10                 mov edx, dword ptr [eax]
// 0072b35c  8bcc                 mov ecx, esp
// 0072b35e  8911                 mov dword ptr [ecx], edx
// 0072b360  8b5004               mov edx, dword ptr [eax + 4]
// 0072b363  895104               mov dword ptr [ecx + 4], edx
// 0072b366  8b5008               mov edx, dword ptr [eax + 8]
// 0072b369  8b400c               mov eax, dword ptr [eax + 0xc]
// 0072b36c  895108               mov dword ptr [ecx + 8], edx
// 0072b36f  8b542464             mov edx, dword ptr [esp + 0x64]
// 0072b373  89410c               mov dword ptr [ecx + 0xc], eax
// 0072b376  8d4c2430             lea ecx, [esp + 0x30]
// 0072b37a  51                   push ecx
// 0072b37b  52                   push edx
// 0072b37c  8bce                 mov ecx, esi
// 0072b37e  e87d1c0600           call 0x78d000
// 0072b383  5f                   pop edi
// 0072b384  5e                   pop esi
// 0072b385  5d                   pop ebp
// 0072b386  5b                   pop ebx
// 0072b387  83c430               add esp, 0x30
// 0072b38a  c20800               ret 8
// library xtp-11.2.2/Source\Ribbon\XTPRibbonTheme.cpp (function ?FillCommandBarEntry@CXTPRibbonTheme@@MAEXPAVCDC@@PAVCXTPCommandBar@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Ribbon/XTPRibbonTheme.cpp
