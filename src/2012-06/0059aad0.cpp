// roc 2012-06 0059aad0  unit: VAuthoringSettings::?$FactoryProduct  size: 148 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0059aad0
//
// 0059aad0  53                   push ebx
// 0059aad1  56                   push esi
// 0059aad2  8bf1                 mov esi, ecx
// 0059aad4  8b06                 mov eax, dword ptr [esi]
// 0059aad6  8d48ff               lea ecx, [eax - 1]
// 0059aad9  83e107               and ecx, 7
// 0059aadc  2bc1                 sub eax, ecx
// 0059aade  83c007               add eax, 7
// 0059aae1  6a18                 push 0x18
// 0059aae3  8bce                 mov ecx, esi
// 0059aae5  8906                 mov dword ptr [esi], eax
// 0059aae7  e884cefcff           call 0x567970
// 0059aaec  e8dfd0fcff           call 0x567bd0
// 0059aaf1  84c0                 test al, al
// 0059aaf3  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0059aaf7  7535                 jne 0x59ab2e
// 0059aaf9  8b16                 mov edx, dword ptr [esi]
// 0059aafb  0fb618               movzx ebx, byte ptr [eax]
// 0059aafe  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059ab01  c1ea03               shr edx, 3
// 0059ab04  881c0a               mov byte ptr [edx + ecx], bl
// 0059ab07  8b16                 mov edx, dword ptr [esi]
// 0059ab09  0fb65801             movzx ebx, byte ptr [eax + 1]
// 0059ab0d  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059ab10  c1ea03               shr edx, 3
// 0059ab13  885c0a01             mov byte ptr [edx + ecx + 1], bl
// 0059ab17  8b16                 mov edx, dword ptr [esi]
// 0059ab19  8b4e0c               mov ecx, dword ptr [esi + 0xc]
// 0059ab1c  8a4002               mov al, byte ptr [eax + 2]
// 0059ab1f  c1ea03               shr edx, 3
// 0059ab22  88440a02             mov byte ptr [edx + ecx + 2], al
// 0059ab26  830618               add dword ptr [esi], 0x18
// 0059ab29  5e                   pop esi
// 0059ab2a  5b                   pop ebx
// 0059ab2b  c20400               ret 4
// 0059ab2e  8b0e                 mov ecx, dword ptr [esi]
// 0059ab30  0fb65803             movzx ebx, byte ptr [eax + 3]
// 0059ab34  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059ab37  c1e903               shr ecx, 3
// 0059ab3a  881c11               mov byte ptr [ecx + edx], bl
// 0059ab3d  8b0e                 mov ecx, dword ptr [esi]
// 0059ab3f  0fb65802             movzx ebx, byte ptr [eax + 2]
// 0059ab43  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059ab46  c1e903               shr ecx, 3
// 0059ab49  885c1101             mov byte ptr [ecx + edx + 1], bl
// 0059ab4d  8b0e                 mov ecx, dword ptr [esi]
// 0059ab4f  8b560c               mov edx, dword ptr [esi + 0xc]
// 0059ab52  8a4001               mov al, byte ptr [eax + 1]
// 0059ab55  c1e903               shr ecx, 3
// 0059ab58  88441102             mov byte ptr [ecx + edx + 2], al
// 0059ab5c  830618               add dword ptr [esi], 0x18
// 0059ab5f  5e                   pop esi
// 0059ab60  5b                   pop ebx
// 0059ab61  c20400               ret 4
// library rbx2016-raknet/ReliabilityLayer.cpp (function ??$Write@Uuint24_t@RakNet@@@BitStream@RakNet@@QAEXABUuint24_t@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: rbx2016-raknet ReliabilityLayer.cpp
