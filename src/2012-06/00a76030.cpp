// roc 2012-06 00a76030  unit: CXTPControlGallery  size: 70 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a76030
//
// 00a76030  8b41fc               mov eax, dword ptr [ecx - 4]
// 00a76033  83ec10               sub esp, 0x10
// 00a76036  50                   push eax
// 00a76037  8d4c2404             lea ecx, [esp + 4]
// 00a7603b  e89ec3f0ff           call 0x9823de
// 00a76040  8b442404             mov eax, dword ptr [esp + 4]
// 00a76044  8b4c2424             mov ecx, dword ptr [esp + 0x24]
// 00a76048  c70100000000         mov dword ptr [ecx], 0
// 00a7604e  85c0                 test eax, eax
// 00a76050  7406                 je 0xa76058
// 00a76052  8b1424               mov edx, dword ptr [esp]
// 00a76055  895004               mov dword ptr [eax + 4], edx
// 00a76058  837c240c00           cmp dword ptr [esp + 0xc], 0
// 00a7605d  740c                 je 0xa7606b
// 00a7605f  8b442408             mov eax, dword ptr [esp + 8]
// 00a76063  50                   push eax
// 00a76064  6a00                 push 0
// 00a76066  e86dc3f0ff           call 0x9823d8
// 00a7606b  b801000000           mov eax, 1
// 00a76070  83c410               add esp, 0x10
// 00a76073  c21400               ret 0x14
// library xtp-15.2.1-shared-mfc/Source\CommandBars\XTPControlGallery.cpp (function ?GetAccessibleChild@CXTPControlGallery@@MAEJUtagVARIANT@@PAPAUIDispatch@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/CommandBars/XTPControlGallery.cpp
