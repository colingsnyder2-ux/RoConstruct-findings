// from server: 100% by auto
// roc 2007-08 00529fb0  unit: seg_00520000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00529fb0
//
// 00529fb0  56                   push esi
// 00529fb1  57                   push edi
// 00529fb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00529fb6  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 00529fbc  8b4610               mov eax, dword ptr [esi + 0x10]
// 00529fbf  894774               mov dword ptr [edi + 0x74], eax
// 00529fc2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00529fc5  51                   push ecx
// 00529fc6  e885f6ffff           call 0x529650
// 00529fcb  83c404               add esp, 4
// 00529fce  5f                   pop edi
// 00529fcf  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00529fd3  5e                   pop esi
// 00529fd4  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
