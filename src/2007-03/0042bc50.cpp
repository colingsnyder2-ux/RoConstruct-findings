// roc 2007-03 0042bc50  unit: seg_00420000  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0042bc50
//
// 0042bc50  8b442404             mov eax, dword ptr [esp + 4]
// 0042bc54  83401001             add dword ptr [eax + 0x10], 1
// 0042bc58  8b4010               mov eax, dword ptr [eax + 0x10]
// 0042bc5b  c20400               ret 4
// copied from an identical function in another client (function ?EventHandler_increment@ns_ROCX000002@@YGJPAUEventHandler@1@@Z)

namespace ns_ROCX000002 {
struct EventHandler {
    char pad[0x10];
    long counter;
};

long __stdcall EventHandler_increment(EventHandler* handler)
{
    handler->counter += 1;
    return handler->counter;
}
}
