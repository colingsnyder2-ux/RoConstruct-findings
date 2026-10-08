// from server: 69% by colin
// roc 2007-08 00401d20  unit: VCWorkspace::?$CComObject  size: 60 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00401d20
//
// 00401d20  56                   push esi
// 00401d21  8b74240c             mov esi, dword ptr [esp + 0xc]
// 00401d25  85f6                 test esi, esi
// 00401d27  57                   push edi
// 00401d28  8bf9                 mov edi, ecx
// 00401d2a  750a                 jne 0x401d36
// 00401d2c  6805400080           push 0x80004005
// 00401d31  e8caf2ffff           call 0x401000
// 00401d36  56                   push esi
// 00401d37  ff15f4d27700         call dword ptr [0x77d2f4]
// 00401d3d  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00401d41  8b17                 mov edx, dword ptr [edi]
// 00401d43  83c001               add eax, 1
// 00401d46  50                   push eax
// 00401d47  8b442418             mov eax, dword ptr [esp + 0x18]
// 00401d4b  56                   push esi
// 00401d4c  50                   push eax
// 00401d4d  6a00                 push 0
// 00401d4f  51                   push ecx
// 00401d50  52                   push edx
// 00401d51  ff1514d07700         call dword ptr [0x77d014]
// 00401d57  5f                   pop edi
// 00401d58  5e                   pop esi
// 00401d59  c20c00               ret 0xc

struct S_func_00401d20 {
    void f(void* a, const char* b, unsigned long c, unsigned long d);
};

extern "C" int __stdcall lstrlenA(const char*);
extern "C" int __stdcall RegSetValueExA(void*, const char*, unsigned long, unsigned long, const unsigned char*, unsigned long);
extern "C" void __stdcall func_00401000(unsigned long);

void S_func_00401d20::f(void* a, const char* b, unsigned long c, unsigned long d)
{
    if (a == 0) {
        func_00401000(0x80004005);
    }
    int len = lstrlenA(b);
    RegSetValueExA(a, b, 0, c, (const unsigned char*)d, len + 1);
}
