// roc 2011-06 00415a70  unit: PasteVerb  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00415a70
//
// 00415a70  51                   push ecx
// 00415a71  56                   push esi
// 00415a72  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00415a76  8bce                 mov ecx, esi
// 00415a78  c744240400000000     mov dword ptr [esp + 4], 0
// 00415a80  ff15bc04a400         call dword ptr [0xa404bc]
// 00415a86  8bc6                 mov eax, esi
// 00415a88  5e                   pop esi
// 00415a89  59                   pop ecx
// 00415a8a  c20400               ret 4
// library openrbx-client/App\util\Log.cpp (function ?timeStamp@Log@RBX@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client-dll App/util/Log.cpp
