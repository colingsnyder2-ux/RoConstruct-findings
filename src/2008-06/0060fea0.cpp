// roc 2008-06 0060fea0  unit: RBX::BlockBlockContact  size: 73 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 0060fea0
//
// 0060fea0  b801000000           mov eax, 1
// 0060fea5  840554639700         test byte ptr [0x976354], al
// 0060feab  7520                 jne 0x60fecd
// 0060fead  d9e8                 fld1 
// 0060feaf  090554639700         or dword ptr [0x976354], eax
// 0060feb5  d91548639700         fst dword ptr [0x976348]
// 0060febb  d90504e78100         fld dword ptr [0x81e704]
// 0060fec1  d91d4c639700         fstp dword ptr [0x97634c]
// 0060fec7  d91d50639700         fstp dword ptr [0x976350]
// 0060fecd  8b442408             mov eax, dword ptr [esp + 8]
// 0060fed1  56                   push esi
// 0060fed2  8b742408             mov esi, dword ptr [esp + 8]
// 0060fed6  6848639700           push 0x976348
// 0060fedb  50                   push eax
// 0060fedc  56                   push esi
// 0060fedd  e82eeffcff           call 0x5dee10
// 0060fee2  83c40c               add esp, 0xc
// 0060fee5  8bc6                 mov eax, esi
// 0060fee7  5e                   pop esi
// 0060fee8  c3                   ret 
// library rbxgs/tool\Dragger.cpp (function ?toGrid@Dragger@RBX@@SA?AVVector3@G3D@@ABV34@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /Ob2 /Oy /GF /GS- /EHsc /MD
// roc-lib: rbxgs tool/Dragger.cpp
