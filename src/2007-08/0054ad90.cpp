// roc 2007-08 0054ad90  unit: boost::iostreams::DUoutput::V?$basic_null_device::?$stream_buffer  size: 113 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0054ad90
//
// 0054ad90  57                   push edi
// 0054ad91  8bf9                 mov edi, ecx
// 0054ad93  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0054ad97  85c9                 test ecx, ecx
// 0054ad99  750a                 jne 0x54ada5
// 0054ad9b  6805400080           push 0x80004005
// 0054ada0  e85b62ebff           call 0x401000
// 0054ada5  53                   push ebx
// 0054ada6  8b5c240c             mov ebx, dword ptr [esp + 0xc]
// 0054adaa  85db                 test ebx, ebx
// 0054adac  56                   push esi
// 0054adad  8b742414             mov esi, dword ptr [esp + 0x14]
// 0054adb1  750e                 jne 0x54adc1
// 0054adb3  85f6                 test esi, esi
// 0054adb5  740a                 je 0x54adc1
// 0054adb7  6857000780           push 0x80070057
// 0054adbc  e83f62ebff           call 0x401000
// 0054adc1  8b01                 mov eax, dword ptr [ecx]
// 0054adc3  8b10                 mov edx, dword ptr [eax]
// 0054adc5  6a01                 push 1
// 0054adc7  56                   push esi
// 0054adc8  ffd2                 call edx
// 0054adca  85c0                 test eax, eax
// 0054adcc  7505                 jne 0x54add3
// 0054adce  e84d81ecff           call 0x412f20
// 0054add3  83c010               add eax, 0x10
// 0054add6  85f6                 test esi, esi
// 0054add8  8907                 mov dword ptr [edi], eax
// 0054adda  7cdb                 jl 0x54adb7
// 0054addc  3b70f8               cmp esi, dword ptr [eax - 8]
// 0054addf  7fd6                 jg 0x54adb7
// 0054ade1  8970f4               mov dword ptr [eax - 0xc], esi
// 0054ade4  8b07                 mov eax, dword ptr [edi]
// 0054ade6  56                   push esi
// 0054ade7  53                   push ebx
// 0054ade8  c6040600             mov byte ptr [esi + eax], 0
// 0054adec  8b0f                 mov ecx, dword ptr [edi]
// 0054adee  56                   push esi
// 0054adef  51                   push ecx
// 0054adf0  ff15d4e67700         call dword ptr [0x77e6d4]
// 0054adf6  83c410               add esp, 0x10
// 0054adf9  5e                   pop esi
// 0054adfa  5b                   pop ebx
// 0054adfb  8bc7                 mov eax, edi
// 0054adfd  5f                   pop edi
// 0054adfe  c20c00               ret 0xc
// copied from an identical function in another client (function ??0?$CSimpleStringT@D$0A@@ATL@@QAE@PBDHPAUIAtlStringMgr@1@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /GS- /EHsc /MD
// roc-lib: atl-8.0-dll roc_boost_atl_f4b0910a5d2d7185.cpp