// from server: 100% by atomic.potato
// roc 2008-06 005f4cc0  unit: boost::iostreams::DUinput::V?$basic_null_device::?$stream_buffer  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 005f4cc0
//
// 005f4cc0  56                   push esi
// 005f4cc1  8bf1                 mov esi, ecx
// 005f4cc3  e838f8ffff           call 0x5f4500
// 005f4cc8  8b0d84258000         mov ecx, dword ptr [0x802584]
// 005f4cce  8d4618               lea eax, [esi + 0x18]
// 005f4cd1  8908                 mov dword ptr [eax], ecx
// 005f4cd3  8b1580258000         mov edx, dword ptr [0x802580]
// 005f4cd9  50                   push eax
// 005f4cda  8910                 mov dword ptr [eax], edx
// 005f4cdc  ff157c258000         call dword ptr [0x80257c]
// 005f4ce2  83c404               add esp, 4
// 005f4ce5  5e                   pop esi
// 005f4ce6  c3                   ret 

typedef unsigned long DWORD;

struct S
{
    void f();
};

extern "C" void __cdecl sub_5f4500();
extern "C" void (__cdecl *g_80257c)(void *);
extern DWORD g_802580;
extern DWORD g_802584;

void S::f()
{
    sub_5f4500();
    DWORD *p = (DWORD *)((char *)this + 0x18);
    *p = g_802584;
    *p = g_802580;
    g_80257c(p);
}
