// roc 2007-03 00631060  unit: seg_00630000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00631060
//
// 00631060  56                   push esi
// 00631061  57                   push edi
// 00631062  8bf9                 mov edi, ecx
// 00631064  33f6                 xor esi, esi
// 00631066  397764               cmp dword ptr [edi + 0x64], esi
// 00631069  7e28                 jle 0x631093
// 0063106b  53                   push ebx
// 0063106c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00631070  85f6                 test esi, esi
// 00631072  7c24                 jl 0x631098
// 00631074  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00631077  7d1f                 jge 0x631098
// 00631079  8b4760               mov eax, dword ptr [edi + 0x60]
// 0063107c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0063107f  8b11                 mov edx, dword ptr [ecx]
// 00631081  8b8238010000         mov eax, dword ptr [edx + 0x138]
// 00631087  53                   push ebx
// 00631088  ffd0                 call eax
// 0063108a  83c601               add esi, 1
// 0063108d  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00631090  7cde                 jl 0x631070
// 00631092  5b                   pop ebx
// 00631093  5f                   pop edi
// 00631094  5e                   pop esi
// 00631095  c20400               ret 4
// 00631098  e811d3feff           call 0x61e3ae
// copied from an identical function in another client (function ?OnChanging@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp