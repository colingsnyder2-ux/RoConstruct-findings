// roc 2009-12 008a3f60  unit: VCXTPReportRow::?$CXTPHeapObjectT  size: 109 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3f60
//
// 008a3f60  56                   push esi
// 008a3f61  8bf1                 mov esi, ecx
// 008a3f63  8b4624               mov eax, dword ptr [esi + 0x24]
// 008a3f66  83b8c401000000       cmp dword ptr [eax + 0x1c4], 0
// 008a3f6d  745c                 je 0x8a3fcb
// 008a3f6f  8b16                 mov edx, dword ptr [esi]
// 008a3f71  8b82c0000000         mov eax, dword ptr [edx + 0xc0]
// 008a3f77  ffd0                 call eax
// 008a3f79  85c0                 test eax, eax
// 008a3f7b  744e                 je 0x8a3fcb
// 008a3f7d  8b16                 mov edx, dword ptr [esi]
// 008a3f7f  8b4278               mov eax, dword ptr [edx + 0x78]
// 008a3f82  8bce                 mov ecx, esi
// 008a3f84  ffd0                 call eax
// 008a3f86  85c0                 test eax, eax
// 008a3f88  7441                 je 0x8a3fcb
// 008a3f8a  837e28ff             cmp dword ptr [esi + 0x28], -1
// 008a3f8e  743b                 je 0x8a3fcb
// 008a3f90  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3f93  57                   push edi
// 008a3f94  e86785f7ff           call 0x81c500
// 008a3f99  8b16                 mov edx, dword ptr [esi]
// 008a3f9b  8b7e28               mov edi, dword ptr [esi + 0x28]
// 008a3f9e  8b82b8000000         mov eax, dword ptr [edx + 0xb8]
// 008a3fa4  8bce                 mov ecx, esi
// 008a3fa6  47                   inc edi
// 008a3fa7  ffd0                 call eax
// 008a3fa9  50                   push eax
// 008a3faa  8bce                 mov ecx, esi
// 008a3fac  e83fffffff           call 0x8a3ef0
// 008a3fb1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3fb4  8b8928010000         mov ecx, dword ptr [ecx + 0x128]
// 008a3fba  50                   push eax
// 008a3fbb  57                   push edi
// 008a3fbc  e89fa6f8ff           call 0x82e660
// 008a3fc1  8b4e24               mov ecx, dword ptr [esi + 0x24]
// 008a3fc4  5f                   pop edi
// 008a3fc5  5e                   pop esi
// 008a3fc6  e925eef7ff           jmp 0x822df0
// 008a3fcb  5e                   pop esi
// 008a3fcc  c3                   ret 
// copied from an identical function in another client (function ?SelectChilds@CXTPReportRow@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportRow.cpp