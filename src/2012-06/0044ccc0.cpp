// roc 2012-06 0044ccc0  unit: PasteVerb  size: 29 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0044ccc0
//
// 0044ccc0  51                   push ecx
// 0044ccc1  56                   push esi
// 0044ccc2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0044ccc6  8bce                 mov ecx, esi
// 0044ccc8  c744240400000000     mov dword ptr [esp + 4], 0
// 0044ccd0  ff155426b200         call dword ptr [0xb22654]
// 0044ccd6  8bc6                 mov eax, esi
// 0044ccd8  5e                   pop esi
// 0044ccd9  59                   pop ecx
// 0044ccda  c20400               ret 4
// library openrbx-client/App\util\Log.cpp (function ?timeStamp@Log@RBX@@QAE?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Log.cpp
