// from server: 100% by colin
// roc 2007-08 006a3070  unit: CXTPHookManager::CHookSink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 006a3070
//
// 006a3070  53                   push ebx
// 006a3071  8b5c2408             mov ebx, dword ptr [esp + 8]
// 006a3075  56                   push esi
// 006a3076  57                   push edi
// 006a3077  53                   push ebx
// 006a3078  8bf9                 mov edi, ecx
// 006a307a  e8a1ffffff           call 0x6a3020
// 006a307f  8bf0                 mov esi, eax
// 006a3081  85f6                 test esi, esi
// 006a3083  7413                 je 0x6a3098
// 006a3085  53                   push ebx
// 006a3086  8bcf                 mov ecx, edi
// 006a3088  e853fcffff           call 0x6a2ce0
// 006a308d  8b06                 mov eax, dword ptr [esi]
// 006a308f  8b5004               mov edx, dword ptr [eax + 4]
// 006a3092  6a01                 push 1
// 006a3094  8bce                 mov ecx, esi
// 006a3096  ffd2                 call edx
// 006a3098  5f                   pop edi
// 006a3099  5e                   pop esi
// 006a309a  5b                   pop ebx
// 006a309b  c20400               ret 4

struct CHookSink {
    void* FindHook(int);
    void RemoveHook(int);
    void DoRemove(int);
};

void CHookSink::DoRemove(int a) {
    void* p = FindHook(a);
    if (p) {
        RemoveHook(a);
        void** vt = *(void***)p;
        void (__thiscall *fn)(void*, int) = (void (__thiscall *)(void*, int))vt[1];
        fn(p, 1);
    }
}
