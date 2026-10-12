// from server: 100% by king_originala
// roc 2008-06 00406450  unit: VCApp::?$CComObject  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406450
//
// 00406450  53                   push ebx
// 00406451  8b5c2408             mov ebx, dword ptr [esp + 8]
// 00406455  56                   push esi
// 00406456  57                   push edi
// 00406457  6801010000           push 0x101
// 0040645c  53                   push ebx
// 0040645d  8bf9                 mov edi, ecx
// 0040645f  ff1570288000         call dword ptr [0x802870]
// 00406465  8bf0                 mov esi, eax
// 00406467  83c408               add esp, 8
// 0040646a  81fe00010000         cmp esi, 0x100
// 00406470  7608                 jbe 0x40647a
// 00406472  5f                   pop edi
// 00406473  5e                   pop esi
// 00406474  33c0                 xor eax, eax
// 00406476  5b                   pop ebx
// 00406477  c20400               ret 4
// 0040647a  56                   push esi
// 0040647b  53                   push ebx
// 0040647c  8d4721               lea eax, [edi + 0x21]
// 0040647f  6801010000           push 0x101
// 00406484  50                   push eax
// 00406485  ff15b8288000         call dword ptr [0x8028b8]
// 0040648b  50                   push eax
// 0040648c  e8efb1ffff           call 0x401680
// 00406491  83c414               add esp, 0x14
// 00406494  89b730120000         mov dword ptr [edi + 0x1230], esi
// 0040649a  5f                   pop edi
// 0040649b  5e                   pop esi
// 0040649c  b801000000           mov eax, 1
// 004064a1  5b                   pop ebx
// 004064a2  c20400               ret 4

extern "C" unsigned int (__cdecl *strnlen)(const char*, unsigned int);
extern "C" int (__cdecl *_mbsnbcpy_s)(unsigned char*, unsigned int,
                                     const unsigned char*, unsigned int);
extern void __cdecl check_result(int);

struct S
{
    int set_text(const char*);
};

int S::set_text(const char* text)
{
    unsigned int length = strnlen(text, 0x101);
    if (length > 0x100)
        return 0;

    check_result(_mbsnbcpy_s((unsigned char*)this + 0x21, 0x101,
                            (const unsigned char*)text, length));
    *(unsigned int*)((char*)this + 0x1230) = length;
    return 1;
}
