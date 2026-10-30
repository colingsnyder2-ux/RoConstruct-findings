// from server: 100% by auto
// roc 2011-06 005790d0  unit: seg_00570000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 005790d0
//
// 005790d0  56                   push esi
// 005790d1  57                   push edi
// 005790d2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 005790d6  8b4704               mov eax, dword ptr [edi + 4]
// 005790d9  8b08                 mov ecx, dword ptr [eax]
// 005790db  6a30                 push 0x30
// 005790dd  6a01                 push 1
// 005790df  57                   push edi
// 005790e0  ffd1                 call ecx
// 005790e2  8bf0                 mov esi, eax
// 005790e4  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 005790ea  33c0                 xor eax, eax
// 005790ec  c706408c5700         mov dword ptr [esi], 0x578c40
// 005790f2  884608               mov byte ptr [esi + 8], al
// 005790f5  8b5764               mov edx, dword ptr [edi + 0x64]
// 005790f8  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 005790fc  83c40c               add esp, 0xc
// 005790ff  895628               mov dword ptr [esi + 0x28], edx
// 00579102  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 00579109  752b                 jne 0x579136
// 0057910b  8bca                 mov ecx, edx
// 0057910d  51                   push ecx
// 0057910e  c74604608c5700       mov dword ptr [esi + 4], 0x578c60
// 00579115  c7460cb08e5700       mov dword ptr [esi + 0xc], 0x578eb0
// 0057911c  8b4704               mov eax, dword ptr [edi + 4]
// 0057911f  8b5004               mov edx, dword ptr [eax + 4]
// 00579122  6a01                 push 1
// 00579124  57                   push edi
// 00579125  ffd2                 call edx
// 00579127  83c40c               add esp, 0xc
// 0057912a  894620               mov dword ptr [esi + 0x20], eax
// 0057912d  8bc7                 mov eax, edi
// 0057912f  5f                   pop edi
// 00579130  5e                   pop esi
// 00579131  e93afaffff           jmp 0x578b70
// 00579136  894620               mov dword ptr [esi + 0x20], eax
// 00579139  8bc7                 mov eax, edi
// 0057913b  5f                   pop edi
// 0057913c  c74604208d5700       mov dword ptr [esi + 4], 0x578d20
// 00579143  c7460c608d5700       mov dword ptr [esi + 0xc], 0x578d60
// 0057914a  5e                   pop esi
// 0057914b  e920faffff           jmp 0x578b70
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
