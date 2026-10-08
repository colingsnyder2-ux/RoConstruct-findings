// from server: 100% by auto
// roc 2012-06 006647e0  unit: seg_00660000  size: 128 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 006647e0
//
// 006647e0  56                   push esi
// 006647e1  57                   push edi
// 006647e2  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 006647e6  8b4704               mov eax, dword ptr [edi + 4]
// 006647e9  8b08                 mov ecx, dword ptr [eax]
// 006647eb  6a30                 push 0x30
// 006647ed  6a01                 push 1
// 006647ef  57                   push edi
// 006647f0  ffd1                 call ecx
// 006647f2  8bf0                 mov esi, eax
// 006647f4  89b7a0010000         mov dword ptr [edi + 0x1a0], esi
// 006647fa  33c0                 xor eax, eax
// 006647fc  c70650436600         mov dword ptr [esi], 0x664350
// 00664802  884608               mov byte ptr [esi + 8], al
// 00664805  8b5764               mov edx, dword ptr [edi + 0x64]
// 00664808  0faf575c             imul edx, dword ptr [edi + 0x5c]
// 0066480c  83c40c               add esp, 0xc
// 0066480f  895628               mov dword ptr [esi + 0x28], edx
// 00664812  83bf1401000002       cmp dword ptr [edi + 0x114], 2
// 00664819  752b                 jne 0x664846
// 0066481b  8bca                 mov ecx, edx
// 0066481d  51                   push ecx
// 0066481e  c7460470436600       mov dword ptr [esi + 4], 0x664370
// 00664825  c7460cc0456600       mov dword ptr [esi + 0xc], 0x6645c0
// 0066482c  8b4704               mov eax, dword ptr [edi + 4]
// 0066482f  8b5004               mov edx, dword ptr [eax + 4]
// 00664832  6a01                 push 1
// 00664834  57                   push edi
// 00664835  ffd2                 call edx
// 00664837  83c40c               add esp, 0xc
// 0066483a  894620               mov dword ptr [esi + 0x20], eax
// 0066483d  8bc7                 mov eax, edi
// 0066483f  5f                   pop edi
// 00664840  5e                   pop esi
// 00664841  e93afaffff           jmp 0x664280
// 00664846  894620               mov dword ptr [esi + 0x20], eax
// 00664849  8bc7                 mov eax, edi
// 0066484b  5f                   pop edi
// 0066484c  c7460430446600       mov dword ptr [esi + 4], 0x664430
// 00664853  c7460c70446600       mov dword ptr [esi + 0xc], 0x664470
// 0066485a  5e                   pop esi
// 0066485b  e920faffff           jmp 0x664280
// library jpeg-6b/jdmerge.c (function _jinit_merged_upsampler)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: jpeg-6b jdmerge.c
