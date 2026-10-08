// roc 2007-03 0055f370  unit: seg_00550000  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0055f370
//
// 0055f370  51                   push ecx
// 0055f371  8b4118               mov eax, dword ptr [ecx + 0x18]
// 0055f374  85c0                 test eax, eax
// 0055f376  7413                 je 0x55f38b
// 0055f378  8b0d60c68b00         mov ecx, dword ptr [0x8bc660]
// 0055f37e  8bff                 mov edi, edi
// 0055f380  394804               cmp dword ptr [eax + 4], ecx
// 0055f383  740a                 je 0x55f38f
// 0055f385  8b00                 mov eax, dword ptr [eax]
// 0055f387  85c0                 test eax, eax
// 0055f389  75f5                 jne 0x55f380
// 0055f38b  33c0                 xor eax, eax
// 0055f38d  59                   pop ecx
// 0055f38e  c3                   ret 
// 0055f38f  8d4c2403             lea ecx, [esp + 3]
// 0055f393  51                   push ecx
// 0055f394  8d4804               lea ecx, [eax + 4]
// 0055f397  e8e4fdffff           call 0x55f180
// 0055f39c  84c0                 test al, al
// 0055f39e  74eb                 je 0x55f38b
// 0055f3a0  807c240300           cmp byte ptr [esp + 3], 0
// 0055f3a5  74e4                 je 0x55f38b
// 0055f3a7  b801000000           mov eax, 1
// 0055f3ac  59                   pop ecx
// 0055f3ad  c3                   ret 
// library rbxgs/v8xml\XmlElement.cpp (function ?isXsiNil@XmlElement@@QBE_NXZ)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs v8xml/XmlElement.cpp
