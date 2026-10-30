// from server: 100% by auto
// roc 2008-06 00774c70  unit: VCEdit::?$CXTMaskEditT  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00774c70
//
// 00774c70  56                   push esi
// 00774c71  8bf1                 mov esi, ecx
// 00774c73  8b4620               mov eax, dword ptr [esi + 0x20]
// 00774c76  85c0                 test eax, eax
// 00774c78  7450                 je 0x774cca
// 00774c7a  53                   push ebx
// 00774c7b  57                   push edi
// 00774c7c  8d7e58               lea edi, [esi + 0x58]
// 00774c7f  57                   push edi
// 00774c80  8d5e54               lea ebx, [esi + 0x54]
// 00774c83  53                   push ebx
// 00774c84  68b0000000           push 0xb0
// 00774c89  50                   push eax
// 00774c8a  ff15142e8000         call dword ptr [0x802e14]
// 00774c90  8d8680000000         lea eax, [esi + 0x80]
// 00774c96  50                   push eax
// 00774c97  8bce                 mov ecx, esi
// 00774c99  e8dcbff2ff           call 0x6a0c7a
// 00774c9e  8bce                 mov ecx, esi
// 00774ca0  e80bebffff           call 0x7737b0
// 00774ca5  837c241000           cmp dword ptr [esp + 0x10], 0
// 00774caa  741c                 je 0x774cc8
// 00774cac  6a01                 push 1
// 00774cae  53                   push ebx
// 00774caf  8bce                 mov ecx, esi
// 00774cb1  e87afeffff           call 0x774b30
// 00774cb6  6a01                 push 1
// 00774cb8  57                   push edi
// 00774cb9  8bce                 mov ecx, esi
// 00774cbb  e870feffff           call 0x774b30
// 00774cc0  8b1b                 mov ebx, dword ptr [ebx]
// 00774cc2  391f                 cmp dword ptr [edi], ebx
// 00774cc4  7d02                 jge 0x774cc8
// 00774cc6  891f                 mov dword ptr [edi], ebx
// 00774cc8  5f                   pop edi
// 00774cc9  5b                   pop ebx
// 00774cca  5e                   pop esi
// 00774ccb  c20400               ret 4
// library xtp-11.2.2/Source\Controls\XTMaskEdit.cpp (function ?GetMaskState@?$CXTMaskEditT@VCEdit@@@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTMaskEdit.cpp
