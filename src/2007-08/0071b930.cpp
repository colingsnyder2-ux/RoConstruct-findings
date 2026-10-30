// from server: 100% by auto
// roc 2007-08 0071b930  unit: CXTPTabPaintManager::CColorSetDefault  size: 389 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0071b930
//
// 0071b930  8b442418             mov eax, dword ptr [esp + 0x18]
// 0071b934  53                   push ebx
// 0071b935  55                   push ebp
// 0071b936  56                   push esi
// 0071b937  57                   push edi
// 0071b938  8b7860               mov edi, dword ptr [eax + 0x60]
// 0071b93b  394704               cmp dword ptr [edi + 4], eax
// 0071b93e  8bf1                 mov esi, ecx
// 0071b940  0f84ad000000         je 0x71b9f3
// 0071b946  8b07                 mov eax, dword ptr [edi]
// 0071b948  8b5048               mov edx, dword ptr [eax + 0x48]
// 0071b94b  8bcf                 mov ecx, edi
// 0071b94d  ffd2                 call edx
// 0071b94f  83f802               cmp eax, 2
// 0071b952  740d                 je 0x71b961
// 0071b954  8b07                 mov eax, dword ptr [edi]
// 0071b956  8b5048               mov edx, dword ptr [eax + 0x48]
// 0071b959  8bcf                 mov ecx, edi
// 0071b95b  ffd2                 call edx
// 0071b95d  85c0                 test eax, eax
// 0071b95f  7549                 jne 0x71b9aa
// 0071b961  e80ad6f4ff           call 0x668f70
// 0071b966  6a14                 push 0x14
// 0071b968  8bc8                 mov ecx, eax
// 0071b96a  e801cef4ff           call 0x668770
// 0071b96f  8bf0                 mov esi, eax
// 0071b971  e8fad5f4ff           call 0x668f70
// 0071b976  6a10                 push 0x10
// 0071b978  8bc8                 mov ecx, eax
// 0071b97a  e8f1cdf4ff           call 0x668770
// 0071b97f  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071b983  8b542420             mov edx, dword ptr [esp + 0x20]
// 0071b987  56                   push esi
// 0071b988  50                   push eax
// 0071b989  8b442424             mov eax, dword ptr [esp + 0x24]
// 0071b98d  2bc8                 sub ecx, eax
// 0071b98f  83e904               sub ecx, 4
// 0071b992  51                   push ecx
// 0071b993  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071b997  6a02                 push 2
// 0071b999  83c002               add eax, 2
// 0071b99c  50                   push eax
// 0071b99d  52                   push edx
// 0071b99e  e81fd20100           call 0x738bc2
// 0071b9a3  5f                   pop edi
// 0071b9a4  5e                   pop esi
// 0071b9a5  5d                   pop ebp
// 0071b9a6  5b                   pop ebx
// 0071b9a7  c21800               ret 0x18
// 0071b9aa  e8c1d5f4ff           call 0x668f70
// 0071b9af  6a14                 push 0x14
// 0071b9b1  8bc8                 mov ecx, eax
// 0071b9b3  e8b8cdf4ff           call 0x668770
// 0071b9b8  8bf0                 mov esi, eax
// 0071b9ba  e8b1d5f4ff           call 0x668f70
// 0071b9bf  6a10                 push 0x10
// 0071b9c1  8bc8                 mov ecx, eax
// 0071b9c3  e8a8cdf4ff           call 0x668770
// 0071b9c8  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 0071b9cc  8b542424             mov edx, dword ptr [esp + 0x24]
// 0071b9d0  56                   push esi
// 0071b9d1  50                   push eax
// 0071b9d2  8b442420             mov eax, dword ptr [esp + 0x20]
// 0071b9d6  2bc8                 sub ecx, eax
// 0071b9d8  6a02                 push 2
// 0071b9da  83e904               sub ecx, 4
// 0071b9dd  51                   push ecx
// 0071b9de  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 0071b9e2  52                   push edx
// 0071b9e3  83c002               add eax, 2
// 0071b9e6  50                   push eax
// 0071b9e7  e8d6d10100           call 0x738bc2
// 0071b9ec  5f                   pop edi
// 0071b9ed  5e                   pop esi
// 0071b9ee  5d                   pop ebp
// 0071b9ef  5b                   pop ebx
// 0071b9f0  c21800               ret 0x18
// 0071b9f3  8b8e04020000         mov ecx, dword ptr [esi + 0x204]
// 0071b9f9  83793400             cmp dword ptr [ecx + 0x34], 0
// 0071b9fd  741d                 je 0x71ba1c
// 0071b9ff  8b16                 mov edx, dword ptr [esi]
// 0071ba01  50                   push eax
// 0071ba02  8b4224               mov eax, dword ptr [edx + 0x24]
// 0071ba05  8bce                 mov ecx, esi
// 0071ba07  ffd0                 call eax
// 0071ba09  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0071ba0d  50                   push eax
// 0071ba0e  8d4c241c             lea ecx, [esp + 0x1c]
// 0071ba12  51                   push ecx
// 0071ba13  8bcf                 mov ecx, edi
// 0071ba15  e8964ef1ff           call 0x6308b0
// 0071ba1a  eb5e                 jmp 0x71ba7a
// 0071ba1c  8b86f8000000         mov eax, dword ptr [esi + 0xf8]
// 0071ba22  83f8ff               cmp eax, -1
// 0071ba25  7508                 jne 0x71ba2f
// 0071ba27  8baef4000000         mov ebp, dword ptr [esi + 0xf4]
// 0071ba2d  eb02                 jmp 0x71ba31
// 0071ba2f  8be8                 mov ebp, eax
// 0071ba31  8b9eec000000         mov ebx, dword ptr [esi + 0xec]
// 0071ba37  83fbff               cmp ebx, -1
// 0071ba3a  7506                 jne 0x71ba42
// 0071ba3c  8b9ee8000000         mov ebx, dword ptr [esi + 0xe8]
// 0071ba42  8b17                 mov edx, dword ptr [edi]
// 0071ba44  8b4248               mov eax, dword ptr [edx + 0x48]
// 0071ba47  8bcf                 mov ecx, edi
// 0071ba49  ffd0                 call eax
// 0071ba4b  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0071ba4f  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 0071ba53  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0071ba57  50                   push eax
// 0071ba58  55                   push ebp
// 0071ba59  53                   push ebx
// 0071ba5a  83ec10               sub esp, 0x10
// 0071ba5d  8bc4                 mov eax, esp
// 0071ba5f  8908                 mov dword ptr [eax], ecx
// 0071ba61  8b4c243c             mov ecx, dword ptr [esp + 0x3c]
// 0071ba65  895004               mov dword ptr [eax + 4], edx
// 0071ba68  8b542440             mov edx, dword ptr [esp + 0x40]
// 0071ba6c  894808               mov dword ptr [eax + 8], ecx
// 0071ba6f  57                   push edi
// 0071ba70  8bce                 mov ecx, esi
// 0071ba72  89500c               mov dword ptr [eax + 0xc], edx
// 0071ba75  e896fbffff           call 0x71b610
// 0071ba7a  8b8618010000         mov eax, dword ptr [esi + 0x118]
// 0071ba80  83f8ff               cmp eax, -1
// 0071ba83  7508                 jne 0x71ba8d
// 0071ba85  8b8e14010000         mov ecx, dword ptr [esi + 0x114]
// 0071ba8b  eb02                 jmp 0x71ba8f
// 0071ba8d  8bc8                 mov ecx, eax
// 0071ba8f  8b860c010000         mov eax, dword ptr [esi + 0x10c]
// 0071ba95  83f8ff               cmp eax, -1
// 0071ba98  7506                 jne 0x71baa0
// 0071ba9a  8b8608010000         mov eax, dword ptr [esi + 0x108]
// 0071baa0  51                   push ecx
// 0071baa1  50                   push eax
// 0071baa2  8d442420             lea eax, [esp + 0x20]
// 0071baa6  50                   push eax
// 0071baa7  8bcf                 mov ecx, edi
// 0071baa9  e8fc4df1ff           call 0x6308aa
// 0071baae  5f                   pop edi
// 0071baaf  5e                   pop esi
// 0071bab0  5d                   pop ebp
// 0071bab1  5b                   pop ebx
// 0071bab2  c21800               ret 0x18
// library xtp-11.2.2-vc8/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillStateButton@CColorSet@CXTPTabPaintManager@@UAEXPAVCDC@@VCRect@@PAVCXTPTabManagerItem@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/TabManager/XTPTabPaintManagerColors.cpp
