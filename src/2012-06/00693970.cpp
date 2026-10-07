// roc 2012-06 00693970  unit: RBX::Soundscape::P8SoundChannel::?$GetSetImpl  size: 37 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 00693970
//
// 00693970  51                   push ecx
// 00693971  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00693975  33c0                 xor eax, eax
// 00693977  890424               mov dword ptr [esp], eax
// 0069397a  56                   push esi
// 0069397b  8b74240c             mov esi, dword ptr [esp + 0xc]
// 0069397f  88442404             mov byte ptr [esp + 4], al
// 00693983  8b442404             mov eax, dword ptr [esp + 4]
// 00693987  50                   push eax
// 00693988  51                   push ecx
// 00693989  8bce                 mov ecx, esi
// 0069398b  e840faffff           call 0x6933d0
// 00693990  8bc6                 mov eax, esi
// 00693992  5e                   pop esi
// 00693993  59                   pop ecx
// 00693994  c3                   ret 
// library rbxgs/script\LuaInstanceBridge.cpp (function ??$shared_dynamic_cast@VInstance@RBX@@VObject@2@@boost@@YA?AV?$shared_ptr@VInstance@RBX@@@0@ABV?$shared_ptr@VObject@RBX@@@0@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs script/LuaInstanceBridge.cpp
