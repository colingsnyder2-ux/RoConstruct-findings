// roc 2010-06 004eb700  unit: RBX::Network::Replicator::ChangePropertyItem  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004eb700
//
// 004eb700  8b442404             mov eax, dword ptr [esp + 4]
// 004eb704  8b4804               mov ecx, dword ptr [eax + 4]
// 004eb707  8b10                 mov edx, dword ptr [eax]
// 004eb709  51                   push ecx
// 004eb70a  ffd2                 call edx
// 004eb70c  8a00                 mov al, byte ptr [eax]
// 004eb70e  83c404               add esp, 4
// 004eb711  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000000@@YADPAX@Z)

namespace ns_ROCX000000 {
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
