// roc 2009-12 00402ca0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00402ca0
//
// 00402ca0  8b4104               mov eax, dword ptr [ecx + 4]
// 00402ca3  85c0                 test eax, eax
// 00402ca5  7405                 je 0x402cac
// 00402ca7  8b11                 mov edx, dword ptr [ecx]
// 00402ca9  895004               mov dword ptr [eax + 4], edx
// 00402cac  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00402cb0  740b                 je 0x402cbd
// 00402cb2  8b4108               mov eax, dword ptr [ecx + 8]
// 00402cb5  50                   push eax
// 00402cb6  6a00                 push 0
// 00402cb8  e8670e3f00           call 0x7f3b24
// 00402cbd  c3                   ret 
// copied from an identical function in another client (function ?destroy@Creator@ns_ROCX000018@@QAEXXZ)

namespace ns_ROCX000018 {
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
