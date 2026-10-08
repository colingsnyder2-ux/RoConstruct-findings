// roc 2007-03 005f1d80  unit: seg_005f0000  size: 105 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 005f1d80
//
// 005f1d80  8b5104               mov edx, dword ptr [ecx + 4]
// 005f1d83  8b4204               mov eax, dword ptr [edx + 4]
// 005f1d86  83ec10               sub esp, 0x10
// 005f1d89  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1d8d  56                   push esi
// 005f1d8e  57                   push edi
// 005f1d8f  8b7c2420             mov edi, dword ptr [esp + 0x20]
// 005f1d93  7516                 jne 0x5f1dab
// 005f1d95  8b37                 mov esi, dword ptr [edi]
// 005f1d97  39700c               cmp dword ptr [eax + 0xc], esi
// 005f1d9a  7305                 jae 0x5f1da1
// 005f1d9c  8b4008               mov eax, dword ptr [eax + 8]
// 005f1d9f  eb04                 jmp 0x5f1da5
// 005f1da1  8bd0                 mov edx, eax
// 005f1da3  8b00                 mov eax, dword ptr [eax]
// 005f1da5  80781900             cmp byte ptr [eax + 0x19], 0
// 005f1da9  74ec                 je 0x5f1d97
// 005f1dab  8b4104               mov eax, dword ptr [ecx + 4]
// 005f1dae  3bd0                 cmp edx, eax
// 005f1db0  8954240c             mov dword ptr [esp + 0xc], edx
// 005f1db4  894c2408             mov dword ptr [esp + 8], ecx
// 005f1db8  740d                 je 0x5f1dc7
// 005f1dba  8b37                 mov esi, dword ptr [edi]
// 005f1dbc  3b720c               cmp esi, dword ptr [edx + 0xc]
// 005f1dbf  7206                 jb 0x5f1dc7
// 005f1dc1  8d4c2408             lea ecx, [esp + 8]
// 005f1dc5  eb0c                 jmp 0x5f1dd3
// 005f1dc7  894c2410             mov dword ptr [esp + 0x10], ecx
// 005f1dcb  89442414             mov dword ptr [esp + 0x14], eax
// 005f1dcf  8d4c2410             lea ecx, [esp + 0x10]
// 005f1dd3  8b11                 mov edx, dword ptr [ecx]
// 005f1dd5  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 005f1dd9  8b4904               mov ecx, dword ptr [ecx + 4]
// 005f1ddc  5f                   pop edi
// 005f1ddd  8910                 mov dword ptr [eax], edx
// 005f1ddf  894804               mov dword ptr [eax + 4], ecx
// 005f1de2  5e                   pop esi
// 005f1de3  83c410               add esp, 0x10
// 005f1de6  c20800               ret 8
// library rbxgs/reflection\signal.cpp (function ?find@?$_Tree@V?$_Tmap_traits@PBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@U?$less@PBVSignalDescriptor@Reflection@RBX@@@std@@V?$allocator@U?$pair@QBVSignalDescriptor@Reflection@RBX@@V?$shared_ptr@VSignalInstance@Reflection@RBX@@@boost@@@std@@@7@$0A@@std@@@std@@QAE?AViterator@12@ABQBVSignalDescriptor@Reflection@RBX@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs reflection/signal.cpp
