// from server: 100% by colin
// roc 2007-08 00412d60  unit: VCContent::?$CComAggObject  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00412d60
//
// 00412d60  33c0                 xor eax, eax
// 00412d62  66898126120000       mov word ptr [ecx + 0x1226], ax
// 00412d69  c78128120000ffffffff mov dword ptr [ecx + 0x1228], 0xffffffff
// 00412d73  89812c120000         mov dword ptr [ecx + 0x122c], eax
// 00412d79  898130120000         mov dword ptr [ecx + 0x1230], eax
// 00412d7f  898134120000         mov dword ptr [ecx + 0x1234], eax
// 00412d85  89813c120000         mov dword ptr [ecx + 0x123c], eax
// 00412d8b  898138120000         mov dword ptr [ecx + 0x1238], eax
// 00412d91  898140120000         mov dword ptr [ecx + 0x1240], eax
// 00412d97  8801                 mov byte ptr [ecx], al
// 00412d99  884121               mov byte ptr [ecx + 0x21], al
// 00412d9c  888122010000         mov byte ptr [ecx + 0x122], al
// 00412da2  8881a3010000         mov byte ptr [ecx + 0x1a3], al
// 00412da8  888124020000         mov byte ptr [ecx + 0x224], al
// 00412dae  8881250a0000         mov byte ptr [ecx + 0xa25], al
// 00412db4  c3                   ret 

struct VCContent_CComAggObject
{
    void Init();
};

void VCContent_CComAggObject::Init()
{
    *(unsigned short*)((char*)this + 0x1226) = 0;
    *(int*)((char*)this + 0x1228) = -1;
    *(int*)((char*)this + 0x122c) = 0;
    *(int*)((char*)this + 0x1230) = 0;
    *(int*)((char*)this + 0x1234) = 0;
    *(int*)((char*)this + 0x123c) = 0;
    *(int*)((char*)this + 0x1238) = 0;
    *(int*)((char*)this + 0x1240) = 0;
    *(char*)this = 0;
    *(char*)((char*)this + 0x21) = 0;
    *(char*)((char*)this + 0x122) = 0;
    *(char*)((char*)this + 0x1a3) = 0;
    *(char*)((char*)this + 0x224) = 0;
    *(char*)((char*)this + 0xa25) = 0;
}
