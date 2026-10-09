// from server: 74% by colin
// roc 2007-08 00625ea0  unit: RBX::Running  size: 74 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00625ea0
//
// 00625ea0  8b49fc               mov ecx, dword ptr [ecx - 4]
// 00625ea3  56                   push esi
// 00625ea4  57                   push edi
// 00625ea5  e84603f8ff           call 0x5a61f0
// 00625eaa  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00625eae  807e7000             cmp byte ptr [esi + 0x70], 0
// 00625eb2  bf02000000           mov edi, 2
// 00625eb7  7520                 jne 0x625ed9
// 00625eb9  807e7200             cmp byte ptr [esi + 0x72], 0
// 00625ebd  741a                 je 0x625ed9
// 00625ebf  85c0                 test eax, eax
// 00625ec1  7420                 je 0x625ee3
// 00625ec3  53                   push ebx
// 00625ec4  8bc8                 mov ecx, eax
// 00625ec6  e865e9f8ff           call 0x5b4830
// 00625ecb  8bce                 mov ecx, esi
// 00625ecd  8bd8                 mov ebx, eax
// 00625ecf  e85ce9f8ff           call 0x5b4830
// 00625ed4  3bd8                 cmp ebx, eax
// 00625ed6  5b                   pop ebx
// 00625ed7  750a                 jne 0x625ee3
// 00625ed9  5f                   pop edi
// 00625eda  b801000000           mov eax, 1
// 00625edf  5e                   pop esi
// 00625ee0  c20400               ret 4
// 00625ee3  8bc7                 mov eax, edi
// 00625ee5  5f                   pop edi
// 00625ee6  5e                   pop esi
// 00625ee7  c20400               ret 4

struct Running {
    char pad[0x70];
    bool f70;
    char pad71;
    bool f72;
    int method(int);
};

extern "C" int __stdcall sub_5a61f0();
extern "C" int __stdcall sub_5b4830();

int Running::method(int arg)
{
    int v = sub_5a61f0();
    int result = 2;
    if (f70 == 0 && f72 != 0) {
        if (v != 0) {
            int a = sub_5b4830();
            int b = sub_5b4830();
            if (a == b)
                result = 1;
        }
    } else {
        result = 1;
    }
    return result;
}
