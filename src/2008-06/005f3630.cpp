// roc 2008-06 005f3630  unit: VWinHttpRequest_source::?$stream_buffer  size: 136 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f3630
//
// 005f3630  56                   push esi
// 005f3631  8bf1                 mov esi, ecx
// 005f3633  8b4624               mov eax, dword ptr [esi + 0x24]
// 005f3636  833800               cmp dword ptr [eax], 0
// 005f3639  7406                 je 0x5f3641
// 005f363b  ff1570238000         call dword ptr [0x802370]
// 005f3641  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 005f3645  83f901               cmp ecx, 1
// 005f3648  7516                 jne 0x5f3660
// 005f364a  8b5620               mov edx, dword ptr [esi + 0x20]
// 005f364d  833a00               cmp dword ptr [edx], 0
// 005f3650  740e                 je 0x5f3660
// 005f3652  8b4630               mov eax, dword ptr [esi + 0x30]
// 005f3655  8b00                 mov eax, dword ptr [eax]
// 005f3657  99                   cdq 
// 005f3658  2944240c             sub dword ptr [esp + 0xc], eax
// 005f365c  19542410             sbb dword ptr [esp + 0x10], edx
// 005f3660  8b5610               mov edx, dword ptr [esi + 0x10]
// 005f3663  c70200000000         mov dword ptr [edx], 0
// 005f3669  8b4620               mov eax, dword ptr [esi + 0x20]
// 005f366c  c70000000000         mov dword ptr [eax], 0
// 005f3672  8b5630               mov edx, dword ptr [esi + 0x30]
// 005f3675  c70200000000         mov dword ptr [edx], 0
// 005f367b  8b4614               mov eax, dword ptr [esi + 0x14]
// 005f367e  c70000000000         mov dword ptr [eax], 0
// 005f3684  8b5624               mov edx, dword ptr [esi + 0x24]
// 005f3687  c70200000000         mov dword ptr [edx], 0
// 005f368d  8b4634               mov eax, dword ptr [esi + 0x34]
// 005f3690  c70000000000         mov dword ptr [eax], 0
// 005f3696  8b5644               mov edx, dword ptr [esi + 0x44]
// 005f3699  8b442418             mov eax, dword ptr [esp + 0x18]
// 005f369d  52                   push edx
// 005f369e  8b542410             mov edx, dword ptr [esp + 0x10]
// 005f36a2  50                   push eax
// 005f36a3  8b442410             mov eax, dword ptr [esp + 0x10]
// 005f36a7  51                   push ecx
// 005f36a8  8b4c241c             mov ecx, dword ptr [esp + 0x1c]
// 005f36ac  51                   push ecx
// 005f36ad  52                   push edx
// 005f36ae  50                   push eax
// 005f36af  8d4e40               lea ecx, [esi + 0x40]
// 005f36b2  e8395f0000           call 0x5f95f0
// 005f36b7  5e                   pop esi
// library templates-2008-06-dll/roc_ndebug_iostreams.cpp (function ?seek_impl@?$indirect_streambuf@V?$basic_null_device@DUinput@iostreams@boost@@@iostreams@boost@@U?$char_traits@D@std@@V?$allocator@D@5@Uinput@23@@detail@iostreams@boost@@AAE?AV?$fpos@H@std@@_JHH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: templates-2008-06-dll roc_ndebug_iostreams.cpp
