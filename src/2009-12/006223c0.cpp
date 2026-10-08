// roc 2009-12 006223c0  unit: seg_00620000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006223c0
//
// 006223c0  56                   push esi
// 006223c1  57                   push edi
// 006223c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006223c6  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 006223cc  8b4610               mov eax, dword ptr [esi + 0x10]
// 006223cf  894774               mov dword ptr [edi + 0x74], eax
// 006223d2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 006223d5  51                   push ecx
// 006223d6  e8c5f6ffff           call 0x621aa0
// 006223db  83c404               add esp, 4
// 006223de  5f                   pop edi
// 006223df  c6461c01             mov byte ptr [esi + 0x1c], 1
// 006223e3  5e                   pop esi
// 006223e4  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
