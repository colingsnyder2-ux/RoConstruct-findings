// from server: 100% by auto
// roc 2012-06 0041b850  unit: RBX::JavaScript::VMarshalledFunction::?$sp_counted_impl_p  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041b850
//
// 0041b850  56                   push esi
// 0041b851  8bf1                 mov esi, ecx
// 0041b853  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041b857  33c0                 xor eax, eax
// 0041b859  51                   push ecx
// 0041b85a  8bce                 mov ecx, esi
// 0041b85c  668906               mov word ptr [esi], ax
// 0041b85f  e86cfdffff           call 0x41b5d0
// 0041b864  8bc6                 mov eax, esi
// 0041b866  5e                   pop esi
// 0041b867  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarMAPIDataProvider.cpp (function ??0COleVariant@@QAE@ABVCByteArray@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarMAPIDataProvider.cpp
