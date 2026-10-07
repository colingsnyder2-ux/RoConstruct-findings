// roc 2008-06 00762390  unit: CXTPDockingPaneSplitterContainer  size: 493 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00762390
//
// 00762390  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00762394  83ec08               sub esp, 8
// 00762397  48                   dec eax
// 00762398  837c241800           cmp dword ptr [esp + 0x18], 0
// 0076239d  56                   push esi
// 0076239e  8b742410             mov esi, dword ptr [esp + 0x10]
// 007623a2  89442418             mov dword ptr [esp + 0x18], eax
// 007623a6  0f84e5000000         je 0x762491
// 007623ac  50                   push eax
// 007623ad  8b442418             mov eax, dword ptr [esp + 0x18]
// 007623b1  83c0fc               add eax, -4
// 007623b4  50                   push eax
// 007623b5  8d4c240c             lea ecx, [esp + 0xc]
// 007623b9  51                   push ecx
// 007623ba  8bce                 mov ecx, esi
// 007623bc  e869f0f3ff           call 0x6a142a
// 007623c1  8b542418             mov edx, dword ptr [esp + 0x18]
// 007623c5  8b442414             mov eax, dword ptr [esp + 0x14]
// 007623c9  52                   push edx
// 007623ca  48                   dec eax
// 007623cb  50                   push eax
// 007623cc  8bce                 mov ecx, esi
// 007623ce  e851f0f3ff           call 0x6a1424
// 007623d3  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007623d7  8b542414             mov edx, dword ptr [esp + 0x14]
// 007623db  83c1fd               add ecx, -3
// 007623de  51                   push ecx
// 007623df  4a                   dec edx
// 007623e0  52                   push edx
// 007623e1  8d44240c             lea eax, [esp + 0xc]
// 007623e5  50                   push eax
// 007623e6  8bce                 mov ecx, esi
// 007623e8  e83df0f3ff           call 0x6a142a
// 007623ed  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007623f1  8b542414             mov edx, dword ptr [esp + 0x14]
// 007623f5  83c104               add ecx, 4
// 007623f8  51                   push ecx
// 007623f9  4a                   dec edx
// 007623fa  52                   push edx
// 007623fb  8bce                 mov ecx, esi
// 007623fd  e822f0f3ff           call 0x6a1424
// 00762402  8b442418             mov eax, dword ptr [esp + 0x18]
// 00762406  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076240a  83c002               add eax, 2
// 0076240d  50                   push eax
// 0076240e  49                   dec ecx
// 0076240f  51                   push ecx
// 00762410  8d54240c             lea edx, [esp + 0xc]
// 00762414  52                   push edx
// 00762415  8bce                 mov ecx, esi
// 00762417  e80ef0f3ff           call 0x6a142a
// 0076241c  8b442418             mov eax, dword ptr [esp + 0x18]
// 00762420  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00762424  83c002               add eax, 2
// 00762427  83c103               add ecx, 3
// 0076242a  50                   push eax
// 0076242b  51                   push ecx
// 0076242c  8bce                 mov ecx, esi
// 0076242e  e8f1eff3ff           call 0x6a1424
// 00762433  8b542418             mov edx, dword ptr [esp + 0x18]
// 00762437  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076243b  83c2fe               add edx, -2
// 0076243e  52                   push edx
// 0076243f  83c003               add eax, 3
// 00762442  50                   push eax
// 00762443  8bce                 mov ecx, esi
// 00762445  e8daeff3ff           call 0x6a1424
// 0076244a  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 0076244e  8b542414             mov edx, dword ptr [esp + 0x14]
// 00762452  83c1fe               add ecx, -2
// 00762455  51                   push ecx
// 00762456  4a                   dec edx
// 00762457  52                   push edx
// 00762458  8bce                 mov ecx, esi
// 0076245a  e8c5eff3ff           call 0x6a1424
// 0076245f  8b442418             mov eax, dword ptr [esp + 0x18]
// 00762463  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 00762467  40                   inc eax
// 00762468  50                   push eax
// 00762469  49                   dec ecx
// 0076246a  51                   push ecx
// 0076246b  8d54240c             lea edx, [esp + 0xc]
// 0076246f  52                   push edx
// 00762470  8bce                 mov ecx, esi
// 00762472  e8b3eff3ff           call 0x6a142a
// 00762477  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076247b  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076247f  40                   inc eax
// 00762480  50                   push eax
// 00762481  83c103               add ecx, 3
// 00762484  51                   push ecx
// 00762485  8bce                 mov ecx, esi
// 00762487  e898eff3ff           call 0x6a1424
// 0076248c  5e                   pop esi
// 0076248d  83c408               add esp, 8
// 00762490  c3                   ret 
// 00762491  8b542414             mov edx, dword ptr [esp + 0x14]
// 00762495  83c002               add eax, 2
// 00762498  89442418             mov dword ptr [esp + 0x18], eax
// 0076249c  48                   dec eax
// 0076249d  50                   push eax
// 0076249e  83c2fd               add edx, -3
// 007624a1  52                   push edx
// 007624a2  8d44240c             lea eax, [esp + 0xc]
// 007624a6  50                   push eax
// 007624a7  8bce                 mov ecx, esi
// 007624a9  e87ceff3ff           call 0x6a142a
// 007624ae  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 007624b2  8b542414             mov edx, dword ptr [esp + 0x14]
// 007624b6  49                   dec ecx
// 007624b7  51                   push ecx
// 007624b8  83c204               add edx, 4
// 007624bb  52                   push edx
// 007624bc  8bce                 mov ecx, esi
// 007624be  e861eff3ff           call 0x6a1424
// 007624c3  8b442418             mov eax, dword ptr [esp + 0x18]
// 007624c7  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007624cb  48                   dec eax
// 007624cc  50                   push eax
// 007624cd  51                   push ecx
// 007624ce  8d54240c             lea edx, [esp + 0xc]
// 007624d2  52                   push edx
// 007624d3  8bce                 mov ecx, esi
// 007624d5  e850eff3ff           call 0x6a142a
// 007624da  8b442418             mov eax, dword ptr [esp + 0x18]
// 007624de  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007624e2  83c003               add eax, 3
// 007624e5  50                   push eax
// 007624e6  51                   push ecx
// 007624e7  8bce                 mov ecx, esi
// 007624e9  e836eff3ff           call 0x6a1424
// 007624ee  8b542418             mov edx, dword ptr [esp + 0x18]
// 007624f2  8b442414             mov eax, dword ptr [esp + 0x14]
// 007624f6  4a                   dec edx
// 007624f7  52                   push edx
// 007624f8  83c0fe               add eax, -2
// 007624fb  50                   push eax
// 007624fc  8d4c240c             lea ecx, [esp + 0xc]
// 00762500  51                   push ecx
// 00762501  8bce                 mov ecx, esi
// 00762503  e822eff3ff           call 0x6a142a
// 00762508  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076250c  8b442414             mov eax, dword ptr [esp + 0x14]
// 00762510  83c2fa               add edx, -6
// 00762513  52                   push edx
// 00762514  83c0fe               add eax, -2
// 00762517  50                   push eax
// 00762518  8bce                 mov ecx, esi
// 0076251a  e805eff3ff           call 0x6a1424
// 0076251f  8b4c2418             mov ecx, dword ptr [esp + 0x18]
// 00762523  8b542414             mov edx, dword ptr [esp + 0x14]
// 00762527  83c1fa               add ecx, -6
// 0076252a  51                   push ecx
// 0076252b  83c202               add edx, 2
// 0076252e  52                   push edx
// 0076252f  8bce                 mov ecx, esi
// 00762531  e8eeeef3ff           call 0x6a1424
// 00762536  8b442418             mov eax, dword ptr [esp + 0x18]
// 0076253a  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0076253e  48                   dec eax
// 0076253f  83c102               add ecx, 2
// 00762542  50                   push eax
// 00762543  51                   push ecx
// 00762544  8bce                 mov ecx, esi
// 00762546  e8d9eef3ff           call 0x6a1424
// 0076254b  8b542418             mov edx, dword ptr [esp + 0x18]
// 0076254f  8b442414             mov eax, dword ptr [esp + 0x14]
// 00762553  4a                   dec edx
// 00762554  52                   push edx
// 00762555  40                   inc eax
// 00762556  50                   push eax
// 00762557  8d4c240c             lea ecx, [esp + 0xc]
// 0076255b  51                   push ecx
// 0076255c  8bce                 mov ecx, esi
// 0076255e  e8c7eef3ff           call 0x6a142a
// 00762563  8b542418             mov edx, dword ptr [esp + 0x18]
// 00762567  83c2fa               add edx, -6
// 0076256a  8b442414             mov eax, dword ptr [esp + 0x14]
// 0076256e  52                   push edx
// 0076256f  40                   inc eax
// 00762570  50                   push eax
// 00762571  8bce                 mov ecx, esi
// 00762573  e8aceef3ff           call 0x6a1424
// 00762578  5e                   pop esi
// 00762579  83c408               add esp, 8
// 0076257c  c3                   ret 
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?DrawPinnButton@CXTPDockingPaneCaptionButton@@SAXPAVCDC@@VCPoint@@H@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
