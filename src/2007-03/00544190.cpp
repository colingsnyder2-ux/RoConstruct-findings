// roc 2007-03 00544190  unit: seg_00540000  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00544190
//
// 00544190  8b442404             mov eax, dword ptr [esp + 4]
// 00544194  3b81f4000000         cmp eax, dword ptr [ecx + 0xf4]
// 0054419a  7413                 je 0x5441af
// 0054419c  8981f4000000         mov dword ptr [ecx + 0xf4], eax
// 005441a2  c744240410bd8b00     mov dword ptr [esp + 4], 0x8bbd10
// 005441aa  e991fcefff           jmp 0x443e40
// 005441af  c20400               ret 4
// library rbxgs/v8datamodel\DebugSettings.cpp (function ?setErrorReporting@DebugSettings@RBX@@QAEXW4ErrorReporting@12@@Z)

// roc-lang: cpp
// roc-cl: 50727
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8datamodel/DebugSettings.cpp
