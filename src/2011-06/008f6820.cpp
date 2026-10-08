// roc 2011-06 008f6820  unit: CXTPTabPaintManager::CColorSetWinXP  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f6820
//
// 008f6820  56                   push esi
// 008f6821  8bf1                 mov esi, ecx
// 008f6823  57                   push edi
// 008f6824  8dbe08020000         lea edi, [esi + 0x208]
// 008f682a  8bcf                 mov ecx, edi
// 008f682c  e89f6af8ff           call 0x87d2d0
// 008f6831  85c0                 test eax, eax
// 008f6833  7536                 jne 0x8f686b
// 008f6835  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f6839  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 008f683d  8b542414             mov edx, dword ptr [esp + 0x14]
// 008f6841  50                   push eax
// 008f6842  83ec10               sub esp, 0x10
// 008f6845  8bc4                 mov eax, esp
// 008f6847  8908                 mov dword ptr [eax], ecx
// 008f6849  8b4c242c             mov ecx, dword ptr [esp + 0x2c]
// 008f684d  895004               mov dword ptr [eax + 4], edx
// 008f6850  8b542430             mov edx, dword ptr [esp + 0x30]
// 008f6854  894808               mov dword ptr [eax + 8], ecx
// 008f6857  89500c               mov dword ptr [eax + 0xc], edx
// 008f685a  8b442420             mov eax, dword ptr [esp + 0x20]
// 008f685e  50                   push eax
// 008f685f  8bce                 mov ecx, esi
// 008f6861  e83ae8ffff           call 0x8f50a0
// 008f6866  5f                   pop edi
// 008f6867  5e                   pop esi
// 008f6868  c21800               ret 0x18
// 008f686b  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 008f686f  8b11                 mov edx, dword ptr [ecx]
// 008f6871  8b4248               mov eax, dword ptr [edx + 0x48]
// 008f6874  ffd0                 call eax
// 008f6876  83e802               sub eax, 2
// 008f6879  740b                 je 0x8f6886
// 008f687b  83e801               sub eax, 1
// 008f687e  750a                 jne 0x8f688a
// 008f6880  ff442418             inc dword ptr [esp + 0x18]
// 008f6884  eb04                 jmp 0x8f688a
// 008f6886  ff44241c             inc dword ptr [esp + 0x1c]
// 008f688a  8b44240c             mov eax, dword ptr [esp + 0xc]
// 008f688e  85c0                 test eax, eax
// 008f6890  7403                 je 0x8f6895
// 008f6892  8b4004               mov eax, dword ptr [eax + 4]
// 008f6895  6a00                 push 0
// 008f6897  8d4c2414             lea ecx, [esp + 0x14]
// 008f689b  51                   push ecx
// 008f689c  6a00                 push 0
// 008f689e  6a09                 push 9
// 008f68a0  50                   push eax
// 008f68a1  8bcf                 mov ecx, edi
// 008f68a3  e85867f8ff           call 0x87d000
// 008f68a8  5f                   pop edi
// 008f68a9  33c0                 xor eax, eax
// 008f68ab  5e                   pop esi
// 008f68ac  c21800               ret 0x18
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ?FillClient@CColorSetWinXP@CXTPTabPaintManager@@UAEKPAVCDC@@VCRect@@PAVCXTPTabManager@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
