// from server: 61% by colin
// roc 2007-08 00402c50  unit: VCWorkspace::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00402c50
//
// 00402c50  8b442404             mov eax, dword ptr [esp + 4]
// 00402c54  834030ff             add dword ptr [eax + 0x30], -1
// 00402c58  56                   push esi
// 00402c59  8b7030               mov esi, dword ptr [eax + 0x30]
// 00402c5c  7510                 jne 0x402c6e
// 00402c5e  85c0                 test eax, eax
// 00402c60  740c                 je 0x402c6e
// 00402c62  8d4820               lea ecx, [eax + 0x20]
// 00402c65  8b01                 mov eax, dword ptr [ecx]
// 00402c67  8b5014               mov edx, dword ptr [eax + 0x14]
// 00402c6a  6a01                 push 1
// 00402c6c  ffd2                 call edx
// 00402c6e  8bc6                 mov eax, esi
// 00402c70  5e                   pop esi
// 00402c71  c20400               ret 4

struct VCWorkspace_CComObject {
    char pad[0x20];
    void* m_outer;
    char pad2[0xc];
    int m_refCount;
    int Release(int);
};

int VCWorkspace_CComObject::Release(int)
{
    VCWorkspace_CComObject* self = *(VCWorkspace_CComObject**)((char*)&self - 4);
    int result = --self->m_refCount;
    if (result == 0 && self != 0) {
        void* p = *(void**)((char*)self + 0x20);
        void** vtbl = *(void***)p;
        typedef void (__stdcall *Fn)(void*, int);
        Fn fn = (Fn)vtbl[5];
        fn(p, 1);
    }
    return result;
}
