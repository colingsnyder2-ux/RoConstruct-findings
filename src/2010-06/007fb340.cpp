// roc 2010-06 007fb340  unit: CXTPControls  size: 15 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 007fb340
//
// 007fb340  8b442404             mov eax, dword ptr [esp + 4]
// 007fb344  6aff                 push -1
// 007fb346  50                   push eax
// 007fb347  e8b4ffffff           call 0x7fb300
// 007fb34c  c20400               ret 4
// copied from an identical function in another client (function ?func_0067C5A0@CXTPControls@ns_ROCX00002a@ns_ROCX00007b@@QAEXH@Z)

namespace ns_ROCX00002a {
extern "C" void __cdecl G1_func_00752bf0(void*);
struct S_func_00752bf0 {
    virtual ~S_func_00752bf0();
    void* m_p;
};
S_func_00752bf0::~S_func_00752bf0()
{
    if (m_p)
        G1_func_00752bf0(m_p);
}
}
