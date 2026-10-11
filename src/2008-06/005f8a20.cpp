// from server: 92% by colin
// roc 2008-06 005f8a20  unit: boost::iostreams::Uinput::V?$chain::?$filtering_stream_base  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f8a20
//
// 005f8a20  56                   push esi
// 005f8a21  8bf1                 mov esi, ecx
// 005f8a23  e828aeffff           call 0x5f3850
// 005f8a28  8b0d84258000         mov ecx, dword ptr [0x802584]
// 005f8a2e  8d4618               lea eax, [esi + 0x18]
// 005f8a31  8908                 mov dword ptr [eax], ecx
// 005f8a33  8b1580258000         mov edx, dword ptr [0x802580]
// 005f8a39  50                   push eax
// 005f8a3a  8910                 mov dword ptr [eax], edx
// 005f8a3c  ff157c258000         call dword ptr [0x80257c]
// 005f8a42  83c404               add esp, 4
// 005f8a45  f644240801           test byte ptr [esp + 8], 1
// 005f8a4a  7409                 je 0x5f8a55
// 005f8a4c  56                   push esi
// 005f8a4d  e8287c0a00           call 0x6a067a
// 005f8a52  83c404               add esp, 4
// 005f8a55  8bc6                 mov eax, esi
// 005f8a57  5e                   pop esi
// 005f8a58  c20400               ret 4

extern "C" void __cdecl sub_5f3850();
extern "C" void __cdecl sub_6a067a(void*);
extern "C" void (__stdcall* g_80257c)(void*);
extern void* g_802580;
extern void* g_802584;

struct S {
    S* f(int);
};

S* S::f(int a) {
    sub_5f3850();
    void** p = (void**)((char*)this + 0x18);
    *p = g_802584;
    *p = g_802580;
    g_80257c(p);
    if (a & 1) {
        sub_6a067a(this);
    }
    return this;
}
