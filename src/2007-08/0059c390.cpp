// from server: 38% by colin
// roc 2007-08 0059c390  unit: RBX::Camera  size: 91 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059c390
//
// 0059c390  6aff                 push -1
// 0059c392  6824797500           push 0x757924
// 0059c397  64a100000000         mov eax, dword ptr fs:[0]
// 0059c39d  50                   push eax
// 0059c39e  64892500000000       mov dword ptr fs:[0], esp
// 0059c3a5  83ec08               sub esp, 8
// 0059c3a8  56                   push esi
// 0059c3a9  8bf1                 mov esi, ecx
// 0059c3ab  57                   push edi
// 0059c3ac  8d7e04               lea edi, [esi + 4]
// 0059c3af  8bcf                 mov ecx, edi
// 0059c3b1  c706745b7900         mov dword ptr [esi], 0x795b74
// 0059c3b7  897c240c             mov dword ptr [esp + 0xc], edi
// 0059c3bb  ff15a4e67700         call dword ptr [0x77e6a4]
// 0059c3c1  c744241800000000     mov dword ptr [esp + 0x18], 0
// 0059c3c9  e86207f9ff           call 0x52cb30
// 0059c3ce  89471c               mov dword ptr [edi + 0x1c], eax
// 0059c3d1  8b4c2410             mov ecx, dword ptr [esp + 0x10]
// 0059c3d5  c7462400000000       mov dword ptr [esi + 0x24], 0
// 0059c3dc  5f                   pop edi
// 0059c3dd  8bc6                 mov eax, esi
// 0059c3df  5e                   pop esi
// 0059c3e0  64890d00000000       mov dword ptr fs:[0], ecx
// 0059c3e7  83c414               add esp, 0x14
// 0059c3ea  c3                   ret 

struct Camera {
    void* vtable;
    char pad[0x1c];
    void* field20;
    void* field24;
    Camera();
};

extern "C" void __stdcall sub_77E6A4();
extern "C" void* __stdcall sub_52CB30();

Camera::Camera()
{
    vtable = (void*)0x795B74;
    sub_77E6A4();
    field20 = sub_52CB30();
    field24 = 0;
}
