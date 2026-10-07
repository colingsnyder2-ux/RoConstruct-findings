// roc 2008-06 006ba8c0  unit: CXTPImageManagerResource::CBitmapDC  size: 79 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ba8c0
//
// 006ba8c0  56                   push esi
// 006ba8c1  8bf1                 mov esi, ecx
// 006ba8c3  8b4c2408             mov ecx, dword ptr [esp + 8]
// 006ba8c7  85c9                 test ecx, ecx
// 006ba8c9  7427                 je 0x6ba8f2
// 006ba8cb  85f6                 test esi, esi
// 006ba8cd  7511                 jne 0x6ba8e0
// 006ba8cf  33c0                 xor eax, eax
// 006ba8d1  51                   push ecx
// 006ba8d2  50                   push eax
// 006ba8d3  ff15b0208000         call dword ptr [0x8020b0]
// 006ba8d9  894610               mov dword ptr [esi + 0x10], eax
// 006ba8dc  5e                   pop esi
// 006ba8dd  c20400               ret 4
// 006ba8e0  8b4604               mov eax, dword ptr [esi + 4]
// 006ba8e3  51                   push ecx
// 006ba8e4  50                   push eax
// 006ba8e5  ff15b0208000         call dword ptr [0x8020b0]
// 006ba8eb  894610               mov dword ptr [esi + 0x10], eax
// 006ba8ee  5e                   pop esi
// 006ba8ef  c20400               ret 4
// 006ba8f2  8b4610               mov eax, dword ptr [esi + 0x10]
// 006ba8f5  85c0                 test eax, eax
// 006ba8f7  7412                 je 0x6ba90b
// 006ba8f9  8b4e04               mov ecx, dword ptr [esi + 4]
// 006ba8fc  50                   push eax
// 006ba8fd  51                   push ecx
// 006ba8fe  ff15b0208000         call dword ptr [0x8020b0]
// 006ba904  c7461000000000       mov dword ptr [esi + 0x10], 0
// 006ba90b  5e                   pop esi
// 006ba90c  c20400               ret 4
// library xtp-11.2.2/Source\Common\XTPImageManager.cpp (function ?SetBitmap@CBitmapDC@CXTPImageManagerResource@@QAEXPAUHBITMAP__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/Common/XTPImageManager.cpp
