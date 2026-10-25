// from server: 100% by king_originala
// roc 2008-06 00436100  unit: COutputView  size: 65 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00436100
//
// 00436100  8b442404             mov eax, dword ptr [esp + 4]
// 00436104  83ec18               sub esp, 0x18
// 00436107  56                   push esi
// 00436108  50                   push eax
// 00436109  68bc2f8100           push 0x812fbc
// 0043610e  8d4c240c             lea ecx, [esp + 0xc]
// 00436112  6a0b                 push 0xb
// 00436114  51                   push ecx
// 00436115  ff1534288000         call dword ptr [0x802834]
// 0043611b  6a14                 push 0x14
// 0043611d  8d542418             lea edx, [esp + 0x18]
// 00436121  52                   push edx
// 00436122  8bf0                 mov esi, eax
// 00436124  8b44243c             mov eax, dword ptr [esp + 0x3c]
// 00436128  6a16                 push 0x16
// 0043612a  50                   push eax
// 0043612b  ff15ac288000         call dword ptr [0x8028ac]
// 00436131  50                   push eax
// 00436132  e849b5fcff           call 0x401680
// 00436137  83c424               add esp, 0x24
// 0043613a  8bc6                 mov eax, esi
// 0043613c  5e                   pop esi
// 0043613d  83c418               add esp, 0x18
// 00436140  c3                   ret 

extern const wchar_t format[];

extern "C" {
    extern int (__cdecl *swprintf_s)(wchar_t *, unsigned int,
                                   const wchar_t *, ...);
    extern int (__cdecl *memcpy_s)(void *, unsigned int,
                                 const void *, unsigned int);
}

void __cdecl check_error(unsigned int);

int __cdecl format_output(const wchar_t *text, void *destination)
{
    wchar_t buffer[11];
    int result = swprintf_s(buffer, 11, format, text);
    check_error(memcpy_s(destination, 22, buffer, 20));
    return result;
}
