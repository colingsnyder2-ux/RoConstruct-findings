// from server: 100% by colin
// roc 2007-08 0067c5b0  unit: CXTPControls  size: 39 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 0067c5b0
//
// 0067c5b0  8b54240c             mov edx, dword ptr [esp + 0xc]
// 0067c5b4  56                   push esi
// 0067c5b5  8bf1                 mov esi, ecx
// 0067c5b7  8b4c2408             mov ecx, dword ptr [esp + 8]
// 0067c5bb  8b01                 mov eax, dword ptr [ecx]
// 0067c5bd  8b803c010000         mov eax, dword ptr [eax + 0x13c]
// 0067c5c3  52                   push edx
// 0067c5c4  ffd0                 call eax
// 0067c5c6  8b4c240c             mov ecx, dword ptr [esp + 0xc]
// 0067c5ca  51                   push ecx
// 0067c5cb  50                   push eax
// 0067c5cc  8bce                 mov ecx, esi
// 0067c5ce  e88dffffff           call 0x67c560
// 0067c5d3  5e                   pop esi
// 0067c5d4  c20c00               ret 0xc

struct CXTPControls
{
    int sub_0067C560(int, int);
    int sub_0067C5B0(int, int, int);
};

int CXTPControls::sub_0067C5B0(int a1, int a2, int a3)
{
    int v = (*(int (__thiscall **)(int, int))(*(int *)a1 + 0x13c))(a1, a3);
    return sub_0067C560(v, a2);
}
