// from server: 98% by colin
// roc 2007-08 005fc300  unit: RBX::RocketTool  size: 57 bytes
// Make this compile to the exact bytes below, then: roc check 2007-08 005fc300
//
// 005fc300  8b442404             mov eax, dword ptr [esp + 4]
// 005fc304  56                   push esi
// 005fc305  50                   push eax
// 005fc306  8bf1                 mov esi, ecx
// 005fc308  e8037afeff           call 0x5e3d10
// 005fc30d  8a4c240c             mov cl, byte ptr [esp + 0xc]
// 005fc311  8b542410             mov edx, dword ptr [esp + 0x10]
// 005fc315  33c0                 xor eax, eax
// 005fc317  c706fc247c00         mov dword ptr [esi], 0x7c24fc
// 005fc31d  c74604e0247c00       mov dword ptr [esi + 4], 0x7c24e0
// 005fc324  894620               mov dword ptr [esi + 0x20], eax
// 005fc327  894624               mov dword ptr [esi + 0x24], eax
// 005fc32a  894630               mov dword ptr [esi + 0x30], eax
// 005fc32d  884e28               mov byte ptr [esi + 0x28], cl
// 005fc330  89562c               mov dword ptr [esi + 0x2c], edx
// 005fc333  8bc6                 mov eax, esi
// 005fc335  5e                   pop esi
// 005fc336  c20c00               ret 0xc

struct RBX_RocketTool {
    void construct(void* a, char b, int c);
};

extern "C" void __stdcall sub_5e3d10(void* a);

void RBX_RocketTool::construct(void* a, char b, int c)
{
    sub_5e3d10(a);
    *(int*)((char*)this + 0) = 0x7c24fc;
    *(int*)((char*)this + 4) = 0x7c24e0;
    *(int*)((char*)this + 0x20) = 0;
    *(int*)((char*)this + 0x24) = 0;
    *(int*)((char*)this + 0x30) = 0;
    *(char*)((char*)this + 0x28) = b;
    *(int*)((char*)this + 0x2c) = c;
}
