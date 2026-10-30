// roc 2012-06 0047aa30  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2012-06 0047aa30
//
// 0047aa30  8b442404             mov eax, dword ptr [esp + 4]
// 0047aa34  85c0                 test eax, eax
// 0047aa36  7405                 je 0x47aa3d
// 0047aa38  8d50f0               lea edx, [eax - 0x10]
// 0047aa3b  eb02                 jmp 0x47aa3f
// 0047aa3d  33d2                 xor edx, edx
// 0047aa3f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0047aa43  b803400080           mov eax, 0x80004003
// 0047aa48  85c9                 test ecx, ecx
// 0047aa4a  7420                 je 0x47aa6c
// 0047aa4c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0047aa4f  85c0                 test eax, eax
// 0047aa51  740e                 je 0x47aa61
// 0047aa53  8b10                 mov edx, dword ptr [eax]
// 0047aa55  894c240c             mov dword ptr [esp + 0xc], ecx
// 0047aa59  89442404             mov dword ptr [esp + 4], eax
// 0047aa5d  8b12                 mov edx, dword ptr [edx]
// 0047aa5f  ffe2                 jmp edx
// 0047aa61  c70100000000         mov dword ptr [ecx], 0
// 0047aa67  b805400080           mov eax, 0x80004005
// 0047aa6c  c20c00               ret 0xc
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