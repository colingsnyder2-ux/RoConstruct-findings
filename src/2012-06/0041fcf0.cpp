// roc 2012-06 0041fcf0  unit: RBX::VTool::?$FactoryProduct::Creator  size: 110 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0041fcf0
//
// 0041fcf0  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0041fcf4  8b542404             mov edx, dword ptr [esp + 4]
// 0041fcf8  b810000000           mov eax, 0x10
// 0041fcfd  56                   push esi
// 0041fcfe  8bff                 mov edi, edi
// 0041fd00  8b32                 mov esi, dword ptr [edx]
// 0041fd02  3b31                 cmp esi, dword ptr [ecx]
// 0041fd04  751b                 jne 0x41fd21
// 0041fd06  83e804               sub eax, 4
// 0041fd09  83c104               add ecx, 4
// 0041fd0c  83c204               add edx, 4
// 0041fd0f  83f804               cmp eax, 4
// 0041fd12  73ec                 jae 0x41fd00
// 0041fd14  33c0                 xor eax, eax
// 0041fd16  33d2                 xor edx, edx
// 0041fd18  85c0                 test eax, eax
// 0041fd1a  0f94c2               sete dl
// 0041fd1d  5e                   pop esi
// 0041fd1e  8bc2                 mov eax, edx
// 0041fd20  c3                   ret 
// 0041fd21  0fb602               movzx eax, byte ptr [edx]
// 0041fd24  0fb631               movzx esi, byte ptr [ecx]
// 0041fd27  2bc6                 sub eax, esi
// 0041fd29  7522                 jne 0x41fd4d
// 0041fd2b  0fb64201             movzx eax, byte ptr [edx + 1]
// 0041fd2f  0fb67101             movzx esi, byte ptr [ecx + 1]
// 0041fd33  2bc6                 sub eax, esi
// 0041fd35  7516                 jne 0x41fd4d
// 0041fd37  0fb64202             movzx eax, byte ptr [edx + 2]
// 0041fd3b  0fb67102             movzx esi, byte ptr [ecx + 2]
// 0041fd3f  2bc6                 sub eax, esi
// 0041fd41  750a                 jne 0x41fd4d
// 0041fd43  0fb64203             movzx eax, byte ptr [edx + 3]
// 0041fd47  0fb64903             movzx ecx, byte ptr [ecx + 3]
// 0041fd4b  2bc1                 sub eax, ecx
// 0041fd4d  c1f81f               sar eax, 0x1f
// 0041fd50  83c801               or eax, 1
// 0041fd53  33d2                 xor edx, edx
// 0041fd55  85c0                 test eax, eax
// 0041fd57  0f94c2               sete dl
// 0041fd5a  5e                   pop esi
// 0041fd5b  8bc2                 mov eax, edx
// 0041fd5d  c3                   ret 
// library xtp-15.2.1/Source\Controls\Shell\XTPDropSource.cpp (function _IsEqualGUID)

// roc-lang: cpp
// roc-cl: 30729
// roc-flags: /O2 /GS- /MD
// roc-lib: xtp-15.2.1 Source/Controls/Shell/XTPDropSource.cpp
