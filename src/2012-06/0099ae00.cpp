// roc 2012-06 0099ae00  unit: IIPAVCXTPImageManagerIcon::?$CMap  size: 95 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0099ae00
//
// 0099ae00  83ec0c               sub esp, 0xc
// 0099ae03  53                   push ebx
// 0099ae04  8bd9                 mov ebx, ecx
// 0099ae06  8b432c               mov eax, dword ptr [ebx + 0x2c]
// 0099ae09  f7d8                 neg eax
// 0099ae0b  1bc0                 sbb eax, eax
// 0099ae0d  89442404             mov dword ptr [esp + 4], eax
// 0099ae11  7440                 je 0x99ae53
// 0099ae13  56                   push esi
// 0099ae14  57                   push edi
// 0099ae15  8d7b20               lea edi, [ebx + 0x20]
// 0099ae18  eb06                 jmp 0x99ae20
// 0099ae1a  8d9b00000000         lea ebx, [ebx]
// 0099ae20  8d442410             lea eax, [esp + 0x10]
// 0099ae24  50                   push eax
// 0099ae25  8d4c2418             lea ecx, [esp + 0x18]
// 0099ae29  51                   push ecx
// 0099ae2a  8d542414             lea edx, [esp + 0x14]
// 0099ae2e  52                   push edx
// 0099ae2f  8bcf                 mov ecx, edi
// 0099ae31  e82ad3ffff           call 0x998160
// 0099ae36  8b742410             mov esi, dword ptr [esp + 0x10]
// 0099ae3a  6a01                 push 1
// 0099ae3c  8bce                 mov ecx, esi
// 0099ae3e  e8bdfeffff           call 0x99ad00
// 0099ae43  8bce                 mov ecx, esi
// 0099ae45  e84078feff           call 0x98268a
// 0099ae4a  837c240c00           cmp dword ptr [esp + 0xc], 0
// 0099ae4f  75cf                 jne 0x99ae20
// 0099ae51  5f                   pop edi
// 0099ae52  5e                   pop esi
// 0099ae53  8d4b20               lea ecx, [ebx + 0x20]
// 0099ae56  5b                   pop ebx
// 0099ae57  83c40c               add esp, 0xc
// 0099ae5a  e951a8abff           jmp 0x4556b0
// library xtp-15.2.1/Source\Common\XTPImageManager.cpp (function ?RemoveAll@CXTPImageManagerIconSet@@QAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Common/XTPImageManager.cpp
