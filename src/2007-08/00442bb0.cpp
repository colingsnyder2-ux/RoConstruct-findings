// from server: 64% by colin
// roc 2007-08 00442bb0  unit: 1RBX::Metadata::VReflection::?$FactoryProduct  size: 80 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00442bb0
//
// 00442bb0  53                   push ebx
// 00442bb1  56                   push esi
// 00442bb2  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00442bb6  8b4604               mov eax, dword ptr [esi + 4]
// 00442bb9  57                   push edi
// 00442bba  83c004               add eax, 4
// 00442bbd  50                   push eax
// 00442bbe  8bf9                 mov edi, ecx
// 00442bc0  e8dbbb0f00           call 0x53e7a0
// 00442bc5  85c0                 test eax, eax
// 00442bc7  7531                 jne 0x442bfa
// 00442bc9  8a5c2414             mov bl, byte ptr [esp + 0x14]
// 00442bcd  8d4900               lea ecx, [ecx]
// 00442bd0  84db                 test bl, bl
// 00442bd2  7424                 je 0x442bf8
// 00442bd4  8bb684000000         mov esi, dword ptr [esi + 0x84]
// 00442bda  85f6                 test esi, esi
// 00442bdc  741a                 je 0x442bf8
// 00442bde  8b4604               mov eax, dword ptr [esi + 4]
// 00442be1  83c004               add eax, 4
// 00442be4  50                   push eax
// 00442be5  8bcf                 mov ecx, edi
// 00442be7  b301                 mov bl, 1
// 00442be9  e8b2bb0f00           call 0x53e7a0
// 00442bee  85c0                 test eax, eax
// 00442bf0  74de                 je 0x442bd0
// 00442bf2  5f                   pop edi
// 00442bf3  5e                   pop esi
// 00442bf4  5b                   pop ebx
// 00442bf5  c20800               ret 8
// 00442bf8  33c0                 xor eax, eax
// 00442bfa  5f                   pop edi
// 00442bfb  5e                   pop esi
// 00442bfc  5b                   pop ebx
// 00442bfd  c20800               ret 8

struct S {
    int f(int, char);
};

extern "C" int __stdcall sub_53E7A0(void*);

int S::f(int a, char b) {
    int* p = (int*)a;
    int* q = (int*)p[1];
    q = (int*)((char*)q + 4);
    int r = sub_53E7A0(q);
    if (r != 0) {
        return r;
    }
    while (b != 0) {
        int* t = (int*)p[0x84 / 4];
        if (t == 0) {
            break;
        }
        int* u = (int*)t[1];
        u = (int*)((char*)u + 4);
        b = 1;
        r = sub_53E7A0(u);
        if (r != 0) {
            return r;
        }
    }
    return 0;
}
