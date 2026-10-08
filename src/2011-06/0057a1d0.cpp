// from server: 100% by auto
// roc 2011-06 0057a1d0  unit: seg_00570000  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0057a1d0
//
// 0057a1d0  56                   push esi
// 0057a1d1  57                   push edi
// 0057a1d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0057a1d6  8bb7a8010000         mov esi, dword ptr [edi + 0x1a8]
// 0057a1dc  8b4610               mov eax, dword ptr [esi + 0x10]
// 0057a1df  894774               mov dword ptr [edi + 0x74], eax
// 0057a1e2  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 0057a1e5  51                   push ecx
// 0057a1e6  e8c5f6ffff           call 0x5798b0
// 0057a1eb  83c404               add esp, 4
// 0057a1ee  5f                   pop edi
// 0057a1ef  c6461c01             mov byte ptr [esi + 0x1c], 1
// 0057a1f3  5e                   pop esi
// 0057a1f4  c3                   ret 
// library jpeg-6b/jquant2.c (function _finish_pass1)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jquant2.c
