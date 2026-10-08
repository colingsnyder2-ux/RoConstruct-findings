// from server: 48% by colin
// roc 2007-08 00644450  unit: CXTPCommandBar  size: 59 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00644450
//
// 00644450  53                   push ebx
// 00644451  8bd9                 mov ebx, ecx
// 00644453  e858f5ffff           call 0x6439b0
// 00644458  85c0                 test eax, eax
// 0064445a  752b                 jne 0x644487
// 0064445c  8b8bf8000000         mov ecx, dword ptr [ebx + 0xf8]
// 00644462  56                   push esi
// 00644463  8b742414             mov esi, dword ptr [esp + 0x14]
// 00644467  57                   push edi
// 00644468  8b7c2414             mov edi, dword ptr [esp + 0x14]
// 0064446c  56                   push esi
// 0064446d  57                   push edi
// 0064446e  e82d650300           call 0x67a9a0
// 00644473  85c0                 test eax, eax
// 00644475  740e                 je 0x644485
// 00644477  8b10                 mov edx, dword ptr [eax]
// 00644479  56                   push esi
// 0064447a  8bc8                 mov ecx, eax
// 0064447c  8b82f8000000         mov eax, dword ptr [edx + 0xf8]
// 00644482  57                   push edi
// 00644483  ffd0                 call eax
// 00644485  5f                   pop edi
// 00644486  5e                   pop esi
// 00644487  5b                   pop ebx
// 00644488  c20c00               ret 0xc

struct CXTPCommandBar {
    void* field0;
    char pad[0xf8 - 4];
    void* fieldF8;
    int method1();
    int method2(int, int);
    int method3(int, int);
};

extern "C" int __stdcall sub_67A9A0(void*, int, int);

int CXTPCommandBar::method1() {
    int r = this->method2(0, 0);
    if (r != 0)
        return r;
    int a = *(int*)((char*)this + 0xf8);
    int b = 0;
    int c = 0;
    int d = sub_67A9A0((void*)a, b, c);
    if (d != 0) {
        int (*fp)(int, int) = *(int (**)(int, int))((*(int*)d) + 0xf8);
        return fp(b, c);
    }
    return 0;
}
