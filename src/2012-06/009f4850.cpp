// roc 2012-06 009f4850  unit: CXTPPropertyGridItemColor::?8??OnInplaceButtonDown::CPropertyGridItemColorColorPopup  size: 107 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009f4850
//
// 009f4850  83ec10               sub esp, 0x10
// 009f4853  56                   push esi
// 009f4854  8bf1                 mov esi, ecx
// 009f4856  8b4e20               mov ecx, dword ptr [esi + 0x20]
// 009f4859  8d442404             lea eax, [esp + 4]
// 009f485d  50                   push eax
// 009f485e  51                   push ecx
// 009f485f  ff15d83ab200         call dword ptr [0xb23ad8]
// 009f4865  8b542420             mov edx, dword ptr [esp + 0x20]
// 009f4869  8b44241c             mov eax, dword ptr [esp + 0x1c]
// 009f486d  52                   push edx
// 009f486e  50                   push eax
// 009f486f  8d4c240c             lea ecx, [esp + 0xc]
// 009f4873  51                   push ecx
// 009f4874  ff15483bb200         call dword ptr [0xb23b48]
// 009f487a  85c0                 test eax, eax
// 009f487c  7520                 jne 0x9f489e
// 009f487e  8bce                 mov ecx, esi
// 009f4880  e87b220700           call 0xa66b00
// 009f4885  84c0                 test al, al
// 009f4887  7515                 jne 0x9f489e
// 009f4889  8b16                 mov edx, dword ptr [esi]
// 009f488b  8b8248010000         mov eax, dword ptr [edx + 0x148]
// 009f4891  6aff                 push -1
// 009f4893  8bce                 mov ecx, esi
// 009f4895  ffd0                 call eax
// 009f4897  5e                   pop esi
// 009f4898  83c410               add esp, 0x10
// 009f489b  c20c00               ret 0xc
// 009f489e  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 009f48a2  8b54241c             mov edx, dword ptr [esp + 0x1c]
// 009f48a6  8b442418             mov eax, dword ptr [esp + 0x18]
// 009f48aa  51                   push ecx
// 009f48ab  52                   push edx
// 009f48ac  50                   push eax
// 009f48ad  8bce                 mov ecx, esi
// 009f48af  e86c250700           call 0xa66e20
// 009f48b4  5e                   pop esi
// 009f48b5  83c410               add esp, 0x10
// 009f48b8  c20c00               ret 0xc
// library xtp-15.2.1-shared-mfc/Source\Controls\Popup\XTPColorPopup.cpp (function ?OnLButtonDown@CXTPColorPopup@@IAEXIVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1-shared-mfc Source/Controls/Popup/XTPColorPopup.cpp
