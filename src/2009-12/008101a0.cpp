// roc 2009-12 008101a0  unit: CXTPImageManager  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008101a0
//
// 008101a0  8bd1                 mov edx, ecx
// 008101a2  8d8a08010000         lea ecx, [edx + 0x108]
// 008101a8  e8f3a6ffff           call 0x80a8a0
// 008101ad  85c0                 test eax, eax
// 008101af  7505                 jne 0x8101b6
// 008101b1  8bc1                 mov eax, ecx
// 008101b3  c20400               ret 4
// 008101b6  56                   push esi
// 008101b7  8db22c010000         lea esi, [edx + 0x12c]
// 008101bd  8bce                 mov ecx, esi
// 008101bf  e8dca6ffff           call 0x80a8a0
// 008101c4  85c0                 test eax, eax
// 008101c6  7412                 je 0x8101da
// 008101c8  837c240800           cmp dword ptr [esp + 8], 0
// 008101cd  740b                 je 0x8101da
// 008101cf  6aff                 push -1
// 008101d1  6aff                 push -1
// 008101d3  8bca                 mov ecx, edx
// 008101d5  e8a6e3ffff           call 0x80e580
// 008101da  8bc6                 mov eax, esi
// 008101dc  5e                   pop esi
// 008101dd  c20400               ret 4
// copied from an identical function in another client (function ?GetDisabledIcon@CXTPImageManagerIcon@@QAEAAVCXTPImageManagerIconHandle@@H@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc-string-calls Source\Common\XTPImageManager.cpp