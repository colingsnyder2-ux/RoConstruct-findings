// from server: 93% by colin
// roc 2007-08 00573810  unit: RBX::NullController  size: 23 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00573810
//
// 00573810  56                   push esi
// 00573811  8b742408             mov esi, dword ptr [esp + 8]
// 00573815  56                   push esi
// 00573816  81c194010000         add ecx, 0x194
// 0057381c  e85f330100           call 0x586b80
// 00573821  8bc6                 mov eax, esi
// 00573823  5e                   pop esi
// 00573824  c20400               ret 4

struct NullController {
    char pad[0x194];
    char field194;
    void* method(void* arg);
};

extern "C" void* __stdcall sub_586B80(void*, void*);

void* NullController::method(void* arg)
{
    sub_586B80(&field194, arg);
    return arg;
}
