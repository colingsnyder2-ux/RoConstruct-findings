// roc 2007-03 0053a420  unit: seg_00530000  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-03 0053a420
//
// 0053a420  8b442404             mov eax, dword ptr [esp + 4]
// 0053a424  8b4804               mov ecx, dword ptr [eax + 4]
// 0053a427  8b10                 mov edx, dword ptr [eax]
// 0053a429  51                   push ecx
// 0053a42a  ffd2                 call edx
// 0053a42c  8a00                 mov al, byte ptr [eax]
// 0053a42e  83c404               add esp, 4
// 0053a431  c3                   ret 
// copied from an identical function in another client (function ?f@ns_ROCX000008@@YADPAX@Z)

namespace ns_ROCX000008 {
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
