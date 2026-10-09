// roc 2008-06 004ae840  unit: RBX::PAVMotor::?$sp_counted_impl_pd  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004ae840
//
// 004ae840  8b442404             mov eax, dword ptr [esp + 4]
// 004ae844  8b4804               mov ecx, dword ptr [eax + 4]
// 004ae847  8b10                 mov edx, dword ptr [eax]
// 004ae849  51                   push ecx
// 004ae84a  ffd2                 call edx
// 004ae84c  8a00                 mov al, byte ptr [eax]
// 004ae84e  83c404               add esp, 4
// 004ae851  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000005@@YADPAX@Z)

namespace ns_ROCX000005 {
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
