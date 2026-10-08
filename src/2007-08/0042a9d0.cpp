// from server: 100% by colin
// roc 2007-08 0042a9d0  unit: EventHandler  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042a9d0
//
// 0042a9d0  8b442404             mov eax, dword ptr [esp + 4]
// 0042a9d4  83401001             add dword ptr [eax + 0x10], 1
// 0042a9d8  8b4010               mov eax, dword ptr [eax + 0x10]
// 0042a9db  c20400               ret 4

struct EventHandler {
    char pad[0x10];
    long counter;
};

long __stdcall EventHandler_increment(EventHandler* handler)
{
    handler->counter += 1;
    return handler->counter;
}
