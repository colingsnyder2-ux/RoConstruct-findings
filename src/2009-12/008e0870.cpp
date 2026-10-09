// roc 2009-12 008e0870  unit: CXTPOffice2007Image  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 008e0870
//
// 008e0870  8b4120               mov eax, dword ptr [ecx + 0x20]
// 008e0873  83ec18               sub esp, 0x18
// 008e0876  85c0                 test eax, eax
// 008e0878  7517                 jne 0x8e0891
// 008e087a  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e087e  c70000000000         mov dword ptr [eax], 0
// 008e0884  c7400400000000       mov dword ptr [eax + 4], 0
// 008e088b  83c418               add esp, 0x18
// 008e088e  c20400               ret 4
// 008e0891  8d0c24               lea ecx, [esp]
// 008e0894  51                   push ecx
// 008e0895  6a18                 push 0x18
// 008e0897  50                   push eax
// 008e0898  ff155cb19800         call dword ptr [0x98b15c]
// 008e089e  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 008e08a2  8b542404             mov edx, dword ptr [esp + 4]
// 008e08a6  8b4c2408             mov ecx, dword ptr [esp + 8]
// 008e08aa  8910                 mov dword ptr [eax], edx
// 008e08ac  894804               mov dword ptr [eax + 4], ecx
// 008e08af  83c418               add esp, 0x18
// 008e08b2  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPOffice2007Image.cpp (function ?GetExtent@CXTPOffice2007Image@@QBE?AVCSize@@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPOffice2007Image.cpp
