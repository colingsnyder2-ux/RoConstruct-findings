// roc 2007-03 00524c80  unit: seg_00520000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00524c80
//
// 00524c80  56                   push esi
// 00524c81  57                   push edi
// 00524c82  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00524c86  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 00524c8c  8b4610               mov eax, dword ptr [esi + 0x10]
// 00524c8f  894774               mov dword ptr [edi + 0x74], eax
// 00524c92  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00524c95  51                   push ecx
// 00524c96  e885f6ffff           call 0x524320
// 00524c9b  83c404               add esp, 4
// 00524c9e  5f                   pop edi
// 00524c9f  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00524ca3  5e                   pop esi
// 00524ca4  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
