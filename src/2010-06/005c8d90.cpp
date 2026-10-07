// roc 2010-06 005c8d90  unit: RBX::Reflection::_N::?$TypedPropertyDescriptor  size: 87 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005c8d90
//
// 005c8d90  53                   push ebx
// 005c8d91  8b5c2408             mov ebx, dword ptr [esp + 8]
// 005c8d95  57                   push edi
// 005c8d96  8b7c2410             mov edi, dword ptr [esp + 0x10]
// 005c8d9a  2bfb                 sub edi, ebx
// 005c8d9c  c1ff02               sar edi, 2
// 005c8d9f  85ff                 test edi, edi
// 005c8da1  7e3f                 jle 0x5c8de2
// 005c8da3  55                   push ebp
// 005c8da4  8b6c241c             mov ebp, dword ptr [esp + 0x1c]
// 005c8da8  56                   push esi
// 005c8da9  8da42400000000       lea esp, [esp]
// 005c8db0  8bc7                 mov eax, edi
// 005c8db2  99                   cdq 
// 005c8db3  2bc2                 sub eax, edx
// 005c8db5  8bf0                 mov esi, eax
// 005c8db7  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005c8dbb  8b08                 mov ecx, dword ptr [eax]
// 005c8dbd  d1fe                 sar esi, 1
// 005c8dbf  8b14b3               mov edx, dword ptr [ebx + esi*4]
// 005c8dc2  51                   push ecx
// 005c8dc3  52                   push edx
// 005c8dc4  ffd5                 call ebp
// 005c8dc6  83c408               add esp, 8
// 005c8dc9  84c0                 test al, al
// 005c8dcb  740d                 je 0x5c8dda
// 005c8dcd  83c8ff               or eax, 0xffffffff
// 005c8dd0  2bc6                 sub eax, esi
// 005c8dd2  8d5cb304             lea ebx, [ebx + esi*4 + 4]
// 005c8dd6  03f8                 add edi, eax
// 005c8dd8  eb02                 jmp 0x5c8ddc
// 005c8dda  8bfe                 mov edi, esi
// 005c8ddc  85ff                 test edi, edi
// 005c8dde  7fd0                 jg 0x5c8db0
// 005c8de0  5e                   pop esi
// 005c8de1  5d                   pop ebp
// 005c8de2  5f                   pop edi
// 005c8de3  8bc3                 mov eax, ebx
// 005c8de5  5b                   pop ebx
// 005c8de6  c3                   ret 
// library rbxgs/reflection\reflection_function.cpp (function ??$_Lower_bound@PAPAVFunctionDescriptor@Reflection@RBX@@PAV123@HP6A_NPBV123@0@Z@std@@YAPAPAVFunctionDescriptor@Reflection@RBX@@PAPAV123@0ABQAV123@P6A_NPBV123@2@ZPAH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/reflection_function.cpp
