// roc 2009-12 00820ef0  unit: CXTPReportControl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00820ef0
//
// 00820ef0  56                   push esi
// 00820ef1  8bf1                 mov esi, ecx
// 00820ef3  83bea802000000       cmp dword ptr [esi + 0x2a8], 0
// 00820efa  752c                 jne 0x820f28
// 00820efc  c786a802000001000000 mov dword ptr [esi + 0x2a8], 1
// 00820f06  e8252ffdff           call 0x7f3e30
// 00820f0b  8bce                 mov ecx, esi
// 00820f0d  e84eefffff           call 0x81fe60
// 00820f12  8b06                 mov eax, dword ptr [esi]
// 00820f14  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 00820f1a  8bce                 mov ecx, esi
// 00820f1c  ffd2                 call edx
// 00820f1e  c786a802000000000000 mov dword ptr [esi + 0x2a8], 0
// 00820f28  5e                   pop esi
// 00820f29  c20c00               ret 0xc
// copied from an identical function in another client (function ?OnSize@CXTPReportControl@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp