// roc 2008-06 00790770  unit: PAVCXTShadowWnd::?$CList  size: 48 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00790770
//
// 00790770  b801000000           mov eax, 1
// 00790775  840574f29700         test byte ptr [0x97f274], al
// 0079077b  751d                 jne 0x79079a
// 0079077d  090574f29700         or dword ptr [0x97f274], eax
// 00790783  b938f29700           mov ecx, 0x97f238
// 00790788  e863feffff           call 0x7905f0
// 0079078d  6830198000           push 0x801930
// 00790792  e81810f1ff           call 0x6a17af
// 00790797  83c404               add esp, 4
// 0079079a  b838f29700           mov eax, 0x97f238
// 0079079f  c3                   ret 
// library g3d-6.09/GLG3Dcpp\Shape.cpp (function ?ray@Shape@G3D@@UAEAAVRay@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: g3d-6.09 GLG3Dcpp/Shape.cpp
