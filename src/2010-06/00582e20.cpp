// from server: 100% by auto
// roc 2010-06 00582e20  unit: seg_00580000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00582e20
//
// 00582e20  56                   push esi
// 00582e21  57                   push edi
// 00582e22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00582e26  8b4704               mov eax, dword ptr [edi + 4]
// 00582e29  8b08                 mov ecx, dword ptr [eax]
// 00582e2b  6a30                 push 0x30
// 00582e2d  6a01                 push 1
// 00582e2f  57                   push edi
// 00582e30  ffd1                 call ecx
// 00582e32  8bf0                 mov esi, eax
// 00582e34  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 00582e3a  33c0                 xor eax, eax
// 00582e3c  c70690295800         mov dword ptr [esi], 0x582990
// 00582e42  884608               mov byte ptr [esi + 8], al
// 00582e45  8b5764               mov edx, dword ptr [edi + 0x64]
// 00582e48  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 00582e4c  83c40c               add esp, 0xc
// 00582e4f  895628               mov dword ptr [esi + 0x28], edx
// 00582e52  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 00582e59  752b                 jne 0x582e86
// 00582e5b  8bca                 mov ecx, edx
// 00582e5d  51                   push ecx
// 00582e5e  c74604b0295800       mov dword ptr [esi + 4], 0x5829b0
// 00582e65  c7460c002c5800       mov dword ptr [esi + 0xc], 0x582c00
// 00582e6c  8b4704               mov eax, dword ptr [edi + 4]
// 00582e6f  8b5004               mov edx, dword ptr [eax + 4]
// 00582e72  6a01                 push 1
// 00582e74  57                   push edi
// 00582e75  ffd2                 call edx
// 00582e77  83c40c               add esp, 0xc
// 00582e7a  894620               mov dword ptr [esi + 0x20], eax
// 00582e7d  8bc7                 mov eax, edi
// 00582e7f  5f                   pop edi
// 00582e80  5e                   pop esi
// 00582e81  e93afaffff           jmp 0x5828c0
// 00582e86  894620               mov dword ptr [esi + 0x20], eax
// 00582e89  8bc7                 mov eax, edi
// 00582e8b  5f                   pop edi
// 00582e8c  c74604702a5800       mov dword ptr [esi + 4], 0x582a70
// 00582e93  c7460cb02a5800       mov dword ptr [esi + 0xc], 0x582ab0
// 00582e9a  5e                   pop esi
// 00582e9b  e920faffff           jmp 0x5828c0
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
