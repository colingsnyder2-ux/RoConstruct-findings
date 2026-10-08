// from server: 100% by auto
// roc 2008-06 0078d6e0  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0078d6e0
//
// 0078d6e0  8b4120               mov eax, dword ptr [ecx + 0x20]
// 0078d6e3  83ec18               sub esp, 0x18
// 0078d6e6  85c0                 test eax, eax
// 0078d6e8  7517                 jne 0x78d701
// 0078d6ea  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078d6ee  c70000000000         mov dword ptr [eax], 0
// 0078d6f4  c7400400000000       mov dword ptr [eax + 4], 0
// 0078d6fb  83c418               add esp, 0x18
// 0078d6fe  c20400               ret 4
// 0078d701  8d0c24               lea ecx, [esp]
// 0078d704  51                   push ecx
// 0078d705  6a18                 push 0x18
// 0078d707  50                   push eax
// 0078d708  ff1554218000         call dword ptr [0x802154]
// 0078d70e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 0078d712  8b542404             mov edx, dword ptr [esp + 4]
// 0078d716  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0078d71a  8910                 mov dword ptr [eax], edx
// 0078d71c  894804               mov dword ptr [eax + 4], ecx
// 0078d71f  83c418               add esp, 0x18
// 0078d722  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
