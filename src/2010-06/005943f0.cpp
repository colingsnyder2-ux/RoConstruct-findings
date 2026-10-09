// roc 2010-06 005943f0  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 24 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 005943f0
//
// 005943f0  68b0425900           push 0x5942b0
// 005943f5  68b8b2c000           push 0xc0b2b8
// 005943fa  e891d2e6ff           call 0x401690
// 005943ff  a178b2c000           mov eax, dword ptr [0xc0b278]
// 00594404  83c408               add esp, 8
// 00594407  c3                   ret 
// library openrbx-client/App\util\Guid.cpp (function ?getLocalScope@Guid@RBX@@SAABVName@2@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/util/Guid.cpp
