// from server: 89% by colin
// roc 2007-08 004aa3f0  unit: RBX::VInstance::?$NonFactoryProduct  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004aa3f0
//
// 004aa3f0  8b442404             mov eax, dword ptr [esp + 4]
// 004aa3f4  8b4804               mov ecx, dword ptr [eax + 4]
// 004aa3f7  8b10                 mov edx, dword ptr [eax]
// 004aa3f9  51                   push ecx
// 004aa3fa  ffd2                 call edx
// 004aa3fc  8a00                 mov al, byte ptr [eax]
// 004aa3fe  83c404               add esp, 4
// 004aa401  c3                   ret 

struct S {
    char f(void* arg);
};

char S::f(void* arg)
{
    return *reinterpret_cast<char*>(
        reinterpret_cast<char*(*)(void*)>(
            *reinterpret_cast<void**>(reinterpret_cast<char*>(arg) + 0)
        )(reinterpret_cast<void*>(*reinterpret_cast<int*>(reinterpret_cast<char*>(arg) + 4)))
    );
}
