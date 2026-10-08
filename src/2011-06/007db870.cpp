// from server: 100% by auto
// roc 2011-06 007db870  unit: seg_007d0000  size: 75 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 007db870
//
// 007db870  56                   push esi
// 007db871  e8aa430000           call 0x7dfc20
// 007db876  6a00                 push 0
// 007db878  57                   push edi
// 007db879  56                   push esi
// 007db87a  e8010f0000           call 0x7dc780
// 007db87f  8b4630               mov eax, dword ptr [esi + 0x30]
// 007db882  57                   push edi
// 007db883  50                   push eax
// 007db884  e817760100           call 0x7f2ea0
// 007db889  83c418               add esp, 0x18
// 007db88c  837e105d             cmp dword ptr [esi + 0x10], 0x5d
// 007db890  7421                 je 0x7db8b3
// 007db892  6a5d                 push 0x5d
// 007db894  56                   push esi
// 007db895  e8d6300000           call 0x7de970
// 007db89a  8b4e34               mov ecx, dword ptr [esi + 0x34]
// 007db89d  50                   push eax
// 007db89e  682ce1ab00           push 0xabe12c
// 007db8a3  51                   push ecx
// 007db8a4  e87715faff           call 0x77ce20
// 007db8a9  50                   push eax
// 007db8aa  56                   push esi
// 007db8ab  e8c0310000           call 0x7dea70
// 007db8b0  83c41c               add esp, 0x1c
// 007db8b3  56                   push esi
// 007db8b4  e867430000           call 0x7dfc20
// 007db8b9  59                   pop ecx
// 007db8ba  c3                   ret 
// library lua-5.1.4/lparser.c (function _yindex)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lparser.c
