// roc 2011-06 00a3ff00  unit: seg_00a30000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00a3ff00
//
// 00a3ff00  a1e0f7d100           mov eax, dword ptr [0xd1f7e0]
// 00a3ff05  85c0                 test eax, eax
// 00a3ff07  7408                 je 0xa3ff11
// 00a3ff09  50                   push eax
// 00a3ff0a  ff151c19a400         call dword ptr [0xa4191c]
// 00a3ff10  59                   pop ecx
// 00a3ff11  c3                   ret 
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