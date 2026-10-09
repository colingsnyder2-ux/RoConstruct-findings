// roc 2007-03 0068cb30  unit: seg_00680000  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0068cb30
//
// 0068cb30  53                   push ebx
// 0068cb31  8b5c2408             mov ebx, dword ptr [esp + 8]
// 0068cb35  56                   push esi
// 0068cb36  57                   push edi
// 0068cb37  53                   push ebx
// 0068cb38  8bf9                 mov edi, ecx
// 0068cb3a  e8b1ffffff           call 0x68caf0
// 0068cb3f  8bf0                 mov esi, eax
// 0068cb41  85f6                 test esi, esi
// 0068cb43  7413                 je 0x68cb58
// 0068cb45  53                   push ebx
// 0068cb46  8bcf                 mov ecx, edi
// 0068cb48  e883fbffff           call 0x68c6d0
// 0068cb4d  8b06                 mov eax, dword ptr [esi]
// 0068cb4f  8b5004               mov edx, dword ptr [eax + 4]
// 0068cb52  6a01                 push 1
// 0068cb54  8bce                 mov ecx, esi
// 0068cb56  ffd2                 call edx
// 0068cb58  5f                   pop edi
// 0068cb59  5e                   pop esi
// 0068cb5a  5b                   pop ebx
// 0068cb5b  c20400               ret 4
// copied from an identical function in another client (function ?DoRemove@CHookSink@ns_ROCX000026@@QAEXH@Z)

namespace ns_ROCX000026 {
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
