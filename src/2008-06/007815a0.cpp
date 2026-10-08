// from server: 100% by auto
// roc 2008-06 007815a0  unit: CXTPTabPaintManager::CAppearanceSetFlat  size: 200 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007815a0
//
// 007815a0  8b442418             mov eax, dword ptr [esp + 0x18]
// 007815a4  83f803               cmp eax, 3
// 007815a7  0f87a8000000         ja 0x781655
// 007815ad  ff248558167800       jmp dword ptr [eax*4 + 0x781658]
// 007815b4  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007815b8  83f8ff               cmp eax, -1
// 007815bb  0f8494000000         je 0x781655
// 007815c1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007815c5  8b54240c             mov edx, dword ptr [esp + 0xc]
// 007815c9  50                   push eax
// 007815ca  8b44240c             mov eax, dword ptr [esp + 0xc]
// 007815ce  6a01                 push 1
// 007815d0  2bc8                 sub ecx, eax
// 007815d2  51                   push ecx
// 007815d3  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 007815d7  52                   push edx
// 007815d8  50                   push eax
// 007815d9  e862aa0300           call 0x7bc040
// 007815de  c3                   ret 
// 007815df  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 007815e3  83f8ff               cmp eax, -1
// 007815e6  746d                 je 0x781655
// 007815e8  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 007815ec  8b542408             mov edx, dword ptr [esp + 8]
// 007815f0  50                   push eax
// 007815f1  8b442410             mov eax, dword ptr [esp + 0x10]
// 007815f5  2bc8                 sub ecx, eax
// 007815f7  51                   push ecx
// 007815f8  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 007815fc  6a01                 push 1
// 007815fe  50                   push eax
// 007815ff  52                   push edx
// 00781600  e83baa0300           call 0x7bc040
// 00781605  c3                   ret 
// 00781606  8b442420             mov eax, dword ptr [esp + 0x20]
// 0078160a  83f8ff               cmp eax, -1
// 0078160d  7446                 je 0x781655
// 0078160f  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00781613  8b542414             mov edx, dword ptr [esp + 0x14]
// 00781617  50                   push eax
// 00781618  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0078161c  6a01                 push 1
// 0078161e  2bc8                 sub ecx, eax
// 00781620  51                   push ecx
// 00781621  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00781625  4a                   dec edx
// 00781626  52                   push edx
// 00781627  50                   push eax
// 00781628  e813aa0300           call 0x7bc040
// 0078162d  c3                   ret 
// 0078162e  8b442420             mov eax, dword ptr [esp + 0x20]
// 00781632  83f8ff               cmp eax, -1
// 00781635  741e                 je 0x781655
// 00781637  8b4c2414             mov ecx, dword ptr [esp + 0x14]
// 0078163b  8b542410             mov edx, dword ptr [esp + 0x10]
// 0078163f  50                   push eax
// 00781640  8b442410             mov eax, dword ptr [esp + 0x10]
// 00781644  2bc8                 sub ecx, eax
// 00781646  51                   push ecx
// 00781647  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0078164b  6a01                 push 1
// 0078164d  4a                   dec edx
// 0078164e  50                   push eax
// 0078164f  52                   push edx
// 00781650  e8eba90300           call 0x7bc040
// 00781655  c3                   ret 
// 00781656  8bff                 mov edi, edi
// 00781658  b415                 mov ah, 0x15
// 0078165a  7800                 js 0x78165c
// 0078165c  df1578000616         fist word ptr [0x16060078]
// 00781662  7800                 js 0x781664
// 00781664  2e16                 push ss
// 00781666  7800                 js 0x781668
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerAppearance.cpp (function ?DrawSingleLineBorder@CAppearanceSet@CXTPTabPaintManager@@SAXPAVCDC@@VCRect@@W4XTPTabPosition@@KK@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerAppearance.cpp
