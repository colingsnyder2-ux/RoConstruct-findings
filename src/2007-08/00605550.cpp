// roc 2007-08 00605550  unit: RBX::SleepStage  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00605550
//
// 00605550  8b5104               mov edx, dword ptr [ecx + 4]
// 00605553  8b4204               mov eax, dword ptr [edx + 4]
// 00605556  83ec10               sub esp, 0x10
// 00605559  80781100             cmp byte ptr [eax + 0x11], 0
// 0060555d  56                   push esi
// 0060555e  57                   push edi
// 0060555f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 00605563  7516                 jne 0x60557b
// 00605565  8b37                 mov esi, dword ptr [edi]
// 00605567  39700c               cmp dword ptr [eax + 0xc], esi
// 0060556a  7305                 jae 0x605571
// 0060556c  8b4008               mov eax, dword ptr [eax + 8]
// 0060556f  eb04                 jmp 0x605575
// 00605571  8bd0                 mov edx, eax
// 00605573  8b00                 mov eax, dword ptr [eax]
// 00605575  80781100             cmp byte ptr [eax + 0x11], 0
// 00605579  74ec                 je 0x605567
// 0060557b  8b4104               mov eax, dword ptr [ecx + 4]
// 0060557e  3bd0                 cmp edx, eax
// 00605580  8954240c             mov dword ptr [esp + 0xc], edx
// 00605584  894c2408             mov dword ptr [esp + 8], ecx
// 00605588  740d                 je 0x605597
// 0060558a  8b37                 mov esi, dword ptr [edi]
// 0060558c  3b720c               cmp esi, dword ptr [edx + 0xc]
// 0060558f  7206                 jb 0x605597
// 00605591  8d4c2408             lea ecx, [esp + 8]
// 00605595  eb0c                 jmp 0x6055a3
// 00605597  894c2410             mov dword ptr [esp + 0x10], ecx
// 0060559b  89442414             mov dword ptr [esp + 0x14], eax
// 0060559f  8d4c2410             lea ecx, [esp + 0x10]
// 006055a3  8b11                 mov edx, dword ptr [ecx]
// 006055a5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 006055a9  8b4904               mov ecx, dword ptr [ecx + 4]
// 006055ac  5f                   pop edi
// 006055ad  8910                 mov dword ptr [eax], edx
// 006055af  894804               mov dword ptr [eax + 4], ecx
// 006055b2  5e                   pop esi
// 006055b3  83c410               add esp, 0x10
// 006055b6  c20800               ret 8
// library rbxgs/v8world\Assembly.cpp (function ?find@?$_Tree@V?$_Tset_traits@PAVClump@RBX@@U?$less@PAVClump@RBX@@@std@@V?$allocator@PAVClump@RBX@@@4@$0A@@std@@@std@@QAE?AViterator@12@ABQAVClump@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8world/Assembly.cpp
