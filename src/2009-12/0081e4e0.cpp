// roc 2009-12 0081e4e0  unit: CXTCaptionButtonTheme  size: 10 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0081e4e0
//
// 0081e4e0  8b442404             mov eax, dword ptr [esp + 4]
// 0081e4e4  894128               mov dword ptr [ecx + 0x28], eax
// 0081e4e7  c20400               ret 4
// library mfc-8.0/atlmfc\src\mfc\oleasmon.cpp (function ?SetFormatEtc@CAsyncMonikerFile@@IAEXPAUtagFORMATETC@@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/oleasmon.cpp
