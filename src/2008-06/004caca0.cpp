// from server: 100% by colin
// roc 2008-06 004caca0  unit: RBX::Network::RoundRobinPhysicsSender  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004caca0
//
// 004caca0  83790800             cmp dword ptr [ecx + 8], 0
// 004caca4  740a                 je 0x4cacb0
// 004caca6  8b410c               mov eax, dword ptr [ecx + 0xc]
// 004caca9  50                   push eax
// 004cacaa  e8cb591d00           call 0x6a067a
// 004cacaf  59                   pop ecx
// 004cacb0  c3                   ret 

extern "C" void __cdecl mfcFree(void*);
struct BufferCleanupView {
    char opaque[8];
    int flag;
    void* data;
    void release();
};
void BufferCleanupView::release() { if (flag) mfcFree(data); }
