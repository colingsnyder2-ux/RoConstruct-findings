// from server: 100% by colin
// roc 2007-08 004c4a90  unit: RakPeer  size: 31 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004c4a90
//
// 004c4a90  8b442404             mov eax, dword ptr [esp + 4]
// 004c4a94  81c110050000         add ecx, 0x510
// 004c4a9a  85c0                 test eax, eax
// 004c4a9c  7409                 je 0x4c4aa7
// 004c4a9e  89442404             mov dword ptr [esp + 4], eax
// 004c4aa2  e9a9720000           jmp 0x4cbd50
// 004c4aa7  e8f4720000           call 0x4cbda0
// 004c4aac  c20400               ret 4

struct RakPeer {
    char pad[0x510];
    void method1(int);
    void method2();
    void func(int);
};

void RakPeer::func(int arg) {
    RakPeer* p = (RakPeer*)((char*)this + 0x510);
    if (arg) {
        p->method1(arg);
    } else {
        p->method2();
    }
}
