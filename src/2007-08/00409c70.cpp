// from server: 100% by colin
// roc 2007-08 00409c70  unit: VCApp::?$CComObject  size: 28 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00409c70
//
// 00409c70  8b44240c             mov eax, dword ptr [esp + 0xc]
// 00409c74  8b4c2408             mov ecx, dword ptr [esp + 8]
// 00409c78  8b542404             mov edx, dword ptr [esp + 4]
// 00409c7c  50                   push eax
// 00409c7d  51                   push ecx
// 00409c7e  68e8517800           push 0x7851e8
// 00409c83  52                   push edx
// 00409c84  e81786ffff           call 0x4022a0
// 00409c89  c20c00               ret 0xc

struct VCApp {
    int CComObject(int a, int b, int c);
};

extern "C" int __stdcall SomeFunction(int a, int b, int c, int d);

int VCApp::CComObject(int a, int b, int c) {
    return SomeFunction(a, 0x7851e8, b, c);
}
