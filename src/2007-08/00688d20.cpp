// from server: 64% by colin
// roc 2007-08 00688d20  unit: CXTPPropExchangeXMLNode::CXMLEnumerator  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00688d20
//
// 00688d20  51                   push ecx
// 00688d21  8b442408             mov eax, dword ptr [esp + 8]
// 00688d25  8b00                 mov eax, dword ptr [eax]
// 00688d27  85c0                 test eax, eax
// 00688d29  56                   push esi
// 00688d2a  51                   push ecx
// 00688d2b  8bf1                 mov esi, ecx
// 00688d2d  8bcc                 mov ecx, esp
// 00688d2f  89642408             mov dword ptr [esp + 8], esp
// 00688d33  8901                 mov dword ptr [ecx], eax
// 00688d35  7408                 je 0x688d3f
// 00688d37  8b08                 mov ecx, dword ptr [eax]
// 00688d39  8b5104               mov edx, dword ptr [ecx + 4]
// 00688d3c  50                   push eax
// 00688d3d  ffd2                 call edx
// 00688d3f  8bce                 mov ecx, esi
// 00688d41  e82aedffff           call 0x687a70
// 00688d46  85c0                 test eax, eax
// 00688d48  7d0d                 jge 0x688d57
// 00688d4a  3d02400080           cmp eax, 0x80004002
// 00688d4f  7406                 je 0x688d57
// 00688d51  50                   push eax
// 00688d52  e8498cfaff           call 0x6319a0
// 00688d57  8bc6                 mov eax, esi
// 00688d59  5e                   pop esi
// 00688d5a  59                   pop ecx
// 00688d5b  c20400               ret 4

struct CXTPPropExchangeXMLNode_CXMLEnumerator {
    int field0;
    int field4;
    int construct(int *p);
};

extern "C" int __stdcall sub_6319a0(int hr);

int CXTPPropExchangeXMLNode_CXMLEnumerator::construct(int *p) {
    int *src = (int *)*p;
    int hr;
    if (src != 0) {
        int *vtbl = (int *)*src;
        int (*fn)(int *) = (int (*)(int *))vtbl[1];
        fn(src);
    }
    hr = ((int (__thiscall *)(CXTPPropExchangeXMLNode_CXMLEnumerator *, int *))0x687a70)(this, p);
    if (hr < 0 && hr != (int)0x80004002) {
        sub_6319a0(hr);
    }
    return (int)this;
}
