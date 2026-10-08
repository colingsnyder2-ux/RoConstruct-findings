// from server: 100% by auto
// roc 2011-06 004036c0  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 004036c0
//
// 004036c0  8b442404             mov eax, dword ptr [esp + 4]
// 004036c4  56                   push esi
// 004036c5  8bf1                 mov esi, ecx
// 004036c7  50                   push eax
// 004036c8  8906                 mov dword ptr [esi], eax
// 004036ca  ff158403a400         call dword ptr [0xa40384]
// 004036d0  8bc6                 mov eax, esi
// 004036d2  5e                   pop esi
// 004036d3  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ??0CXTPLockGuard@@QAE@AAU_RTL_CRITICAL_SECTION@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
