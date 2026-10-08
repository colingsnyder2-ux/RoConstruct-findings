// from server: 64% by colin
// roc 2007-08 00562010  unit: RBX::ClearStarterpack  size: 40 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00562010
//
// 00562010  56                   push esi
// 00562011  57                   push edi
// 00562012  8bf9                 mov edi, ecx
// 00562014  8b770c               mov esi, dword ptr [edi + 0xc]
// 00562017  e874c2ffff           call 0x55e290
// 0056201c  8b4f0c               mov ecx, dword ptr [edi + 0xc]
// 0056201f  85c9                 test ecx, ecx
// 00562021  5f                   pop edi
// 00562022  5e                   pop esi
// 00562023  7410                 je 0x562035
// 00562025  e836aff2ff           call 0x48cf60
// 0056202a  85c0                 test eax, eax
// 0056202c  7407                 je 0x562035
// 0056202e  8bc8                 mov ecx, eax
// 00562030  e8fbfbfdff           call 0x541c30
// 00562035  c20400               ret 4

struct ClearStarterpack {
    char pad[0xc];
    void* field_c;
    void method();
};

extern "C" void __stdcall sub_0055e290(void* p);
extern "C" void* __stdcall sub_0048cf60(void* p);
extern "C" void __stdcall sub_00541c30(void* p);

void ClearStarterpack::method()
{
    void* p = field_c;
    sub_0055e290(p);
    void* q = field_c;
    if (q != 0) {
        void* r = sub_0048cf60(q);
        if (r != 0) {
            sub_00541c30(r);
        }
    }
}
