// roc 2009-12 00897090  unit: CXTPRibbonBar  size: 155 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00897090
//
// 00897090  8b442404             mov eax, dword ptr [esp + 4]
// 00897094  56                   push esi
// 00897095  8bf1                 mov esi, ecx
// 00897097  39868c020000         cmp dword ptr [esi + 0x28c], eax
// 0089709d  0f8484000000         je 0x897127
// 008970a3  89868c020000         mov dword ptr [esi + 0x28c], eax
// 008970a9  85c0                 test eax, eax
// 008970ab  7547                 jne 0x8970f4
// 008970ad  e82edcffff           call 0x894ce0
// 008970b2  85c0                 test eax, eax
// 008970b4  7531                 jne 0x8970e7
// 008970b6  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008970bc  57                   push edi
// 008970bd  8bb884010000         mov edi, dword ptr [eax + 0x184]
// 008970c3  6a01                 push 1
// 008970c5  8d8884010000         lea ecx, [eax + 0x184]
// 008970cb  6aff                 push -1
// 008970cd  e8ae860300           call 0x8cf780
// 008970d2  8b8e68020000         mov ecx, dword ptr [esi + 0x268]
// 008970d8  50                   push eax
// 008970d9  8b4720               mov eax, dword ptr [edi + 0x20]
// 008970dc  81c184010000         add ecx, 0x184
// 008970e2  ffd0                 call eax
// 008970e4  5f                   pop edi
// 008970e5  eb26                 jmp 0x89710d
// 008970e7  e8f4dbffff           call 0x894ce0
// 008970ec  50                   push eax
// 008970ed  e81eeeffff           call 0x895f10
// 008970f2  eb19                 jmp 0x89710d
// 008970f4  8b8668020000         mov eax, dword ptr [esi + 0x268]
// 008970fa  8b9084010000         mov edx, dword ptr [eax + 0x184]
// 00897100  8d8884010000         lea ecx, [eax + 0x184]
// 00897106  8b4220               mov eax, dword ptr [edx + 0x20]
// 00897109  6a00                 push 0
// 0089710b  ffd0                 call eax
// 0089710d  8b16                 mov edx, dword ptr [esi]
// 0089710f  8b8284010000         mov eax, dword ptr [edx + 0x184]
// 00897115  8bce                 mov ecx, esi
// 00897117  ffd0                 call eax
// 00897119  8bce                 mov ecx, esi
// 0089711b  e8b0d3f6ff           call 0x8044d0
// 00897120  8bc8                 mov ecx, eax
// 00897122  e8b9edf7ff           call 0x815ee0
// 00897127  5e                   pop esi
// 00897128  c20400               ret 4
// copied from an identical function in another client (function ?SetRibbonMinimized@CXTPRibbonBar@@UAEXH@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\Ribbon\XTPRibbonBar.cpp