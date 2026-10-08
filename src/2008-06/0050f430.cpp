// from server: 100% by auto
// roc 2008-06 0050f430  unit: seg_00500000  size: 130 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0050f430
//
// 0050f430  6aff                 push -1
// 0050f432  6888c27c00           push 0x7cc288
// 0050f437  64a100000000         mov eax, dword ptr fs:[0]
// 0050f43d  50                   push eax
// 0050f43e  64892500000000       mov dword ptr fs:[0], esp
// 0050f445  83ec48               sub esp, 0x48
// 0050f448  56                   push esi
// 0050f449  57                   push edi
// 0050f44a  8b7c2460             mov edi, dword ptr [esp + 0x60]
// 0050f44e  6a01                 push 1
// 0050f450  8bf1                 mov esi, ecx
// 0050f452  57                   push edi
// 0050f453  8d4c2410             lea ecx, [esp + 0x10]
// 0050f457  e874a40000           call 0x5198d0
// 0050f45c  8b4c2464             mov ecx, dword ptr [esp + 0x64]
// 0050f460  8d442408             lea eax, [esp + 8]
// 0050f464  50                   push eax
// 0050f465  51                   push ecx
// 0050f466  6a00                 push 0
// 0050f468  6a00                 push 0
// 0050f46a  57                   push edi
// 0050f46b  c744246c00000000     mov dword ptr [esp + 0x6c], 0
// 0050f473  e848e9ffff           call 0x50ddc0
// 0050f478  83c410               add esp, 0x10
// 0050f47b  50                   push eax
// 0050f47c  8bce                 mov ecx, esi
// 0050f47e  e85dfeffff           call 0x50f2e0
// 0050f483  6a00                 push 0
// 0050f485  8d4c240c             lea ecx, [esp + 0xc]
// 0050f489  e802a60000           call 0x519a90
// 0050f48e  8d4c2408             lea ecx, [esp + 8]
// 0050f492  c7442458ffffffff     mov dword ptr [esp + 0x58], 0xffffffff
// 0050f49a  e811a30000           call 0x5197b0
// 0050f49f  8b4c2450             mov ecx, dword ptr [esp + 0x50]
// 0050f4a3  5f                   pop edi
// 0050f4a4  5e                   pop esi
// 0050f4a5  64890d00000000       mov dword ptr fs:[0], ecx
// 0050f4ac  83c454               add esp, 0x54
// 0050f4af  c20800               ret 8
// library g3d-6.09/G3Dcpp\GImage.cpp (function ?save@GImage@G3D@@QBEXABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Format@12@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/GImage.cpp
