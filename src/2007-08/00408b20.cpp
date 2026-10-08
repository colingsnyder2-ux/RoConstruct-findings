// from server: 100% by colin
// roc 2007-08 00408b20  unit: VCApp::?$CComObject  size: 17 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408b20
//
// 00408b20  e81bfcffff           call 0x408740
// 00408b25  8bc8                 mov ecx, eax
// 00408b27  e824f01300           call 0x547b50
// 00408b2c  33c0                 xor eax, eax
// 00408b2e  c20400               ret 4

struct Target {
    void Call();
};

extern "C" Target* __cdecl CreateTarget();

int __stdcall Wrapper(int unused) {
    Target* t = CreateTarget();
    t->Call();
    return 0;
}
