// from server: 75% by colin
// roc 2007-08 0067f8d0  unit: CXTPPrintPageHeaderFooter  size: 93 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067f8d0
//
// 0067f8d0  56                   push esi
// 0067f8d1  8bf1                 mov esi, ecx
// 0067f8d3  e8628a0b00           call 0x73833a
// 0067f8d8  8d4e60               lea ecx, [esi + 0x60]
// 0067f8db  c7063ceb7c00         mov dword ptr [esi], 0x7ceb3c
// 0067f8e1  ff15acdd7700         call dword ptr [0x77ddac]
// 0067f8e7  8d4e64               lea ecx, [esi + 0x64]
// 0067f8ea  ff15acdd7700         call dword ptr [0x77ddac]
// 0067f8f0  8d4e68               lea ecx, [esi + 0x68]
// 0067f8f3  ff15acdd7700         call dword ptr [0x77ddac]
// 0067f8f9  8d4e6c               lea ecx, [esi + 0x6c]
// 0067f8fc  ff15acdd7700         call dword ptr [0x77ddac]
// 0067f902  8b44240c             mov eax, dword ptr [esp + 0xc]
// 0067f906  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067f90a  6a00                 push 0
// 0067f90c  8d5620               lea edx, [esi + 0x20]
// 0067f90f  52                   push edx
// 0067f910  6a3c                 push 0x3c
// 0067f912  6a1f                 push 0x1f
// 0067f914  894670               mov dword ptr [esi + 0x70], eax
// 0067f917  894e74               mov dword ptr [esi + 0x74], ecx
// 0067f91a  ff150cee7700         call dword ptr [0x77ee0c]
// 0067f920  c7465c00000000       mov dword ptr [esi + 0x5c], 0
// 0067f927  8bc6                 mov eax, esi
// 0067f929  5e                   pop esi
// 0067f92a  c20800               ret 8

struct CXTPPrintPageHeaderFooter {
    char pad0[0x20];
    char field20[0x3c];
    int field5c;
    int field60;
    int field64;
    int field68;
    int field6c;
    int field70;
    int field74;
    CXTPPrintPageHeaderFooter* Construct(int a, int b);
};

extern "C" void __stdcall sub_73833a();
extern "C" void __stdcall sub_77ddac();
extern "C" int __stdcall SystemParametersInfoA(unsigned int, unsigned int, void*, unsigned int);

CXTPPrintPageHeaderFooter* CXTPPrintPageHeaderFooter::Construct(int a, int b)
{
    sub_73833a();
    *(int*)this = 0x7ceb3c;
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    sub_77ddac();
    field70 = b;
    field74 = a;
    SystemParametersInfoA(0x1f, 0x3c, (char*)this + 0x20, 0);
    field5c = 0;
    return this;
}
