// roc 2011-06 00457370  unit: RBX::CRenderSettings::W4ShadowMode::?$EnumDesc  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00457370
//
// 00457370  8b442404             mov eax, dword ptr [esp + 4]
// 00457374  3b052c38c300         cmp eax, dword ptr [0xc3382c]
// 0045737a  7412                 je 0x45738e
// 0045737c  a32c38c300           mov dword ptr [0xc3382c], eax
// 00457381  c74424040032cb00     mov dword ptr [esp + 4], 0xcb3200
// 00457389  e9d2abfbff           jmp 0x411f60
// 0045738e  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setAssertAction@DebugSettings@RBX@@QAEXW4AssertAction@Debugable@2@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
