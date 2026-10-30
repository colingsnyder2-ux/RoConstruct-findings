// roc 2009-12 006f4280  unit: RBX::FaceInstance  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 006f4280
//
// 006f4280  8b442404             mov eax, dword ptr [esp + 4]
// 006f4284  83f806               cmp eax, 6
// 006f4287  773a                 ja 0x6f42c3
// 006f4289  ff2485c8426f00       jmp dword ptr [eax*4 + 0x6f42c8]
// 006f4290  33c0                 xor eax, eax
// 006f4292  39442408             cmp dword ptr [esp + 8], eax
// 006f4296  0f94c0               sete al
// 006f4299  c3                   ret 
// 006f429a  8b442408             mov eax, dword ptr [esp + 8]
// 006f429e  85c0                 test eax, eax
// 006f42a0  7408                 je 0x6f42aa
// 006f42a2  83f801               cmp eax, 1
// 006f42a5  7403                 je 0x6f42aa
// 006f42a7  33c0                 xor eax, eax
// 006f42a9  c3                   ret 
// 006f42aa  b801000000           mov eax, 1
// 006f42af  c3                   ret 
// 006f42b0  8b442408             mov eax, dword ptr [esp + 8]
// 006f42b4  85c0                 test eax, eax
// 006f42b6  74f2                 je 0x6f42aa
// 006f42b8  83f803               cmp eax, 3
// 006f42bb  74ed                 je 0x6f42aa
// 006f42bd  33c0                 xor eax, eax
// 006f42bf  c3                   ret 
// 006f42c0  b001                 mov al, 1
// 006f42c2  c3                   ret 
// 006f42c3  32c0                 xor al, al
// 006f42c5  c3                   ret 
// 006f42c6  8bff                 mov edi, edi
// 006f42c8  90                   nop 
// 006f42c9  42                   inc edx
// 006f42ca  6f                   outsd dx, dword ptr [esi]
// 006f42cb  009a426f0090         add byte ptr [edx - 0x6fff90be], bl
// 006f42d1  42                   inc edx
// 006f42d2  6f                   outsd dx, dword ptr [esi]
// 006f42d3  009a426f00c0         add byte ptr [edx - 0x3fff90be], bl
// 006f42d9  42                   inc edx
// 006f42da  6f                   outsd dx, dword ptr [esi]
// 006f42db  00c0                 add al, al
// 006f42dd  42                   inc edx
// 006f42de  6f                   outsd dx, dword ptr [esi]
// copied from an identical function in another client (function ?isMouseButtonDown@@YA_NHH@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
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