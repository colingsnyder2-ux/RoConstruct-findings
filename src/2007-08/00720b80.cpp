// from server: 97% by colin
// roc 2007-08 00720b80  unit: CXTCaptionButtonTheme  size: 50 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00720b80
//
// 00720b80  8b01                 mov eax, dword ptr [ecx]
// 00720b82  8b5014               mov edx, dword ptr [eax + 0x14]
// 00720b85  56                   push esi
// 00720b86  8b742408             mov esi, dword ptr [esp + 8]
// 00720b8a  56                   push esi
// 00720b8b  ffd2                 call edx
// 00720b8d  85c0                 test eax, eax
// 00720b8f  7409                 je 0x720b9a
// 00720b91  b801000000           mov eax, 1
// 00720b96  5e                   pop esi
// 00720b97  c20400               ret 4
// 00720b9a  8b06                 mov eax, dword ptr [esi]
// 00720b9c  8b9060010000         mov edx, dword ptr [eax + 0x160]
// 00720ba2  8bce                 mov ecx, esi
// 00720ba4  ffd2                 call edx
// 00720ba6  2403                 and al, 3
// 00720ba8  f6d8                 neg al
// 00720baa  5e                   pop esi
// 00720bab  1bc0                 sbb eax, eax
// 00720bad  f7d8                 neg eax
// 00720baf  c20400               ret 4

struct CXTCaptionButtonTheme {
    int f(void*);
};

int CXTCaptionButtonTheme::f(void* arg)
{
    if (((int (__thiscall*)(void*))*(void**)(*(char**)this + 0x14))(arg))
        return 1;
    return (((unsigned char (__thiscall*)(void*))*(void**)(*(char**)arg + 0x160))(arg) & 3) != 0;
}
