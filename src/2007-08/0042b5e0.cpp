// from server: 81% by colin
// roc 2007-08 0042b5e0  unit: VCLuaFunction::?$CComObjectNoLock  size: 62 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0042b5e0
//
// 0042b5e0  56                   push esi
// 0042b5e1  8b742408             mov esi, dword ptr [esp + 8]
// 0042b5e5  834608ff             add dword ptr [esi + 8], -1
// 0042b5e9  57                   push edi
// 0042b5ea  8b7e08               mov edi, dword ptr [esi + 8]
// 0042b5ed  7528                 jne 0x42b617
// 0042b5ef  85f6                 test esi, esi
// 0042b5f1  7424                 je 0x42b617
// 0042b5f3  8bce                 mov ecx, esi
// 0042b5f5  c70670a27800         mov dword ptr [esi], 0x78a270
// 0042b5fb  c7460448a27800       mov dword ptr [esi + 4], 0x78a248
// 0042b602  c74608010000c0       mov dword ptr [esi + 8], 0xc0000001
// 0042b609  e88287feff           call 0x413d90
// 0042b60e  56                   push esi
// 0042b60f  e84e462000           call 0x62fc62
// 0042b614  83c404               add esp, 4
// 0042b617  8bc7                 mov eax, edi
// 0042b619  5f                   pop edi
// 0042b61a  5e                   pop esi
// 0042b61b  c20400               ret 4

struct VCLuaFunction {
    int f(int);
};

extern "C" void __stdcall func_00413d90();
extern "C" void __cdecl func_0062fc62(void*);

int VCLuaFunction::f(int arg)
{
    int* p = (int*)arg;
    int old = p[2];
    p[2] = old - 1;
    int result = p[2];
    if (result == 0 && p != 0) {
        p[0] = 0x78a270;
        p[1] = 0x78a248;
        p[2] = (int)0xc0000001;
        func_00413d90();
        func_0062fc62(p);
    }
    return result;
}
