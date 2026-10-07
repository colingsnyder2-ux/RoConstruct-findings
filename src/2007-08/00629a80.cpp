// roc 2007-08 00629a80  unit: RBX::AssemblyStage  size: 143 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00629a80
//
// 00629a80  55                   push ebp
// 00629a81  57                   push edi
// 00629a82  53                   push ebx
// 00629a83  56                   push esi
// 00629a84  8bf8                 mov edi, eax
// 00629a86  e8f5f9ffff           call 0x629480
// 00629a8b  57                   push edi
// 00629a8c  56                   push esi
// 00629a8d  8be8                 mov ebp, eax
// 00629a8f  e8ecf9ffff           call 0x629480
// 00629a94  83c410               add esp, 0x10
// 00629a97  83caff               or edx, 0xffffffff
// 00629a9a  833f0c               cmp dword ptr [edi], 0xc
// 00629a9d  7516                 jne 0x629ab5
// 00629a9f  8b7f08               mov edi, dword ptr [edi + 8]
// 00629aa2  f7c700010000         test edi, 0x100
// 00629aa8  750b                 jne 0x629ab5
// 00629aaa  0fb64e32             movzx ecx, byte ptr [esi + 0x32]
// 00629aae  3bf9                 cmp edi, ecx
// 00629ab0  7c03                 jl 0x629ab5
// 00629ab2  015624               add dword ptr [esi + 0x24], edx
// 00629ab5  833b0c               cmp dword ptr [ebx], 0xc
// 00629ab8  7516                 jne 0x629ad0
// 00629aba  8b4b08               mov ecx, dword ptr [ebx + 8]
// 00629abd  f7c100010000         test ecx, 0x100
// 00629ac3  750b                 jne 0x629ad0
// 00629ac5  0fb67e32             movzx edi, byte ptr [esi + 0x32]
// 00629ac9  3bcf                 cmp ecx, edi
// 00629acb  7c03                 jl 0x629ad0
// 00629acd  015624               add dword ptr [esi + 0x24], edx
// 00629ad0  837c241000           cmp dword ptr [esp + 0x10], 0
// 00629ad5  7515                 jne 0x629aec
// 00629ad7  837c240c17           cmp dword ptr [esp + 0xc], 0x17
// 00629adc  740e                 je 0x629aec
// 00629ade  8bcd                 mov ecx, ebp
// 00629ae0  8be8                 mov ebp, eax
// 00629ae2  8bc1                 mov eax, ecx
// 00629ae4  c744241001000000     mov dword ptr [esp + 0x10], 1
// 00629aec  8b542410             mov edx, dword ptr [esp + 0x10]
// 00629af0  50                   push eax
// 00629af1  8b442410             mov eax, dword ptr [esp + 0x10]
// 00629af5  52                   push edx
// 00629af6  50                   push eax
// 00629af7  8bc5                 mov eax, ebp
// 00629af9  8bce                 mov ecx, esi
// 00629afb  e880f4ffff           call 0x628f80
// 00629b00  83c40c               add esp, 0xc
// 00629b03  5f                   pop edi
// 00629b04  894308               mov dword ptr [ebx + 8], eax
// 00629b07  c7030a000000         mov dword ptr [ebx], 0xa
// 00629b0d  5d                   pop ebp
// 00629b0e  c3                   ret 
// library lua-5.1.4/lcode.c (function _codecomp)

// roc-lang: c
// roc-cl: 21022
// roc-flags: /O2 /GS- /MD
// roc-lib: lua-5.1.4 lcode.c
