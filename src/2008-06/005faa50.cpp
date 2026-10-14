// roc 2008-06 005faa50  unit: UString_sink::?$stream_buffer  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005faa50
//
// 005faa50  51                   push ecx
// 005faa51  d9ee                 fldz 
// 005faa53  56                   push esi
// 005faa54  57                   push edi
// 005faa55  d9542408             fst dword ptr [esp + 8]
// 005faa59  8bf9                 mov edi, ecx
// 005faa5b  8b4710               mov eax, dword ptr [edi + 0x10]
// 005faa5e  33f6                 xor esi, esi
// 005faa60  397004               cmp dword ptr [eax + 4], esi
// 005faa63  7e1d                 jle 0x5faa82
// 005faa65  8b00                 mov eax, dword ptr [eax]
// 005faa67  ddd8                 fstp st(0)
// 005faa69  8b0cb0               mov ecx, dword ptr [eax + esi*4]
// 005faa6c  e8ff9b0100           call 0x614670
// 005faa71  d8442408             fadd dword ptr [esp + 8]
// 005faa75  8b4710               mov eax, dword ptr [edi + 0x10]
// 005faa78  46                   inc esi
// 005faa79  3b7004               cmp esi, dword ptr [eax + 4]
// 005faa7c  d9542408             fst dword ptr [esp + 8]
// 005faa80  7ce3                 jl 0x5faa65
// 005faa82  5f                   pop edi
// 005faa83  5e                   pop esi
// 005faa84  59                   pop ecx
// 005faa85  c3                   ret 
// library openrbx-client/App\v8kernel\Kernel.cpp (function ?bodyKineticEnergy@Kernel@RBX@@QBEMXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD /fp:fast
// roc-lib: openrbx-client App/v8kernel/Kernel.cpp
