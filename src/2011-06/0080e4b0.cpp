// roc 2011-06 0080e4b0  unit: PAVCXTPControlAction::?$CArray  size: 68 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0080e4b0
//
// 0080e4b0  53                   push ebx
// 0080e4b1  56                   push esi
// 0080e4b2  8bd9                 mov ebx, ecx
// 0080e4b4  33f6                 xor esi, esi
// 0080e4b6  e8d5ae0500           call 0x869390
// 0080e4bb  85c0                 test eax, eax
// 0080e4bd  7e26                 jle 0x80e4e5
// 0080e4bf  57                   push edi
// 0080e4c0  56                   push esi
// 0080e4c1  8bcb                 mov ecx, ebx
// 0080e4c3  e8b8e7ffff           call 0x80cc80
// 0080e4c8  8bf8                 mov edi, eax
// 0080e4ca  8bcf                 mov ecx, edi
// 0080e4cc  e8bffeffff           call 0x80e390
// 0080e4d1  8bcf                 mov ecx, edi
// 0080e4d3  e802c1ffff           call 0x80a5da
// 0080e4d8  8bcb                 mov ecx, ebx
// 0080e4da  46                   inc esi
// 0080e4db  e8b0ae0500           call 0x869390
// 0080e4e0  3bf0                 cmp esi, eax
// 0080e4e2  7cdc                 jl 0x80e4c0
// 0080e4e4  5f                   pop edi
// 0080e4e5  6aff                 push -1
// 0080e4e7  6a00                 push 0
// 0080e4e9  8d4b20               lea ecx, [ebx + 0x20]
// 0080e4ec  e84f060300           call 0x83eb40
// 0080e4f1  5e                   pop esi
// 0080e4f2  5b                   pop ebx
// 0080e4f3  c3                   ret 
// copied from an identical function in another client (function ?RemoveAll@Outer@ns_ROCX000000@ns_ROCX00000b@@QAEXXZ)

namespace ns_ROCX000000 {
namespace ns_ROCX000005 {
struct CRobloxControlColorSelector {
    void SetSomething(int value);
};

void CRobloxControlColorSelector::SetSomething(int value) {
    *(int*)((char*)this + 0x100) = value;
    if (value == 0) {
        int flags = *(int*)((char*)this + 0xd0);
        void (__thiscall *fn)(void*, int) = *(void (__thiscall **)(void*, int))(*(int*)this + 0x94);
        flags &= 0xffffffdf;
        fn(this, flags);
    }
}
}
}
