// roc 2010-06 0047aa60  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0047aa60
//
// 0047aa60  8b4c2404             mov ecx, dword ptr [esp + 4]
// 0047aa64  ba80000000           mov edx, 0x80
// 0047aa69  33c0                 xor eax, eax
// 0047aa6b  84512a               test byte ptr [ecx + 0x2a], dl
// 0047aa6e  7403                 je 0x47aa73
// 0047aa70  8d4281               lea eax, [edx - 0x7f]
// 0047aa73  845136               test byte ptr [ecx + 0x36], dl
// 0047aa76  7403                 je 0x47aa7b
// 0047aa78  83c802               or eax, 2
// 0047aa7b  84511d               test byte ptr [ecx + 0x1d], dl
// 0047aa7e  7403                 je 0x47aa83
// 0047aa80  83c840               or eax, 0x40
// 0047aa83  84919d000000         test byte ptr [ecx + 0x9d], dl
// 0047aa89  7402                 je 0x47aa8d
// 0047aa8b  0bc2                 or eax, edx
// 0047aa8d  8a4938               mov cl, byte ptr [ecx + 0x38]
// 0047aa90  22ca                 and cl, dl
// 0047aa92  7405                 je 0x47aa99
// 0047aa94  0d00010000           or eax, 0x100
// 0047aa99  84c9                 test cl, cl
// 0047aa9b  7405                 je 0x47aaa2
// 0047aa9d  0d00020000           or eax, 0x200
// 0047aaa2  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_00469f50@@YAHPBE@Z)

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