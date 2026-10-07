// roc 2009-06 005f8a60  unit: RBX::Reflection::EnumDescriptor  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 005f8a60
//
// 005f8a60  53                   push ebx
// 005f8a61  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005f8a65  57                   push edi
// 005f8a66  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005f8a6a  2bfb                 sub edi, ebx
// 005f8a6c  c1ff02               sar edi, 2
// 005f8a6f  85ff                 test edi, edi
// 005f8a71  7e3f                 jle 0x5f8ab2
// 005f8a73  55                   push ebp
// 005f8a74  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005f8a78  56                   push esi
// 005f8a79  8da42400000000       lea esp, [esp]
// 005f8a80  8bc7                 mov eax, edi
// 005f8a82  99                   cdq 
// 005f8a83  2bc2                 sub eax, edx
// 005f8a85  8bf0                 mov esi, eax
// 005f8a87  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f8a8b  8b08                 mov ecx, dword ptr [eax]
// 005f8a8d  d1fe                 sar esi, 1
// 005f8a8f  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 005f8a92  51                   push ecx
// 005f8a93  52                   push edx
// 005f8a94  ffd5                 call ebp
// 005f8a96  83c408               add esp, 8
// 005f8a99  84c0                 test al, al
// 005f8a9b  740d                 je 0x5f8aaa
// 005f8a9d  83c8ff               or eax, 0xffffffff
// 005f8aa0  2bc6                 sub eax, esi
// 005f8aa2  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 005f8aa6  03f8                 add edi, eax
// 005f8aa8  eb02                 jmp 0x5f8aac
// 005f8aaa  8bfe                 mov edi, esi
// 005f8aac  85ff                 test edi, edi
// 005f8aae  7fd0                 jg 0x5f8a80
// 005f8ab0  5e                   pop esi
// 005f8ab1  5d                   pop ebp
// 005f8ab2  5f                   pop edi
// 005f8ab3  8bc3                 mov eax, ebx
// 005f8ab5  5b                   pop ebx
// 005f8ab6  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??$_Lower_bound@PAPAVFunctionDescriptor@Reflection@RBX@@PAV123@HP6A_NPBV123@0@Z@std@@YAPAPAVFunctionDescriptor@Reflection@RBX@@PAPAV123@0ABQAV123@P6A_NPBV123@2@ZPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
