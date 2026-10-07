// roc 2012-06 0059b810  unit: VAuthoringSettings::?$FactoryProduct  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059b810
//
// 0059b810  83ec10               sub esp, 0x10
// 0059b813  8b442414             mov eax, dword ptr [esp + 0x14]
// 0059b817  53                   push ebx
// 0059b818  55                   push ebp
// 0059b819  56                   push esi
// 0059b81a  8b31                 mov esi, dword ptr [ecx]
// 0059b81c  c1e004               shl eax, 4
// 0059b81f  8b543008             mov edx, dword ptr [eax + esi + 8]
// 0059b823  8b5c3004             mov ebx, dword ptr [eax + esi + 4]
// 0059b827  03c6                 add eax, esi
// 0059b829  89542414             mov dword ptr [esp + 0x14], edx
// 0059b82d  8b500c               mov edx, dword ptr [eax + 0xc]
// 0059b830  89542418             mov dword ptr [esp + 0x18], edx
// 0059b834  8b542424             mov edx, dword ptr [esp + 0x24]
// 0059b838  c1e204               shl edx, 4
// 0059b83b  8b2c32               mov ebp, dword ptr [edx + esi]
// 0059b83e  57                   push edi
// 0059b83f  8b38                 mov edi, dword ptr [eax]
// 0059b841  8928                 mov dword ptr [eax], ebp
// 0059b843  8b6c3204             mov ebp, dword ptr [edx + esi + 4]
// 0059b847  896804               mov dword ptr [eax + 4], ebp
// 0059b84a  8b6c3208             mov ebp, dword ptr [edx + esi + 8]
// 0059b84e  896808               mov dword ptr [eax + 8], ebp
// 0059b851  8b74320c             mov esi, dword ptr [edx + esi + 0xc]
// 0059b855  89700c               mov dword ptr [eax + 0xc], esi
// 0059b858  8b01                 mov eax, dword ptr [ecx]
// 0059b85a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0059b85e  03c2                 add eax, edx
// 0059b860  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0059b864  8938                 mov dword ptr [eax], edi
// 0059b866  5f                   pop edi
// 0059b867  5e                   pop esi
// 0059b868  895804               mov dword ptr [eax + 4], ebx
// 0059b86b  5d                   pop ebp
// 0059b86c  894808               mov dword ptr [eax + 8], ecx
// 0059b86f  89500c               mov dword ptr [eax + 0xc], edx
// 0059b872  5b                   pop ebx
// 0059b873  83c410               add esp, 0x10
// 0059b876  c20800               ret 8
// library rbx2016-raknet/ReliabilityLayer.cpp (function ?Swap@?$Heap@_KPAUInternalPacket@RakNet@@$0A@@DataStructures@@IAEXII@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
