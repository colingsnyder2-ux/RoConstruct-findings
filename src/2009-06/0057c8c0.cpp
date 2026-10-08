// from server: 100% by auto
// roc 2009-06 0057c8c0  unit: G3D::TextInput::WrongSymbol  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0057c8c0
//
// 0057c8c0  b801000000           mov eax, 1
// 0057c8c5  8405b01ca400         test byte ptr [0xa41cb0], al
// 0057c8cb  751c                 jne 0x57c8e9
// 0057c8cd  d9ee                 fldz 
// 0057c8cf  0905b01ca400         or dword ptr [0xa41cb0], eax
// 0057c8d5  d915a41ca400         fst dword ptr [0xa41ca4]
// 0057c8db  d9e8                 fld1 
// 0057c8dd  d91da81ca400         fstp dword ptr [0xa41ca8]
// 0057c8e3  d91dac1ca400         fstp dword ptr [0xa41cac]
// 0057c8e9  d905a41ca400         fld dword ptr [0xa41ca4]
// 0057c8ef  83ec0c               sub esp, 0xc
// 0057c8f2  8bc4                 mov eax, esp
// 0057c8f4  d918                 fstp dword ptr [eax]
// 0057c8f6  d905a81ca400         fld dword ptr [0xa41ca8]
// 0057c8fc  d95804               fstp dword ptr [eax + 4]
// 0057c8ff  d905ac1ca400         fld dword ptr [0xa41cac]
// 0057c905  d95808               fstp dword ptr [eax + 8]
// 0057c908  8b442410             mov eax, dword ptr [esp + 0x10]
// 0057c90c  50                   push eax
// 0057c90d  e81efdffff           call 0x57c630
// 0057c912  c20400               ret 4
// library g3d-6.09/G3Dcpp\CoordinateFrame.cpp (function ?lookAt@CoordinateFrame@G3D@@QAEXABVVector3@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 G3Dcpp/CoordinateFrame.cpp
