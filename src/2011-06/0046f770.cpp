// roc 2011-06 0046f770  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 0046f770
//
// 0046f770  8b442404             mov eax, dword ptr [esp + 4]
// 0046f774  85c0                 test eax, eax
// 0046f776  7405                 je 0x46f77d
// 0046f778  8d50f0               lea edx, [eax - 0x10]
// 0046f77b  eb02                 jmp 0x46f77f
// 0046f77d  33d2                 xor edx, edx
// 0046f77f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0046f783  b803400080           mov eax, 0x80004003
// 0046f788  85c9                 test ecx, ecx
// 0046f78a  7420                 je 0x46f7ac
// 0046f78c  8b4214               mov eax, dword ptr [edx + 0x14]
// 0046f78f  85c0                 test eax, eax
// 0046f791  740e                 je 0x46f7a1
// 0046f793  8b10                 mov edx, dword ptr [eax]
// 0046f795  894c240c             mov dword ptr [esp + 0xc], ecx
// 0046f799  89442404             mov dword ptr [esp + 4], eax
// 0046f79d  8b12                 mov edx, dword ptr [edx]
// 0046f79f  ffe2                 jmp edx
// 0046f7a1  c70100000000         mov dword ptr [ecx], 0
// 0046f7a7  b805400080           mov eax, 0x80004005
// 0046f7ac  c20c00               ret 0xc
// copied from an identical function in another client (function ?queryObject@ns_ROCX000000@@YGJPAXPBXPAPAX@Z)

namespace ns_ROCX000000 {
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
}
