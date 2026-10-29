// roc 2009-12 00474ec0  unit: DxUserInput  size: 67 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00474ec0
//
// 00474ec0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00474ec4  ba80000000           mov edx, 0x80
// 00474ec9  33c0                 xor eax, eax
// 00474ecb  84512a               test byte ptr [ecx + 0x2a], dl
// 00474ece  7403                 je 0x474ed3
// 00474ed0  8d4281               lea eax, [edx - 0x7f]
// 00474ed3  845136               test byte ptr [ecx + 0x36], dl
// 00474ed6  7403                 je 0x474edb
// 00474ed8  83c802               or eax, 2
// 00474edb  84511d               test byte ptr [ecx + 0x1d], dl
// 00474ede  7403                 je 0x474ee3
// 00474ee0  83c840               or eax, 0x40
// 00474ee3  84919d000000         test byte ptr [ecx + 0x9d], dl
// 00474ee9  7402                 je 0x474eed
// 00474eeb  0bc2                 or eax, edx
// 00474eed  8a4938               mov cl, byte ptr [ecx + 0x38]
// 00474ef0  22ca                 and cl, dl
// 00474ef2  7405                 je 0x474ef9
// 00474ef4  0d00010000           or eax, 0x100
// 00474ef9  84c9                 test cl, cl
// 00474efb  7405                 je 0x474f02
// 00474efd  0d00020000           or eax, 0x200
// 00474f02  c3                   ret 
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