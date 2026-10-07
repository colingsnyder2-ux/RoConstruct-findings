// roc 2007-08 00528e20  unit: seg_00520000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00528e20
//
// 00528e20  56                   push esi
// 00528e21  57                   push edi
// 00528e22  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00528e26  8b4704               mov eax, dword ptr [edi + 4]
// 00528e29  8b08                 mov ecx, dword ptr [eax]
// 00528e2b  6a30                 push 0x30
// 00528e2d  6a01                 push 1
// 00528e2f  57                   push edi
// 00528e30  ffd1                 call ecx
// 00528e32  8bf0                 mov esi, eax
// 00528e34  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 00528e3a  33c0                 xor eax, eax
// 00528e3c  c70680895200         mov dword ptr [esi], 0x528980
// 00528e42  884608               mov byte ptr [esi + 8], al
// 00528e45  8b5764               mov edx, dword ptr [edi + 0x64]
// 00528e48  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 00528e4c  83c40c               add esp, 0xc
// 00528e4f  895628               mov dword ptr [esi + 0x28], edx
// 00528e52  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 00528e59  752b                 jne 0x528e86
// 00528e5b  8bca                 mov ecx, edx
// 00528e5d  51                   push ecx
// 00528e5e  c74604a0895200       mov dword ptr [esi + 4], 0x5289a0
// 00528e65  c7460c008c5200       mov dword ptr [esi + 0xc], 0x528c00
// 00528e6c  8b4704               mov eax, dword ptr [edi + 4]
// 00528e6f  8b5004               mov edx, dword ptr [eax + 4]
// 00528e72  6a01                 push 1
// 00528e74  57                   push edi
// 00528e75  ffd2                 call edx
// 00528e77  83c40c               add esp, 0xc
// 00528e7a  894620               mov dword ptr [esi + 0x20], eax
// 00528e7d  8bc7                 mov eax, edi
// 00528e7f  5f                   pop edi
// 00528e80  5e                   pop esi
// 00528e81  e92afaffff           jmp 0x5288b0
// 00528e86  894620               mov dword ptr [esi + 0x20], eax
// 00528e89  8bc7                 mov eax, edi
// 00528e8b  5f                   pop edi
// 00528e8c  c74604708a5200       mov dword ptr [esi + 4], 0x528a70
// 00528e93  c7460cb08a5200       mov dword ptr [esi + 0xc], 0x528ab0
// 00528e9a  5e                   pop esi
// 00528e9b  e910faffff           jmp 0x5288b0
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
