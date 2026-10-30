// roc 2011-06 00a3ff20  unit: seg_00a30000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ff20
//
// 00a3ff20  a104f8d100           mov eax, dword ptr [0xd1f804]
// 00a3ff25  85c0                 test eax, eax
// 00a3ff27  7408                 je 0xa3ff31
// 00a3ff29  50                   push eax
// 00a3ff2a  ff151c19a400         call dword ptr [0xa4191c]
// 00a3ff30  59                   pop ecx
// 00a3ff31  c3                   ret 
// copied from an identical function in another client (function ?fn_ROCX000000_0097ee50@@YAXXZ)

// roc-cl: 30729
// roc-flags: /O2 /GS- /EHsc /MD
extern void (__cdecl *deallocBytes)(void*);

extern void* g_00b7cd28;

void func_0097ee50()
{
    if (g_00b7cd28)
        deallocBytes(g_00b7cd28);
}