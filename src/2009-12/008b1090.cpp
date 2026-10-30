// roc 2009-12 008b1090  unit: CXTPDockingPaneTabbedContainer  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b1090
//
// 008b1090  53                   push ebx
// 008b1091  55                   push ebp
// 008b1092  56                   push esi
// 008b1093  8bf1                 mov esi, ecx
// 008b1095  57                   push edi
// 008b1096  8d4e54               lea ecx, [esi + 0x54]
// 008b1099  e8a2f7ffff           call 0x8b0840
// 008b109e  8b7c241c             mov edi, dword ptr [esp + 0x1c]
// 008b10a2  8b5c2418             mov ebx, dword ptr [esp + 0x18]
// 008b10a6  8b6c2414             mov ebp, dword ptr [esp + 0x14]
// 008b10aa  85c0                 test eax, eax
// 008b10ac  740f                 je 0x8b10bd
// 008b10ae  8b882c010000         mov ecx, dword ptr [eax + 0x12c]
// 008b10b4  57                   push edi
// 008b10b5  53                   push ebx
// 008b10b6  55                   push ebp
// 008b10b7  56                   push esi
// 008b10b8  e8e323fbff           call 0x8634a0
// 008b10bd  8b442420             mov eax, dword ptr [esp + 0x20]
// 008b10c1  50                   push eax
// 008b10c2  57                   push edi
// 008b10c3  53                   push ebx
// 008b10c4  55                   push ebp
// 008b10c5  8bce                 mov ecx, esi
// 008b10c7  e80e29f4ff           call 0x7f39da
// 008b10cc  5f                   pop edi
// 008b10cd  5e                   pop esi
// 008b10ce  5d                   pop ebp
// 008b10cf  5b                   pop ebx
// 008b10d0  c21000               ret 0x10
// library xtp-11.2.2/Source\DockingPane\XTPDockingPaneTabbedContainer.cpp (function ?OnWndMsg@CXTPDockingPaneTabbedContainer@@MAEHIIJPAJ@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/DockingPane/XTPDockingPaneTabbedContainer.cpp
