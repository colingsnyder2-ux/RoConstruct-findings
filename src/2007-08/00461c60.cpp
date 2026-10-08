// from server: 100% by colin
// roc 2007-08 00461c60  unit: VCSecureHtmlView::?$CXTPCommandBarsSiteBase  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00461c60
//
// 00461c60  56                   push esi
// 00461c61  8bf1                 mov esi, ecx
// 00461c63  e8f6e91c00           call 0x63065e
// 00461c68  c7064c507900         mov dword ptr [esi], 0x79504c
// 00461c6e  c686f000000000       mov byte ptr [esi + 0xf0], 0
// 00461c75  8bc6                 mov eax, esi
// 00461c77  5e                   pop esi
// 00461c78  c3                   ret 

struct S_func_00461c60
{
    void base();
    S_func_00461c60();
    unsigned char pad[0xf0];
    unsigned char flag;
};

S_func_00461c60::S_func_00461c60()
{
    base();
    *(int*)this = 0x79504c;
    flag = 0;
}
