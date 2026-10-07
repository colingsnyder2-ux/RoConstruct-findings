// roc 2008-06 007917c0  unit: CXTCaptionThemeOfficeXP  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007917c0
//
// 007917c0  83ec10               sub esp, 0x10
// 007917c3  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007917c7  8b08                 mov ecx, dword ptr [eax]
// 007917c9  8b5004               mov edx, dword ptr [eax + 4]
// 007917cc  56                   push esi
// 007917cd  8b742418             mov esi, dword ptr [esp + 0x18]
// 007917d1  894c2404             mov dword ptr [esp + 4], ecx
// 007917d5  8b4808               mov ecx, dword ptr [eax + 8]
// 007917d8  57                   push edi
// 007917d9  8954240c             mov dword ptr [esp + 0xc], edx
// 007917dd  8b500c               mov edx, dword ptr [eax + 0xc]
// 007917e0  894c2410             mov dword ptr [esp + 0x10], ecx
// 007917e4  6a01                 push 1
// 007917e6  8bce                 mov ecx, esi
// 007917e8  89542418             mov dword ptr [esp + 0x18], edx
// 007917ec  e831a80200           call 0x7bc022
// 007917f1  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 007917f5  8b4770               mov eax, dword ptr [edi + 0x70]
// 007917f8  50                   push eax
// 007917f9  8d4c240c             lea ecx, [esp + 0xc]
// 007917fd  51                   push ecx
// 007917fe  8bce                 mov ecx, esi
// 00791800  e859fbf0ff           call 0x6a135e
// 00791805  80bf8100000000       cmp byte ptr [edi + 0x81], 0
// 0079180c  7534                 jne 0x791842
// 0079180e  e82de5f4ff           call 0x6dfd40
// 00791813  6a10                 push 0x10
// 00791815  8bc8                 mov ecx, eax
// 00791817  e804ddf4ff           call 0x6df520
// 0079181c  8bf8                 mov edi, eax
// 0079181e  e81de5f4ff           call 0x6dfd40
// 00791823  6a14                 push 0x14
// 00791825  8bc8                 mov ecx, eax
// 00791827  e8f4dcf4ff           call 0x6df520
// 0079182c  57                   push edi
// 0079182d  50                   push eax
// 0079182e  8d542410             lea edx, [esp + 0x10]
// 00791832  52                   push edx
// 00791833  8bce                 mov ecx, esi
// 00791835  e81efbf0ff           call 0x6a1358
// 0079183a  5f                   pop edi
// 0079183b  5e                   pop esi
// 0079183c  83c410               add esp, 0x10
// 0079183f  c20c00               ret 0xc
// 00791842  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00791845  f7d8                 neg eax
// 00791847  50                   push eax
// 00791848  50                   push eax
// 00791849  8d442410             lea eax, [esp + 0x10]
// 0079184d  50                   push eax
// 0079184e  ff15282d8000         call dword ptr [0x802d28]
// 00791854  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00791857  51                   push ecx
// 00791858  8d54240c             lea edx, [esp + 0xc]
// 0079185c  52                   push edx
// 0079185d  8bce                 mov ecx, esi
// 0079185f  e8fafaf0ff           call 0x6a135e
// 00791864  5f                   pop edi
// 00791865  5e                   pop esi
// 00791866  83c410               add esp, 0x10
// 00791869  c20c00               ret 0xc
// library xtp-11.2.2/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionThemeOfficeXP@@MAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Controls/XTCaptionTheme.cpp
