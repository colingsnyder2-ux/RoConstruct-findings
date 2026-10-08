// from server: 100% by auto
// roc 2008-06 00777ff0  unit: XTPPropertyGridPaintThemes::CXTPPropertyGridNativeXPTheme  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00777ff0
//
// 00777ff0  56                   push esi
// 00777ff1  8bf1                 mov esi, ecx
// 00777ff3  e828eaffff           call 0x776a20
// 00777ff8  e8437df6ff           call 0x6dfd40
// 00777ffd  8bc8                 mov ecx, eax
// 00777fff  e83c7bf6ff           call 0x6dfb40
// 00778004  48                   dec eax
// 00778005  83f803               cmp eax, 3
// 00778008  7717                 ja 0x778021
// 0077800a  ff248524807700       jmp dword ptr [eax*4 + 0x778024]
// 00778011  c746407f9db900       mov dword ptr [esi + 0x40], 0xb99d7f
// 00778018  5e                   pop esi
// 00778019  c3                   ret 
// 0077801a  c74640a4b97f00       mov dword ptr [esi + 0x40], 0x7fb9a4
// 00778021  5e                   pop esi
// 00778022  c3                   ret 
// 00778023  90                   nop 
// 00778024  118077001a80         adc dword ptr [eax - 0x7fe5ff89], eax
// 0077802a  7700                 ja 0x77802c
// 0077802c  118077001180         adc dword ptr [eax - 0x7feeff89], eax
// 00778032  7700                 ja 0x778034
// library xtp-11.2.2/Source\PropertyGrid\XTPPropertyGridPaintManager.cpp (function ?RefreshMetrics@CXTPPropertyGridNativeXPTheme@XTPPropertyGridPaintThemes@@UAEXXZ)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-11.2.2 Source/PropertyGrid/XTPPropertyGridPaintManager.cpp
