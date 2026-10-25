// from server: 71% by atomic.potato
// roc 2011-06 00417e90  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 33 bytes
// Make this compile to the exact bytes below, then: roc check 2011-06 00417e90
//
// 00417e90  8b4c2404             mov ecx, dword ptr [esp + 4]
// 00417e94  834108ff             add dword ptr [ecx + 8], -1
// 00417e98  56                   push esi
// 00417e99  8b7108               mov esi, dword ptr [ecx + 8]
// 00417e9c  750d                 jne 0x417eab
// 00417e9e  85c9                 test ecx, ecx
// 00417ea0  7409                 je 0x417eab
// 00417ea2  8b01                 mov eax, dword ptr [ecx]
// 00417ea4  8b5010               mov edx, dword ptr [eax + 0x10]
// 00417ea7  6a01                 push 1
// 00417ea9  ffd2                 call edx
// 00417eab  8bc6                 mov eax, esi
// 00417ead  5e                   pop esi
// 00417eae  c20400               ret 4

struct VCBrowserViewExternal_CComObjectNoLock {
    long __stdcall Release();
};

long __stdcall VCBrowserViewExternal_CComObjectNoLock::Release() {
    long result = --*(long*)((char*)this + 8);
    if (result == 0 && this != 0) {
        (*(void (__stdcall **)(long))(*(void***)this)[4])(1);
    }
    return result;
}
