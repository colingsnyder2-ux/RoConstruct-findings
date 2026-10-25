// from server: 100% by tester
// roc 2008-06 007b8fe0  unit: RBX::RenderNew::MegaTextureProxy  size: 22 bytes
// Make this compile to the exact bytes below, then: roc check 2008-06 007b8fe0
//
// 007b8fe0  51                   push ecx
// 007b8fe1  8b442408             mov eax, dword ptr [esp + 8]
// 007b8fe5  c7042400000000       mov dword ptr [esp], 0
// 007b8fec  c70000000000         mov dword ptr [eax], 0
// 007b8ff2  59                   pop ecx
// 007b8ff3  c20c00               ret 0xc

struct MegaTextureProxy {
    void func(int a, int b, int c);
};

void MegaTextureProxy::func(int a, int b, int c)
{
    volatile int local = 0;
    int *p = (int *)a;
    *p = 0;
}
