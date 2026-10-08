// roc 2011-06 00614710  unit: ArchiveBinder  size: 99 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00614710
//
// 00614710  83ec0c               sub esp, 0xc
// 00614713  53                   push ebx
// 00614714  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 00614718  55                   push ebp
// 00614719  8b6c2418             mov ebp, dword ptr [esp + 0x18]
// 0061471d  56                   push esi
// 0061471e  57                   push edi
// 0061471f  8b7c2428             mov edi, dword ptr [esp + 0x28]
// 00614723  57                   push edi
// 00614724  53                   push ebx
// 00614725  55                   push ebp
// 00614726  8bf1                 mov esi, ecx
// 00614728  e883cbe3ff           call 0x4512b0
// 0061472d  84c0                 test al, al
// 0061472f  7536                 jne 0x614767
// 00614731  83c620               add esi, 0x20
// 00614734  897c2418             mov dword ptr [esp + 0x18], edi
// 00614738  8b7e04               mov edi, dword ptr [esi + 4]
// 0061473b  8b4f04               mov ecx, dword ptr [edi + 4]
// 0061473e  8d442410             lea eax, [esp + 0x10]
// 00614742  50                   push eax
// 00614743  51                   push ecx
// 00614744  57                   push edi
// 00614745  8bce                 mov ecx, esi
// 00614747  896c241c             mov dword ptr [esp + 0x1c], ebp
// 0061474b  895c2420             mov dword ptr [esp + 0x20], ebx
// 0061474f  e8acfbffff           call 0x614300
// 00614754  6a01                 push 1
// 00614756  8bce                 mov ecx, esi
// 00614758  8bd8                 mov ebx, eax
// 0061475a  e8f1fbffff           call 0x614350
// 0061475f  895f04               mov dword ptr [edi + 4], ebx
// 00614762  8b5304               mov edx, dword ptr [ebx + 4]
// 00614765  891a                 mov dword ptr [edx], ebx
// 00614767  5f                   pop edi
// 00614768  5e                   pop esi
// 00614769  5d                   pop ebp
// 0061476a  b001                 mov al, 1
// 0061476c  5b                   pop ebx
// 0061476d  83c40c               add esp, 0xc
// 00614770  c20c00               ret 0xc
// library rbxgs/v8xml\SerializerV2.cpp (function ?processIDREF@ArchiveBinder@@UAE_NPBVXmlNameValuePair@@PAVDescribedBase@Reflection@RBX@@PBVIIDREF@5@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/SerializerV2.cpp
