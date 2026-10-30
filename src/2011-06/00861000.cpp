// from server: 100% by auto
// roc 2011-06 00861000  unit: CXTPPropExchange  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00861000
//
// 00861000  56                   push esi
// 00861001  8bf1                 mov esi, ecx
// 00861003  e858e5ffff           call 0x85f560
// 00861008  8b442408             mov eax, dword ptr [esp + 8]
// 0086100c  894644               mov dword ptr [esi + 0x44], eax
// 0086100f  c706eca9ac00         mov dword ptr [esi], 0xaca9ec
// 00861015  8b4018               mov eax, dword ptr [eax + 0x18]
// 00861018  83e001               and eax, 1
// 0086101b  894628               mov dword ptr [esi + 0x28], eax
// 0086101e  8bc6                 mov eax, esi
// 00861020  5e                   pop esi
// 00861021  c20400               ret 4
// library xtp-15.2.1/Source\Common\XTPPropExchange.cpp (function ??0CXTPPropExchangeArchive@@QAE@AAVCArchive@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O1 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPPropExchange.cpp
