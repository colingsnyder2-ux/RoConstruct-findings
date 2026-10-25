// from server: 100% by colin
// roc 2008-06 005cf070  unit: DxUserInput  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005cf070
//
// 005cf070  8b442404             mov eax, dword ptr [esp + 4]
// 005cf074  83f806               cmp eax, 6
// 005cf077  773a                 ja 0x5cf0b3
// 005cf079  ff2485b8f05c00       jmp dword ptr [eax*4 + 0x5cf0b8]
// 005cf080  33c0                 xor eax, eax
// 005cf082  39442408             cmp dword ptr [esp + 8], eax
// 005cf086  0f94c0               sete al
// 005cf089  c3                   ret 
// 005cf08a  8b442408             mov eax, dword ptr [esp + 8]
// 005cf08e  85c0                 test eax, eax
// 005cf090  7408                 je 0x5cf09a
// 005cf092  83f801               cmp eax, 1
// 005cf095  7403                 je 0x5cf09a
// 005cf097  33c0                 xor eax, eax
// 005cf099  c3                   ret 
// 005cf09a  b801000000           mov eax, 1
// 005cf09f  c3                   ret 
// 005cf0a0  8b442408             mov eax, dword ptr [esp + 8]
// 005cf0a4  85c0                 test eax, eax
// 005cf0a6  74f2                 je 0x5cf09a
// 005cf0a8  83f803               cmp eax, 3
// 005cf0ab  74ed                 je 0x5cf09a
// 005cf0ad  33c0                 xor eax, eax
// 005cf0af  c3                   ret 
// 005cf0b0  b001                 mov al, 1
// 005cf0b2  c3                   ret 
// 005cf0b3  32c0                 xor al, al
// 005cf0b5  c3                   ret 
// 005cf0b6  8bff                 mov edi, edi
// 005cf0b8  80f05c               xor al, 0x5c
// 005cf0bb  008af05c0080         add byte ptr [edx - 0x7fffa310], cl






struct DxUserInput
{
};

bool __cdecl isMouseButtonDown(int button, int state)
{
    switch (button)
    {
    case 0:
        return state == 0;
    case 1:
    case 2:
        return state == 0 || state == 1;
    case 3:
    case 4:
        return state == 0 || state == 3;
    case 5:
    case 6:
        return true;
    default:
        return false;
    }
}
