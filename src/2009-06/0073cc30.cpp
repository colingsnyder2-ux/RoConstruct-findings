// roc 2009-06 0073cc30  unit: CXTPToolBar  size: 54 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0073cc30
//
// 0073cc30  8b442404             mov eax, dword ptr [esp + 4]
// 0073cc34  56                   push esi
// 0073cc35  8bf1                 mov esi, ecx
// 0073cc37  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0073cc3b  51                   push ecx
// 0073cc3c  50                   push eax
// 0073cc3d  8bce                 mov ecx, esi
// 0073cc3f  8986d8000000         mov dword ptr [esi + 0xd8], eax
// 0073cc45  e8b6dfffff           call 0x73ac00
// 0073cc4a  85c0                 test eax, eax
// 0073cc4c  7504                 jne 0x73cc52
// 0073cc4e  5e                   pop esi
// 0073cc4f  c20800               ret 8
// 0073cc52  8b8efc000000         mov ecx, dword ptr [esi + 0xfc]
// 0073cc58  e803040300           call 0x76d060
// 0073cc5d  b801000000           mov eax, 1
// 0073cc62  5e                   pop esi
// 0073cc63  c20800               ret 8
// library xtp-11.2.2/Source\CommandBars\XTPToolBar.cpp (function ?LoadToolBar@CXTPToolBar@@UAEHIH@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPToolBar.cpp
