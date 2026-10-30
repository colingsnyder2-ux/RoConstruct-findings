// from server: 100% by auto
// roc 2011-06 008c6c50  unit: CXTPDockingPaneSplitterContainer  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008c6c50
//
// 008c6c50  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008c6c54  83ec08               sub esp, 8
// 008c6c57  48                   dec eax
// 008c6c58  837c241800           cmp dword ptr [esp + 0x18], 0
// 008c6c5d  56                   push esi
// 008c6c5e  8b742410             mov esi, dword ptr [esp + 0x10]
// 008c6c62  89442418             mov dword ptr [esp + 0x18], eax
// 008c6c66  0f84e5000000         je 0x8c6d51
// 008c6c6c  50                   push eax
// 008c6c6d  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6c71  83c0fc               add eax, -4
// 008c6c74  50                   push eax
// 008c6c75  8d4c240c             lea ecx, [esp + 0xc]
// 008c6c79  51                   push ecx
// 008c6c7a  8bce                 mov ecx, esi
// 008c6c7c  e8ef42f4ff           call 0x80af70
// 008c6c81  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c6c85  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c6c89  52                   push edx
// 008c6c8a  48                   dec eax
// 008c6c8b  50                   push eax
// 008c6c8c  8bce                 mov ecx, esi
// 008c6c8e  e8d742f4ff           call 0x80af6a
// 008c6c93  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c6c97  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6c9b  83c1fd               add ecx, -3
// 008c6c9e  51                   push ecx
// 008c6c9f  4a                   dec edx
// 008c6ca0  52                   push edx
// 008c6ca1  8d44240c             lea eax, [esp + 0xc]
// 008c6ca5  50                   push eax
// 008c6ca6  8bce                 mov ecx, esi
// 008c6ca8  e8c342f4ff           call 0x80af70
// 008c6cad  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c6cb1  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6cb5  83c104               add ecx, 4
// 008c6cb8  51                   push ecx
// 008c6cb9  4a                   dec edx
// 008c6cba  52                   push edx
// 008c6cbb  8bce                 mov ecx, esi
// 008c6cbd  e8a842f4ff           call 0x80af6a
// 008c6cc2  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6cc6  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6cca  83c002               add eax, 2
// 008c6ccd  50                   push eax
// 008c6cce  49                   dec ecx
// 008c6ccf  51                   push ecx
// 008c6cd0  8d54240c             lea edx, [esp + 0xc]
// 008c6cd4  52                   push edx
// 008c6cd5  8bce                 mov ecx, esi
// 008c6cd7  e89442f4ff           call 0x80af70
// 008c6cdc  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6ce0  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6ce4  83c002               add eax, 2
// 008c6ce7  83c103               add ecx, 3
// 008c6cea  50                   push eax
// 008c6ceb  51                   push ecx
// 008c6cec  8bce                 mov ecx, esi
// 008c6cee  e87742f4ff           call 0x80af6a
// 008c6cf3  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c6cf7  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c6cfb  83c2fe               add edx, -2
// 008c6cfe  52                   push edx
// 008c6cff  83c003               add eax, 3
// 008c6d02  50                   push eax
// 008c6d03  8bce                 mov ecx, esi
// 008c6d05  e86042f4ff           call 0x80af6a
// 008c6d0a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c6d0e  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6d12  83c1fe               add ecx, -2
// 008c6d15  51                   push ecx
// 008c6d16  4a                   dec edx
// 008c6d17  52                   push edx
// 008c6d18  8bce                 mov ecx, esi
// 008c6d1a  e84b42f4ff           call 0x80af6a
// 008c6d1f  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6d23  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6d27  40                   inc eax
// 008c6d28  50                   push eax
// 008c6d29  49                   dec ecx
// 008c6d2a  51                   push ecx
// 008c6d2b  8d54240c             lea edx, [esp + 0xc]
// 008c6d2f  52                   push edx
// 008c6d30  8bce                 mov ecx, esi
// 008c6d32  e83942f4ff           call 0x80af70
// 008c6d37  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6d3b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6d3f  40                   inc eax
// 008c6d40  50                   push eax
// 008c6d41  83c103               add ecx, 3
// 008c6d44  51                   push ecx
// 008c6d45  8bce                 mov ecx, esi
// 008c6d47  e81e42f4ff           call 0x80af6a
// 008c6d4c  5e                   pop esi
// 008c6d4d  83c408               add esp, 8
// 008c6d50  c3                   ret 
// 008c6d51  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6d55  83c002               add eax, 2
// 008c6d58  89442418             mov dword ptr [esp + 0x18], eax
// 008c6d5c  48                   dec eax
// 008c6d5d  50                   push eax
// 008c6d5e  83c2fd               add edx, -3
// 008c6d61  52                   push edx
// 008c6d62  8d44240c             lea eax, [esp + 0xc]
// 008c6d66  50                   push eax
// 008c6d67  8bce                 mov ecx, esi
// 008c6d69  e80242f4ff           call 0x80af70
// 008c6d6e  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c6d72  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6d76  49                   dec ecx
// 008c6d77  51                   push ecx
// 008c6d78  83c204               add edx, 4
// 008c6d7b  52                   push edx
// 008c6d7c  8bce                 mov ecx, esi
// 008c6d7e  e8e741f4ff           call 0x80af6a
// 008c6d83  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6d87  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6d8b  48                   dec eax
// 008c6d8c  50                   push eax
// 008c6d8d  51                   push ecx
// 008c6d8e  8d54240c             lea edx, [esp + 0xc]
// 008c6d92  52                   push edx
// 008c6d93  8bce                 mov ecx, esi
// 008c6d95  e8d641f4ff           call 0x80af70
// 008c6d9a  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6d9e  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6da2  83c003               add eax, 3
// 008c6da5  50                   push eax
// 008c6da6  51                   push ecx
// 008c6da7  8bce                 mov ecx, esi
// 008c6da9  e8bc41f4ff           call 0x80af6a
// 008c6dae  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c6db2  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c6db6  4a                   dec edx
// 008c6db7  52                   push edx
// 008c6db8  83c0fe               add eax, -2
// 008c6dbb  50                   push eax
// 008c6dbc  8d4c240c             lea ecx, [esp + 0xc]
// 008c6dc0  51                   push ecx
// 008c6dc1  8bce                 mov ecx, esi
// 008c6dc3  e8a841f4ff           call 0x80af70
// 008c6dc8  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c6dcc  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c6dd0  83c2fa               add edx, -6
// 008c6dd3  52                   push edx
// 008c6dd4  83c0fe               add eax, -2
// 008c6dd7  50                   push eax
// 008c6dd8  8bce                 mov ecx, esi
// 008c6dda  e88b41f4ff           call 0x80af6a
// 008c6ddf  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 008c6de3  8b542414             mov edx, dword ptr [esp + 0x14]
// 008c6de7  83c1fa               add ecx, -6
// 008c6dea  51                   push ecx
// 008c6deb  83c202               add edx, 2
// 008c6dee  52                   push edx
// 008c6def  8bce                 mov ecx, esi
// 008c6df1  e87441f4ff           call 0x80af6a
// 008c6df6  8b442418             mov eax, dword ptr [esp + 0x18]
// 008c6dfa  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 008c6dfe  48                   dec eax
// 008c6dff  83c102               add ecx, 2
// 008c6e02  50                   push eax
// 008c6e03  51                   push ecx
// 008c6e04  8bce                 mov ecx, esi
// 008c6e06  e85f41f4ff           call 0x80af6a
// 008c6e0b  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c6e0f  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c6e13  4a                   dec edx
// 008c6e14  52                   push edx
// 008c6e15  40                   inc eax
// 008c6e16  50                   push eax
// 008c6e17  8d4c240c             lea ecx, [esp + 0xc]
// 008c6e1b  51                   push ecx
// 008c6e1c  8bce                 mov ecx, esi
// 008c6e1e  e84d41f4ff           call 0x80af70
// 008c6e23  8b542418             mov edx, dword ptr [esp + 0x18]
// 008c6e27  83c2fa               add edx, -6
// 008c6e2a  8b442414             mov eax, dword ptr [esp + 0x14]
// 008c6e2e  52                   push edx
// 008c6e2f  40                   inc eax
// 008c6e30  50                   push eax
// 008c6e31  8bce                 mov ecx, esi
// 008c6e33  e83241f4ff           call 0x80af6a
// 008c6e38  5e                   pop esi
// 008c6e39  83c408               add esp, 8
// 008c6e3c  c3                   ret 
// library xtp-15.2.1/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawPinnButton@CXTPDockingPaneCaptionButton@@SAXPAVCDC@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/DockingPane/XTPDockingPanePaintManager.cpp
