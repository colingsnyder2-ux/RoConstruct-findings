// roc 2007-03 00631020  unit: seg_00630000  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00631020
//
// 00631020  56                   push esi
// 00631021  57                   push edi
// 00631022  8bf9                 mov edi, ecx
// 00631024  33f6                 xor esi, esi
// 00631026  397764               cmp dword ptr [edi + 0x64], esi
// 00631029  7e28                 jle 0x631053
// 0063102b  53                   push ebx
// 0063102c  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00631030  85f6                 test esi, esi
// 00631032  7c24                 jl 0x631058
// 00631034  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00631037  7d1f                 jge 0x631058
// 00631039  8b4760               mov eax, dword ptr [edi + 0x60]
// 0063103c  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 0063103f  8b11                 mov edx, dword ptr [ecx]
// 00631041  8b8234010000         mov eax, dword ptr [edx + 0x134]
// 00631047  53                   push ebx
// 00631048  ffd0                 call eax
// 0063104a  83c601               add esi, 1
// 0063104d  3b7764               cmp esi, dword ptr [edi + 0x64]
// 00631050  7cde                 jl 0x631030
// 00631052  5b                   pop ebx
// 00631053  5f                   pop edi
// 00631054  5e                   pop esi
// 00631055  c20400               ret 4
// 00631058  e851d3feff           call 0x61e3ae
// copied from an identical function in another client (function ?OnChanged@CXTPControlAction@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/CommandBars/XTPControl.cpp