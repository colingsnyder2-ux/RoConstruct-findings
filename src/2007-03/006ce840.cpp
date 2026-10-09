// roc 2007-03 006ce840  unit: seg_006c0000  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 006ce840
//
// 006ce840  56                   push esi
// 006ce841  8bf1                 mov esi, ecx
// 006ce843  837e1000             cmp dword ptr [esi + 0x10], 0
// 006ce847  7436                 je 0x6ce87f
// 006ce849  56                   push esi
// 006ce84a  8d44240c             lea eax, [esp + 0xc]
// 006ce84e  50                   push eax
// 006ce84f  ff15d8ee7700         call dword ptr [0x77eed8]
// 006ce855  85c0                 test eax, eax
// 006ce857  7526                 jne 0x6ce87f
// 006ce859  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ce85d  8b54240c             mov edx, dword ptr [esp + 0xc]
// 006ce861  8b442410             mov eax, dword ptr [esp + 0x10]
// 006ce865  890e                 mov dword ptr [esi], ecx
// 006ce867  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 006ce86b  895604               mov dword ptr [esi + 4], edx
// 006ce86e  894608               mov dword ptr [esi + 8], eax
// 006ce871  894e0c               mov dword ptr [esi + 0xc], ecx
// 006ce874  8b4e10               mov ecx, dword ptr [esi + 0x10]
// 006ce877  8b11                 mov edx, dword ptr [ecx]
// 006ce879  8b424c               mov eax, dword ptr [edx + 0x4c]
// 006ce87c  56                   push esi
// 006ce87d  ffd0                 call eax
// 006ce87f  5e                   pop esi
// 006ce880  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPanePaintManager.cpp (function ?SetRect@CXTPDockingPaneCaptionButton@@QAEXVCRect@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPanePaintManager.cpp
