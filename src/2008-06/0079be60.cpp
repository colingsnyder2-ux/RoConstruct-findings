// from server: 100% by auto
// roc 2008-06 0079be60  unit: CXTPTabPaintManager::CColorSetWinXP  size: 362 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0079be60
//
// 0079be60  56                   push esi
// 0079be61  8bf1                 mov esi, ecx
// 0079be63  57                   push edi
// 0079be64  8d4e04               lea ecx, [esi + 4]
// 0079be67  c70660da8600         mov dword ptr [esi], 0x86da60
// 0079be6d  e8de33f4ff           call 0x6df250
// 0079be72  8d4e24               lea ecx, [esi + 0x24]
// 0079be75  e8d633f4ff           call 0x6df250
// 0079be7a  8d4e44               lea ecx, [esi + 0x44]
// 0079be7d  e8ae33f4ff           call 0x6df230
// 0079be82  8d4e50               lea ecx, [esi + 0x50]
// 0079be85  e8a633f4ff           call 0x6df230
// 0079be8a  8d4e5c               lea ecx, [esi + 0x5c]
// 0079be8d  e89e33f4ff           call 0x6df230
// 0079be92  8d4e68               lea ecx, [esi + 0x68]
// 0079be95  e89633f4ff           call 0x6df230
// 0079be9a  8d4e74               lea ecx, [esi + 0x74]
// 0079be9d  e88e33f4ff           call 0x6df230
// 0079bea2  8d8e80000000         lea ecx, [esi + 0x80]
// 0079bea8  e88333f4ff           call 0x6df230
// 0079bead  8d8e8c000000         lea ecx, [esi + 0x8c]
// 0079beb3  e87833f4ff           call 0x6df230
// 0079beb8  8d8e98000000         lea ecx, [esi + 0x98]
// 0079bebe  e86d33f4ff           call 0x6df230
// 0079bec3  8d8ea4000000         lea ecx, [esi + 0xa4]
// 0079bec9  e86233f4ff           call 0x6df230
// 0079bece  8d8eb0000000         lea ecx, [esi + 0xb0]
// 0079bed4  e85733f4ff           call 0x6df230
// 0079bed9  8d8ebc000000         lea ecx, [esi + 0xbc]
// 0079bedf  e84c33f4ff           call 0x6df230
// 0079bee4  8d8ec8000000         lea ecx, [esi + 0xc8]
// 0079beea  e84133f4ff           call 0x6df230
// 0079beef  8d8ed4000000         lea ecx, [esi + 0xd4]
// 0079bef5  e83633f4ff           call 0x6df230
// 0079befa  8dbee0000000         lea edi, [esi + 0xe0]
// 0079bf00  8bcf                 mov ecx, edi
// 0079bf02  e84933f4ff           call 0x6df250
// 0079bf07  8d4f20               lea ecx, [edi + 0x20]
// 0079bf0a  e84133f4ff           call 0x6df250
// 0079bf0f  8dbe20010000         lea edi, [esi + 0x120]
// 0079bf15  8bcf                 mov ecx, edi
// 0079bf17  e81433f4ff           call 0x6df230
// 0079bf1c  8d4f0c               lea ecx, [edi + 0xc]
// 0079bf1f  e80c33f4ff           call 0x6df230
// 0079bf24  8d4f18               lea ecx, [edi + 0x18]
// 0079bf27  e80433f4ff           call 0x6df230
// 0079bf2c  8dbe44010000         lea edi, [esi + 0x144]
// 0079bf32  8bcf                 mov ecx, edi
// 0079bf34  e8f732f4ff           call 0x6df230
// 0079bf39  8d4f0c               lea ecx, [edi + 0xc]
// 0079bf3c  e8ef32f4ff           call 0x6df230
// 0079bf41  8d4f18               lea ecx, [edi + 0x18]
// 0079bf44  e8e732f4ff           call 0x6df230
// 0079bf49  8d4f24               lea ecx, [edi + 0x24]
// 0079bf4c  e8df32f4ff           call 0x6df230
// 0079bf51  8dbe74010000         lea edi, [esi + 0x174]
// 0079bf57  8bcf                 mov ecx, edi
// 0079bf59  e8d232f4ff           call 0x6df230
// 0079bf5e  8d4f0c               lea ecx, [edi + 0xc]
// 0079bf61  e8ca32f4ff           call 0x6df230
// 0079bf66  8d4f18               lea ecx, [edi + 0x18]
// 0079bf69  e8c232f4ff           call 0x6df230
// 0079bf6e  8d4f24               lea ecx, [edi + 0x24]
// 0079bf71  e8ba32f4ff           call 0x6df230
// 0079bf76  8d4f30               lea ecx, [edi + 0x30]
// 0079bf79  e8b232f4ff           call 0x6df230
// 0079bf7e  8d4f3c               lea ecx, [edi + 0x3c]
// 0079bf81  e8aa32f4ff           call 0x6df230
// 0079bf86  8dbebc010000         lea edi, [esi + 0x1bc]
// 0079bf8c  8bcf                 mov ecx, edi
// 0079bf8e  e89d32f4ff           call 0x6df230
// 0079bf93  8d4f0c               lea ecx, [edi + 0xc]
// 0079bf96  e89532f4ff           call 0x6df230
// 0079bf9b  8d4f18               lea ecx, [edi + 0x18]
// 0079bf9e  e88d32f4ff           call 0x6df230
// 0079bfa3  8d4f24               lea ecx, [edi + 0x24]
// 0079bfa6  e88532f4ff           call 0x6df230
// 0079bfab  8d4f30               lea ecx, [edi + 0x30]
// 0079bfae  e87d32f4ff           call 0x6df230
// 0079bfb3  8d4f3c               lea ecx, [edi + 0x3c]
// 0079bfb6  e87532f4ff           call 0x6df230
// 0079bfbb  5f                   pop edi
// 0079bfbc  c7860402000000000000 mov dword ptr [esi + 0x204], 0
// 0079bfc6  8bc6                 mov eax, esi
// 0079bfc8  5e                   pop esi
// 0079bfc9  c3                   ret 
// library xtp-11.2.2/Source\TabManager\XTPTabPaintManagerColors.cpp (function ??0CColorSet@CXTPTabPaintManager@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/TabManager/XTPTabPaintManagerColors.cpp
