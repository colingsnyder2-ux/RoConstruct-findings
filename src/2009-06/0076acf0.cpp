// roc 2009-06 0076acf0  unit: CXTPControls  size: 208 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0076acf0
//
// 0076acf0  83ec18               sub esp, 0x18
// 0076acf3  53                   push ebx
// 0076acf4  8b5c2420             mov ebx, dword ptr [esp + 0x20]
// 0076acf8  55                   push ebp
// 0076acf9  56                   push esi
// 0076acfa  57                   push edi
// 0076acfb  8b7c2434             mov edi, dword ptr [esp + 0x34]
// 0076acff  57                   push edi
// 0076ad00  8d442434             lea eax, [esp + 0x34]
// 0076ad04  50                   push eax
// 0076ad05  6a00                 push 0
// 0076ad07  53                   push ebx
// 0076ad08  8bf1                 mov esi, ecx
// 0076ad0a  e8f1fdffff           call 0x76ab00
// 0076ad0f  6a00                 push 0
// 0076ad11  57                   push edi
// 0076ad12  53                   push ebx
// 0076ad13  8d4c2424             lea ecx, [esp + 0x24]
// 0076ad17  51                   push ecx
// 0076ad18  8bce                 mov ecx, esi
// 0076ad1a  e841fcffff           call 0x76a960
// 0076ad1f  8b28                 mov ebp, dword ptr [eax]
// 0076ad21  8b5004               mov edx, dword ptr [eax + 4]
// 0076ad24  57                   push edi
// 0076ad25  8d442434             lea eax, [esp + 0x34]
// 0076ad29  50                   push eax
// 0076ad2a  68ff7f0000           push 0x7fff
// 0076ad2f  53                   push ebx
// 0076ad30  8bce                 mov ecx, esi
// 0076ad32  8954242c             mov dword ptr [esp + 0x2c], edx
// 0076ad36  e8c5fdffff           call 0x76ab00
// 0076ad3b  6a00                 push 0
// 0076ad3d  57                   push edi
// 0076ad3e  53                   push ebx
// 0076ad3f  8d4c242c             lea ecx, [esp + 0x2c]
// 0076ad43  51                   push ecx
// 0076ad44  8bce                 mov ecx, esi
// 0076ad46  e815fcffff           call 0x76a960
// 0076ad4b  8b08                 mov ecx, dword ptr [eax]
// 0076ad4d  3be9                 cmp ebp, ecx
// 0076ad4f  8b5004               mov edx, dword ptr [eax + 4]
// 0076ad52  894c2410             mov dword ptr [esp + 0x10], ecx
// 0076ad56  89542414             mov dword ptr [esp + 0x14], edx
// 0076ad5a  7d5a                 jge 0x76adb6
// 0076ad5c  eb06                 jmp 0x76ad64
// 0076ad5e  8bff                 mov edi, edi
// 0076ad60  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0076ad64  57                   push edi
// 0076ad65  8d442434             lea eax, [esp + 0x34]
// 0076ad69  50                   push eax
// 0076ad6a  8d0429               lea eax, [ecx + ebp]
// 0076ad6d  99                   cdq 
// 0076ad6e  2bc2                 sub eax, edx
// 0076ad70  d1f8                 sar eax, 1
// 0076ad72  50                   push eax
// 0076ad73  53                   push ebx
// 0076ad74  8bce                 mov ecx, esi
// 0076ad76  e885fdffff           call 0x76ab00
// 0076ad7b  6a00                 push 0
// 0076ad7d  57                   push edi
// 0076ad7e  53                   push ebx
// 0076ad7f  8d4c242c             lea ecx, [esp + 0x2c]
// 0076ad83  51                   push ecx
// 0076ad84  8bce                 mov ecx, esi
// 0076ad86  e8d5fbffff           call 0x76a960
// 0076ad8b  8b08                 mov ecx, dword ptr [eax]
// 0076ad8d  8b5004               mov edx, dword ptr [eax + 4]
// 0076ad90  3bd1                 cmp edx, ecx
// 0076ad92  7e12                 jle 0x76ada6
// 0076ad94  3be9                 cmp ebp, ecx
// 0076ad96  7506                 jne 0x76ad9e
// 0076ad98  3954241c             cmp dword ptr [esp + 0x1c], edx
// 0076ad9c  7418                 je 0x76adb6
// 0076ad9e  8be9                 mov ebp, ecx
// 0076ada0  8954241c             mov dword ptr [esp + 0x1c], edx
// 0076ada4  eb0a                 jmp 0x76adb0
// 0076ada6  7d0e                 jge 0x76adb6
// 0076ada8  894c2410             mov dword ptr [esp + 0x10], ecx
// 0076adac  89542414             mov dword ptr [esp + 0x14], edx
// 0076adb0  3b6c2410             cmp ebp, dword ptr [esp + 0x10]
// 0076adb4  7caa                 jl 0x76ad60
// 0076adb6  5f                   pop edi
// 0076adb7  5e                   pop esi
// 0076adb8  5d                   pop ebp
// 0076adb9  5b                   pop ebx
// 0076adba  83c418               add esp, 0x18
// 0076adbd  c20c00               ret 0xc
// library xtp-11.2.2/Source\CommandBars\XTPControls.cpp (function ?_SizePopupToolBar@CXTPControls@@IAEXPAUXTPBUTTONINFO@1@KABVCSize@@@Z)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/CommandBars/XTPControls.cpp
