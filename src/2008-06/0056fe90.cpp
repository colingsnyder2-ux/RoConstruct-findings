// roc 2008-06 0056fe90  unit: RBX::W4NormalId::?$EnumDesc  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0056fe90
//
// 0056fe90  53                   push ebx
// 0056fe91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0056fe95  57                   push edi
// 0056fe96  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 0056fe9a  2bfb                 sub edi, ebx
// 0056fe9c  c1ff02               sar edi, 2
// 0056fe9f  85ff                 test edi, edi
// 0056fea1  7e3f                 jle 0x56fee2
// 0056fea3  55                   push ebp
// 0056fea4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 0056fea8  56                   push esi
// 0056fea9  8da42400000000       lea esp, [esp]
// 0056feb0  8bc7                 mov eax, edi
// 0056feb2  99                   cdq 
// 0056feb3  2bc2                 sub eax, edx
// 0056feb5  8bf0                 mov esi, eax
// 0056feb7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0056febb  8b08                 mov ecx, dword ptr [eax]
// 0056febd  d1fe                 sar esi, 1
// 0056febf  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 0056fec2  51                   push ecx
// 0056fec3  52                   push edx
// 0056fec4  ffd5                 call ebp
// 0056fec6  83c408               add esp, 8
// 0056fec9  84c0                 test al, al
// 0056fecb  740d                 je 0x56feda
// 0056fecd  83c8ff               or eax, 0xffffffff
// 0056fed0  2bc6                 sub eax, esi
// 0056fed2  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 0056fed6  03f8                 add edi, eax
// 0056fed8  eb02                 jmp 0x56fedc
// 0056feda  8bfe                 mov edi, esi
// 0056fedc  85ff                 test edi, edi
// 0056fede  7fd0                 jg 0x56feb0
// 0056fee0  5e                   pop esi
// 0056fee1  5d                   pop ebp
// 0056fee2  5f                   pop edi
// 0056fee3  8bc3                 mov eax, ebx
// 0056fee5  5b                   pop ebx
// 0056fee6  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??$_Lower_bound@PAPAVFunctionDescriptor@Reflection@RBX@@PAV123@HP6A_NPBV123@0@Z@std@@YAPAPAVFunctionDescriptor@Reflection@RBX@@PAPAV123@0ABQAV123@P6A_NPBV123@2@ZPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
