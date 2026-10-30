// roc 2012-06 00a55fd0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a55fd0
//
// 00a55fd0  8b442408             mov eax, dword ptr [esp + 8]
// 00a55fd4  8b54240c             mov edx, dword ptr [esp + 0xc]
// 00a55fd8  53                   push ebx
// 00a55fd9  56                   push esi
// 00a55fda  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00a55fde  8906                 mov dword ptr [esi], eax
// 00a55fe0  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a55fe4  57                   push edi
// 00a55fe5  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 00a55fe9  895604               mov dword ptr [esi + 4], edx
// 00a55fec  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a55ff0  894608               mov dword ptr [esi + 8], eax
// 00a55ff3  57                   push edi
// 00a55ff4  89560c               mov dword ptr [esi + 0xc], edx
// 00a55ff7  e854ffffff           call 0xa55f50
// 00a55ffc  8bd8                 mov ebx, eax
// 00a55ffe  8b07                 mov eax, dword ptr [edi]
// 00a56000  8b5048               mov edx, dword ptr [eax + 0x48]
// 00a56003  8bcf                 mov ecx, edi
// 00a56005  ffd2                 call edx
// 00a56007  83f803               cmp eax, 3
// 00a5600a  7742                 ja 0xa5604e
// 00a5600c  ff24855860a500       jmp dword ptr [eax*4 + 0xa56058]
// 00a56013  8b442418             mov eax, dword ptr [esp + 0x18]
// 00a56017  03c3                 add eax, ebx
// 00a56019  89460c               mov dword ptr [esi + 0xc], eax
// 00a5601c  5f                   pop edi
// 00a5601d  8bc6                 mov eax, esi
// 00a5601f  5e                   pop esi
// 00a56020  5b                   pop ebx
// 00a56021  c21800               ret 0x18
// 00a56024  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00a56028  03cb                 add ecx, ebx
// 00a5602a  5f                   pop edi
// 00a5602b  894e08               mov dword ptr [esi + 8], ecx
// 00a5602e  8bc6                 mov eax, esi
// 00a56030  5e                   pop esi
// 00a56031  5b                   pop ebx
// 00a56032  c21800               ret 0x18
// 00a56035  8b542420             mov edx, dword ptr [esp + 0x20]
// 00a56039  2bd3                 sub edx, ebx
// 00a5603b  5f                   pop edi
// 00a5603c  895604               mov dword ptr [esi + 4], edx
// 00a5603f  8bc6                 mov eax, esi
// 00a56041  5e                   pop esi
// 00a56042  5b                   pop ebx
// 00a56043  c21800               ret 0x18
// 00a56046  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00a5604a  2bc3                 sub eax, ebx
// 00a5604c  8906                 mov dword ptr [esi], eax
// 00a5604e  5f                   pop edi
// 00a5604f  8bc6                 mov eax, esi
// 00a56051  5e                   pop esi
// 00a56052  5b                   pop ebx
// 00a56053  c21800               ret 0x18
// 00a56056  8bff                 mov edi, edi
// 00a56058  1360a5               adc esp, dword ptr [eax - 0x5b]
// 00a5605b  002460               add byte ptr [eax], ah
// 00a5605e  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// 00a5605f  003560a50046         add byte ptr [0x4600a560], dh
// 00a56065  60                   pushal 
// 00a56066  a5                   movsd dword ptr es:[edi], dword ptr [esi]
// copied from an identical function in another client (function ?GetHeaderRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/TabManager/XTPTabPaintManagerAppearance.cpp