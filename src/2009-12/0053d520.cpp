// roc 2009-12 0053d520  unit: RBX::Network::Replicator::ChangePropertyItem  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 0053d520
//
// 0053d520  8b442404             mov eax, dword ptr [esp + 4]
// 0053d524  8b4804               mov ecx, dword ptr [eax + 4]
// 0053d527  8b10                 mov edx, dword ptr [eax]
// 0053d529  51                   push ecx
// 0053d52a  ffd2                 call edx
// 0053d52c  8a00                 mov al, byte ptr [eax]
// 0053d52e  83c404               add esp, 4
// 0053d531  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX00000b@@YADPAX@Z)

namespace ns_ROCX00000b {
struct S {
};

char __cdecl f(void* arg)
{
    return *reinterpret_cast<char*>(
        reinterpret_cast<char*(*)(void*)>(
            *reinterpret_cast<void**>(reinterpret_cast<char*>(arg) + 0)
        )(reinterpret_cast<void*>(*reinterpret_cast<int*>(reinterpret_cast<char*>(arg) + 4)))
    );
}
}
