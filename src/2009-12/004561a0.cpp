// roc 2009-12 004561a0  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-12 004561a0
//
// 004561a0  8b442404             mov eax, dword ptr [esp + 4]
// 004561a4  85c0                 test eax, eax
// 004561a6  7405                 je 0x4561ad
// 004561a8  8d50f0               lea edx, [eax - 0x10]
// 004561ab  eb02                 jmp 0x4561af
// 004561ad  33d2                 xor edx, edx
// 004561af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004561b3  b803400080           mov eax, 0x80004003
// 004561b8  85c9                 test ecx, ecx
// 004561ba  7420                 je 0x4561dc
// 004561bc  8b4214               mov eax, dword ptr [edx + 0x14]
// 004561bf  85c0                 test eax, eax
// 004561c1  740e                 je 0x4561d1
// 004561c3  8b10                 mov edx, dword ptr [eax]
// 004561c5  894c240c             mov dword ptr [esp + 0xc], ecx
// 004561c9  89442404             mov dword ptr [esp + 4], eax
// 004561cd  8b12                 mov edx, dword ptr [edx]
// 004561cf  ffe2                 jmp edx
// 004561d1  c70100000000         mov dword ptr [ecx], 0
// 004561d7  b805400080           mov eax, 0x80004005
// 004561dc  c20c00               ret 0xc
// copied from an identical function in another client (function ?queryObject@@YGJPAXPBXPAPAX@Z)

// roc-cl: 21022
// roc-flags: /O2 /GS- /EHsc /MD
struct Interface {
    virtual long __stdcall query(const void* id, void** result) = 0;
};

struct Object {
    char padding[20];
    Interface* target;
};

long __stdcall queryObject(void* object, const void* id, void** result)
{
    Object* owner = object ? reinterpret_cast<Object*>(
        static_cast<char*>(object) - 16) : 0;
    long status = static_cast<long>(0x80004003UL);

    if (result) {
        Interface* target = owner->target;
        if (target)
            return target->query(id, result);
        *result = 0;
        status = static_cast<long>(0x80004005UL);
    }

    return status;
}