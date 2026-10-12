// roc 2008-06 005f9770  unit: UString_sink::?$stream_buffer  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f9770
//
// 005f9770  56                   push esi
// 005f9771  8bf1                 mov esi, ecx
// 005f9773  8b4624               mov eax, dword ptr [esi + 0x24]
// 005f9776  833800               cmp dword ptr [eax], 0
// 005f9779  7406                 je 0x5f9781
// 005f977b  ff1570238000         call dword ptr [0x802370]
// 005f9781  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f9785  83f901               cmp ecx, 1
// 005f9788  7516                 jne 0x5f97a0
// 005f978a  8b5620               mov edx, dword ptr [esi + 0x20]
// 005f978d  833a00               cmp dword ptr [edx], 0
// 005f9790  740e                 je 0x5f97a0
// 005f9792  8b4630               mov eax, dword ptr [esi + 0x30]
// 005f9795  8b00                 mov eax, dword ptr [eax]
// 005f9797  99                   cdq 
// 005f9798  2944240c             sub dword ptr [esp + 0xc], eax
// 005f979c  19542410             sbb dword ptr [esp + 0x10], edx
// 005f97a0  8b5610               mov edx, dword ptr [esi + 0x10]
// 005f97a3  c70200000000         mov dword ptr [edx], 0
// 005f97a9  8b4620               mov eax, dword ptr [esi + 0x20]
// 005f97ac  c70000000000         mov dword ptr [eax], 0
// 005f97b2  8b5630               mov edx, dword ptr [esi + 0x30]
// 005f97b5  c70200000000         mov dword ptr [edx], 0
// 005f97bb  8b4614               mov eax, dword ptr [esi + 0x14]
// 005f97be  c70000000000         mov dword ptr [eax], 0
// 005f97c4  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f97c7  c70200000000         mov dword ptr [edx], 0
// 005f97cd  8b4634               mov eax, dword ptr [esi + 0x34]
// 005f97d0  c70000000000         mov dword ptr [eax], 0
// 005f97d6  8b5648               mov edx, dword ptr [esi + 0x48]
// 005f97d9  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f97dd  52                   push edx
// 005f97de  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f97e2  50                   push eax
// 005f97e3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f97e7  51                   push ecx
// 005f97e8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f97ec  51                   push ecx
// 005f97ed  52                   push edx
// 005f97ee  50                   push eax
// 005f97ef  8d4e40               lea ecx, [esi + 0x40]
// 005f97f2  e8f9fdffff           call 0x5f95f0
// 005f97f7  5e                   pop esi
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ?seek_impl@?$indirect_streambuf@V?$back_insert_device@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uoutput@23@@detail@iostreams@boost@@AAE?AV?$fpos@H@std@@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
