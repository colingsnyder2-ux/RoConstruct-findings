// roc 2007-03 0056fbc0  unit: seg_00560000  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0056fbc0
//
// 0056fbc0  53                   push ebx
// 0056fbc1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0056fbc5  57                   push edi
// 0056fbc6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056fbca  2bfb                 sub edi, ebx
// 0056fbcc  c1ff02               sar edi, 2
// 0056fbcf  85ff                 test edi, edi
// 0056fbd1  7e3f                 jle 0x56fc12
// 0056fbd3  55                   push ebp
// 0056fbd4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0056fbd8  56                   push esi
// 0056fbd9  8da42400000000       lea esp, [esp]
// 0056fbe0  8bc7                 mov eax, edi
// 0056fbe2  99                   cdq 
// 0056fbe3  2bc2                 sub eax, edx
// 0056fbe5  8bf0                 mov esi, eax
// 0056fbe7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056fbeb  8b08                 mov ecx, dword ptr [eax]
// 0056fbed  d1fe                 sar esi, 1
// 0056fbef  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 0056fbf2  51                   push ecx
// 0056fbf3  52                   push edx
// 0056fbf4  ffd5                 call ebp
// 0056fbf6  83c408               add esp, 8
// 0056fbf9  84c0                 test al, al
// 0056fbfb  740d                 je 0x56fc0a
// 0056fbfd  83c8ff               or eax, 0xffffffff
// 0056fc00  2bc6                 sub eax, esi
// 0056fc02  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 0056fc06  03f8                 add edi, eax
// 0056fc08  eb02                 jmp 0x56fc0c
// 0056fc0a  8bfe                 mov edi, esi
// 0056fc0c  85ff                 test edi, edi
// 0056fc0e  7fd0                 jg 0x56fbe0
// 0056fc10  5e                   pop esi
// 0056fc11  5d                   pop ebp
// 0056fc12  5f                   pop edi
// 0056fc13  8bc3                 mov eax, ebx
// 0056fc15  5b                   pop ebx
// 0056fc16  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??$_Lower_bound@PAPAVFunctionDescriptor@Reflection@RBX@@PAV123@HP6A_NPBV123@0@Z@std@@YAPAPAVFunctionDescriptor@Reflection@RBX@@PAPAV123@0ABQAV123@P6A_NPBV123@2@ZPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
