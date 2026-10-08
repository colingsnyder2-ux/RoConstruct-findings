// from server: 67% by colin
// roc 2007-08 00402c00  unit: VCWorkspace::?$CComObject  size: 63 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402c00
//
// 00402c00  8b442404             mov eax, dword ptr [esp + 4]
// 00402c04  85c0                 test eax, eax
// 00402c06  7405                 je 0x402c0d
// 00402c08  8d50e0               lea edx, [eax - 0x20]
// 00402c0b  eb02                 jmp 0x402c0f
// 00402c0d  33d2                 xor edx, edx
// 00402c0f  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00402c13  85c9                 test ecx, ecx
// 00402c15  b803400080           mov eax, 0x80004003
// 00402c1a  7420                 je 0x402c3c
// 00402c1c  8b4224               mov eax, dword ptr [edx + 0x24]
// 00402c1f  85c0                 test eax, eax
// 00402c21  740e                 je 0x402c31
// 00402c23  8b10                 mov edx, dword ptr [eax]
// 00402c25  894c240c             mov dword ptr [esp + 0xc], ecx
// 00402c29  89442404             mov dword ptr [esp + 4], eax
// 00402c2d  8b12                 mov edx, dword ptr [edx]
// 00402c2f  ffe2                 jmp edx
// 00402c31  c70100000000         mov dword ptr [ecx], 0
// 00402c37  b805400080           mov eax, 0x80004005
// 00402c3c  c20c00               ret 0xc

struct VCWorkspaceCComObject {
    int __stdcall set(void* p, void* out);
};

int __stdcall VCWorkspaceCComObject::set(void* p, void* out)
{
    char* obj;
    if (p != 0)
        obj = (char*)p - 0x20;
    else
        obj = 0;

    if (out != 0)
        return (int)0x80004003;

    void* inner = *(void**)(obj + 0x24);
    if (inner != 0) {
        void** vtbl = *(void***)inner;
        void* savedOut = out;
        void* savedInner = inner;
        int (__stdcall *fn)(void*, void*) = (int (__stdcall *)(void*, void*))vtbl[0];
        return fn(savedInner, savedOut);
    }

    *(int*)out = 0;
    return (int)0x80004005;
}
