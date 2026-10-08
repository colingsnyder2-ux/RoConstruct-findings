// roc 2009-12 006212c0  unit: seg_00620000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006212c0
//
// 006212c0  56                   push esi
// 006212c1  57                   push edi
// 006212c2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006212c6  8b4704               mov eax, dword ptr [edi + 4]
// 006212c9  8b08                 mov ecx, dword ptr [eax]
// 006212cb  6a30                 push 0x30
// 006212cd  6a01                 push 1
// 006212cf  57                   push edi
// 006212d0  ffd1                 call ecx
// 006212d2  8bf0                 mov esi, eax
// 006212d4  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 006212da  33c0                 xor eax, eax
// 006212dc  c706300e6200         mov dword ptr [esi], 0x620e30
// 006212e2  884608               mov byte ptr [esi + 8], al
// 006212e5  8b5764               mov edx, dword ptr [edi + 0x64]
// 006212e8  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 006212ec  83c40c               add esp, 0xc
// 006212ef  895628               mov dword ptr [esi + 0x28], edx
// 006212f2  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 006212f9  752b                 jne 0x621326
// 006212fb  8bca                 mov ecx, edx
// 006212fd  51                   push ecx
// 006212fe  c74604500e6200       mov dword ptr [esi + 4], 0x620e50
// 00621305  c7460ca0106200       mov dword ptr [esi + 0xc], 0x6210a0
// 0062130c  8b4704               mov eax, dword ptr [edi + 4]
// 0062130f  8b5004               mov edx, dword ptr [eax + 4]
// 00621312  6a01                 push 1
// 00621314  57                   push edi
// 00621315  ffd2                 call edx
// 00621317  83c40c               add esp, 0xc
// 0062131a  894620               mov dword ptr [esi + 0x20], eax
// 0062131d  8bc7                 mov eax, edi
// 0062131f  5f                   pop edi
// 00621320  5e                   pop esi
// 00621321  e93afaffff           jmp 0x620d60
// 00621326  894620               mov dword ptr [esi + 0x20], eax
// 00621329  8bc7                 mov eax, edi
// 0062132b  5f                   pop edi
// 0062132c  c74604100f6200       mov dword ptr [esi + 4], 0x620f10
// 00621333  c7460c500f6200       mov dword ptr [esi + 0xc], 0x620f50
// 0062133a  5e                   pop esi
// 0062133b  e920faffff           jmp 0x620d60
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
