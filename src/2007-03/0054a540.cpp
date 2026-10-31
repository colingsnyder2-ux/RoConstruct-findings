// roc 2007-03 0054a540  unit: seg_00540000  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0054a540
//
// 0054a540  57                   push edi
// 0054a541  8bf9                 mov edi, ecx
// 0054a543  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054a547  85c9                 test ecx, ecx
// 0054a549  750a                 jne 0x54a555
// 0054a54b  6805400080           push 0x80004005
// 0054a550  e8ab6aebff           call 0x401000
// 0054a555  53                   push ebx
// 0054a556  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054a55a  85db                 test ebx, ebx
// 0054a55c  56                   push esi
// 0054a55d  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054a561  750e                 jne 0x54a571
// 0054a563  85f6                 test esi, esi
// 0054a565  740a                 je 0x54a571
// 0054a567  6857000780           push 0x80070057
// 0054a56c  e88f6aebff           call 0x401000
// 0054a571  8b01                 mov eax, dword ptr [ecx]
// 0054a573  8b10                 mov edx, dword ptr [eax]
// 0054a575  6a01                 push 1
// 0054a577  56                   push esi
// 0054a578  ffd2                 call edx
// 0054a57a  85c0                 test eax, eax
// 0054a57c  7505                 jne 0x54a583
// 0054a57e  e8bd98ecff           call 0x413e40
// 0054a583  83c010               add eax, 0x10
// 0054a586  85f6                 test esi, esi
// 0054a588  8907                 mov dword ptr [edi], eax
// 0054a58a  7cdb                 jl 0x54a567
// 0054a58c  3b70f8               cmp esi, dword ptr [eax - 8]
// 0054a58f  7fd6                 jg 0x54a567
// 0054a591  8970f4               mov dword ptr [eax - 0xc], esi
// 0054a594  8b07                 mov eax, dword ptr [edi]
// 0054a596  56                   push esi
// 0054a597  53                   push ebx
// 0054a598  c6040600             mov byte ptr [esi + eax], 0
// 0054a59c  8b0f                 mov ecx, dword ptr [edi]
// 0054a59e  56                   push esi
// 0054a59f  51                   push ecx
// 0054a5a0  ff1540e97700         call dword ptr [0x77e940]
// 0054a5a6  83c410               add esp, 0x10
// 0054a5a9  5e                   pop esi
// 0054a5aa  5b                   pop ebx
// 0054a5ab  8bc7                 mov eax, edi
// 0054a5ad  5f                   pop edi
// 0054a5ae  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$CSimpleStringT@D$0A@@ATL@@QAE@PBDHPAUIAtlStringMgr@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp