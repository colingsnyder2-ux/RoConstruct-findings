// roc 2008-06 005c3960  unit: RBX::VSparkles::?$FactoryProduct::Creator  size: 146 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005c3960
//
// 005c3960  6aff                 push -1
// 005c3962  6838487d00           push 0x7d4838
// 005c3967  64a100000000         mov eax, dword ptr fs:[0]
// 005c396d  50                   push eax
// 005c396e  64892500000000       mov dword ptr fs:[0], esp
// 005c3975  51                   push ecx
// 005c3976  56                   push esi
// 005c3977  8bf1                 mov esi, ecx
// 005c3979  89742404             mov dword ptr [esp + 4], esi
// 005c397d  e8aef0ffff           call 0x5c2a30
// 005c3982  c744241000000000     mov dword ptr [esp + 0x10], 0
// 005c398a  e8d1f2ffff           call 0x5c2c60
// 005c398f  8b4c2408             mov ecx, dword ptr [esp + 8]
// 005c3993  89461c               mov dword ptr [esi + 0x1c], eax
// 005c3996  c706448b8300         mov dword ptr [esi], 0x838b44
// 005c399c  c74610388b8300       mov dword ptr [esi + 0x10], 0x838b38
// 005c39a3  c74614308b8300       mov dword ptr [esi + 0x14], 0x838b30
// 005c39aa  c74620288b8300       mov dword ptr [esi + 0x20], 0x838b28
// 005c39b1  c74624188b8300       mov dword ptr [esi + 0x24], 0x838b18
// 005c39b8  c74644088b8300       mov dword ptr [esi + 0x44], 0x838b08
// 005c39bf  c74664f88a8300       mov dword ptr [esi + 0x64], 0x838af8
// 005c39c6  c78684000000e88a8300 mov dword ptr [esi + 0x84], 0x838ae8
// 005c39d0  c786a4000000d88a8300 mov dword ptr [esi + 0xa4], 0x838ad8
// 005c39da  c786c4000000c88a8300 mov dword ptr [esi + 0xc4], 0x838ac8
// 005c39e4  8bc6                 mov eax, esi
// 005c39e6  5e                   pop esi
// 005c39e7  64890d00000000       mov dword ptr fs:[0], ecx
// 005c39ee  83c410               add esp, 0x10
// 005c39f1  c3                   ret 
// library openrbx-client/App\script\Script.cpp (function ??0?$DescribedCreatable@VScript@RBX@@VInstance@2@$1?sScript@2@3PADA@RBX@@IAE@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/Script.cpp
