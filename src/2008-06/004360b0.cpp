// from server: 100% by king_originala
// roc 2008-06 004360b0  unit: COutputView  size: 66 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004360b0
//
// 004360b0  0fb7442404           movzx eax, word ptr [esp + 4]
// 004360b5  83ec14               sub esp, 0x14
// 004360b8  56                   push esi
// 004360b9  50                   push eax
// 004360ba  68a82f8100           push 0x812fa8
// 004360bf  8d4c240c             lea ecx, [esp + 0xc]
// 004360c3  6a09                 push 9
// 004360c5  51                   push ecx
// 004360c6  ff1534288000         call dword ptr [0x802834]
// 004360cc  6a10                 push 0x10
// 004360ce  8d542418             lea edx, [esp + 0x18]
// 004360d2  52                   push edx
// 004360d3  8bf0                 mov esi, eax
// 004360d5  8b442438             mov eax, dword ptr [esp + 0x38]
// 004360d9  6a12                 push 0x12
// 004360db  50                   push eax
// 004360dc  ff15ac288000         call dword ptr [0x8028ac]
// 004360e2  50                   push eax
// 004360e3  e898b5fcff           call 0x401680
// 004360e8  83c424               add esp, 0x24
// 004360eb  8bc6                 mov eax, esi
// 004360ed  5e                   pop esi
// 004360ee  83c414               add esp, 0x14
// 004360f1  c3                   ret 

extern "C" {
    extern int (__cdecl *swprintf_s)(wchar_t *, unsigned int,
                                    const wchar_t *, ...);
    extern int (__cdecl *memcpy_s)(void *, unsigned int,
                                  const void *, unsigned int);
    void __cdecl check_error(int);
}

extern const wchar_t format[];

int __cdecl format_output(unsigned short value, void *destination)
{
    wchar_t buffer[9];
    int result = swprintf_s(buffer, 9, format, value);
    check_error(memcpy_s(destination, 18, buffer, 16));
    return result;
}
