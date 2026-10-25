// from server: 100% by king_originala
// roc 2008-06 00594d40  unit: RBX::Lua::ThreadRef::VNode::?$sp_counted_impl_p  size: 30 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 00594d40
//
// 00594d40  80790400             cmp byte ptr [ecx + 4], 0
// 00594d44  740c                 je 0x594d52
// 00594d46  8b01                 mov eax, dword ptr [ecx]
// 00594d48  89442404             mov dword ptr [esp + 4], eax
// 00594d4c  ff25f4218000         jmp dword ptr [0x8021f4]
// 00594d52  8b09                 mov ecx, dword ptr [ecx]
// 00594d54  894c2404             mov dword ptr [esp + 4], ecx
// 00594d58  ff2580228000         jmp dword ptr [0x802280]

extern "C" {
    extern void (__stdcall *LeaveCriticalSection)(void *);
    extern int (__stdcall *ReleaseMutex)(void *);
}

struct S {
    void *handle;
    unsigned char criticalSection;
    void unlock(void *&);
};

void S::unlock(void *&)
{
    if (criticalSection)
        LeaveCriticalSection(handle);
    else
        ReleaseMutex(handle);
}
