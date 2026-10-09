// roc 2008-06 00559a20  unit: RBX::VInstance::?$SignalDesc  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00559a20
//
// 00559a20  8b542404             mov edx, dword ptr [esp + 4]
// 00559a24  8bc1                 mov eax, ecx
// 00559a26  8b0a                 mov ecx, dword ptr [edx]
// 00559a28  85c9                 test ecx, ecx
// 00559a2a  7405                 je 0x559a31
// 00559a2c  83c114               add ecx, 0x14
// 00559a2f  eb02                 jmp 0x559a33
// 00559a31  33c9                 xor ecx, ecx
// 00559a33  8908                 mov dword ptr [eax], ecx
// 00559a35  8b5204               mov edx, dword ptr [edx + 4]
// 00559a38  895004               mov dword ptr [eax + 4], edx
// 00559a3b  85d2                 test edx, edx
// 00559a3d  740c                 je 0x559a4b
// 00559a3f  83c204               add edx, 4
// 00559a42  b901000000           mov ecx, 1
// 00559a47  f00fc10a             lock xadd dword ptr [edx], ecx
// 00559a4b  c20400               ret 4
// library openrbx-client/App\script\LuaSignalBridge.cpp (function ??$?0VInstance@RBX@@@?$shared_ptr@VDescribedBase@Reflection@RBX@@@boost@@QAE@ABV?$shared_ptr@VInstance@RBX@@@1@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/script/LuaSignalBridge.cpp
