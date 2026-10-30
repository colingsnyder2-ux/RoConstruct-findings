// roc 2012-06 009dec90  unit: CXTPTabClientWnd  size: 83 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 009dec90
//
// 009dec90  56                   push esi
// 009dec91  8bf1                 mov esi, ecx
// 009dec93  e8c897a4ff           call 0x428460
// 009dec98  85c0                 test eax, eax
// 009dec9a  750c                 jne 0x9deca8
// 009dec9c  8b06                 mov eax, dword ptr [esi]
// 009dec9e  8b906c010000         mov edx, dword ptr [eax + 0x16c]
// 009deca4  6aff                 push -1
// 009deca6  ffd2                 call edx
// 009deca8  8bce                 mov ecx, esi
// 009decaa  e8b197a4ff           call 0x428460
// 009decaf  85c0                 test eax, eax
// 009decb1  7504                 jne 0x9decb7
// 009decb3  5e                   pop esi
// 009decb4  c20400               ret 4
// 009decb7  8b8698000000         mov eax, dword ptr [esi + 0x98]
// 009decbd  85c0                 test eax, eax
// 009decbf  7515                 jne 0x9decd6
// 009decc1  e89a97a4ff           call 0x428460
// 009decc6  83e801               sub eax, 1
// 009decc9  7813                 js 0x9decde
// 009deccb  3b4670               cmp eax, dword ptr [esi + 0x70]
// 009decce  7d0e                 jge 0x9decde
// 009decd0  8b4e6c               mov ecx, dword ptr [esi + 0x6c]
// 009decd3  8b0481               mov eax, dword ptr [ecx + eax*4]
// 009decd6  5e                   pop esi
// 009decd7  8bc8                 mov ecx, eax
// 009decd9  e972e5ffff           jmp 0x9dd250
// 009decde  e8dd36faff           call 0x9823c0
// copied from an identical function in another client (function ?AddItem@CXTPTabClientWnd@@MAEPAVCXTPTabManagerItem@@PAVCWnd@@@Z)

// roc-lang: cpp
// roc-cl: 21022
// roc-flags: /O2 /MD /GS /EHsc /Ob1
// roc-lib: xtp-11.2.2-shared-mfc Source\CommandBars\XTPTabClientWnd.cpp