// roc 2009-06 00402fd0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 00402fd0
//
// 00402fd0  8b4104               mov eax, dword ptr [ecx + 4]
// 00402fd3  85c0                 test eax, eax
// 00402fd5  7405                 je 0x402fdc
// 00402fd7  8b11                 mov edx, dword ptr [ecx]
// 00402fd9  895004               mov dword ptr [eax + 4], edx
// 00402fdc  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00402fe0  740b                 je 0x402fed
// 00402fe2  8b4108               mov eax, dword ptr [ecx + 8]
// 00402fe5  50                   push eax
// 00402fe6  6a00                 push 0
// 00402fe8  e80f5d3100           call 0x718cfc
// 00402fed  c3                   ret 
// copied from an identical function in another client (function ?destroy@Creator@ns_ROCX00000a@@QAEXXZ)

namespace ns_ROCX00000a {
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
