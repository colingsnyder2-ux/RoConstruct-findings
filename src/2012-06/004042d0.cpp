// roc 2012-06 004042d0  unit: RBX::Soundscape::VSoundChannel::?$FactoryProduct::Creator  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 004042d0
//
// 004042d0  8b4104               mov eax, dword ptr [ecx + 4]
// 004042d3  85c0                 test eax, eax
// 004042d5  7405                 je 0x4042dc
// 004042d7  8b11                 mov edx, dword ptr [ecx]
// 004042d9  895004               mov dword ptr [eax + 4], edx
// 004042dc  83790c00             cmp dword ptr [ecx + 0xc], 0
// 004042e0  740b                 je 0x4042ed
// 004042e2  8b4108               mov eax, dword ptr [ecx + 8]
// 004042e5  50                   push eax
// 004042e6  6a00                 push 0
// 004042e8  e8ebe05700           call 0x9823d8
// 004042ed  c3                   ret 
// copied from an identical function in another client (function ?destroy@Creator@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX00000b {
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
