// from server: 100% by auto
// roc 2009-06 00676ca0  unit: RBX::Assembly  size: 217 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00676ca0
//
// 00676ca0  83ec08               sub esp, 8
// 00676ca3  53                   push ebx
// 00676ca4  8b5c2410             mov ebx, dword ptr [esp + 0x10]
// 00676ca8  55                   push ebp
// 00676ca9  8b6c2420             mov ebp, dword ptr [esp + 0x20]
// 00676cad  56                   push esi
// 00676cae  57                   push edi
// 00676caf  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00676cb3  8bc7                 mov eax, edi
// 00676cb5  2bc3                 sub eax, ebx
// 00676cb7  c1f802               sar eax, 2
// 00676cba  83f820               cmp eax, 0x20
// 00676cbd  7e6d                 jle 0x676d2c
// 00676cbf  8b742424             mov esi, dword ptr [esp + 0x24]
// 00676cc3  85f6                 test esi, esi
// 00676cc5  7e7f                 jle 0x676d46
// 00676cc7  55                   push ebp
// 00676cc8  57                   push edi
// 00676cc9  8d442418             lea eax, [esp + 0x18]
// 00676ccd  53                   push ebx
// 00676cce  50                   push eax
// 00676ccf  e83cfbffff           call 0x676810
// 00676cd4  8bc6                 mov eax, esi
// 00676cd6  99                   cdq 
// 00676cd7  2bc2                 sub eax, edx
// 00676cd9  d1f8                 sar eax, 1
// 00676cdb  8bf0                 mov esi, eax
// 00676cdd  99                   cdq 
// 00676cde  2bc2                 sub eax, edx
// 00676ce0  8b542420             mov edx, dword ptr [esp + 0x20]
// 00676ce4  d1f8                 sar eax, 1
// 00676ce6  03f0                 add esi, eax
// 00676ce8  8b442424             mov eax, dword ptr [esp + 0x24]
// 00676cec  8bcf                 mov ecx, edi
// 00676cee  83c410               add esp, 0x10
// 00676cf1  2bc8                 sub ecx, eax
// 00676cf3  2bd3                 sub edx, ebx
// 00676cf5  83e1fc               and ecx, 0xfffffffc
// 00676cf8  83e2fc               and edx, 0xfffffffc
// 00676cfb  3bd1                 cmp edx, ecx
// 00676cfd  55                   push ebp
// 00676cfe  56                   push esi
// 00676cff  7d11                 jge 0x676d12
// 00676d01  8b442418             mov eax, dword ptr [esp + 0x18]
// 00676d05  50                   push eax
// 00676d06  53                   push ebx
// 00676d07  e894ffffff           call 0x676ca0
// 00676d0c  8b5c2424             mov ebx, dword ptr [esp + 0x24]
// 00676d10  eb0b                 jmp 0x676d1d
// 00676d12  57                   push edi
// 00676d13  50                   push eax
// 00676d14  e887ffffff           call 0x676ca0
// 00676d19  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00676d1d  8bc7                 mov eax, edi
// 00676d1f  2bc3                 sub eax, ebx
// 00676d21  c1f802               sar eax, 2
// 00676d24  83c410               add esp, 0x10
// 00676d27  83f820               cmp eax, 0x20
// 00676d2a  7f97                 jg 0x676cc3
// 00676d2c  83f801               cmp eax, 1
// 00676d2f  7e0d                 jle 0x676d3e
// 00676d31  6a00                 push 0
// 00676d33  55                   push ebp
// 00676d34  57                   push edi
// 00676d35  53                   push ebx
// 00676d36  e885f8ffff           call 0x6765c0
// 00676d3b  83c410               add esp, 0x10
// 00676d3e  5f                   pop edi
// 00676d3f  5e                   pop esi
// 00676d40  5d                   pop ebp
// 00676d41  5b                   pop ebx
// 00676d42  83c408               add esp, 8
// 00676d45  c3                   ret 
// 00676d46  83f820               cmp eax, 0x20
// 00676d49  7ee1                 jle 0x676d2c
// 00676d4b  8bcf                 mov ecx, edi
// 00676d4d  2bcb                 sub ecx, ebx
// 00676d4f  83e1fc               and ecx, 0xfffffffc
// 00676d52  83f904               cmp ecx, 4
// 00676d55  7e0f                 jle 0x676d66
// 00676d57  6a00                 push 0
// 00676d59  6a00                 push 0
// 00676d5b  55                   push ebp
// 00676d5c  57                   push edi
// 00676d5d  53                   push ebx
// 00676d5e  e81df8ffff           call 0x676580
// 00676d63  83c414               add esp, 0x14
// 00676d66  55                   push ebp
// 00676d67  57                   push edi
// 00676d68  53                   push ebx
// 00676d69  e882fdffff           call 0x676af0
// 00676d6e  83c40c               add esp, 0xc
// 00676d71  5f                   pop edi
// 00676d72  5e                   pop esi
// 00676d73  5d                   pop ebp
// 00676d74  5b                   pop ebx
// 00676d75  83c408               add esp, 8
// 00676d78  c3                   ret 
// library g3d-6.09/GLG3Dcpp\PosedModel.cpp (function ??$_Sort@PAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@HP6A_NABV12@0@Z@std@@YAXPAV?$ReferenceCountedPointer@VPosedModel2D@G3D@@@G3D@@0HP6A_NABV12@1@Z@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/PosedModel.cpp
