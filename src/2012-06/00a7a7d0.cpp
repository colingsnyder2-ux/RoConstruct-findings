// roc 2012-06 00a7a7d0  unit: CXTCaptionButtonTheme  size: 293 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a7a7d0
//
// 00a7a7d0  83ec10               sub esp, 0x10
// 00a7a7d3  55                   push ebp
// 00a7a7d4  56                   push esi
// 00a7a7d5  8b742428             mov esi, dword ptr [esp + 0x28]
// 00a7a7d9  8be9                 mov ebp, ecx
// 00a7a7db  85f6                 test esi, esi
// 00a7a7dd  0f840a010000         je 0xa7a8ed
// 00a7a7e3  837d1400             cmp dword ptr [ebp + 0x14], 0
// 00a7a7e7  0f8400010000         je 0xa7a8ed
// 00a7a7ed  57                   push edi
// 00a7a7ee  8bce                 mov ecx, esi
// 00a7a7f0  e84be5e1ff           call 0x898d40
// 00a7a7f5  8bf8                 mov edi, eax
// 00a7a7f7  85ff                 test edi, edi
// 00a7a7f9  0f84ed000000         je 0xa7a8ec
// 00a7a7ff  53                   push ebx
// 00a7a800  8b5d00               mov ebx, dword ptr [ebp]
// 00a7a803  56                   push esi
// 00a7a804  8bce                 mov ecx, esi
// 00a7a806  e895fdfeff           call 0xa6a5a0
// 00a7a80b  8b542430             mov edx, dword ptr [esp + 0x30]
// 00a7a80f  85c0                 test eax, eax
// 00a7a811  0f95c0               setne al
// 00a7a814  0fb6c8               movzx ecx, al
// 00a7a817  8b44242c             mov eax, dword ptr [esp + 0x2c]
// 00a7a81b  51                   push ecx
// 00a7a81c  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 00a7a820  52                   push edx
// 00a7a821  50                   push eax
// 00a7a822  8b4350               mov eax, dword ptr [ebx + 0x50]
// 00a7a825  51                   push ecx
// 00a7a826  8d542424             lea edx, [esp + 0x24]
// 00a7a82a  52                   push edx
// 00a7a82b  8bcd                 mov ecx, ebp
// 00a7a82d  ffd0                 call eax
// 00a7a82f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00a7a833  8a5c2428             mov bl, byte ptr [esp + 0x28]
// 00a7a837  7509                 jne 0xa7a842
// 00a7a839  f6c301               test bl, 1
// 00a7a83c  7504                 jne 0xa7a842
// 00a7a83e  33ed                 xor ebp, ebp
// 00a7a840  eb0d                 jmp 0xa7a84f
// 00a7a842  bd01000000           mov ebp, 1
// 00a7a847  016c2410             add dword ptr [esp + 0x10], ebp
// 00a7a84b  016c2414             add dword ptr [esp + 0x14], ebp
// 00a7a84f  f6c304               test bl, 4
// 00a7a852  741f                 je 0xa7a873
// 00a7a854  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a858  51                   push ecx
// 00a7a859  8bce                 mov ecx, esi
// 00a7a85b  e86007ffff           call 0xa6afc0
// 00a7a860  8b5004               mov edx, dword ptr [eax + 4]
// 00a7a863  8b00                 mov eax, dword ptr [eax]
// 00a7a865  52                   push edx
// 00a7a866  50                   push eax
// 00a7a867  6a01                 push 1
// 00a7a869  8bcf                 mov ecx, edi
// 00a7a86b  e8f03df2ff           call 0x99e660
// 00a7a870  50                   push eax
// 00a7a871  eb62                 jmp 0xa7a8d5
// 00a7a873  8bce                 mov ecx, esi
// 00a7a875  e8e6edfeff           call 0xa69660
// 00a7a87a  85c0                 test eax, eax
// 00a7a87c  7521                 jne 0xa7a89f
// 00a7a87e  85ed                 test ebp, ebp
// 00a7a880  751d                 jne 0xa7a89f
// 00a7a882  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a886  51                   push ecx
// 00a7a887  8bce                 mov ecx, esi
// 00a7a889  e83207ffff           call 0xa6afc0
// 00a7a88e  8b5004               mov edx, dword ptr [eax + 4]
// 00a7a891  8b00                 mov eax, dword ptr [eax]
// 00a7a893  52                   push edx
// 00a7a894  50                   push eax
// 00a7a895  8bcf                 mov ecx, edi
// 00a7a897  e894d1f1ff           call 0x997a30
// 00a7a89c  50                   push eax
// 00a7a89d  eb36                 jmp 0xa7a8d5
// 00a7a89f  837e7c00             cmp dword ptr [esi + 0x7c], 0
// 00a7a8a3  8bcf                 mov ecx, edi
// 00a7a8a5  7407                 je 0xa7a8ae
// 00a7a8a7  e844ebf1ff           call 0x9993f0
// 00a7a8ac  eb11                 jmp 0xa7a8bf
// 00a7a8ae  f6c301               test bl, 1
// 00a7a8b1  7407                 je 0xa7a8ba
// 00a7a8b3  e858ebf1ff           call 0x999410
// 00a7a8b8  eb05                 jmp 0xa7a8bf
// 00a7a8ba  e811ebf1ff           call 0x9993d0
// 00a7a8bf  8d4c2418             lea ecx, [esp + 0x18]
// 00a7a8c3  51                   push ecx
// 00a7a8c4  8bce                 mov ecx, esi
// 00a7a8c6  8bd8                 mov ebx, eax
// 00a7a8c8  e8f306ffff           call 0xa6afc0
// 00a7a8cd  8b5004               mov edx, dword ptr [eax + 4]
// 00a7a8d0  8b00                 mov eax, dword ptr [eax]
// 00a7a8d2  52                   push edx
// 00a7a8d3  50                   push eax
// 00a7a8d4  53                   push ebx
// 00a7a8d5  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 00a7a8d9  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 00a7a8dd  8b442430             mov eax, dword ptr [esp + 0x30]
// 00a7a8e1  51                   push ecx
// 00a7a8e2  52                   push edx
// 00a7a8e3  50                   push eax
// 00a7a8e4  8bcf                 mov ecx, edi
// 00a7a8e6  e8b547f2ff           call 0x99f0a0
// 00a7a8eb  5b                   pop ebx
// 00a7a8ec  5f                   pop edi
// 00a7a8ed  5e                   pop esi
// 00a7a8ee  5d                   pop ebp
// 00a7a8ef  83c410               add esp, 0x10
// 00a7a8f2  c21000               ret 0x10
// library xtp-11.2.2/Source\Controls\XTButtonTheme.cpp (function ?DrawButtonIcon@CXTButtonTheme@@MAEXPAVCDC@@IAAVCRect@@PAVCXTButton@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTButtonTheme.cpp
