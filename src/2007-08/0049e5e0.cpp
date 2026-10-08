// from server: 100% by colin
// roc 2007-08 0049e5e0  unit: RBX::Network::VServer::?$FactoryProduct  size: 46 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0049e5e0
//
// 0049e5e0  8b442404             mov eax, dword ptr [esp + 4]
// 0049e5e4  50                   push eax
// 0049e5e5  e84682feff           call 0x486830
// 0049e5ea  83c404               add esp, 4
// 0049e5ed  85c0                 test eax, eax
// 0049e5ef  7411                 je 0x49e602
// 0049e5f1  8bc8                 mov ecx, eax
// 0049e5f3  e868f8ffff           call 0x49de60
// 0049e5f8  33c9                 xor ecx, ecx
// 0049e5fa  85c0                 test eax, eax
// 0049e5fc  0f95c1               setne cl
// 0049e5ff  8ac1                 mov al, cl
// 0049e601  c3                   ret 
// 0049e602  33c0                 xor eax, eax
// 0049e604  33c9                 xor ecx, ecx
// 0049e606  85c0                 test eax, eax
// 0049e608  0f95c1               setne cl
// 0049e60b  8ac1                 mov al, cl
// 0049e60d  c3                   ret 

struct S_0049de60 {
    int m();
};

extern "C" void* __cdecl func_00486830(void*);

bool __cdecl func_0049e5e0(void* a)
{
    void* p = func_00486830(a);
    int r;
    if (p != 0) {
        r = ((S_0049de60*)p)->m();
    } else {
        r = 0;
    }
    return r != 0;
}
