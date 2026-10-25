// from server: 100% by atomic.potato
// roc 2011-06 0052faf0  unit: RBX::Network::ProfiledRakPeer  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0052faf0
//
// 0052faf0  8b442404             mov eax, dword ptr [esp + 4]
// 0052faf4  68330c0000           push 0xc33
// 0052faf9  6820f2a700           push 0xa7f220
// 0052fafe  50                   push eax
// 0052faff  83c150               add ecx, 0x50
// 0052fb02  e869f3ffff           call 0x52ee70
// 0052fb07  c20400               ret 4

extern "C" void __stdcall sub_0052ee70(void *, const char *, unsigned int);

struct ProfiledRakPeer_52ee70 {
    void Report(void *obj, const char *file, unsigned int line);
};

struct S_0052faf0 {
    void f(void *arg);
};

void S_0052faf0::f(void *arg)
{
    ((ProfiledRakPeer_52ee70 *)((char *)this + 0x50))->Report(arg, (const char *)0x00a7f220, 0xc33);
}
