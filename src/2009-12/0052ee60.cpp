// roc 2009-12 0052ee60  unit: RBX::VInstance::?$GuidItem::VRegistry::?$sp_counted_impl_p  size: 9 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0052ee60
//
// 0052ee60  8b442404             mov eax, dword ptr [esp + 4]
// 0052ee64  8901                 mov dword ptr [ecx], eax
// 0052ee66  c20400               ret 4
// library mfc-8.0/atlmfc\src\mfc\appprnt.cpp (function ??4CommDlgExtendedError_Type@CCommDlgWrapper@@QAEXP6GKXZ@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /MD
// roc-lib: mfc-8.0 atlmfc/src/mfc/appprnt.cpp
