// roc 2009-12 00886d80  unit: XTPPaintThemes::CXTPNativeXPTheme  size: 202 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00886d80
//
// 00886d80  6aff                 push -1
// 00886d82  68c00b9600           push 0x960bc0
// 00886d87  64a100000000         mov eax, dword ptr fs:[0]
// 00886d8d  50                   push eax
// 00886d8e  51                   push ecx
// 00886d8f  53                   push ebx
// 00886d90  56                   push esi
// 00886d91  a10052b600           mov eax, dword ptr [0xb65200]
// 00886d96  33c4                 xor eax, esp
// 00886d98  50                   push eax
// 00886d99  8d442410             lea eax, [esp + 0x10]
// 00886d9d  64a300000000         mov dword ptr fs:[0], eax
// 00886da3  8bf1                 mov esi, ecx
// 00886da5  8974240c             mov dword ptr [esp + 0xc], esi
// 00886da9  e81255ffff           call 0x87c2c0
// 00886dae  bb01000000           mov ebx, 1
// 00886db3  53                   push ebx
// 00886db4  8d8e60040000         lea ecx, [esi + 0x460]
// 00886dba  c744241c00000000     mov dword ptr [esp + 0x1c], 0
// 00886dc2  c706942aa000         mov dword ptr [esi], 0xa02a94
// 00886dc8  e87349feff           call 0x86b740
// 00886dcd  53                   push ebx
// 00886dce  8d8e6c040000         lea ecx, [esi + 0x46c]
// 00886dd4  885c241c             mov byte ptr [esp + 0x1c], bl
// 00886dd8  e86349feff           call 0x86b740
// 00886ddd  53                   push ebx
// 00886dde  8d8e78040000         lea ecx, [esi + 0x478]
// 00886de4  c644241c02           mov byte ptr [esp + 0x1c], 2
// 00886de9  e85249feff           call 0x86b740
// 00886dee  53                   push ebx
// 00886def  8d8e84040000         lea ecx, [esi + 0x484]
// 00886df5  c644241c03           mov byte ptr [esp + 0x1c], 3
// 00886dfa  e84149feff           call 0x86b740
// 00886dff  53                   push ebx
// 00886e00  8d8e90040000         lea ecx, [esi + 0x490]
// 00886e06  c644241c04           mov byte ptr [esp + 0x1c], 4
// 00886e0b  e83049feff           call 0x86b740
// 00886e10  899e48010000         mov dword ptr [esi + 0x148], ebx
// 00886e16  c7865001000000000000 mov dword ptr [esi + 0x150], 0
// 00886e20  c7865c04000007000000 mov dword ptr [esi + 0x45c], 7
// 00886e2a  899ea4040000         mov dword ptr [esi + 0x4a4], ebx
// 00886e30  895e68               mov dword ptr [esi + 0x68], ebx
// 00886e33  895e6c               mov dword ptr [esi + 0x6c], ebx
// 00886e36  8bc6                 mov eax, esi
// 00886e38  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 00886e3c  64890d00000000       mov dword ptr fs:[0], ecx
// 00886e43  59                   pop ecx
// 00886e44  5e                   pop esi
// 00886e45  5b                   pop ebx
// 00886e46  83c410               add esp, 0x10
// 00886e49  c3                   ret 
// copied from an identical function in another client (function ??0CXTPNativeXPTheme@XTPPaintThemes@@QAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPNativeXPTheme.cpp