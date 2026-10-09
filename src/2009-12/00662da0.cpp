// roc 2009-12 00662da0  unit: RBX::Reflection::EnumDescriptor  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00662da0
//
// 00662da0  53                   push ebx
// 00662da1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00662da5  57                   push edi
// 00662da6  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 00662daa  2bfb                 sub edi, ebx
// 00662dac  c1ff02               sar edi, 2
// 00662daf  85ff                 test edi, edi
// 00662db1  7e3f                 jle 0x662df2
// 00662db3  55                   push ebp
// 00662db4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 00662db8  56                   push esi
// 00662db9  8da42400000000       lea esp, [esp]
// 00662dc0  8bc7                 mov eax, edi
// 00662dc2  99                   cdq 
// 00662dc3  2bc2                 sub eax, edx
// 00662dc5  8bf0                 mov esi, eax
// 00662dc7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00662dcb  8b08                 mov ecx, dword ptr [eax]
// 00662dcd  d1fe                 sar esi, 1
// 00662dcf  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 00662dd2  51                   push ecx
// 00662dd3  52                   push edx
// 00662dd4  ffd5                 call ebp
// 00662dd6  83c408               add esp, 8
// 00662dd9  84c0                 test al, al
// 00662ddb  740d                 je 0x662dea
// 00662ddd  83c8ff               or eax, 0xffffffff
// 00662de0  2bc6                 sub eax, esi
// 00662de2  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 00662de6  03f8                 add edi, eax
// 00662de8  eb02                 jmp 0x662dec
// 00662dea  8bfe                 mov edi, esi
// 00662dec  85ff                 test edi, edi
// 00662dee  7fd0                 jg 0x662dc0
// 00662df0  5e                   pop esi
// 00662df1  5d                   pop ebp
// 00662df2  5f                   pop edi
// 00662df3  8bc3                 mov eax, ebx
// 00662df5  5b                   pop ebx
// 00662df6  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??$_Lower_bound@PAPAVFunctionDescriptor@Reflection@RBX@@PAV123@HP6A_NPBV123@0@Z@std@@YAPAPAVFunctionDescriptor@Reflection@RBX@@PAPAV123@0ABQAV123@P6A_NPBV123@2@ZPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
