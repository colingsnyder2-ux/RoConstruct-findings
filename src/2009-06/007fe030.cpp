// roc 2009-06 007fe030  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 152 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007fe030
//
// 007fe030  8b442408             mov eax, dword ptr [esp + 8]
// 007fe034  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007fe038  53                   push ebx
// 007fe039  56                   push esi
// 007fe03a  8b74240c             mov esi, dword ptr [esp + 0xc]
// 007fe03e  8906                 mov dword ptr [esi], eax
// 007fe040  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fe044  57                   push edi
// 007fe045  8b7c2424             mov edi, dword ptr [esp + 0x24]
// 007fe049  895604               mov dword ptr [esi + 4], edx
// 007fe04c  8b542420             mov edx, dword ptr [esp + 0x20]
// 007fe050  894608               mov dword ptr [esi + 8], eax
// 007fe053  57                   push edi
// 007fe054  89560c               mov dword ptr [esi + 0xc], edx
// 007fe057  e854ffffff           call 0x7fdfb0
// 007fe05c  8bd8                 mov ebx, eax
// 007fe05e  8b07                 mov eax, dword ptr [edi]
// 007fe060  8b5048               mov edx, dword ptr [eax + 0x48]
// 007fe063  8bcf                 mov ecx, edi
// 007fe065  ffd2                 call edx
// 007fe067  83f803               cmp eax, 3
// 007fe06a  7742                 ja 0x7fe0ae
// 007fe06c  ff2485b8e07f00       jmp dword ptr [eax*4 + 0x7fe0b8]
// 007fe073  8b442418             mov eax, dword ptr [esp + 0x18]
// 007fe077  03c3                 add eax, ebx
// 007fe079  89460c               mov dword ptr [esi + 0xc], eax
// 007fe07c  5f                   pop edi
// 007fe07d  8bc6                 mov eax, esi
// 007fe07f  5e                   pop esi
// 007fe080  5b                   pop ebx
// 007fe081  c21800               ret 0x18
// 007fe084  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007fe088  03cb                 add ecx, ebx
// 007fe08a  5f                   pop edi
// 007fe08b  894e08               mov dword ptr [esi + 8], ecx
// 007fe08e  8bc6                 mov eax, esi
// 007fe090  5e                   pop esi
// 007fe091  5b                   pop ebx
// 007fe092  c21800               ret 0x18
// 007fe095  8b542420             mov edx, dword ptr [esp + 0x20]
// 007fe099  2bd3                 sub edx, ebx
// 007fe09b  5f                   pop edi
// 007fe09c  895604               mov dword ptr [esi + 4], edx
// 007fe09f  8bc6                 mov eax, esi
// 007fe0a1  5e                   pop esi
// 007fe0a2  5b                   pop ebx
// 007fe0a3  c21800               ret 0x18
// 007fe0a6  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007fe0aa  2bc3                 sub eax, ebx
// 007fe0ac  8906                 mov dword ptr [esi], eax
// 007fe0ae  5f                   pop edi
// 007fe0af  8bc6                 mov eax, esi
// 007fe0b1  5e                   pop esi
// 007fe0b2  5b                   pop ebx
// 007fe0b3  c21800               ret 0x18
// 007fe0b6  8bff                 mov edi, edi
// 007fe0b8  73e0                 jae 0x7fe09a
// 007fe0ba  7f00                 jg 0x7fe0bc
// 007fe0bc  84e0                 test al, ah
// 007fe0be  7f00                 jg 0x7fe0c0
// 007fe0c0  95                   xchg ebp, eax
// 007fe0c1  e07f                 loopne 0x7fe142
// copied from an identical function in another client (function ?GetHeaderRect@CAppearanceSet@CXTPTabPaintManager@@UAE?AVCRect@@V3@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-lib-strlen Source/TabManager/XTPTabPaintManagerAppearance.cpp