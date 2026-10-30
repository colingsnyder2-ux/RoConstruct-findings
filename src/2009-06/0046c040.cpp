// roc 2009-06 0046c040  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0046c040
//
// 0046c040  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0046c044  ba80000000           mov edx, 0x80
// 0046c049  33c0                 xor eax, eax
// 0046c04b  84512a               test byte ptr [ecx + 0x2a], dl
// 0046c04e  7403                 je 0x46c053
// 0046c050  8d4281               lea eax, [edx - 0x7f]
// 0046c053  845136               test byte ptr [ecx + 0x36], dl
// 0046c056  7403                 je 0x46c05b
// 0046c058  83c802               or eax, 2
// 0046c05b  84511d               test byte ptr [ecx + 0x1d], dl
// 0046c05e  7403                 je 0x46c063
// 0046c060  83c840               or eax, 0x40
// 0046c063  84919d000000         test byte ptr [ecx + 0x9d], dl
// 0046c069  7402                 je 0x46c06d
// 0046c06b  0bc2                 or eax, edx
// 0046c06d  8a4938               mov cl, byte ptr [ecx + 0x38]
// 0046c070  22ca                 and cl, dl
// 0046c072  7405                 je 0x46c079
// 0046c074  0d00010000           or eax, 0x100
// 0046c079  84c9                 test cl, cl
// 0046c07b  7405                 je 0x46c082
// 0046c07d  0d00020000           or eax, 0x200
// 0046c082  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000@@YAHPBE@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
int __cdecl func_00469f50(const unsigned char* keys)
{
    int result = 0;
    if (keys[0x2a] & 0x80)
        result = 1;
    if (keys[0x36] & 0x80)
        result |= 2;
    if (keys[0x1d] & 0x80)
        result |= 0x40;
    if (keys[0x9d] & 0x80)
        result |= 0x80;
    if (keys[0x38] & 0x80)
        result |= 0x100;
    if (keys[0x38] & 0x80)
        result |= 0x200;
    return result;
}