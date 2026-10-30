// roc 2011-06 008ed6c0  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008ed6c0
//
// 008ed6c0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008ed6c3  83ec18               sub esp, 0x18
// 008ed6c6  85c0                 test eax, eax
// 008ed6c8  7517                 jne 0x8ed6e1
// 008ed6ca  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ed6ce  c70000000000         mov dword ptr [eax], 0
// 008ed6d4  c7400400000000       mov dword ptr [eax + 4], 0
// 008ed6db  83c418               add esp, 0x18
// 008ed6de  c20400               ret 4
// 008ed6e1  8d0c24               lea ecx, [esp]
// 008ed6e4  51                   push ecx
// 008ed6e5  6a18                 push 0x18
// 008ed6e7  50                   push eax
// 008ed6e8  ff157c01a400         call dword ptr [0xa4017c]
// 008ed6ee  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008ed6f2  8b542404             mov edx, dword ptr [esp + 4]
// 008ed6f6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008ed6fa  8910                 mov dword ptr [eax], edx
// 008ed6fc  894804               mov dword ptr [eax + 4], ecx
// 008ed6ff  83c418               add esp, 0x18
// 008ed702  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
