// from server: 100% by king_originala
// roc 2008-06 00469f50  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00469f50
//
// 00469f50  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00469f54  ba80000000           mov edx, 0x80
// 00469f59  33c0                 xor eax, eax
// 00469f5b  84512a               test byte ptr [ecx + 0x2a], dl
// 00469f5e  7403                 je 0x469f63
// 00469f60  8d4281               lea eax, [edx - 0x7f]
// 00469f63  845136               test byte ptr [ecx + 0x36], dl
// 00469f66  7403                 je 0x469f6b
// 00469f68  83c802               or eax, 2
// 00469f6b  84511d               test byte ptr [ecx + 0x1d], dl
// 00469f6e  7403                 je 0x469f73
// 00469f70  83c840               or eax, 0x40
// 00469f73  84919d000000         test byte ptr [ecx + 0x9d], dl
// 00469f79  7402                 je 0x469f7d
// 00469f7b  0bc2                 or eax, edx
// 00469f7d  8a4938               mov cl, byte ptr [ecx + 0x38]
// 00469f80  22ca                 and cl, dl
// 00469f82  7405                 je 0x469f89
// 00469f84  0d00010000           or eax, 0x100
// 00469f89  84c9                 test cl, cl
// 00469f8b  7405                 je 0x469f92
// 00469f8d  0d00020000           or eax, 0x200
// 00469f92  c3                   ret 

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
