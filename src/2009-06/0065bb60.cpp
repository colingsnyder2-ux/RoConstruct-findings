// roc 2009-06 0065bb60  unit: VCRenderSettingsItem::?$EnumPropDescriptor  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0065bb60
//
// 0065bb60  b801000000           mov eax, 1
// 0065bb65  8405e8cfa400         test byte ptr [0xa4cfe8], al
// 0065bb6b  7520                 jne 0x65bb8d
// 0065bb6d  d9e8                 fld1 
// 0065bb6f  0905e8cfa400         or dword ptr [0xa4cfe8], eax
// 0065bb75  d915dccfa400         fst dword ptr [0xa4cfdc]
// 0065bb7b  d905c4758b00         fld dword ptr [0x8b75c4]
// 0065bb81  d91de0cfa400         fstp dword ptr [0xa4cfe0]
// 0065bb87  d91de4cfa400         fstp dword ptr [0xa4cfe4]
// 0065bb8d  b8dccfa400           mov eax, 0xa4cfdc
// 0065bb92  c3                   ret 
// library rbxgs/tool\Dragger.cpp (function ?dragSnap@Dragger@RBX@@SAABVVector3@G3D@@XZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/Dragger.cpp
