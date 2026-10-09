// roc 2010-06 00402cf0  unit: RBX::VRunService::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 00402cf0
//
// 00402cf0  8b4104               mov eax, dword ptr [ecx + 4]
// 00402cf3  85c0                 test eax, eax
// 00402cf5  7405                 je 0x402cfc
// 00402cf7  8b11                 mov edx, dword ptr [ecx]
// 00402cf9  895004               mov dword ptr [eax + 4], edx
// 00402cfc  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00402d00  740b                 je 0x402d0d
// 00402d02  8b4108               mov eax, dword ptr [ecx + 8]
// 00402d05  50                   push eax
// 00402d06  6a00                 push 0
// 00402d08  e8574f3a00           call 0x7a7c64
// 00402d0d  c3                   ret 
// copied from an identical function in another client (function ?destroy@Creator@ns_ROCX000014@@QAEXXZ)

namespace ns_ROCX000014 {
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
