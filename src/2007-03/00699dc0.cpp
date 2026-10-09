// roc 2007-03 00699dc0  unit: seg_00690000  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 00699dc0
//
// 00699dc0  8b8964020000         mov ecx, dword ptr [ecx + 0x264]
// 00699dc6  81c178010000         add ecx, 0x178
// 00699dcc  e94fcf0400           jmp 0x6e6d20
// copied from an identical function in another client (function ?get@CXTPRibbonBar@ns_ROCX000037@@QAEPAXXZ)

namespace ns_ROCX000037 {
struct CXTPRibbonBar {
    char pad[0x264];
    void* field_264;
    void* get();
};

extern "C" void* __fastcall fn_ROCX000037(void*);

void* CXTPRibbonBar::get()
{
    return fn_ROCX000037((char*)field_264 + 0x178);
}
}
