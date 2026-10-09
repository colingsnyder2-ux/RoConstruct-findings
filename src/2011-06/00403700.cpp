// roc 2011-06 00403700  unit: RBX::VRenderHooksService::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00403700
//
// 00403700  8b4104               mov eax, dword ptr [ecx + 4]
// 00403703  85c0                 test eax, eax
// 00403705  7405                 je 0x40370c
// 00403707  8b11                 mov edx, dword ptr [ecx]
// 00403709  895004               mov dword ptr [eax + 4], edx
// 0040370c  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00403710  740b                 je 0x40371d
// 00403712  8b4108               mov eax, dword ptr [ecx + 8]
// 00403715  50                   push eax
// 00403716  6a00                 push 0
// 00403718  e8056c4000           call 0x80a322
// 0040371d  c3                   ret 
// copied from an identical function in another client (function ?destroy@Creator@ns_ROCX000005@@QAEXXZ)

namespace ns_ROCX000005 {
struct Creator {
    void* field0;
    void* field4;
    void* field8;
    int fieldC;
    void destroy();
};

extern "C" void __stdcall sub_62FF38(void*, void*);

void Creator::destroy()
{
    if (field4) {
        *(void**)((char*)field4 + 4) = field0;
    }
    if (fieldC) {
        sub_62FF38(0, field8);
    }
}
}
