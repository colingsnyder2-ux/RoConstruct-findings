// from server: 57% by atomic.potato
// roc 2010-06 0088f010  unit: CXTColorHex::PAUHEXCOLOR_CELL::?$CList size: 49 bytes
//
// 0088f010  8b442404             mov eax, dword ptr [esp + 4]
// 0088f014  56                   push esi
// 0088f015  8bf1                 mov esi, ecx
// 0088f017  83f8ff               cmp eax, -1
// 0088f01a  7421                 je 0x88f03d
// 0088f01c  50                   push eax
// 0088f01d  8d4e74               lea ecx, [esi + 0x74]
// 0088f020  e83b6b0000           call 0x895b60
// 0088f025  8b4008               mov eax, dword ptr [eax + 8]
// 0088f028  85c0                 test eax, eax
// 0088f02a  7411                 je 0x88f03d
// 0088f02c  8b4014               mov eax, dword ptr [eax + 0x14]
// 0088f02f  8b4804               mov ecx, dword ptr [eax + 4]
// 0088f032  8b10                 mov edx, dword ptr [eax]
// 0088f034  51                   push ecx
// 0088f035  52                   push edx
// 0088f036  8bce                 mov ecx, esi
// 0088f038  e8c3fdffff           call 0x88ee00
// 0088f03d  5e                   pop esi
// 0088f03e  c20400               ret 4

extern "C" int __stdcall _00895b60(int, int);
extern "C" int __stdcall _0088ee00(int, int, int, int);

struct S {
    int f(int);
};

int S::f(int a) {
    int eax = a;
    int esi = (int)this;
    if (eax == -1) {
        goto loc_88f03d;
    }
    int ecx = esi;
    ecx += 0x74;
    _00895b60(eax, ecx);
    eax = *(int*)(eax + 8);
    if (!eax) {
        goto loc_88f03d;
    }
    eax = *(int*)(eax + 0x14);
    int ecx2 = *(int*)(eax + 4);
    int edx = *(int*)eax;
    _0088ee00(ecx2, edx, esi, 0);
loc_88f03d:
    esi = 0;
    return 0;
}
