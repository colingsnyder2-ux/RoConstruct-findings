// from server: 74% by colin
// roc 2007-08 00415fd0  unit: VCWorkspace::?$CComAggObject  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00415fd0
//
// 00415fd0  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00415fd4  834104ff             add dword ptr [ecx + 4], -1
// 00415fd8  56                   push esi
// 00415fd9  8b7104               mov esi, dword ptr [ecx + 4]
// 00415fdc  750d                 jne 0x415feb
// 00415fde  85c9                 test ecx, ecx
// 00415fe0  7409                 je 0x415feb
// 00415fe2  8b01                 mov eax, dword ptr [ecx]
// 00415fe4  8b500c               mov edx, dword ptr [eax + 0xc]
// 00415fe7  6a01                 push 1
// 00415fe9  ffd2                 call edx
// 00415feb  8bc6                 mov eax, esi
// 00415fed  5e                   pop esi
// 00415fee  c20400               ret 4

struct VCWorkspaceCComAggObject {
    long __stdcall Release();
};

long __stdcall VCWorkspaceCComAggObject::Release()
{
    long count = --*(long*)((char*)this + 4);
    if (count == 0 && this != 0) {
        void** vtbl = *(void***)this;
        typedef void (__stdcall *Fn)(int);
        Fn fn = (Fn)vtbl[3];
        fn(1);
    }
    return count;
}
