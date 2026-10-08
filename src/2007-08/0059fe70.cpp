// from server: 76% by colin
// roc 2007-08 0059fe70  unit: RBX::VSpawnLocation::?$FactoryProduct  size: 61 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0059fe70
//
// 0059fe70  56                   push esi
// 0059fe71  8bf1                 mov esi, ecx
// 0059fe73  e878feffff           call 0x59fcf0
// 0059fe78  f644240801           test byte ptr [esp + 8], 1
// 0059fe7d  8b8698020000         mov eax, dword ptr [esi + 0x298]
// 0059fe83  c78694020000ac4c7a00 mov dword ptr [esi + 0x294], 0x7a4cac
// 0059fe8d  8b4804               mov ecx, dword ptr [eax + 4]
// 0059fe90  c7843198020000a44c7a00 mov dword ptr [ecx + esi + 0x298], 0x7a4ca4
// 0059fe9b  740a                 je 0x59fea7
// 0059fe9d  56                   push esi
// 0059fe9e  ff15c4e67700         call dword ptr [0x77e6c4]
// 0059fea4  83c404               add esp, 4
// 0059fea7  8bc6                 mov eax, esi
// 0059fea9  5e                   pop esi
// 0059feaa  c20400               ret 4

extern "C" void __stdcall free(void*);

struct RBX_VSpawnLocation_FactoryProduct {
    void destroy(char flag);
};

void RBX_VSpawnLocation_FactoryProduct::destroy(char flag) {
    (*(void (__thiscall*)(void*))0x59fcf0)(this);
    int* p = *(int**)((char*)this + 0x298);
    *(int*)((char*)this + 0x294) = 0x7a4cac;
    int* q = *(int**)((char*)p + 4);
    *(int*)((char*)q + (int)this + 0x298) = 0x7a4ca4;
    if (flag & 1) {
        free(this);
    }
}
