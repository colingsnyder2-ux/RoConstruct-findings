// roc 2009-06 00403b50  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 85 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00403b50
//
// 00403b50  33c0                 xor eax, eax
// 00403b52  66898126120000       mov word ptr [ecx + 0x1226], ax
// 00403b59  c78128120000ffffffff mov dword ptr [ecx + 0x1228], 0xffffffff
// 00403b63  89812c120000         mov dword ptr [ecx + 0x122c], eax
// 00403b69  898130120000         mov dword ptr [ecx + 0x1230], eax
// 00403b6f  898134120000         mov dword ptr [ecx + 0x1234], eax
// 00403b75  89813c120000         mov dword ptr [ecx + 0x123c], eax
// 00403b7b  898138120000         mov dword ptr [ecx + 0x1238], eax
// 00403b81  898140120000         mov dword ptr [ecx + 0x1240], eax
// 00403b87  8801                 mov byte ptr [ecx], al
// 00403b89  884121               mov byte ptr [ecx + 0x21], al
// 00403b8c  888122010000         mov byte ptr [ecx + 0x122], al
// 00403b92  8881a3010000         mov byte ptr [ecx + 0x1a3], al
// 00403b98  888124020000         mov byte ptr [ecx + 0x224], al
// 00403b9e  8881250a0000         mov byte ptr [ecx + 0xa25], al
// 00403ba4  c3                   ret 
// copied from an identical function in another client (function ?Init@VCContent_CComAggObject@ns_ROCX00000f@@QAEXXZ)

namespace ns_ROCX00000f {
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
