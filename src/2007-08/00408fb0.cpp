// from server: 100% by colin
// roc 2007-08 00408fb0  unit: VCApp::?$CComObject  size: 26 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408fb0
//
// 00408fb0  a18cbe8b00           mov eax, dword ptr [0x8bbe8c]
// 00408fb5  8b08                 mov ecx, dword ptr [eax]
// 00408fb7  8b5110               mov edx, dword ptr [ecx + 0x10]
// 00408fba  8b442408             mov eax, dword ptr [esp + 8]
// 00408fbe  f7da                 neg edx
// 00408fc0  1bd2                 sbb edx, edx
// 00408fc2  668910               mov word ptr [eax], dx
// 00408fc5  33c0                 xor eax, eax
// 00408fc7  c20800               ret 8

struct VCApp_CComObject {
    int method(int unused, short* out);
};

extern VCApp_CComObject* g_ptr_8bbe8c;

int VCApp_CComObject::method(int unused, short* out)
{
    int v = *(int*)(*(char**)g_ptr_8bbe8c + 0x10);
    *out = (short)(v != 0 ? 0xFFFF : 0);
    return 0;
}
