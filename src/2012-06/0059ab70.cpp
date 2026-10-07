// roc 2012-06 0059ab70  unit: VAuthoringSettings::?$FactoryProduct  size: 157 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059ab70
//
// 0059ab70  56                   push esi
// 0059ab71  8bf1                 mov esi, ecx
// 0059ab73  8b4608               mov eax, dword ptr [esi + 8]
// 0059ab76  8d48ff               lea ecx, [eax - 1]
// 0059ab79  83e107               and ecx, 7
// 0059ab7c  2bc1                 sub eax, ecx
// 0059ab7e  83c007               add eax, 7
// 0059ab81  894608               mov dword ptr [esi + 8], eax
// 0059ab84  83c018               add eax, 0x18
// 0059ab87  3b06                 cmp eax, dword ptr [esi]
// 0059ab89  7606                 jbe 0x59ab91
// 0059ab8b  32c0                 xor al, al
// 0059ab8d  5e                   pop esi
// 0059ab8e  c20400               ret 4
// 0059ab91  e83ad0fcff           call 0x567bd0
// 0059ab96  8b5608               mov edx, dword ptr [esi + 8]
// 0059ab99  c1ea03               shr edx, 3
// 0059ab9c  84c0                 test al, al
// 0059ab9e  8b460c               mov eax, dword ptr [esi + 0xc]
// 0059aba1  0fb60c02             movzx ecx, byte ptr [edx + eax]
// 0059aba5  8b442408             mov eax, dword ptr [esp + 8]
// 0059aba9  7531                 jne 0x59abdc
// 0059abab  8808                 mov byte ptr [eax], cl
// 0059abad  8b5608               mov edx, dword ptr [esi + 8]
// 0059abb0  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059abb3  c1ea03               shr edx, 3
// 0059abb6  8a540a01             mov dl, byte ptr [edx + ecx + 1]
// 0059abba  885001               mov byte ptr [eax + 1], dl
// 0059abbd  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059abc0  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059abc3  c1e903               shr ecx, 3
// 0059abc6  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0059abcb  884802               mov byte ptr [eax + 2], cl
// 0059abce  c6400300             mov byte ptr [eax + 3], 0
// 0059abd2  83460818             add dword ptr [esi + 8], 0x18
// 0059abd6  b001                 mov al, 1
// 0059abd8  5e                   pop esi
// 0059abd9  c20400               ret 4
// 0059abdc  884803               mov byte ptr [eax + 3], cl
// 0059abdf  8b5608               mov edx, dword ptr [esi + 8]
// 0059abe2  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059abe5  c1ea03               shr edx, 3
// 0059abe8  8a540a01             mov dl, byte ptr [edx + ecx + 1]
// 0059abec  885002               mov byte ptr [eax + 2], dl
// 0059abef  8b4e08               mov ecx, dword ptr [esi + 8]
// 0059abf2  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059abf5  c1e903               shr ecx, 3
// 0059abf8  0fb64c1102           movzx ecx, byte ptr [ecx + edx + 2]
// 0059abfd  884801               mov byte ptr [eax + 1], cl
// 0059ac00  c60000               mov byte ptr [eax], 0
// 0059ac03  83460818             add dword ptr [esi + 8], 0x18
// 0059ac07  b001                 mov al, 1
// 0059ac09  5e                   pop esi
// 0059ac0a  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??$Read@Uuint24_t@RakNet@@@BitStream@RakNet@@QAE_NAAUuint24_t@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
