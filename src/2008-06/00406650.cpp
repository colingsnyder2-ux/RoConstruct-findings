// roc 2008-06 00406650  unit: VCApp::?$CComObject  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00406650
//
// 00406650  33c0                 xor eax, eax
// 00406652  66898126120000       mov word ptr [ecx + 0x1226], ax
// 00406659  c78128120000ffffffff mov dword ptr [ecx + 0x1228], 0xffffffff
// 00406663  89812c120000         mov dword ptr [ecx + 0x122c], eax
// 00406669  898130120000         mov dword ptr [ecx + 0x1230], eax
// 0040666f  898134120000         mov dword ptr [ecx + 0x1234], eax
// 00406675  89813c120000         mov dword ptr [ecx + 0x123c], eax
// 0040667b  898138120000         mov dword ptr [ecx + 0x1238], eax
// 00406681  898140120000         mov dword ptr [ecx + 0x1240], eax
// 00406687  8801                 mov byte ptr [ecx], al
// 00406689  884121               mov byte ptr [ecx + 0x21], al
// 0040668c  888122010000         mov byte ptr [ecx + 0x122], al
// 00406692  8881a3010000         mov byte ptr [ecx + 0x1a3], al
// 00406698  888124020000         mov byte ptr [ecx + 0x224], al
// 0040669e  8881250a0000         mov byte ptr [ecx + 0xa25], al
// 004066a4  c3                   ret 
// copied from an identical function in another client (function ?Init@VCContent_CComAggObject@ns_ROCX00000e@@QAEXXZ)

namespace ns_ROCX00000e {
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
}
