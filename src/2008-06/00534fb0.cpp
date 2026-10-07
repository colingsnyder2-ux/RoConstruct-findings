// roc 2008-06 00534fb0  unit: seg_00530000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00534fb0
//
// 00534fb0  56                   push esi
// 00534fb1  57                   push edi
// 00534fb2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 00534fb6  8b4704               mov eax, dword ptr [edi + 4]
// 00534fb9  8b08                 mov ecx, dword ptr [eax]
// 00534fbb  6a30                 push 0x30
// 00534fbd  6a01                 push 1
// 00534fbf  57                   push edi
// 00534fc0  ffd1                 call ecx
// 00534fc2  8bf0                 mov esi, eax
// 00534fc4  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 00534fca  33c0                 xor eax, eax
// 00534fcc  c706204b5300         mov dword ptr [esi], 0x534b20
// 00534fd2  884608               mov byte ptr [esi + 8], al
// 00534fd5  8b5764               mov edx, dword ptr [edi + 0x64]
// 00534fd8  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 00534fdc  83c40c               add esp, 0xc
// 00534fdf  895628               mov dword ptr [esi + 0x28], edx
// 00534fe2  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 00534fe9  752b                 jne 0x535016
// 00534feb  8bca                 mov ecx, edx
// 00534fed  51                   push ecx
// 00534fee  c74604404b5300       mov dword ptr [esi + 4], 0x534b40
// 00534ff5  c7460c904d5300       mov dword ptr [esi + 0xc], 0x534d90
// 00534ffc  8b4704               mov eax, dword ptr [edi + 4]
// 00534fff  8b5004               mov edx, dword ptr [eax + 4]
// 00535002  6a01                 push 1
// 00535004  57                   push edi
// 00535005  ffd2                 call edx
// 00535007  83c40c               add esp, 0xc
// 0053500a  894620               mov dword ptr [esi + 0x20], eax
// 0053500d  8bc7                 mov eax, edi
// 0053500f  5f                   pop edi
// 00535010  5e                   pop esi
// 00535011  e93afaffff           jmp 0x534a50
// 00535016  894620               mov dword ptr [esi + 0x20], eax
// 00535019  8bc7                 mov eax, edi
// 0053501b  5f                   pop edi
// 0053501c  c74604004c5300       mov dword ptr [esi + 4], 0x534c00
// 00535023  c7460c404c5300       mov dword ptr [esi + 0xc], 0x534c40
// 0053502a  5e                   pop esi
// 0053502b  e920faffff           jmp 0x534a50
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
