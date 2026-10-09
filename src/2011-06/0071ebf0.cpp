// roc 2011-06 0071ebf0  unit: RBX::AdvLuaDragger  size: 88 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0071ebf0
//
// 0071ebf0  8b442404             mov eax, dword ptr [esp + 4]
// 0071ebf4  83f805               cmp eax, 5
// 0071ebf7  772f                 ja 0x71ec28
// 0071ebf9  ff248530ec7100       jmp dword ptr [eax*4 + 0x71ec30]
// 0071ec00  b8743ccd00           mov eax, 0xcd3c74
// 0071ec05  c20400               ret 4
// 0071ec08  b8903bcd00           mov eax, 0xcd3b90
// 0071ec0d  c20400               ret 4
// 0071ec10  b8503ccd00           mov eax, 0xcd3c50
// 0071ec15  c20400               ret 4
// 0071ec18  b8c83ecd00           mov eax, 0xcd3ec8
// 0071ec1d  c20400               ret 4
// 0071ec20  b8f83ccd00           mov eax, 0xcd3cf8
// 0071ec25  c20400               ret 4
// 0071ec28  b8003ecd00           mov eax, 0xcd3e00
// 0071ec2d  c20400               ret 4
// 0071ec30  18ec                 sbb ah, ch
// 0071ec32  7100                 jno 0x71ec34
// 0071ec34  28ec                 sub ah, ch
// 0071ec36  7100                 jno 0x71ec38
// 0071ec38  08ec                 or ah, ch
// 0071ec3a  7100                 jno 0x71ec3c
// 0071ec3c  20ec                 and ah, ch
// 0071ec3e  7100                 jno 0x71ec40
// 0071ec40  00ec                 add ah, ch
// 0071ec42  7100                 jno 0x71ec44
// 0071ec44  10ec                 adc ah, ch
// 0071ec46  7100                 jno 0x71ec48
// library openrbx-client/App\v8datamodel\Surfaces.cpp (function ?getSurfaceType@Surfaces@RBX@@QBEABVPropertyDescriptor@Reflection@2@W4NormalId@2@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: openrbx-client App/v8datamodel/Surfaces.cpp
