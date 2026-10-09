// from server: 86% by colin
// roc 2007-08 006a41c0  unit: CXTPMouseManager  size: 71 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a41c0
//
// 006a41c0  83ec50               sub esp, 0x50
// 006a41c3  8b01                 mov eax, dword ptr [ecx]
// 006a41c5  8b8018010000         mov eax, dword ptr [eax + 0x118]
// 006a41cb  8d1424               lea edx, [esp]
// 006a41ce  52                   push edx
// 006a41cf  8b542458             mov edx, dword ptr [esp + 0x58]
// 006a41d3  52                   push edx
// 006a41d4  681d040000           push 0x41d
// 006a41d9  c744240c50000000     mov dword ptr [esp + 0xc], 0x50
// 006a41e1  c744241051000000     mov dword ptr [esp + 0x10], 0x51
// 006a41e9  ffd0                 call eax
// 006a41eb  8b4c2420             mov ecx, dword ptr [esp + 0x20]
// 006a41ef  51                   push ecx
// 006a41f0  e8c7c3f8ff           call 0x6305bc
// 006a41f5  50                   push eax
// 006a41f6  e865a8faff           call 0x64ea60
// 006a41fb  50                   push eax
// 006a41fc  e801c0f8ff           call 0x630202
// 006a4201  83c458               add esp, 0x58
// 006a4204  c20400               ret 4

struct CXTPMouseManager {
    void f(unsigned int);
};

extern "C" void* __cdecl sub_6305BC(int);
extern "C" void* __cdecl sub_64EA60(void*);
extern "C" void* __cdecl sub_630202(void*);

void CXTPMouseManager::f(unsigned int a) {
    struct { int x; int y; int z; int w; int v; int u; int t; int s; int r; int q; int p; int o; int n; int m; int l; int k; int j; int i; int h; int g; } buf;
    int (__stdcall *fn)(void*, unsigned int, unsigned int, void*);
    fn = *(int (__stdcall **)(void*, unsigned int, unsigned int, void*))(*(int*)this + 0x118);
    buf.x = 0x50;
    buf.y = 0x51;
    fn(this, 0x41d, a, &buf);
    sub_630202(sub_64EA60(sub_6305BC(buf.v)));
}
