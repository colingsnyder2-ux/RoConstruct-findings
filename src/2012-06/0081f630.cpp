// roc 2012-06 0081f630  unit: RBX::Reflection::UTuple::$$A6A?AV?$shared_ptr::V?$function::?$sp_counted_impl_p  size: 20 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0081f630
//
// 0081f630  8b442408             mov eax, dword ptr [esp + 8]
// 0081f634  8b542404             mov edx, dword ptr [esp + 4]
// 0081f638  50                   push eax
// 0081f639  6a00                 push 0
// 0081f63b  52                   push edx
// 0081f63c  e8fffaffff           call 0x81f140
// 0081f641  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPCustomizeCommandsPage.cpp (function ?SetResize@CXTPResize@@QAEXIABUXTP_RESIZERECT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPCustomizeCommandsPage.cpp
