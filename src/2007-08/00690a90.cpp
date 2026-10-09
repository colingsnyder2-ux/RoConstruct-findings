// from DeepSeek/server: 100% by colin
// roc 2007-08 00690a90  unit: CXTSplitterWnd  size: 69 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00690a90
//
// 00690a90  8b442408             mov eax, dword ptr [esp + 8]
// 00690a94  56                   push esi
// 00690a95  8bf1                 mov esi, ecx
// 00690a97  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00690a9b  50                   push eax
// 00690a9c  51                   push ecx
// 00690a9d  8bce                 mov ecx, esi
// 00690a9f  e83a800a00           call 0x738ade
// 00690aa4  83be0001000000       cmp dword ptr [esi + 0x100], 0
// 00690aab  7524                 jne 0x690ad1
// 00690aad  57                   push edi
// 00690aae  6a00                 push 0
// 00690ab0  8dbefc000000         lea edi, [esi + 0xfc]
// 00690ab6  57                   push edi
// 00690ab7  6a00                 push 0
// 00690ab9  6a26                 push 0x26
// 00690abb  ff150cee7700         call dword ptr [0x77ee0c]
// 00690ac1  f6860801000002       test byte ptr [esi + 0x108], 2
// 00690ac8  7406                 je 0x690ad0
// 00690aca  c70700000000         mov dword ptr [edi], 0
// 00690ad0  5f                   pop edi
// 00690ad1  5e                   pop esi
// 00690ad2  c20800               ret 8

extern "C" int (__stdcall *SystemParametersInfoA)(unsigned int, unsigned int, void*, unsigned int);

struct CXTSplitterWnd
{
    char pad[0xfc];
    int field_fc;
    int field_100;
    unsigned char field_104;
    unsigned char field_105;
    unsigned char field_106;
    unsigned char field_107;
    unsigned char field_108;
    void method_738ade(int, int);
    void method_690a90(int, int);
};

void CXTSplitterWnd::method_690a90(int a, int b)
{
    method_738ade(a, b);
    if (field_100 == 0)
    {
        SystemParametersInfoA(0x26, 0, &field_fc, 0);
        if (field_108 & 2)
        {
            field_fc = 0;
        }
    }
}
