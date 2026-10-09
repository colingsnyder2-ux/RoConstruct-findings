// from server: 63% by colin
// roc 2007-08 00581aa0  unit: RBX::Accoutrement  size: 64 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00581aa0
//
// 00581aa0  56                   push esi
// 00581aa1  8b742408             mov esi, dword ptr [esp + 8]
// 00581aa5  57                   push edi
// 00581aa6  56                   push esi
// 00581aa7  e874baffff           call 0x57d520
// 00581aac  8bf8                 mov edi, eax
// 00581aae  83c404               add esp, 4
// 00581ab1  85ff                 test edi, edi
// 00581ab3  7428                 je 0x581add
// 00581ab5  8bce                 mov ecx, esi
// 00581ab7  e854fdffff           call 0x581810
// 00581abc  85c0                 test eax, eax
// 00581abe  741d                 je 0x581add
// 00581ac0  53                   push ebx
// 00581ac1  8b5c2414             mov ebx, dword ptr [esp + 0x14]
// 00581ac5  3bc3                 cmp eax, ebx
// 00581ac7  7408                 je 0x581ad1
// 00581ac9  57                   push edi
// 00581aca  8bc8                 mov ecx, eax
// 00581acc  e85ffbfbff           call 0x541630
// 00581ad1  8bce                 mov ecx, esi
// 00581ad3  e838fdffff           call 0x581810
// 00581ad8  85c0                 test eax, eax
// 00581ada  75e9                 jne 0x581ac5
// 00581adc  5b                   pop ebx
// 00581add  5f                   pop edi
// 00581ade  5e                   pop esi
// 00581adf  c3                   ret 

struct Accoutrement {
    void* getBackendAccoutrementState();
    void setBackendAccoutrementState(void*);
};

extern "C" void* __cdecl func_0057d520(void*);
extern "C" void __cdecl func_00541630(void*, void*);

void func_00581aa0(void* a1, void* a2)
{
    void* p = func_0057d520(a1);
    if (p) {
        Accoutrement* acc = (Accoutrement*)a1;
        void* s = acc->getBackendAccoutrementState();
        if (s) {
            while (s != a2) {
                func_00541630(s, p);
                s = acc->getBackendAccoutrementState();
                if (!s)
                    break;
            }
        }
    }
}
