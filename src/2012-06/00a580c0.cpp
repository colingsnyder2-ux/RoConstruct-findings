// from server: 100% by auto
// roc 2012-06 00a580c0  unit: VCEdit::?$CXTMaskEditT  size: 94 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a580c0
//
// 00a580c0  56                   push esi
// 00a580c1  8bf1                 mov esi, ecx
// 00a580c3  8b4620               mov eax, dword ptr [esi + 0x20]
// 00a580c6  85c0                 test eax, eax
// 00a580c8  7450                 je 0xa5811a
// 00a580ca  53                   push ebx
// 00a580cb  57                   push edi
// 00a580cc  8d7e58               lea edi, [esi + 0x58]
// 00a580cf  57                   push edi
// 00a580d0  8d5e54               lea ebx, [esi + 0x54]
// 00a580d3  53                   push ebx
// 00a580d4  68b0000000           push 0xb0
// 00a580d9  50                   push eax
// 00a580da  ff15043cb200         call dword ptr [0xb23c04]
// 00a580e0  8d8680000000         lea eax, [esi + 0x80]
// 00a580e6  50                   push eax
// 00a580e7  8bce                 mov ecx, esi
// 00a580e9  e808a6f2ff           call 0x9826f6
// 00a580ee  8bce                 mov ecx, esi
// 00a580f0  e8fbeaffff           call 0xa56bf0
// 00a580f5  837c241000           cmp dword ptr [esp + 0x10], 0
// 00a580fa  741c                 je 0xa58118
// 00a580fc  6a01                 push 1
// 00a580fe  53                   push ebx
// 00a580ff  8bce                 mov ecx, esi
// 00a58101  e87afeffff           call 0xa57f80
// 00a58106  6a01                 push 1
// 00a58108  57                   push edi
// 00a58109  8bce                 mov ecx, esi
// 00a5810b  e870feffff           call 0xa57f80
// 00a58110  8b1b                 mov ebx, dword ptr [ebx]
// 00a58112  391f                 cmp dword ptr [edi], ebx
// 00a58114  7d02                 jge 0xa58118
// 00a58116  891f                 mov dword ptr [edi], ebx
// 00a58118  5f                   pop edi
// 00a58119  5b                   pop ebx
// 00a5811a  5e                   pop esi
// 00a5811b  c20400               ret 4
// library xtp-15.2.1/Source\Controls\Deprecated\XTFlatComboBox.cpp (function ?GetMaskState@?$CXTPMaskEditT@VCEdit@@@@IAEXH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Deprecated/XTFlatComboBox.cpp
