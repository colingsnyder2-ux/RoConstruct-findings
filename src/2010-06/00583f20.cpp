// roc 2010-06 00583f20  unit: seg_00580000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00583f20
//
// 00583f20  56                   push esi
// 00583f21  57                   push edi
// 00583f22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00583f26  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 00583f2c  8b4610               mov eax, dword ptr [esi + 0x10]
// 00583f2f  894774               mov dword ptr [edi + 0x74], eax
// 00583f32  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 00583f35  51                   push ecx
// 00583f36  e8c5f6ffff           call 0x583600
// 00583f3b  83c404               add esp, 4
// 00583f3e  5f                   pop edi
// 00583f3f  c6461c01             mov byte ptr [esi + 0x1c], 1
// 00583f43  5e                   pop esi
// 00583f44  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
