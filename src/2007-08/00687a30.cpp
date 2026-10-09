// from server: 66% by colin
// roc 2007-08 00687a30  unit: CXTPPropExchangeXMLNode  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00687a30
//
// 00687a30  51                   push ecx
// 00687a31  8b442408             mov eax, dword ptr [esp + 8]
// 00687a35  8b00                 mov eax, dword ptr [eax]
// 00687a37  85c0                 test eax, eax
// 00687a39  56                   push esi
// 00687a3a  51                   push ecx
// 00687a3b  8bf1                 mov esi, ecx
// 00687a3d  8bcc                 mov ecx, esp
// 00687a3f  89642408             mov dword ptr [esp + 8], esp
// 00687a43  8901                 mov dword ptr [ecx], eax
// 00687a45  7408                 je 0x687a4f
// 00687a47  8b08                 mov ecx, dword ptr [eax]
// 00687a49  8b5104               mov edx, dword ptr [ecx + 4]
// 00687a4c  50                   push eax
// 00687a4d  ffd2                 call edx
// 00687a4f  8bce                 mov ecx, esi
// 00687a51  e88aefffff           call 0x6869e0
// 00687a56  85c0                 test eax, eax
// 00687a58  7d0d                 jge 0x687a67
// 00687a5a  3d02400080           cmp eax, 0x80004002
// 00687a5f  7406                 je 0x687a67
// 00687a61  50                   push eax
// 00687a62  e8399ffaff           call 0x6319a0
// 00687a67  8bc6                 mov eax, esi
// 00687a69  5e                   pop esi
// 00687a6a  59                   pop ecx
// 00687a6b  c20400               ret 4

struct CXTPPropExchangeXMLNode {
    int method(int* arg);
};

extern "C" int __stdcall sub_006319a0(int hr);
extern "C" int __fastcall sub_006869e0(CXTPPropExchangeXMLNode* self, int, int* arg);

int CXTPPropExchangeXMLNode::method(int* arg) {
    int* p = (int*)*arg;
    if (p != 0) {
        int* vtbl = (int*)*p;
        int (*fn)(int*) = (int (*)(int*))vtbl[1];
        fn(p);
    }
    int hr = sub_006869e0(this, 0, arg);
    if (hr < 0 && hr != (int)0x80004002) {
        sub_006319a0(hr);
    }
    return (int)this;
}
