// roc 2009-12 00668230  unit: RBX::DataModel::LegacyLock::Implementation::UEvents::?$sp_counted_impl_p  size: 8 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 00668230
//
// 00668230  8b442404             mov eax, dword ptr [esp + 4]
// 00668234  8b08                 mov ecx, dword ptr [eax]
// 00668236  ffe1                 jmp ecx
// copied from an identical function in another client (function ?f@ns_ROCX000002@@YAXPAX@Z)

namespace ns_ROCX000002 {
// from server: 100% by colin
struct S {
};

void __cdecl f(void* p) {
    void (*fn)() = *(void (**)())p;
    fn();
}
}
