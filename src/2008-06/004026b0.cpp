// from server: 100% by king_originala
// roc 2008-06 004026b0  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 004026b0
//
// 004026b0  8b442404             mov eax, dword ptr [esp + 4]
// 004026b4  85c0                 test eax, eax
// 004026b6  7405                 je 0x4026bd
// 004026b8  8d50f0               lea edx, [eax - 0x10]
// 004026bb  eb02                 jmp 0x4026bf
// 004026bd  33d2                 xor edx, edx
// 004026bf  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 004026c3  b803400080           mov eax, 0x80004003
// 004026c8  85c9                 test ecx, ecx
// 004026ca  7420                 je 0x4026ec
// 004026cc  8b4214               mov eax, dword ptr [edx + 0x14]
// 004026cf  85c0                 test eax, eax
// 004026d1  740e                 je 0x4026e1
// 004026d3  8b10                 mov edx, dword ptr [eax]
// 004026d5  894c240c             mov dword ptr [esp + 0xc], ecx
// 004026d9  89442404             mov dword ptr [esp + 4], eax
// 004026dd  8b12                 mov edx, dword ptr [edx]
// 004026df  ffe2                 jmp edx
// 004026e1  c70100000000         mov dword ptr [ecx], 0
// 004026e7  b805400080           mov eax, 0x80004005
// 004026ec  c20c00               ret 0xc

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
