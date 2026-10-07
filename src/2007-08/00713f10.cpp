// roc 2007-08 00713f10  unit: CXTCaptionThemeOfficeXP  size: 172 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00713f10
//
// 00713f10  83ec10               sub esp, 0x10
// 00713f13  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 00713f17  8b08                 mov ecx, dword ptr [eax]
// 00713f19  8b5004               mov edx, dword ptr [eax + 4]
// 00713f1c  56                   push esi
// 00713f1d  8b742418             mov esi, dword ptr [esp + 0x18]
// 00713f21  894c2404             mov dword ptr [esp + 4], ecx
// 00713f25  8b4808               mov ecx, dword ptr [eax + 8]
// 00713f28  57                   push edi
// 00713f29  8954240c             mov dword ptr [esp + 0xc], edx
// 00713f2d  8b500c               mov edx, dword ptr [eax + 0xc]
// 00713f30  894c2410             mov dword ptr [esp + 0x10], ecx
// 00713f34  6a01                 push 1
// 00713f36  8bce                 mov ecx, esi
// 00713f38  89542418             mov dword ptr [esp + 0x18], edx
// 00713f3c  e8a7440200           call 0x7383e8
// 00713f41  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00713f45  8b4770               mov eax, dword ptr [edi + 0x70]
// 00713f48  50                   push eax
// 00713f49  8d4c240c             lea ecx, [esp + 0xc]
// 00713f4d  51                   push ecx
// 00713f4e  8bce                 mov ecx, esi
// 00713f50  e85bc9f1ff           call 0x6308b0
// 00713f55  80bf8100000000       cmp byte ptr [edi + 0x81], 0
// 00713f5c  7534                 jne 0x713f92
// 00713f5e  e80d50f5ff           call 0x668f70
// 00713f63  6a10                 push 0x10
// 00713f65  8bc8                 mov ecx, eax
// 00713f67  e80448f5ff           call 0x668770
// 00713f6c  8bf8                 mov edi, eax
// 00713f6e  e8fd4ff5ff           call 0x668f70
// 00713f73  6a14                 push 0x14
// 00713f75  8bc8                 mov ecx, eax
// 00713f77  e8f447f5ff           call 0x668770
// 00713f7c  57                   push edi
// 00713f7d  50                   push eax
// 00713f7e  8d542410             lea edx, [esp + 0x10]
// 00713f82  52                   push edx
// 00713f83  8bce                 mov ecx, esi
// 00713f85  e820c9f1ff           call 0x6308aa
// 00713f8a  5f                   pop edi
// 00713f8b  5e                   pop esi
// 00713f8c  83c410               add esp, 0x10
// 00713f8f  c20c00               ret 0xc
// 00713f92  8b476c               mov eax, dword ptr [edi + 0x6c]
// 00713f95  f7d8                 neg eax
// 00713f97  50                   push eax
// 00713f98  50                   push eax
// 00713f99  8d442410             lea eax, [esp + 0x10]
// 00713f9d  50                   push eax
// 00713f9e  ff1590ed7700         call dword ptr [0x77ed90]
// 00713fa4  8b4f74               mov ecx, dword ptr [edi + 0x74]
// 00713fa7  51                   push ecx
// 00713fa8  8d54240c             lea edx, [esp + 0xc]
// 00713fac  52                   push edx
// 00713fad  8bce                 mov ecx, esi
// 00713faf  e8fcc8f1ff           call 0x6308b0
// 00713fb4  5f                   pop edi
// 00713fb5  5e                   pop esi
// 00713fb6  83c410               add esp, 0x10
// 00713fb9  c20c00               ret 0xc
// library xtp-11.2.2-vc8/Source\Controls\XTCaptionTheme.cpp (function ?DrawCaptionBack@CXTCaptionThemeOfficeXP@@MAEXPAVCDC@@PAVCXTCaption@@AAVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-vc8 Source/Controls/XTCaptionTheme.cpp
