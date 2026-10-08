// from server: 100% by colin
// roc 2007-08 0062da40  unit: RBX::Freefall  size: 32 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0062da40
//
// 0062da40  8b442404             mov eax, dword ptr [esp + 4]
// 0062da44  56                   push esi
// 0062da45  50                   push eax
// 0062da46  8bf1                 mov esi, ecx
// 0062da48  e863feffff           call 0x62d8b0
// 0062da4d  c706404d7c00         mov dword ptr [esi], 0x7c4d40
// 0062da53  c74608384d7c00       mov dword ptr [esi + 8], 0x7c4d38
// 0062da5a  8bc6                 mov eax, esi
// 0062da5c  5e                   pop esi
// 0062da5d  c20400               ret 4

struct Freefall {
    Freefall(int);
};

extern void __stdcall G1_func_0062d8b0(int);

Freefall::Freefall(int arg)
{
    G1_func_0062d8b0(arg);
    *(int*)this = 0x7c4d40;
    *(int*)((char*)this + 8) = 0x7c4d38;
}
