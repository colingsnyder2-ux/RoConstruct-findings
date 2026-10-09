// from server: 81% by colin
// roc 2007-08 005ef790  unit: RBX::VSoundService::?$BoundPropGetSet  size: 78 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005ef790
//
// 005ef790  8b442404             mov eax, dword ptr [esp + 4]
// 005ef794  85c0                 test eax, eax
// 005ef796  56                   push esi
// 005ef797  57                   push edi
// 005ef798  8bf1                 mov esi, ecx
// 005ef79a  7405                 je 0x5ef7a1
// 005ef79c  8d78fc               lea edi, [eax - 4]
// 005ef79f  eb02                 jmp 0x5ef7a3
// 005ef7a1  33ff                 xor edi, edi
// 005ef7a3  8b4608               mov eax, dword ptr [esi + 8]
// 005ef7a6  8b542410             mov edx, dword ptr [esp + 0x10]
// 005ef7aa  d902                 fld dword ptr [edx]
// 005ef7ac  8d0c38               lea ecx, [eax + edi]
// 005ef7af  d819                 fcomp dword ptr [ecx]
// 005ef7b1  dfe0                 fnstsw ax
// 005ef7b3  f6c444               test ah, 0x44
// 005ef7b6  7b21                 jnp 0x5ef7d9
// 005ef7b8  d902                 fld dword ptr [edx]
// 005ef7ba  d919                 fstp dword ptr [ecx]
// 005ef7bc  8b4610               mov eax, dword ptr [esi + 0x10]
// 005ef7bf  85c0                 test eax, eax
// 005ef7c1  740b                 je 0x5ef7ce
// 005ef7c3  8b4e04               mov ecx, dword ptr [esi + 4]
// 005ef7c6  51                   push ecx
// 005ef7c7  8b4e14               mov ecx, dword ptr [esi + 0x14]
// 005ef7ca  03cf                 add ecx, edi
// 005ef7cc  ffd0                 call eax
// 005ef7ce  8b5604               mov edx, dword ptr [esi + 4]
// 005ef7d1  52                   push edx
// 005ef7d2  8bcf                 mov ecx, edi
// 005ef7d4  e8374fe5ff           call 0x444710
// 005ef7d9  5f                   pop edi
// 005ef7da  5e                   pop esi
// 005ef7db  c20800               ret 8

struct BoundPropGetSet {
    void setValue(void* object, const float* value);
};

extern "C" void __fastcall sub_444710(int, int);

void BoundPropGetSet::setValue(void* object, const float* value) {
    char* base = (char*)object;
    if (object != 0) {
        base = (char*)object - 4;
    } else {
        base = 0;
    }
    float* member = (float*)(*(int*)((char*)this + 8) + (int)base);
    if (*value != *member) {
        *member = *value;
        void (__fastcall *changed)(int, int) = *(void (__fastcall **)(int, int))((char*)this + 0x10);
        if (changed != 0) {
            int a = *(int*)((char*)this + 4);
            int b = *(int*)((char*)this + 0x14) + (int)base;
            changed(a, b);
        }
        int c = *(int*)((char*)this + 4);
        sub_444710((int)base, c);
    }
}
