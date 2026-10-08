// from server: 93% by colin
// roc 2007-08 00420370  unit: CRobloxTreeCtrl  size: 51 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 00420370
//
// 00420370  8b442404             mov eax, dword ptr [esp + 4]
// 00420374  56                   push esi
// 00420375  8bf1                 mov esi, ecx
// 00420377  8b4820               mov ecx, dword ptr [eax + 0x20]
// 0042037a  83e1ef               and ecx, 0xffffffef
// 0042037d  83c92d               or ecx, 0x2d
// 00420380  894820               mov dword ptr [eax + 0x20], ecx
// 00420383  50                   push eax
// 00420384  8bce                 mov ecx, esi
// 00420386  e867f92000           call 0x62fcf2
// 0042038b  85c0                 test eax, eax
// 0042038d  7504                 jne 0x420393
// 0042038f  5e                   pop esi
// 00420390  c20400               ret 4
// 00420393  c6869000000000       mov byte ptr [esi + 0x90], 0
// 0042039a  b801000000           mov eax, 1
// 0042039f  5e                   pop esi
// 004203a0  c20400               ret 4

struct CRobloxTreeCtrl {
    int sub_420370(unsigned int* param);
    char pad[0x90];
};

extern "C" int __stdcall sub_62fcf2(void*, unsigned int*);

int CRobloxTreeCtrl::sub_420370(unsigned int* param)
{
    param[8] = (param[8] & 0xffffffef) | 0x2d;
    if (sub_62fcf2(this, param) == 0)
        return 0;
    *(char*)((char*)this + 0x90) = 0;
    return 1;
}
