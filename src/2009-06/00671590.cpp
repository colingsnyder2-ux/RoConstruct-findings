// roc 2009-06 00671590  unit: RBX::Primitive  size: 100 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00671590
//
// 00671590  8b442404             mov eax, dword ptr [esp + 4]
// 00671594  83f806               cmp eax, 6
// 00671597  773a                 ja 0x6715d3
// 00671599  ff2485d8156700       jmp dword ptr [eax*4 + 0x6715d8]
// 006715a0  33c0                 xor eax, eax
// 006715a2  39442408             cmp dword ptr [esp + 8], eax
// 006715a6  0f94c0               sete al
// 006715a9  c3                   ret 
// 006715aa  8b442408             mov eax, dword ptr [esp + 8]
// 006715ae  85c0                 test eax, eax
// 006715b0  7408                 je 0x6715ba
// 006715b2  83f801               cmp eax, 1
// 006715b5  7403                 je 0x6715ba
// 006715b7  33c0                 xor eax, eax
// 006715b9  c3                   ret 
// 006715ba  b801000000           mov eax, 1
// 006715bf  c3                   ret 
// 006715c0  8b442408             mov eax, dword ptr [esp + 8]
// 006715c4  85c0                 test eax, eax
// 006715c6  74f2                 je 0x6715ba
// 006715c8  83f803               cmp eax, 3
// 006715cb  74ed                 je 0x6715ba
// 006715cd  33c0                 xor eax, eax
// 006715cf  c3                   ret 
// 006715d0  b001                 mov al, 1
// 006715d2  c3                   ret 
// 006715d3  32c0                 xor al, al
// 006715d5  c3                   ret 
// 006715d6  8bff                 mov edi, edi
// 006715d8  a0156700aa           mov al, byte ptr [0xaa006715]
// 006715dd  156700a015           adc eax, 0x15a00067
// 006715e2  6700aa1567           add byte ptr [bp + si + 0x6715], ch
// 006715e7  00d0                 add al, dl
// 006715e9  156700d015           adc eax, 0x15d00067
// 006715ee  6700c0               add al, al
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