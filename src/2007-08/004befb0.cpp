// from server: 96% by colin
// roc 2007-08 004befb0  unit: RakPeer  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004befb0
//
// 004befb0  8b442408             mov eax, dword ptr [esp + 8]
// 004befb4  8b542404             mov edx, dword ptr [esp + 4]
// 004befb8  6a00                 push 0
// 004befba  6a00                 push 0
// 004befbc  50                   push eax
// 004befbd  52                   push edx
// 004befbe  e8bddbffff           call 0x4bcb80
// 004befc3  85c0                 test eax, eax
// 004befc5  7506                 jne 0x4befcd
// 004befc7  83c8ff               or eax, 0xffffffff
// 004befca  c20800               ret 8
// 004befcd  8b88fc070000         mov ecx, dword ptr [eax + 0x7fc]
// 004befd3  85c9                 test ecx, ecx
// 004befd5  750a                 jne 0x4befe1
// 004befd7  0fb780f4070000       movzx eax, word ptr [eax + 0x7f4]
// 004befde  c20800               ret 8
// 004befe1  0fb784c8cc070000     movzx eax, word ptr [eax + ecx*8 + 0x7cc]
// 004befe9  c20800               ret 8

struct RakPeer {
    char pad[0x7cc];
    unsigned short field_7cc;
    char pad2[0x7f4 - 0x7ce];
    unsigned short field_7f4;
    char pad3[0x7fc - 0x7f6];
    unsigned int field_7fc;
};

extern "C" RakPeer* __stdcall sub_4bcb80(unsigned int, unsigned int, int, int);

int __stdcall sub_4befb0(unsigned int a, unsigned int b)
{
    RakPeer* p = sub_4bcb80(a, b, 0, 0);
    if (p == 0)
        return -1;
    if (p->field_7fc == 0)
        return p->field_7f4;
    return *(unsigned short*)((char*)p + p->field_7fc * 8 + 0x7cc);
}
