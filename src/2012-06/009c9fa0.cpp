// roc 2012-06 009c9fa0  unit: ATL::CRegObject  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009c9fa0
//
// 009c9fa0  56                   push esi
// 009c9fa1  8bf1                 mov esi, ecx
// 009c9fa3  8b4604               mov eax, dword ptr [esi + 4]
// 009c9fa6  57                   push edi
// 009c9fa7  85c0                 test eax, eax
// 009c9fa9  741d                 je 0x9c9fc8
// 009c9fab  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 009c9faf  6a00                 push 0
// 009c9fb1  51                   push ecx
// 009c9fb2  ffd0                 call eax
// 009c9fb4  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c9fb8  50                   push eax
// 009c9fb9  57                   push edi
// 009c9fba  8bce                 mov ecx, esi
// 009c9fbc  e86fffffff           call 0x9c9f30
// 009c9fc1  8bc7                 mov eax, edi
// 009c9fc3  5f                   pop edi
// 009c9fc4  5e                   pop esi
// 009c9fc5  c20800               ret 8
// 009c9fc8  8b7c240c             mov edi, dword ptr [esp + 0xc]
// 009c9fcc  33c0                 xor eax, eax
// 009c9fce  50                   push eax
// 009c9fcf  57                   push edi
// 009c9fd0  8bce                 mov ecx, esi
// 009c9fd2  e859ffffff           call 0x9c9f30
// 009c9fd7  8bc7                 mov eax, edi
// 009c9fd9  5f                   pop edi
// 009c9fda  5e                   pop esi
// 009c9fdb  c20800               ret 8
// library xtp-15.2.1/Source\Common\XTPSystemHelpers.cpp (function ?GetScreenArea@CXTPMultiMonitor@@QAE?AVCRect@@PAUHWND__@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPSystemHelpers.cpp
