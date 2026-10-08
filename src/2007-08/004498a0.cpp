// from server: 100% by colin
// roc 2007-08 004498a0  unit: CRobloxModule  size: 25 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 004498a0
//
// 004498a0  8b442404             mov eax, dword ptr [esp + 4]
// 004498a4  8b08                 mov ecx, dword ptr [eax]
// 004498a6  8b510c               mov edx, dword ptr [ecx + 0xc]
// 004498a9  68bcef7900           push 0x79efbc
// 004498ae  684c067900           push 0x79064c
// 004498b3  50                   push eax
// 004498b4  ffd2                 call edx
// 004498b6  c20400               ret 4

struct CRobloxModule {
    void sub_004498a0(int*);
};

void CRobloxModule::sub_004498a0(int* arg)
{
    void (__stdcall *fn)(int*, const char*, const char*);
    fn = *(void (__stdcall **)(int*, const char*, const char*))(*(int*)arg + 0xc);
    fn(arg, (const char*)0x79064c, (const char*)0x79efbc);
}
