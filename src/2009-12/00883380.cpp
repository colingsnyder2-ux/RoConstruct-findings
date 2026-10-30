// roc 2009-12 00883380  unit: XTPPaintThemes::CXTPOffice2003Theme  size: 343 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00883380
//
// 00883380  6aff                 push -1
// 00883382  68b6099600           push 0x9609b6
// 00883387  64a100000000         mov eax, dword ptr fs:[0]
// 0088338d  50                   push eax
// 0088338e  51                   push ecx
// 0088338f  53                   push ebx
// 00883390  55                   push ebp
// 00883391  56                   push esi
// 00883392  57                   push edi
// 00883393  a10052b600           mov eax, dword ptr [0xb65200]
// 00883398  33c4                 xor eax, esp
// 0088339a  50                   push eax
// 0088339b  8d442418             lea eax, [esp + 0x18]
// 0088339f  64a300000000         mov dword ptr fs:[0], eax
// 008833a5  8bf1                 mov esi, ecx
// 008833a7  89742414             mov dword ptr [esp + 0x14], esi
// 008833ab  e8c04c0000           call 0x888070
// 008833b0  8d8e5c040000         lea ecx, [esi + 0x45c]
// 008833b6  c744242000000000     mov dword ptr [esp + 0x20], 0
// 008833be  c7063428a000         mov dword ptr [esi], 0xa02834
// 008833c4  e867bafaff           call 0x82ee30
// 008833c9  8d8e7c040000         lea ecx, [esi + 0x47c]
// 008833cf  e85cbafaff           call 0x82ee30
// 008833d4  8d8e9c040000         lea ecx, [esi + 0x49c]
// 008833da  e851bafaff           call 0x82ee30
// 008833df  8d8ebc040000         lea ecx, [esi + 0x4bc]
// 008833e5  e846bafaff           call 0x82ee30
// 008833ea  8d8edc040000         lea ecx, [esi + 0x4dc]
// 008833f0  e83bbafaff           call 0x82ee30
// 008833f5  8d8efc040000         lea ecx, [esi + 0x4fc]
// 008833fb  e830bafaff           call 0x82ee30
// 00883400  8d8e1c050000         lea ecx, [esi + 0x51c]
// 00883406  e805bafaff           call 0x82ee10
// 0088340b  8d8e28050000         lea ecx, [esi + 0x528]
// 00883411  e8fab9faff           call 0x82ee10
// 00883416  8d8e34050000         lea ecx, [esi + 0x534]
// 0088341c  e8efb9faff           call 0x82ee10
// 00883421  8d8e48050000         lea ecx, [esi + 0x548]
// 00883427  e8e40bf7ff           call 0x7f4010
// 0088342c  8dbe50050000         lea edi, [esi + 0x550]
// 00883432  8bcf                 mov ecx, edi
// 00883434  c644242001           mov byte ptr [esp + 0x20], 1
// 00883439  e8f2b9faff           call 0x82ee30
// 0088343e  8d9e70050000         lea ebx, [esi + 0x570]
// 00883444  8bcb                 mov ecx, ebx
// 00883446  e8e5b9faff           call 0x82ee30
// 0088344b  8dae90050000         lea ebp, [esi + 0x590]
// 00883451  8bcd                 mov ecx, ebp
// 00883453  e8d8b9faff           call 0x82ee30
// 00883458  d905dcf29a00         fld dword ptr [0x9af2dc]
// 0088345e  51                   push ecx
// 0088345f  d91c24               fstp dword ptr [esp]
// 00883462  33c0                 xor eax, eax
// 00883464  68ffad5500           push 0x55adff
// 00883469  68ffd58c00           push 0x8cd5ff
// 0088346e  8bcf                 mov ecx, edi
// 00883470  898648010000         mov dword ptr [esi + 0x148], eax
// 00883476  898650010000         mov dword ptr [esi + 0x150], eax
// 0088347c  e8dfb9faff           call 0x82ee60
// 00883481  d905dcf29a00         fld dword ptr [0x9af2dc]
// 00883487  51                   push ecx
// 00883488  d91c24               fstp dword ptr [esp]
// 0088348b  68ffcf8b00           push 0x8bcfff
// 00883490  68fe8e4b00           push 0x4b8efe
// 00883495  8bcb                 mov ecx, ebx
// 00883497  e8c4b9faff           call 0x82ee60
// 0088349c  d905dcf29a00         fld dword ptr [0x9af2dc]
// 008834a2  51                   push ecx
// 008834a3  d91c24               fstp dword ptr [esp]
// 008834a6  68ffd49700           push 0x97d4ff
// 008834ab  68fff2c800           push 0xc8f2ff
// 008834b0  8bcd                 mov ecx, ebp
// 008834b2  e8a9b9faff           call 0x82ee60
// 008834b7  c7864405000000000000 mov dword ptr [esi + 0x544], 0
// 008834c1  8bc6                 mov eax, esi
// 008834c3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008834c7  64890d00000000       mov dword ptr fs:[0], ecx
// 008834ce  59                   pop ecx
// 008834cf  5f                   pop edi
// 008834d0  5e                   pop esi
// 008834d1  5d                   pop ebp
// 008834d2  5b                   pop ebx
// 008834d3  83c410               add esp, 0x10
// 008834d6  c3                   ret 
// copied from an identical function in another client (function ??0CXTPOffice2003Theme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPOffice2003Theme.cpp