// from server: 100% by king_originala
// roc 2008-06 00642370  unit: ChatEnter  size: 112 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00642370
//
// 00642370  56                   push esi
// 00642371  8bf1                 mov esi, ecx
// 00642373  e838ffffff           call 0x6422b0
// 00642378  8b442408             mov eax, dword ptr [esp + 8]
// 0064237c  898648010000         mov dword ptr [esi + 0x148], eax
// 00642382  c706aca78400         mov dword ptr [esi], 0x84a7ac
// 00642388  c746109ca78400       mov dword ptr [esi + 0x10], 0x84a79c
// 0064238f  c7461494a78400       mov dword ptr [esi + 0x14], 0x84a794
// 00642396  c746208ca78400       mov dword ptr [esi + 0x20], 0x84a78c
// 0064239d  c746247ca78400       mov dword ptr [esi + 0x24], 0x84a77c
// 006423a4  c746446ca78400       mov dword ptr [esi + 0x44], 0x84a76c
// 006423ab  c746645ca78400       mov dword ptr [esi + 0x64], 0x84a75c
// 006423b2  c786840000004ca78400 mov dword ptr [esi + 0x84], 0x84a74c
// 006423bc  c786a40000003ca78400 mov dword ptr [esi + 0xa4], 0x84a73c
// 006423c6  c786c40000002ca78400 mov dword ptr [esi + 0xc4], 0x84a72c
// 006423d0  c7863001000024a78400 mov dword ptr [esi + 0x130], 0x84a724
// 006423da  8bc6                 mov eax, esi
// 006423dc  5e                   pop esi
// 006423dd  c20400               ret 4

struct ChatEnter {
    unsigned int words[83];

    void initialize();
    ChatEnter* construct(unsigned int value);
};

ChatEnter* ChatEnter::construct(unsigned int value)
{
    initialize();
    words[82] = value;
    words[0] = 0x84a7ac;
    words[4] = 0x84a79c;
    words[5] = 0x84a794;
    words[8] = 0x84a78c;
    words[9] = 0x84a77c;
    words[17] = 0x84a76c;
    words[25] = 0x84a75c;
    words[33] = 0x84a74c;
    words[41] = 0x84a73c;
    words[49] = 0x84a72c;
    words[76] = 0x84a724;
    return this;
}
