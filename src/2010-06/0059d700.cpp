// from server: 100% by atomic.potato
// roc 2010-06 0059d700  unit: RBX::HeartbeatTask  size: 34 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 0059d700
//
// 0059d700  dd81e0010000         fld qword ptr [ecx + 0x1e0]
// 0059d706  8b442408             mov eax, dword ptr [esp + 8]
// 0059d70a  56                   push esi
// 0059d70b  8b742408             mov esi, dword ptr [esp + 8]
// 0059d70f  83ec08               sub esp, 8
// 0059d712  dd1c24               fstp qword ptr [esp]
// 0059d715  50                   push eax
// 0059d716  56                   push esi
// 0059d717  e8b4e61f00           call 0x79bdd0
// 0059d71c  8bc6                 mov eax, esi
// 0059d71e  5e                   pop esi
// 0059d71f  c20800               ret 8

struct HeartbeatTask
{
    char pad[0x1e0];
    double field;
    int method(int a, int b);
};

extern "C" int __stdcall sub_79bdd0(int, int, double);

int HeartbeatTask::method(int a, int b)
{
    sub_79bdd0(a, b, field);
    return a;
}
