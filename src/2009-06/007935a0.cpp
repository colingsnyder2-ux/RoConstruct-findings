// roc 2009-06 007935a0  unit: CXTPHookManager::CHookSink  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 007935a0
//
// 007935a0  53                   push ebx
// 007935a1  8b5c2408             mov ebx, dword ptr [esp + 8]
// 007935a5  56                   push esi
// 007935a6  57                   push edi
// 007935a7  53                   push ebx
// 007935a8  8bf9                 mov edi, ecx
// 007935aa  e8a1ffffff           call 0x793550
// 007935af  8bf0                 mov esi, eax
// 007935b1  85f6                 test esi, esi
// 007935b3  7413                 je 0x7935c8
// 007935b5  53                   push ebx
// 007935b6  8bcf                 mov ecx, edi
// 007935b8  e8b3e60300           call 0x7d1c70
// 007935bd  8b06                 mov eax, dword ptr [esi]
// 007935bf  8b5004               mov edx, dword ptr [eax + 4]
// 007935c2  6a01                 push 1
// 007935c4  8bce                 mov ecx, esi
// 007935c6  ffd2                 call edx
// 007935c8  5f                   pop edi
// 007935c9  5e                   pop esi
// 007935ca  5b                   pop ebx
// 007935cb  c20400               ret 4
// copied from an identical function in another client (function ?DoRemove@CHookSink@ns_ROCX000025@@QAEXH@Z)

namespace ns_ROCX000025 {
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
}
