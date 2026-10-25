// from server: 100% by colin
// roc 2008-06 004c6d10  unit: ProfiledRakPeer  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004c6d10
//
// 004c6d10  83790400             cmp dword ptr [ecx + 4], 0
// 004c6d14  740a                 je 0x4c6d20
// 004c6d16  8b4108               mov eax, dword ptr [ecx + 8]
// 004c6d19  50                   push eax
// 004c6d1a  e85b991d00           call 0x6a067a
// 004c6d1f  59                   pop ecx
// 004c6d20  c3                   ret 

struct ProfiledRakPeer {
    int field0;
    int field4;
    int field8;
    void method();
};

extern "C" void __cdecl sub_6a067a(int);

void ProfiledRakPeer::method() {
    if (field4 != 0) {
        sub_6a067a(field8);
    }
}
