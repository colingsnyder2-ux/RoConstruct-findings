// from server: 77% by colin
// roc 2007-08 00402ed0  unit: VCWorkspace::?$CComContainedObject  size: 18 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402ed0
//
// 00402ed0  8b442404             mov eax, dword ptr [esp + 4]
// 00402ed4  8b4030               mov eax, dword ptr [eax + 0x30]
// 00402ed7  8b08                 mov ecx, dword ptr [eax]
// 00402ed9  89442404             mov dword ptr [esp + 4], eax
// 00402edd  8b5108               mov edx, dword ptr [ecx + 8]
// 00402ee0  ffe2                 jmp edx

struct VCWorkspace_CComContainedObject {
    char pad[0x30];
    void* field30;

    void* func(void* arg);
};

void* VCWorkspace_CComContainedObject::func(void* arg)
{
    void* p = *(void**)((char*)arg + 0x30);
    void** vtbl = *(void***)p;
    void* (__stdcall *fn)(void*) = (void* (__stdcall *)(void*))vtbl[2];
    return fn(p);
}
