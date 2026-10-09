// from server: 76% by colin
// roc 2007-08 00567f70  unit: RBX::ICameraOwner  size: 92 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00567f70
//
// 00567f70  56                   push esi
// 00567f71  57                   push edi
// 00567f72  8bf9                 mov edi, ecx
// 00567f74  8d7704               lea esi, [edi + 4]
// 00567f77  c70704987a00         mov dword ptr [edi], 0x7a9804
// 00567f7d  8b4604               mov eax, dword ptr [esi + 4]
// 00567f80  85c0                 test eax, eax
// 00567f82  741c                 je 0x567fa0
// 00567f84  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 00567f88  8b5608               mov edx, dword ptr [esi + 8]
// 00567f8b  51                   push ecx
// 00567f8c  56                   push esi
// 00567f8d  52                   push edx
// 00567f8e  50                   push eax
// 00567f8f  e8ccfdffff           call 0x567d60
// 00567f94  8b4604               mov eax, dword ptr [esi + 4]
// 00567f97  50                   push eax
// 00567f98  e8c57c0c00           call 0x62fc62
// 00567f9d  83c414               add esp, 0x14
// 00567fa0  f644240c01           test byte ptr [esp + 0xc], 1
// 00567fa5  c7460400000000       mov dword ptr [esi + 4], 0
// 00567fac  c7460800000000       mov dword ptr [esi + 8], 0
// 00567fb3  c7460c00000000       mov dword ptr [esi + 0xc], 0
// 00567fba  7409                 je 0x567fc5
// 00567fbc  57                   push edi
// 00567fbd  e8a07c0c00           call 0x62fc62
// 00567fc2  83c404               add esp, 4
// 00567fc5  8bc7                 mov eax, edi
// 00567fc7  5f                   pop edi
// 00567fc8  5e                   pop esi
// 00567fc9  c20400               ret 4

struct T_func_00567f70 {
    void m(int);
};

extern "C" void __cdecl func_00567d60(void*, void*, void*, void*);
extern "C" void __cdecl func_0062fc62(void*);

void T_func_00567f70::m(int a)
{
    char* p = (char*)this;
    *(int*)p = 0x7a9804;
    char* q = p + 4;
    int* r = (int*)(q + 4);
    if (*r != 0) {
        func_00567d60((void*)*r, q, (void*)*(int*)(q + 8), (void*)a);
        func_0062fc62((void*)*(int*)(q + 4));
    }
    *(int*)(q + 4) = 0;
    *(int*)(q + 8) = 0;
    *(int*)(q + 12) = 0;
    if (a & 1) {
        func_0062fc62(p);
    }
}
