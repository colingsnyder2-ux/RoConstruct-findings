// from server: 100% by colin
// roc 2007-08 0040b800  unit: VCBrowserViewExternal::?$CComObjectNoLock  size: 14 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0040b800
//
// 0040b800  8b442404             mov eax, dword ptr [esp + 4]
// 0040b804  83401801             add dword ptr [eax + 0x18], 1
// 0040b808  8b4018               mov eax, dword ptr [eax + 0x18]
// 0040b80b  c20400               ret 4

struct S { int pad[6]; long m; };

long __stdcall sub_0040b800(S* p)
{
    ++p->m;
    return p->m;
}
