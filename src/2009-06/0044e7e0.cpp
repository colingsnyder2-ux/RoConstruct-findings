// roc 2009-06 0044e7e0  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2009-06 0044e7e0
//
// 0044e7e0  8b442404             mov eax, dword ptr [esp + 4]
// 0044e7e4  85c0                 test eax, eax
// 0044e7e6  7405                 je 0x44e7ed
// 0044e7e8  8d50f0               lea edx, [eax - 0x10]
// 0044e7eb  eb02                 jmp 0x44e7ef
// 0044e7ed  33d2                 xor edx, edx
// 0044e7ef  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0044e7f3  b803400080           mov eax, 0x80004003
// 0044e7f8  85c9                 test ecx, ecx
// 0044e7fa  7420                 je 0x44e81c
// 0044e7fc  8b4214               mov eax, dword ptr [edx + 0x14]
// 0044e7ff  85c0                 test eax, eax
// 0044e801  740e                 je 0x44e811
// 0044e803  8b10                 mov edx, dword ptr [eax]
// 0044e805  894c240c             mov dword ptr [esp + 0xc], ecx
// 0044e809  89442404             mov dword ptr [esp + 4], eax
// 0044e80d  8b12                 mov edx, dword ptr [edx]
// 0044e80f  ffe2                 jmp edx
// 0044e811  c70100000000         mov dword ptr [ecx], 0
// 0044e817  b805400080           mov eax, 0x80004005
// 0044e81c  c20c00               ret 0xc
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