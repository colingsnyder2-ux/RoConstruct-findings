// roc 2009-12 008b6080  unit: XTPDockingPanePaintThemes::CXTPDockingPaneWhidbeyTheme::CColorSetVisualStudio2005  size: 228 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008b6080
//
// 008b6080  6aff                 push -1
// 008b6082  688b329600           push 0x96328b
// 008b6087  64a100000000         mov eax, dword ptr fs:[0]
// 008b608d  50                   push eax
// 008b608e  51                   push ecx
// 008b608f  56                   push esi
// 008b6090  a10052b600           mov eax, dword ptr [0xb65200]
// 008b6095  33c4                 xor eax, esp
// 008b6097  50                   push eax
// 008b6098  8d44240c             lea eax, [esp + 0xc]
// 008b609c  64a300000000         mov dword ptr fs:[0], eax
// 008b60a2  8bf1                 mov esi, ecx
// 008b60a4  89742408             mov dword ptr [esp + 8], esi
// 008b60a8  c7064c7ba000         mov dword ptr [esi], 0xa07b4c
// 008b60ae  8b8e9c000000         mov ecx, dword ptr [esi + 0x9c]
// 008b60b4  c744241407000000     mov dword ptr [esp + 0x14], 7
// 008b60bc  e81bddf3ff           call 0x7f3ddc
// 008b60c1  8b8ea0000000         mov ecx, dword ptr [esi + 0xa0]
// 008b60c7  e810ddf3ff           call 0x7f3ddc
// 008b60cc  8d8ee0010000         lea ecx, [esi + 0x1e0]
// 008b60d2  c644241406           mov byte ptr [esp + 0x14], 6
// 008b60d7  e83460fbff           call 0x86c110
// 008b60dc  8d8ed4010000         lea ecx, [esi + 0x1d4]
// 008b60e2  c644241405           mov byte ptr [esp + 0x14], 5
// 008b60e7  e82460fbff           call 0x86c110
// 008b60ec  8d8ec8010000         lea ecx, [esi + 0x1c8]
// 008b60f2  c644241404           mov byte ptr [esp + 0x14], 4
// 008b60f7  e81460fbff           call 0x86c110
// 008b60fc  8d8ebc010000         lea ecx, [esi + 0x1bc]
// 008b6102  c644241403           mov byte ptr [esp + 0x14], 3
// 008b6107  e80460fbff           call 0x86c110
// 008b610c  8d8ea4010000         lea ecx, [esi + 0x1a4]
// 008b6112  ff15c0de9800         call dword ptr [0x98dec0]
// 008b6118  8d8e8c000000         lea ecx, [esi + 0x8c]
// 008b611e  c644241401           mov byte ptr [esp + 0x14], 1
// 008b6123  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008b6129  e80291b5ff           call 0x40f230
// 008b612e  8d8e84000000         lea ecx, [esi + 0x84]
// 008b6134  c644241400           mov byte ptr [esp + 0x14], 0
// 008b6139  c70198019b00         mov dword ptr [ecx], 0x9b0198
// 008b613f  e8ec90b5ff           call 0x40f230
// 008b6144  8bce                 mov ecx, esi
// 008b6146  c7442414ffffffff     mov dword ptr [esp + 0x14], 0xffffffff
// 008b614e  e88fe2f3ff           call 0x7f43e2
// 008b6153  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008b6157  64890d00000000       mov dword ptr fs:[0], ecx
// 008b615e  59                   pop ecx
// 008b615f  5e                   pop esi
// 008b6160  83c410               add esp, 0x10
// 008b6163  c3                   ret 
// copied from an identical function in another client (function ??1CXTPDockingPanePaintManager@@MAE@XZ)

// from server: 100% by tester
// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /MD /GS /EHsc
// roc-lib: xtp-11.2.2-shared-mfc Source/DockingPane/XTPDockingPanePaintManager.cpp