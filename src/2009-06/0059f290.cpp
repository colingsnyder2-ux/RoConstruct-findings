// from server: 100% by auto
// roc 2009-06 0059f290  unit: seg_00590000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0059f290
//
// 0059f290  56                   push esi
// 0059f291  57                   push edi
// 0059f292  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 0059f296  8b4704               mov eax, dword ptr [edi + 4]
// 0059f299  8b08                 mov ecx, dword ptr [eax]
// 0059f29b  6a30                 push 0x30
// 0059f29d  6a01                 push 1
// 0059f29f  57                   push edi
// 0059f2a0  ffd1                 call ecx
// 0059f2a2  8bf0                 mov esi, eax
// 0059f2a4  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 0059f2aa  33c0                 xor eax, eax
// 0059f2ac  c70600ee5900         mov dword ptr [esi], 0x59ee00
// 0059f2b2  884608               mov byte ptr [esi + 8], al
// 0059f2b5  8b5764               mov edx, dword ptr [edi + 0x64]
// 0059f2b8  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 0059f2bc  83c40c               add esp, 0xc
// 0059f2bf  895628               mov dword ptr [esi + 0x28], edx
// 0059f2c2  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 0059f2c9  752b                 jne 0x59f2f6
// 0059f2cb  8bca                 mov ecx, edx
// 0059f2cd  51                   push ecx
// 0059f2ce  c7460420ee5900       mov dword ptr [esi + 4], 0x59ee20
// 0059f2d5  c7460c70f05900       mov dword ptr [esi + 0xc], 0x59f070
// 0059f2dc  8b4704               mov eax, dword ptr [edi + 4]
// 0059f2df  8b5004               mov edx, dword ptr [eax + 4]
// 0059f2e2  6a01                 push 1
// 0059f2e4  57                   push edi
// 0059f2e5  ffd2                 call edx
// 0059f2e7  83c40c               add esp, 0xc
// 0059f2ea  894620               mov dword ptr [esi + 0x20], eax
// 0059f2ed  8bc7                 mov eax, edi
// 0059f2ef  5f                   pop edi
// 0059f2f0  5e                   pop esi
// 0059f2f1  e93afaffff           jmp 0x59ed30
// 0059f2f6  894620               mov dword ptr [esi + 0x20], eax
// 0059f2f9  8bc7                 mov eax, edi
// 0059f2fb  5f                   pop edi
// 0059f2fc  c74604e0ee5900       mov dword ptr [esi + 4], 0x59eee0
// 0059f303  c7460c20ef5900       mov dword ptr [esi + 0xc], 0x59ef20
// 0059f30a  5e                   pop esi
// 0059f30b  e920faffff           jmp 0x59ed30
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
