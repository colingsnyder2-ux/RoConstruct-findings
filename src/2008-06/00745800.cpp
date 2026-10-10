// roc 2008-06 00745800  unit: CXTPToolBar::CControlButtonHide  size: 190 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00745800
//
// 00745800  53                   push ebx
// 00745801  56                   push esi
// 00745802  8bf1                 mov esi, ecx
// 00745804  8b869c000000         mov eax, dword ptr [esi + 0x9c]
// 0074580a  57                   push edi
// 0074580b  83f8ff               cmp eax, -1
// 0074580e  750f                 jne 0x74581f
// 00745810  8b8e5c010000         mov ecx, dword ptr [esi + 0x15c]
// 00745816  85c9                 test ecx, ecx
// 00745818  7405                 je 0x74581f
// 0074581a  e8a15ff6ff           call 0x6ab7c0
// 0074581f  85c0                 test eax, eax
// 00745821  0f8491000000         je 0x7458b8
// 00745827  8bce                 mov ecx, esi
// 00745829  e89259f6ff           call 0x6ab1c0
// 0074582e  85c0                 test eax, eax
// 00745830  743f                 je 0x745871
// 00745832  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00745838  6a00                 push 0
// 0074583a  6aff                 push -1
// 0074583c  e88f16f7ff           call 0x6b6ed0
// 00745841  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 00745847  8b01                 mov eax, dword ptr [ecx]
// 00745849  8b9050010000         mov edx, dword ptr [eax + 0x150]
// 0074584f  6a00                 push 0
// 00745851  6aff                 push -1
// 00745853  ffd2                 call edx
// 00745855  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00745859  8b06                 mov eax, dword ptr [esi]
// 0074585b  8b542414             mov edx, dword ptr [esp + 0x14]
// 0074585f  8b8008010000         mov eax, dword ptr [eax + 0x108]
// 00745865  51                   push ecx
// 00745866  52                   push edx
// 00745867  8bce                 mov ecx, esi
// 00745869  ffd0                 call eax
// 0074586b  5f                   pop edi
// 0074586c  5e                   pop esi
// 0074586d  5b                   pop ebx
// 0074586e  c20c00               ret 0xc
// 00745871  837c241000           cmp dword ptr [esp + 0x10], 0
// 00745876  7534                 jne 0x7458ac
// 00745878  8b8e00010000         mov ecx, dword ptr [esi + 0x100]
// 0074587e  83b9f800000002       cmp dword ptr [ecx + 0xf8], 2
// 00745885  7431                 je 0x7458b8
// 00745887  83ec10               sub esp, 0x10
// 0074588a  8bc4                 mov eax, esp
// 0074588c  33c9                 xor ecx, ecx
// 0074588e  8908                 mov dword ptr [eax], ecx
// 00745890  33d2                 xor edx, edx
// 00745892  33ff                 xor edi, edi
// 00745894  895004               mov dword ptr [eax + 4], edx
// 00745897  33db                 xor ebx, ebx
// 00745899  897808               mov dword ptr [eax + 8], edi
// 0074589c  8bce                 mov ecx, esi
// 0074589e  89580c               mov dword ptr [eax + 0xc], ebx
// 007458a1  e8aa7bf6ff           call 0x6ad450
// 007458a6  5f                   pop edi
// 007458a7  5e                   pop esi
// 007458a8  5b                   pop ebx
// 007458a9  c20c00               ret 0xc
// 007458ac  8b16                 mov edx, dword ptr [esi]
// 007458ae  8b8298000000         mov eax, dword ptr [edx + 0x98]
// 007458b4  8bce                 mov ecx, esi
// 007458b6  ffd0                 call eax
// 007458b8  5f                   pop edi
// 007458b9  5e                   pop esi
// 007458ba  5b                   pop ebx
// 007458bb  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPControlButton.cpp (function ?OnClick@CXTPControlButton@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPControlButton.cpp
