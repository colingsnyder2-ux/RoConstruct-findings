// roc 2012-06 00a4ad40  unit: CXTPControlCustom  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00a4ad40
//
// 00a4ad40  56                   push esi
// 00a4ad41  8bf1                 mov esi, ecx
// 00a4ad43  8b867c010000         mov eax, dword ptr [esi + 0x17c]
// 00a4ad49  85c0                 test eax, eax
// 00a4ad4b  7416                 je 0xa4ad63
// 00a4ad4d  50                   push eax
// 00a4ad4e  ff153c3bb200         call dword ptr [0xb23b3c]
// 00a4ad54  85c0                 test eax, eax
// 00a4ad56  740b                 je 0xa4ad63
// 00a4ad58  8bce                 mov ecx, esi
// 00a4ad5a  e8119cf3ff           call 0x984970
// 00a4ad5f  85c0                 test eax, eax
// 00a4ad61  7416                 je 0xa4ad79
// 00a4ad63  8b442410             mov eax, dword ptr [esp + 0x10]
// 00a4ad67  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00a4ad6b  8b542408             mov edx, dword ptr [esp + 8]
// 00a4ad6f  50                   push eax
// 00a4ad70  51                   push ecx
// 00a4ad71  52                   push edx
// 00a4ad72  8bce                 mov ecx, esi
// 00a4ad74  e897edfcff           call 0xa19b10
// 00a4ad79  5e                   pop esi
// 00a4ad7a  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControlCustom.cpp (function ?OnClick@CXTPControlCustom@@MAEXHVCPoint@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControlCustom.cpp
