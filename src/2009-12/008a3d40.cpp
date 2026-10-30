// roc 2009-12 008a3d40  unit: CXTPReportGroupRow  size: 76 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008a3d40
//
// 008a3d40  56                   push esi
// 008a3d41  8bf1                 mov esi, ecx
// 008a3d43  8d4e74               lea ecx, [esi + 0x74]
// 008a3d46  ff15c0de9800         call dword ptr [0x98dec0]
// 008a3d4c  8bce                 mov ecx, esi
// 008a3d4e  e85d000000           call 0x8a3db0
// 008a3d53  f644240801           test byte ptr [esp + 8], 1
// 008a3d58  742c                 je 0x8a3d86
// 008a3d5a  833d78aeb90000       cmp dword ptr [0xb9ae78], 0
// 008a3d61  740f                 je 0x8a3d72
// 008a3d63  56                   push esi
// 008a3d64  e8f7abf7ff           call 0x81e960
// 008a3d69  83c404               add esp, 4
// 008a3d6c  8bc6                 mov eax, esi
// 008a3d6e  5e                   pop esi
// 008a3d6f  c20400               ret 4
// 008a3d72  6870aeb900           push 0xb9ae70
// 008a3d77  ff1508b29800         call dword ptr [0x98b208]
// 008a3d7d  56                   push esi
// 008a3d7e  e8d7faf4ff           call 0x7f385a
// 008a3d83  83c404               add esp, 4
// 008a3d86  8bc6                 mov eax, esi
// 008a3d88  5e                   pop esi
// 008a3d89  c20400               ret 4
// copied from an identical function in another client (function ??_GCXTPReportGroupRow@@UAEPAXI@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/ReportControl/XTPReportGroupRow.cpp