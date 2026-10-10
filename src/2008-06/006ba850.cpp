// roc 2008-06 006ba850  unit: CXTPImageManagerResource::CBitmapDC  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 006ba850
//
// 006ba850  8b4904               mov ecx, dword ptr [ecx + 4]
// 006ba853  51                   push ecx
// 006ba854  e8cd60feff           call 0x6a0926
// 006ba859  8b8094000000         mov eax, dword ptr [eax + 0x94]
// 006ba85f  8b08                 mov ecx, dword ptr [eax]
// 006ba861  e85af9ffff           call 0x6ba1c0
// 006ba866  c3                   ret 
// library xtp-11.2.2-shared-mfc/Source\CommandBars\XTPImageEditor.cpp (function ?GetImageCount@CImageList@@QBEHXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2-shared-mfc Source/CommandBars/XTPImageEditor.cpp
