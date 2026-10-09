// roc 2007-03 00408230  unit: seg_00400000  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00408230
//
// 00408230  8b4104               mov eax, dword ptr [ecx + 4]
// 00408233  85c0                 test eax, eax
// 00408235  7405                 je 0x40823c
// 00408237  8b11                 mov edx, dword ptr [ecx]
// 00408239  895004               mov dword ptr [eax + 4], edx
// 0040823c  83790c00             cmp dword ptr [ecx + 0xc], 0
// 00408240  740b                 je 0x40824d
// 00408242  8b4108               mov eax, dword ptr [ecx + 8]
// 00408245  50                   push eax
// 00408246  6a00                 push 0
// 00408248  e879612100           call 0x61e3c6
// 0040824d  c3                   ret 
// copied from an identical function in another client (function ?destroy@Creator@ns_ROCX000002@@QAEXXZ)

namespace ns_ROCX000002 {
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
