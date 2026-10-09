// roc 2009-06 004e6940  unit: RBX::Network::Replicator::ChangePropertyItem  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 004e6940
//
// 004e6940  8b442404             mov eax, dword ptr [esp + 4]
// 004e6944  8b4804               mov ecx, dword ptr [eax + 4]
// 004e6947  8b10                 mov edx, dword ptr [eax]
// 004e6949  51                   push ecx
// 004e694a  ffd2                 call edx
// 004e694c  8a00                 mov al, byte ptr [eax]
// 004e694e  83c404               add esp, 4
// 004e6951  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000007@@YADPAX@Z)

namespace ns_ROCX000007 {
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
