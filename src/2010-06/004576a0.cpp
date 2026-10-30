// roc 2010-06 004576a0  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2010-06 004576a0
//
// 004576a0  8b442404             mov eax, dword ptr [esp + 4]
// 004576a4  85c0                 test eax, eax
// 004576a6  7405                 je 0x4576ad
// 004576a8  8d50f0               lea edx, [eax - 0x10]
// 004576ab  eb02                 jmp 0x4576af
// 004576ad  33d2                 xor edx, edx
// 004576af  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004576b3  b803400080           mov eax, 0x80004003
// 004576b8  85c9                 test ecx, ecx
// 004576ba  7420                 je 0x4576dc
// 004576bc  8b4214               mov eax, dword ptr [edx + 0x14]
// 004576bf  85c0                 test eax, eax
// 004576c1  740e                 je 0x4576d1
// 004576c3  8b10                 mov edx, dword ptr [eax]
// 004576c5  894c240c             mov dword ptr [esp + 0xc], ecx
// 004576c9  89442404             mov dword ptr [esp + 4], eax
// 004576cd  8b12                 mov edx, dword ptr [edx]
// 004576cf  ffe2                 jmp edx
// 004576d1  c70100000000         mov dword ptr [ecx], 0
// 004576d7  b805400080           mov eax, 0x80004005
// 004576dc  c20c00               ret 0xc
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