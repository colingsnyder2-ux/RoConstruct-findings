// from server: 100% by auto
// roc 2012-06 00716d30  unit: FLog::VFastLogSettingsItem::?$FactoryProduct::Creator  size: 142 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00716d30
//
// 00716d30  53                   push ebx
// 00716d31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00716d35  55                   push ebp
// 00716d36  56                   push esi
// 00716d37  57                   push edi
// 00716d38  8bf9                 mov edi, ecx
// 00716d3a  85db                 test ebx, ebx
// 00716d3c  7470                 je 0x716dae
// 00716d3e  8b2dc821b200         mov ebp, dword ptr [0xb221c8]
// 00716d44  6a00                 push 0
// 00716d46  6a00                 push 0
// 00716d48  6a00                 push 0
// 00716d4a  6a00                 push 0
// 00716d4c  6aff                 push -1
// 00716d4e  53                   push ebx
// 00716d4f  6a00                 push 0
// 00716d51  6a03                 push 3
// 00716d53  ffd5                 call ebp
// 00716d55  8bf0                 mov esi, eax
// 00716d57  4e                   dec esi
// 00716d58  85f6                 test esi, esi
// 00716d5a  7e52                 jle 0x716dae
// 00716d5c  8b07                 mov eax, dword ptr [edi]
// 00716d5e  8b50f8               mov edx, dword ptr [eax - 8]
// 00716d61  83e810               sub eax, 0x10
// 00716d64  b901000000           mov ecx, 1
// 00716d69  2b480c               sub ecx, dword ptr [eax + 0xc]
// 00716d6c  2bd6                 sub edx, esi
// 00716d6e  0bca                 or ecx, edx
// 00716d70  7d08                 jge 0x716d7a
// 00716d72  56                   push esi
// 00716d73  8bcf                 mov ecx, edi
// 00716d75  e85689d5ff           call 0x46f6d0
// 00716d7a  8b07                 mov eax, dword ptr [edi]
// 00716d7c  6a00                 push 0
// 00716d7e  6a00                 push 0
// 00716d80  56                   push esi
// 00716d81  50                   push eax
// 00716d82  6aff                 push -1
// 00716d84  53                   push ebx
// 00716d85  6a00                 push 0
// 00716d87  6a03                 push 3
// 00716d89  ffd5                 call ebp
// 00716d8b  8b07                 mov eax, dword ptr [edi]
// 00716d8d  3b70f8               cmp esi, dword ptr [eax - 8]
// 00716d90  7f12                 jg 0x716da4
// 00716d92  8970f4               mov dword ptr [eax - 0xc], esi
// 00716d95  8b0f                 mov ecx, dword ptr [edi]
// 00716d97  8bc7                 mov eax, edi
// 00716d99  5f                   pop edi
// 00716d9a  c6040e00             mov byte ptr [esi + ecx], 0
// 00716d9e  5e                   pop esi
// 00716d9f  5d                   pop ebp
// 00716da0  5b                   pop ebx
// 00716da1  c20400               ret 4
// 00716da4  6857000780           push 0x80070057
// 00716da9  e802d4ceff           call 0x4041b0
// 00716dae  8bcf                 mov ecx, edi
// 00716db0  e86b34faff           call 0x6ba220
// 00716db5  8bc7                 mov eax, edi
// 00716db7  5f                   pop edi
// 00716db8  5e                   pop esi
// 00716db9  5d                   pop ebp
// 00716dba  5b                   pop ebx
// 00716dbb  c20400               ret 4
// library xtp-15.2.1/Source\Calendar\XTPCalendarController.cpp (function ??4?$CStringT@DV?$StrTraitMFC@DV?$ChTraitsCRT@D@ATL@@@@@ATL@@QAEAAV01@PB_W@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Calendar/XTPCalendarController.cpp
