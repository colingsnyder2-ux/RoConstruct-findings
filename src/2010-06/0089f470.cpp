// roc 2010-06 0089f470  unit: RBX::Mesh::Level  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0089f470
//
// 0089f470  53                   push ebx
// 0089f471  56                   push esi
// 0089f472  57                   push edi
// 0089f473  8bf9                 mov edi, ecx
// 0089f475  33f6                 xor esi, esi
// 0089f477  e8e4ffffff           call 0x89f460
// 0089f47c  85c0                 test eax, eax
// 0089f47e  7e35                 jle 0x89f4b5
// 0089f480  8b1de0bb9e00         mov ebx, dword ptr [0x9ebbe0]
// 0089f486  85f6                 test esi, esi
// 0089f488  7c44                 jl 0x89f4ce
// 0089f48a  3b7708               cmp esi, dword ptr [edi + 8]
// 0089f48d  7d3f                 jge 0x89f4ce
// 0089f48f  8b4704               mov eax, dword ptr [edi + 4]
// 0089f492  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0089f496  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0089f499  8b542410             mov edx, dword ptr [esp + 0x10]
// 0089f49d  51                   push ecx
// 0089f49e  83c010               add eax, 0x10
// 0089f4a1  52                   push edx
// 0089f4a2  50                   push eax
// 0089f4a3  ffd3                 call ebx
// 0089f4a5  85c0                 test eax, eax
// 0089f4a7  7514                 jne 0x89f4bd
// 0089f4a9  8bcf                 mov ecx, edi
// 0089f4ab  46                   inc esi
// 0089f4ac  e8afffffff           call 0x89f460
// 0089f4b1  3bf0                 cmp esi, eax
// 0089f4b3  7cd1                 jl 0x89f486
// 0089f4b5  5f                   pop edi
// 0089f4b6  5e                   pop esi
// 0089f4b7  33c0                 xor eax, eax
// 0089f4b9  5b                   pop ebx
// 0089f4ba  c20800               ret 8
// 0089f4bd  3b7708               cmp esi, dword ptr [edi + 8]
// 0089f4c0  7d0c                 jge 0x89f4ce
// 0089f4c2  8b4704               mov eax, dword ptr [edi + 4]
// 0089f4c5  8b04b0               mov eax, dword ptr [eax + esi*4]
// 0089f4c8  5f                   pop edi
// 0089f4c9  5e                   pop esi
// 0089f4ca  5b                   pop ebx
// 0089f4cb  c20800               ret 8
// 0089f4ce  e87987f0ff           call 0x7a7c4c
// copied from an identical function in another client (function ?HitTest@CXTPRibbonTabContextHeaders@@QBEPAVCXTPRibbonTabContextHeader@@VCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonTab.cpp