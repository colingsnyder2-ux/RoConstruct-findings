// roc 2008-06 006cd9a0  unit: CXTPReportControl  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006cd9a0
//
// 006cd9a0  56                   push esi
// 006cd9a1  8bf1                 mov esi, ecx
// 006cd9a3  83bea802000000       cmp dword ptr [esi + 0x2a8], 0
// 006cd9aa  752c                 jne 0x6cd9d8
// 006cd9ac  c786a802000001000000 mov dword ptr [esi + 0x2a8], 1
// 006cd9b6  e8ad32fdff           call 0x6a0c68
// 006cd9bb  8bce                 mov ecx, esi
// 006cd9bd  e84eefffff           call 0x6cc910
// 006cd9c2  8b06                 mov eax, dword ptr [esi]
// 006cd9c4  8b9064010000         mov edx, dword ptr [eax + 0x164]
// 006cd9ca  8bce                 mov ecx, esi
// 006cd9cc  ffd2                 call edx
// 006cd9ce  c786a802000000000000 mov dword ptr [esi + 0x2a8], 0
// 006cd9d8  5e                   pop esi
// 006cd9d9  c20c00               ret 0xc
// library xtp-11.2.2-shared-mfc/Source\ReportControl\XTPReportControl.cpp (function ?OnSize@CXTPReportControl@@IAEXIHH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportControl.cpp
