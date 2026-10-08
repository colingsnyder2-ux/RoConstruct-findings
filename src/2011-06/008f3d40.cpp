// from server: 100% by auto
// roc 2011-06 008f3d40  unit: CXTPScrollBase  size: 125 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 008f3d40
//
// 008f3d40  8b442404             mov eax, dword ptr [esp + 4]
// 008f3d44  56                   push esi
// 008f3d45  8bf1                 mov esi, ecx
// 008f3d47  837e5c00             cmp dword ptr [esi + 0x5c], 0
// 008f3d4b  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 008f3d4f  57                   push edi
// 008f3d50  8bf9                 mov edi, ecx
// 008f3d52  7502                 jne 0x8f3d56
// 008f3d54  8bf8                 mov edi, eax
// 008f3d56  51                   push ecx
// 008f3d57  50                   push eax
// 008f3d58  8d4648               lea eax, [esi + 0x48]
// 008f3d5b  50                   push eax
// 008f3d5c  ff15101ca400         call dword ptr [0xa41c10]
// 008f3d62  85c0                 test eax, eax
// 008f3d64  7505                 jne 0x8f3d6b
// 008f3d66  5f                   pop edi
// 008f3d67  5e                   pop esi
// 008f3d68  c20800               ret 8
// 008f3d6b  3b7e28               cmp edi, dword ptr [esi + 0x28]
// 008f3d6e  7d0a                 jge 0x8f3d7a
// 008f3d70  5f                   pop edi
// 008f3d71  b83c000000           mov eax, 0x3c
// 008f3d76  5e                   pop esi
// 008f3d77  c20800               ret 8
// 008f3d7a  8b463c               mov eax, dword ptr [esi + 0x3c]
// 008f3d7d  85c0                 test eax, eax
// 008f3d7f  7e0e                 jle 0x8f3d8f
// 008f3d81  3bf8                 cmp edi, eax
// 008f3d83  7e0a                 jle 0x8f3d8f
// 008f3d85  5f                   pop edi
// 008f3d86  b841000000           mov eax, 0x41
// 008f3d8b  5e                   pop esi
// 008f3d8c  c20800               ret 8
// 008f3d8f  3b7e2c               cmp edi, dword ptr [esi + 0x2c]
// 008f3d92  7c0a                 jl 0x8f3d9e
// 008f3d94  5f                   pop edi
// 008f3d95  b83d000000           mov eax, 0x3d
// 008f3d9a  5e                   pop esi
// 008f3d9b  c20800               ret 8
// 008f3d9e  3b7e38               cmp edi, dword ptr [esi + 0x38]
// 008f3da1  7d0a                 jge 0x8f3dad
// 008f3da3  5f                   pop edi
// 008f3da4  b83e000000           mov eax, 0x3e
// 008f3da9  5e                   pop esi
// 008f3daa  c20800               ret 8
// 008f3dad  33c0                 xor eax, eax
// 008f3daf  3b7e34               cmp edi, dword ptr [esi + 0x34]
// 008f3db2  5f                   pop edi
// 008f3db3  0f9cc0               setl al
// 008f3db6  5e                   pop esi
// 008f3db7  83c03f               add eax, 0x3f
// 008f3dba  c20800               ret 8
// library xtp-15.2.1/Source\CommandBars\XTPScrollBase.cpp (function ?HitTestScrollBar@CXTPScrollBase@@QBEHUtagPOINT@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/CommandBars/XTPScrollBase.cpp
