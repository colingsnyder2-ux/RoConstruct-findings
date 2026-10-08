// from server: 45% by colin
// roc 2007-08 00408a70  unit: VCApp::?$CComObject  size: 36 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00408a70
//
// 00408a70  51                   push ecx
// 00408a71  8b442408             mov eax, dword ptr [esp + 8]
// 00408a75  6a00                 push 0
// 00408a77  83ec1c               sub esp, 0x1c
// 00408a7a  8bcc                 mov ecx, esp
// 00408a7c  89642420             mov dword ptr [esp + 0x20], esp
// 00408a80  50                   push eax
// 00408a81  ff1598e67700         call dword ptr [0x77e698]
// 00408a87  8b0d8cbe8b00         mov ecx, dword ptr [0x8bbe8c]
// 00408a8d  e89e300100           call 0x41bb30
// 00408a92  59                   pop ecx
// 00408a93  c3                   ret 

struct VCApp_CComObject {
    void f(const char* s);
};

struct Other {
    void g(void* p);
};

extern "C" void* __stdcall G_func_0077e698(void*, const char*);

extern Other* G_func_008bbe8c;

void VCApp_CComObject::f(const char* s)
{
    char buf[32];
    G_func_0077e698(buf, s);
    G_func_008bbe8c->g(buf);
}
