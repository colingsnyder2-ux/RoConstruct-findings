// roc 2008-06 00727a80  unit: CXTPRibbonBar  size: 236 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00727a80
//
// 00727a80  51                   push ecx
// 00727a81  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00727a85  48                   dec eax
// 00727a86  56                   push esi
// 00727a87  c744240400000000     mov dword ptr [esp + 4], 0
// 00727a8f  83f806               cmp eax, 6
// 00727a92  0f87a1000000         ja 0x727b39
// 00727a98  ff2485507b7200       jmp dword ptr [eax*4 + 0x727b50]
// 00727a9f  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727aa3  68c4168600           push 0x8616c4
// 00727aa8  8bce                 mov ecx, esi
// 00727aaa  ff15103f8000         call dword ptr [0x803f10]
// 00727ab0  8bc6                 mov eax, esi
// 00727ab2  5e                   pop esi
// 00727ab3  59                   pop ecx
// 00727ab4  c3                   ret 
// 00727ab5  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727ab9  68bc168600           push 0x8616bc
// 00727abe  8bce                 mov ecx, esi
// 00727ac0  ff15103f8000         call dword ptr [0x803f10]
// 00727ac6  8bc6                 mov eax, esi
// 00727ac8  5e                   pop esi
// 00727ac9  59                   pop ecx
// 00727aca  c3                   ret 
// 00727acb  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727acf  68b4168600           push 0x8616b4
// 00727ad4  8bce                 mov ecx, esi
// 00727ad6  ff15103f8000         call dword ptr [0x803f10]
// 00727adc  8bc6                 mov eax, esi
// 00727ade  5e                   pop esi
// 00727adf  59                   pop ecx
// 00727ae0  c3                   ret 
// 00727ae1  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727ae5  68b0168600           push 0x8616b0
// 00727aea  8bce                 mov ecx, esi
// 00727aec  ff15103f8000         call dword ptr [0x803f10]
// 00727af2  8bc6                 mov eax, esi
// 00727af4  5e                   pop esi
// 00727af5  59                   pop ecx
// 00727af6  c3                   ret 
// 00727af7  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727afb  68a8168600           push 0x8616a8
// 00727b00  8bce                 mov ecx, esi
// 00727b02  ff15103f8000         call dword ptr [0x803f10]
// 00727b08  8bc6                 mov eax, esi
// 00727b0a  5e                   pop esi
// 00727b0b  59                   pop ecx
// 00727b0c  c3                   ret 
// 00727b0d  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727b11  68a0168600           push 0x8616a0
// 00727b16  8bce                 mov ecx, esi
// 00727b18  ff15103f8000         call dword ptr [0x803f10]
// 00727b1e  8bc6                 mov eax, esi
// 00727b20  5e                   pop esi
// 00727b21  59                   pop ecx
// 00727b22  c3                   ret 
// 00727b23  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727b27  6898168600           push 0x861698
// 00727b2c  8bce                 mov ecx, esi
// 00727b2e  ff15103f8000         call dword ptr [0x803f10]
// 00727b34  8bc6                 mov eax, esi
// 00727b36  5e                   pop esi
// 00727b37  59                   pop ecx
// 00727b38  c3                   ret 
// 00727b39  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00727b3d  6816b78000           push 0x80b716
// 00727b42  8bce                 mov ecx, esi
// 00727b44  ff15103f8000         call dword ptr [0x803f10]
// 00727b4a  8bc6                 mov eax, esi
// 00727b4c  5e                   pop esi
// 00727b4d  59                   pop ecx
// 00727b4e  c3                   ret 
// 00727b4f  90                   nop 
// 00727b50  9f                   lahf 
// 00727b51  7a72                 jp 0x727bc5
// 00727b53  00b57a7200cb         add byte ptr [ebp - 0x34ff8d86], dh
// 00727b59  7a72                 jp 0x727bcd
// 00727b5b  00e1                 add cl, ah
// 00727b5d  7a72                 jp 0x727bd1
// 00727b5f  00f7                 add bh, dh
// 00727b61  7a72                 jp 0x727bd5
// 00727b63  000d7b720023         add byte ptr [0x2300727b], cl
// 00727b69  7b72                 jnp 0x727bdd
// library xtp-11.2.2-lib-strlen/Source\Ribbon\XTPRibbonTheme.cpp (function ?GetColorName@@YA?AV?$CStringT@DV?$StrTraitMFC_DLL@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@W4XTPRibbonTabContextColor@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/Ribbon/XTPRibbonTheme.cpp
